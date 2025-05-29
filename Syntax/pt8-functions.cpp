// pretty much the same as python

#include <iostream>

using namespace std;

void greet(string name = "World") {
    cout << "Hello," << name << "!" << endl;
}

int main() {
    greet();

    return 0;
}