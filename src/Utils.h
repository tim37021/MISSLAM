#ifndef _MISSLAM_UTILS_H_
#define _MISSLAM_UTILS_H_

#include <opencv2/opencv.hpp>
#include <vector>
#include <string>
#include <cstdint>
#include "Config.h"

namespace misslam {
namespace utils {
    /*
    * Convert integer to string
    * @param [in] i Total number of string, if number of digit is smaller than i, it will fill by '0'
    * @param [in] Fill number
    * @return zfilled string
    */
    std::string Zfill(u32 i, u32 number);
    /*
    * Match two ORB descriptor
    * @param [in] dp1 Query descriptor
    * @param [in] dp2 Train descriptor
    * @return matchings
    */
    std::vector<cv::DMatch> ORBMatch(cv::Mat dp1, cv::Mat dp2);
    /*
    * Construct 4x4 extrinsic matrix from [R|T]
    * @param [in] R Rotation
    * @param [in] T Translate
    * @return extrinsic matrix
    */
    cv::Mat ExtrinsicMatrixByRT(cv::Mat R, cv::Mat T);
    cv::Mat CrossMatrix(float a0, float a1, float a2);
}
}

#endif