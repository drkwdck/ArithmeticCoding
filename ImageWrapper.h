#pragma once
#include "lib/global.hh"
class ImageWrapper
{
public:
	ImageWrapper(const char* file_path);
	~ImageWrapper();

	int width;
	int height;
	Real* value;
};

