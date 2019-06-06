#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream outFile;

    string outputFileName = "output.out";

    outFile.open(outputFileName, ios::out);

    if (outFile.is_open()) {
        outFile << "Hello" << endl;
        outFile << 123 << endl;
        outFile.close();
    }
    else {
        cout << "Cannot create file: " << outputFileName << endl;
    }

    return 0;
}