#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // Read input image
    cv::Mat inputImage = cv::imread("img/1.jpg");

    if (inputImage.empty()) {
        std::cerr << "Error loading input image" << std::endl;
        return -1;
    }

    // Perform some image processing (e.g., convert to grayscale)
    cv::Mat processedImage;
    cv::cvtColor(inputImage, processedImage, cv::COLOR_BGR2GRAY);

    // Save the processed image
    cv::imwrite("img/2.jpg", processedImage);

    std::cout << "Image processing complete." << std::endl;

    return 0;
}
