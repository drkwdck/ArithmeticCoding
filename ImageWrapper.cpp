#include "ImageWrapper.h"
#include <fstream>
#include "lib/global.hh"

ImageWrapper::ImageWrapper(const char* file_path)
{
    unsigned char buf[8];
    std::ifstream in(file_path);
    in.seekg(16);
    in.read(reinterpret_cast<char*>(&buf), 8);

    auto width = (buf[0] << 24) + (buf[1] << 16) + (buf[2] << 8) + (buf[3] << 0);
    auto height = (buf[4] << 24) + (buf[5] << 16) + (buf[6] << 8) + (buf[7] << 0);
}

ImageWrapper::~ImageWrapper()
{
}