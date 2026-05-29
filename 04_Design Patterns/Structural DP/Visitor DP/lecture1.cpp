#include <iostream>
#include <list>
using namespace std;

/*
    -> this pattern helps to resolve problem of adding new operations to existing class hierarchy without modifying the classes.

    -> it is a way of separating an algorithm from an object structure on which it operates. 

    -> I helps to solve double dispatch problem.
*/

// 1. Forward declarations needed so ICarVisitor knows these classes exist
class Scorpio;
class Alto;

class ICarVisitor {
public:
    virtual void visit(Scorpio* scorpio) = 0;
    virtual void visit(Alto* alto) = 0;
    virtual ~ICarVisitor() = default; // Added virtual destructor for safety
};

class ICar {
public:
    virtual void accept(ICarVisitor* carVisitor) = 0;
    virtual ~ICar() = default; // Added virtual destructor for safety
};

class Scorpio : public ICar {
public:
    void accept(ICarVisitor* v) override {
        v->visit(this);
    }
};

class Alto : public ICar {
public:
    void accept(ICarVisitor* v) override {
        v->visit(this);
    }
};

// 2. Visitor implementation moved below class definitions 
// so the compiler knows Scorpio and Alto are complete types.
class InsuranceVisitor : public ICarVisitor {
public:
    void visit(Scorpio* scorpio) override {
        cout << "Insurance for Scorpio is 1000" << endl;
    }
    void visit(Alto* alto) override {
        cout << "Insurance for Alto is 500" << endl;
    }
};

// 3. C++ Iterator syntax using standard library types
class Fleet {
    list<ICar*> cars;
public:
    // Expose standard C++ list iterators
    list<ICar*>::iterator begin() {
        return cars.begin();
    }
    
    list<ICar*>::iterator end() {
        return cars.end();
    }

    // Helper to add cars for demonstration
    void addCar(ICar* car) {
        cars.push_back(car);
    }
};

int main() {
    Fleet fleet;
    Scorpio s;
    Alto a;

    fleet.addCar(&s);
    fleet.addCar(&a);

    InsuranceVisitor insurance;

    // Use standard C++ iterator loop (or range-based loop)
    for (auto it = fleet.begin(); it != fleet.end(); ++it) {
        (*it)->accept(&insurance);
    }

    return 0;
}
