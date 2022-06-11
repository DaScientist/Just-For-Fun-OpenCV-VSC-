#include<opencv2/imgcodecs.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/highgui.hpp>
#include<iostream>

using namespace cv;
using namespace std;

void main() {
	cv::VideoCapture camera(0);
	Mat img;
	while (1)
	{
		camera.read(img);
		imshow(
			"Front Camera",
			img
		);
		waitKey(1);
	}
}