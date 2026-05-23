#include<iostream>
using namespace std;

class Student{
    // access specifier
    public:
    //data members
    int id;
    int age;
    string name;
    int nos;

    // default constructor
    Student(){
        cout<<"default constructor called"<<endl;
    }

    // parameterized constructor
    Student(int id, int age, string name, int nos){
        cout<<"parametarozed constructor called"<<endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
    }
    
    // copy constructor
    Student(const Student &obj){
        cout<<"copy constructor called"<<endl;
        this->id = obj.id;
        this->age = obj.age;
        this->name = obj.name;
        this->nos = obj.nos;
    }

    // member functions
    void study(){
        cout<<this->name<<" Stduying"<<endl;
    }

    void bunk(){
        cout<<this->name<<" Bunking"<<endl;
    }

    void sleep(){
        cout<<this->name<<" Studing"<<endl;
    }

    // destructor
    ~Student(){
        cout<<"destructor called"<<endl;
    }
};

int main(){

    /* Static allocation - Stack Memory
    //object created - using default constructor
    Student s1;
    
    // access class using object
    s1.id = 001;
    s1.age= 23;
    s1.name= "Jay";
    s1.nos= 100;
    s1.study();
    */

    /*
    //object created - using parameterized constructor
    Student s1(002, 23, "Sam", 200);
    Student s2(003, 24, "Ram", 300);

    cout<<s1.name<<endl;
    cout<<s2.name<<endl;
    */

    /*
    Student s1(002, 23, "Sam", 200);
    //object created - using copy constructor
    Student s2 = s1;
    cout<<s2.name<<endl;
    */

    // Dynamic allocation - Heap Memory
    Student *s1 = new Student(004, 25, "Bablu", 5);
    cout<<s1->name<<endl;
    cout<<s1->age<<endl;
    cout<<s1->id<<endl;
    cout<<s1->nos<<endl;

    return 0;
}