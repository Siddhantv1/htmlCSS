#include <iostream>
#include <fstream>
#include <random>
void generateRandomImage(const std::string& filename, int width, int height) {
    std::ofstream imageFile(filename, std::ios::binary);

    if (!imageFile) {
        std::cerr << "Failed to create image file: " << filename << std::endl;
        return;
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 255);

    imageFile << "P6\n" << width << " " << height << "\n255\n";

    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            unsigned char r = dis(gen);
            unsigned char g = dis(gen);
            unsigned char b = dis(gen);

            imageFile << r << g << b;
        }
    }

    imageFile.close();
}
int main() {
    generateRandomImage("random_image.ppm", 800, 600);
    std::cout << "Random image generated successfully." << std::endl;

    return 0;
}
