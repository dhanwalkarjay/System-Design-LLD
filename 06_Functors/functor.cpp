#include<iostream>
using namespace std;

class student{
    public:
        string name;
        int age;
        student(string n, int a){
            this -> name = n;
            this -> age = a;
        }
};

class studentAgeCompare{
    public:
        bool operator()(student s1, student s2){
            return s1.age < s2.age;
        }
};

int main(){

    student s1("jay", 20);
    student s2("sunny", 25);

    studentAgeCompare cmp;

    if(cmp(s1, s2)){
        cout<<s1.name<<" is younger than "<<s2.name<<endl;
    } else {
        cout<<s2.name<<" is younger than "<<s1.name<<endl;
    }

    return 0;
}