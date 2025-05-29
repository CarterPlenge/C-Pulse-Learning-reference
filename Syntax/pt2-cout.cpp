#include <iostream>
using namespace std;

int main() {
    cout << "Hello world!";
    // cout is a bit differrent from print in python
    // cout is built on a stream
    // this means we can use as many << as we want to print multiple things
    // cout writes to a buffer first using endl flushes that buffer and inserts a newline
    cout << endl;

    // all of the following lines are equivalent
    cout << "Hello World!" << endl;
    cout << "Hello" << " World!" << endl;
    cout << "Hello" << " " << "World!" << endl;

    // we can also do math similar to pythons print function
    cout << "2 + 2 = " << 2 + 2 << endl;

    // you can also use "\n" to insert a newline
    return 0;
}