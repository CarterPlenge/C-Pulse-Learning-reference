// This is how we write comments in C++:

// This is a header file. This is how we bring in functionality from other c++ files
// If you come from python this is similar to import
#include <iostream> // iostream is  a standard input/output streams library

// This allows us to use names for objects and variables from the standard libary
// without needing to prefix them with std::
// without this, we would need to write std::cout instead of cout
using namespace std;

// This is the main function, This is what runs when we execute the program
int main() {

    // This prints "Hello World!" to the console
    // ITS C-OUT NOT COUNT, stop miss reading it
    cout << "Hello World!";

    // ends main and returns 0 to the os, indicating that the program ran successfully
    return 0;
}