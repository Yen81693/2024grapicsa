///File-New �ť��ɮ� , �� week05-1_opencv.cpp
#include <opencv/highgui.h>
int main()
{///Intel performanse library

    IplImage * img = cvLoadImage("c:/image.jpg");
    cvShowImage("week05", img);
    cvWaitKey(0);

}
