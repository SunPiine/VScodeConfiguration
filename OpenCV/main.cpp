#include<opencv2\opencv.hpp>
#include<opencv2\highgui.hpp>
using namespace cv;
int main()
{
    Mat img = imread("C:/Users/fyczh/Desktop/test.jpg");
    Size dsize = Size(round(0.7 * img.cols), round(0.7 * img.rows)); //Size型 改变尺寸
    resize(img, img, dsize, 0, 0, INTER_LINEAR);                     //使用双线性插值缩放一下尺寸
    cv::imshow("test", img);
    cv::waitKey();
    return 0;
}