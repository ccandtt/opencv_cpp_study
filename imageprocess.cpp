#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;


//image:
//void main() {
//	string path = "Resources/test.png";
//	Mat img = imread(path);  //根据路径读取图片，并且为Mat object
//	imshow("Test", img);
//	waitKey(0);  //无需倍速
//}

//video
//void main() {
//	string path = "Resources/test_video.mp4";
//	VideoCapture cap(path);  //cap变量是VideoCapture object，需要实例化path
//	Mat img;  //declare 图片类型
//	while(true) {
//		cap.read(img);
//		imshow("xxflame", img);
//		waitKey(50);
//	}
//}

//Webcam
void main() {
	VideoCapture cap(0);  //调用Webcam网络摄像头
	Mat img;
	while (true) {
		cap.read(img);
		imshow("now-the-sorroundings", img);
		waitKey(2);
	}
}

