#include <iostream>

using namespace std;

class character {
    // public members can be accessed from outside the class
    public:
        string name;
        int age;

        void setRole(string r) {
            role = r;
        }

    // private members can only be accessed from within the class. ie we have to use a public methods to access them
    private:
        string role;
    
    // protected are pretty much the same but can also be assessed by derived classes
    protected:
        double health = 100.0;



};

int main() {
    character Alice { "Alice", 25};
    Alice.setRole("Wizard");

    return 0;
}