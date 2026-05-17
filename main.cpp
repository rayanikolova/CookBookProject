#include <iostream>
#include <vector>

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
class AbstractRecipe {
protected:
    string title;

public:
    virtual void showRecipe() = 0;
};

class Recipe : public AbstractRecipe {
private:
    vector<Ingredient> ingredients;

public:
    Recipe(string t) {
        title = t;
    }

    void addIngredient(Ingredient ingredient) {
        ingredients.push_back(ingredient);
    }

    void showRecipe() override {
        cout << "\nRecipe: " << title << endl;

        for (auto& ingredient : ingredients) {
            cout << "- " << ingredient.getName() << endl;
        }
    }

    string getTitle() {
        return title;
    }
};
int main() {
    cout << "Cookbook Project";
    return 0;
}