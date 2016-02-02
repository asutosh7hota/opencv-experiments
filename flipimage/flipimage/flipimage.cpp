// flipimage.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<opencv\cxcore.h>
#include<opencv2\highgui\highgui.hpp>  //inlcude highguimodule to display.
#include<opencv2\core\core.hpp>

int main()
{
	cv::Mat image = cv::imread("C:/Users/asutosh/Desktop/projects/mohit.jpg"); //full path of the image, make sure you use forward slashes !!windows at times is weird.
	cv::namedWindow("my image");
	cv::imshow("my image", image);
	cv::waitKey(5000); //wait for x miliseconds as per you wish.
	cv::Mat result;
	cv::flip(image, result, 1);
	cv::namedWindow("output is flipped");
	cv::imshow("output image", result);
	cv::waitKey(5000);

	return 0;
}
