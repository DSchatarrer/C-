#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, char** argv) {
    cv::Mat img = cv::imread("C:\\Users\\Admin.IA\\Desktop\\PROJECTS_CPP\\Epis\\img\\prueba.jpeg");
    if (!img.data){
        std::cout<<"ALGUN ERROR HUBO";
        return -1;
    }
    cv::namedWindow("IMAGE", cv::WINDOW_AUTOSIZE);
    cv::imshow("IMAGE", img);
    cv::waitKey(0);
    return 0;
}