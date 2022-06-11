#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main() {

	cout << "Hello World" << endl;

	string imgPath = "./images/hd_wallpaper_2319.jpg";
	Mat img = imread(imgPath);
	Mat imgGrey, imgBlur;
	cvtColor(img, imgGrey, cv::COLOR_BGR2GRAY);
	GaussianBlur(img, imgBlur, Size(7,7), 5, 0);
	imshow("Image", img);
	imshow("Image Grey", imgGrey);
	imshow("Image Blur", imgBlur);

	waitKey(0);
	return 0;
}