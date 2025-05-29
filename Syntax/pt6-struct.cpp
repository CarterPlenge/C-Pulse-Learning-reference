#include <iostream>

using namespace std;

struct character {
    string name;
    int age;
    string role;
    double health;
    bool isHero;

    // You can also define member functions inside a struct
    void attack() {
        cout << name << " attacks!" << endl;
    }  
}

main() {
    character Alice;
    Alice.name = "Alice";
    Alice.age = 25;
    Alice.role = "Wizard";
    Alice.health = 50.0;
    Alice.isHero = true;

    cout << "Character Name: " << Alice.name << endl;

    character Bob {"Bob", 30, "Warrior", 100.0, false};
    cout << "Character Name: " << Bob.name << endl;

    return 0;
}