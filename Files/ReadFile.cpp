#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::fstream myFile;
    // Open file with node
    myFile.open("data.txt", std::ios::in);
    if (myFile.is_open()) {
        std::string line;
        // While not EOF
        while (std::getline(myFile, line, '1')) {
            std::cout << line << "\n-----------\n";
        }
        myFile.close();
    } else {
        std::cout << "Unable to open file";
    }
}