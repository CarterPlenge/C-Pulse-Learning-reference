#include <iostream>

using namespace std;

main() {
    // references
    string food = "Pizza";
    string &meal = food; // mean is now a reference to food

    food = "Burger"; // changing food will change meal
    cout << "Food: " << food << endl;   // Output: Food: Burger
    cout << "Meal: " << meal << endl;   // Output: Meal: Burger

    // the & operator is used to create a reference but can also be used to get the memory address of the variable
    cout << "Address of food: " << &food << endl;   // Output: Address of food: 0x7ffee4b8c9a8 (example address)
    cout << "Address of meal: " << &meal << endl;   // Output: Address of meal: 0x7ffee4b8c9a8 (same address as food) 

    // Pointers store the memory address as its value
    string *ptr = &food; // ptr is a pointer to food
    cout << "Pointer to food: " << ptr << endl; // Output: Pointer to food: 0x7ffee4b8c9a8 (example address)

    // Dereferencing a pointer gives you the value at that address
    cout << "Value at pointer: " << *ptr << endl;

    // you can also change the value of food using the pointer
    *ptr = "Pasta";                                         // changing the value at the address pointed to by ptr
    cout << "Food after pointer change: " << food << endl;  // Output: Food after pointer change: Pasta

    // dynamic memory allocation
    string *dynamicFood = new string("Sushi");          // dynamically allocate memory for a string
    cout << "Dynamic Food: " << *dynamicFood << endl;   // Output: Dynamic Food: Sushi
    delete dynamicFood;                                 // free the dynamically allocated memory
    dynamicFood = nullptr;                              // set pointer to nullptr after deletion to avoid dangling pointer

    // when working with arrays use new[] and delete[]
    int *dynamicArray = new int[5];                         // dynamically allocate an array of 5 integers
    for (int i = 0; i < 5; ++i) {
        dynamicArray[i] = i * 10;                       // initialize the array
    }
    cout << "Dynamic Array: ";
    for (int i = 0; i < 5; ++i) {
        cout << dynamicArray[i] << " ";                 // Output: Dynamic Array: 0 10 20 30 40
    }
    cout << endl;
    delete[] dynamicArray;                              // free the dynamically allocated array
    dynamicArray = nullptr;                             // set pointer to nullptr after deletion to avoid dangling pointer
}