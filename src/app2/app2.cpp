// Include OpenCV's core functionality and high-level GUI
#include <opencv2/opencv.hpp>
// Include the input/output stream library for standard input/output operations
#include <iostream>

// Entry point of the program
int main() {
    // Read an image from the disk into a matrix structure
    // Replace "img/1.jpg" with the path to your input image
    cv::Mat inputImage = cv::imread("img/1.jpg");

    // Check if the image has been loaded properly
    if (inputImage.empty()) {
        // Print an error message to the standard error stream if the image is not loaded
        std::cerr << "Error loading input image" << std::endl;
        // Return -1 to indicate that the program didn't complete successfully
        return -1;
    }

    // Declare a matrix to store the processed image
    cv::Mat processedImage;
    // Convert the input image from BGR color space to grayscale
    // The conversion code cv::COLOR_BGR2GRAY is used to specify the type of conversion
    cv::cvtColor(inputImage, processedImage, cv::COLOR_BGR2GRAY);

    // Save the processed (grayscale) image to the disk
    // Replace "img/2.jpg" with the desired output path
    cv::imwrite("img/2.jpg", processedImage);

    // Print a message to the standard output stream indicating the completion of image processing
    std::cout << "Image processing complete." << std::endl;

    // Return 0 to indicate that the program completed successfully
    return 0;
}

