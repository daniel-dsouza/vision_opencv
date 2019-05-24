#include "ros/ros.h"
#include "opencv2/opencv.hpp"
#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/cudaobjdetect.hpp"
#include "opencv2/cudaimgproc.hpp"
#include "opencv2/cudawarping.hpp"

using namespace cv::cuda;

int main (int argc, char *argv[])
{
    ros::init(argc, argv, "cv_test");
    ros::NodeHandle n("~");

    if (getCudaEnabledDeviceCount() == 0)
    {
        ROS_ERROR("No GPU found!");
        return 0;
    } 
    else 
    {
        printCudaDeviceInfo(getDevice());
    }

    return 0;
}