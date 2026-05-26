#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;

/*
    -> when you have todeal with tree like structure, you can use composite design pattern

    -> tree have two types of nodes:
        1. leaf node: which does not have any child
        2. composite node: which have one or more child

    -> this pattern treat both leaf and composite node in same way, so we can use same      interface for both of them.
*/


// Component interface
class IUIComponent{
    public:
        virtual void draw() = 0;
        virtual void add(IUIComponent* component) = 0;
        virtual void remove(IUIComponent* component) = 0;
};

// Leaf node
class Button : public IUIComponent{
    public:
        void draw() override {
            cout << "Drawing Button" << endl;
        }
        void add(IUIComponent* component) override {
            cout << "Cannot add component to button" << endl;
        }
        void remove(IUIComponent* component) override {
            cout << "Cannot remove component from button" << endl;
        }
};

// Composite node
class Menu : public IUIComponent{
    private:
        vector<IUIComponent*> components;
    public:
        void draw() override {
            cout << "Drawing Menu" << endl;
            for(auto component : components){
                component->draw();
            }
        }

        void add(IUIComponent* component) override {
            components.push_back(component);
        }
        
        void remove(IUIComponent* component) override {
            components.erase(
                std::remove(components.begin(), components.end(), component),
                components.end()
            );
        }
};

// Client code
int main(){

    IUIComponent* uicomp = new Menu();

    uicomp->add(new Button());
    uicomp->add(new Button());
    uicomp->add(new Button());

    uicomp->draw();

    uicomp->remove(new Button());

    return 0;
}