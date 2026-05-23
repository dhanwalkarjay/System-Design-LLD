#include <iostream>
using namespace std;

/*
THIS CODE FOLLOWS ISP - (Interface Segregation Principle)

=> create a different interface for diffferent responsibility,
   don't group unrelated methods in a one interface.
*/

class Shape{
    public:
        virtual void display() = 0;
};

class TwoDImensionalShape : public Shape{
    public:
        virtual double calculateArea() = 0;
        virtual void display() = 0;
};

class ThreeDimensionalShape : public Shape{
    public:
        virtual double calculateVolume() = 0;
        virtual void display() = 0;
};

class Square : public TwoDImensionalShape{
    private:
        double side;
    public:
        Square(double s) : side(s) {}
        double calculateArea() override {
            return side * side;
        }
        void display() override {
            cout << "Square with side: " << side << endl;
        }
};

class Rectangle : public TwoDImensionalShape{
    private:
        double length, width;
    public:
        Rectangle(double l, double w) : length(l), width(w) {}
        double calculateArea() override {
            return length * width;
        }
        void display() override {
            cout << "Rectangle with length: " << length << " and width: " << width << endl;
        }
};

class Cube : public ThreeDimensionalShape{
    private:
        double side;
    public:
        Cube(double s) : side(s) {}
        double calculateVolume() override {
            return side * side * side;
        }
        void display() override {
            cout << "Cube with side: " << side << endl;
        }
};

int main(){

    

    return 0;
}