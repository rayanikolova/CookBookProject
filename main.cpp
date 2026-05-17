#include <iostream>

using namespace std;

class Ingredient {
private:
    string name;

public:
    Ingredient(string n) {
        name = n;
    }

    string getName() {
        return name;
    }
};

int main() {
    cout << "Cookbook Project";
    return 0;
}