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

    // variable follow the follwing format
    // type variable_name = value;
    // for example:
    int num = 5;
    double pi = 3.14;
    char myLetter = 'A';
    string name = "Alice";
    bool isTrue = true;

    // simmilar to python we can declare multiple variables at once
    int a = 1, b = 2, c = 3;

    // const is a thing if you want it
    const double piValue = 3.14159;
    const int minutesPerHour = 60;

    

    // ends main and returns 0 to the os, indicating that the program ran successfully
    return 0;
}