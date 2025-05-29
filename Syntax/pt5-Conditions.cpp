// pretty simple nothing fancy

#include <iostream>

using namespace std;

main() {
    bool condition = true;
    if (condition) {
        cout << "Condition is true" << endl;
    } else if (!condition) {
        cout << "Condition is false" << endl;
    } else {
        cout << "This will never be printed" << endl;
    }

    // shorthand for if-else
    condition ? cout << "Condition is true" << endl : cout << "Condition is false" << endl;

    // switch statement
    int value = 2;
    switch (value) {
        case 1:
            cout << "Value is 1" << endl;
            break;
        case 2:
            cout << "Value is 2" << endl;
            break;
        default:
            cout << "Value is something else" << endl;
            break;
    }

    // loops
    for (int i = 0; i < 5; i++) {
        cout << "For loop iteration: " << i << endl;
    }

    // we can also do for-each loops
    int arr[] = {1, 2, 3, 4, 5};
    for (int num : arr) {
        cout << "For-each loop, current number: " << num << endl;
    }

    while (condition) {
        cout << "While loop, condition is true" << endl;
        break; // to avoid infinite loop
    }

    // we also have do-while loops
    do {
        cout << "Do-while loop, condition is true" << endl;
        break; // to avoid infinite loop
    } while (condition);

    
}