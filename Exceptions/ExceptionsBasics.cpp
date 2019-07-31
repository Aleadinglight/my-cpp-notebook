#include <iostream>

using namespace std;

void mightGoWrong() {
    bool error1 = false;
    bool error2 = true;

    if (error1) {
        throw "Something went wrong.";
    }

    // This one is throwing an object
    if (error2) {
        throw string("Something went wrong.");
    }
}

void useMightGoWrong() {
    mightGoWrong();
}

int main() {
    try {
        mightGoWrong();
    } catch (int e) {
        cout << "Error code: " << e << endl;
    } catch (char const *e) {
        cout << "Error message: " << e << endl;
    }
    // Catch object by reference
    catch (string &e) {
        cout << "Error message: " << e << endl;
    }

    return 0;
}