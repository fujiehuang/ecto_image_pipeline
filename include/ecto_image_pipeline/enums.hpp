#pragma once

namespace image_pipeline
{
  enum InterpolationMode
  {
    CV_INTER_NN=cv::INTER_NEAREST, CV_INTER_LINEAR=cv::INTER_LINEAR, 
    CV_INTER_CUBIC=cv::INTER_CUBIC, 
    CV_INTER_AREA=cv::INTER_AREA
  };

}
