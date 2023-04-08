#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"

using namespace cv;

int main(int argc, char **argv)
{
  // create a gui window:
  namedWindow("Output", 1);
  // initialize a 120X350 matrix of black pixels:
  Mat output = Mat::zeros(120, 350, CV_8UC3);
  // write text on the matrix:
  cv::putText(output, "Hello World", cv::Point(10, output.rows - 18),
              cv::FONT_HERSHEY_SIMPLEX, 0.4, cv::Scalar(200, 200, 250), 1, 8);
  // display the image:
  imshow("Output", output);
  // wait for the user to press any key:
  waitKey(0);
  return 0;
}