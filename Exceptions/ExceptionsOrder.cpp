#include <exception>
#include <iostream>

using namespace std;

void goesWrong() {
    // Change these values to see the important of catching exception in order. 
    bool error1Detected = true;
    bool error2Detected = false;

    if (error1Detected) {
        throw bad_alloc();
    }

    if (error2Detected) {
        throw exception();
    }
}

int main() {
    try {
        goesWrong();
    } catch (bad_alloc &e) {
        cout << "sub-class exception: " << e.what() << endl;
    } catch (exception &e) {
        cout << "parent exception:" << e.what() << endl;
    }
    return 0;
}