#include <iostream>

using namespace std;

class CanGoWrong {
public:
    CanGoWrong() {
        char *pMemory = new char[9999999999999999];
        delete[] pMemory;
    }
};

int main() {
    try {
        CanGoWrong wrong;
    } catch (bad_alloc &e) {
        cout << "Caught exception: " << e.what() << endl;
    }

    cout << "Program is running till the end." << endl;
    return 0;
}