// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<opencv\cxcore.h>
#include<opencv2\highgui\highgui.hpp>  //inlcude highguimodule to display.
#include<opencv2\core\core.hpp>



void colorReduce(cv::Mat &image, int div = 64) {
	int n1 = image.rows;
	int nc = image.cols*image.channels();

	for (int j = 0; j < n1; j++) {
		uchar* data = image.ptr<uchar>(j);
		for (int i = 0; i < nc; i++) {
			data[i] = data[i] / div*div + div / 2;
		}
	}
}


int main(){

	cv::Mat image = cv::imread("C:/Users/asutosh/Desktop/projects/mohit.jpg"); //full path of the image, make sure you use forward slashes !!windows at times is weird.
	cv::namedWindow("my image");
	cv::imshow("my image", image);
	cv::waitKey(5000); //wait for x miliseconds as per you wish.
	colorReduce(image);
	cv::namedWindow("reduced");
	cv::imshow("reduced", image);
	cv::waitKey(5000); //wait for x miliseconds as per you wish.


	return 0;
}

