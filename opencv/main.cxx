#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
  cout << "OpenCV version: " << CV_VERSION << endl;

  Mat img = imread("0.jpg");

  if (img.empty())
  {
    cout << "Error" << endl;
    return -1;
  }

  namedWindow("pic", WINDOW_AUTOSIZE);
  imshow("pic", img);
  waitKey();
  return 0;
}