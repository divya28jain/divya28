#include <iostream>
#include <fstream>
#include <vector>
#include <string>

std::vector<std::string> readFile(const std::string& filename) {
    std::vector<std::string> lines;
    std::ifstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return lines;
    }

    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }

    file.close();
    return lines;
}

int main() {
    std::string filename = "example.txt"; // Change this to your file's name
    std::vector<std::string> lines = readFile(filename);

    if (!lines.empty()) {
        std::cout << "Lines read from the file:" << std::endl;
        for (const auto& line : lines) {
            std::cout << line << std::endl;
        }
    }

    return 0;
}

