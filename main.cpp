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
class MealPlan {
private:
    vector<Recipe> recipes;

public:
    void addRecipe(Recipe recipe) {
        recipes.push_back(recipe);
    }

    void showMealPlan() {
        cout << "\nMeal Plan:" << endl;

        for (auto& recipe : recipes) {
            cout << "- " << recipe.getTitle() << endl;
        }
    }
};
int main() {

    Recipe pasta("Pasta");

    pasta.addIngredient(Ingredient("Pasta"));
    pasta.addIngredient(Ingredient("Cheese"));

    pasta.showRecipe();

    MealPlan weeklyPlan;
    weeklyPlan.addRecipe(pasta);

    weeklyPlan.showMealPlan();

    return 0;
}