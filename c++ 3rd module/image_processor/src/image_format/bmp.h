#pragma once

#include "format.h"
#include "../image/image.h"
#include "../io/reader.h"

namespace image_processor::image_format {

class BMP : public IImageFormat {
public:
    image::Image Load(std::string_view filename) override;
    void Save(const image::Image& image, std::string_view filename) override;
};

}  // namespace image_processor::image_format
