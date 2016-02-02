// insert.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<opencv\cxcore.h>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\core\core.hpp>




int main()
{
	cv::Mat image = cv::imread("C:/Users/asutosh/Desktop/projects/mohit.jpg");
	cv::namedWindow("my image");
	cv::imshow("my image", image);
	cv::waitKey(5000);

    return 0;
}

