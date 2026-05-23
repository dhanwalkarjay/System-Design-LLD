#include<iostream>
using namespace std;

class Student{
    // access specifier
    public:
        //public data members
        int id;
        int age;
        string name;
        int nos;

    private:
        // private data member
        float gpa;
        string gf;
    
    public:         
        // public member functions
        // setter
        void setGPA(float a){
            this->gpa = a;
        }
        
        // getter
        float getGPA() const {
            return this->gpa;
        }

        void study(){
            cout<<this->name<<" Stduying"<<endl;
        }

        void bunk(){
            cout<<this->name<<" Bunking"<<endl;
        }

        void sleep(){
            cout<<this->name<<" Studing"<<endl;
        }
    
    private:
        // private member function
        void gfChatting(){
            cout<<this->name<<"Chatting with GF"<<endl;
        }
};

int main(){

    Student s1;

    s1.getGPA();
    s1.setGPA(5.5);
    cout<<s1.getGPA()<<endl;

    return 0;
}