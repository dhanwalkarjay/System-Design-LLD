#include<iostream>
#include<algorithm>
#include<vector>

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

class comparator{
    public:
        bool operator()(student s1, student s2){
            return s1.age < s2.age;
        }
};

int main(){

    vector<student> arr;
    
    arr.push_back(student("sunny", 30));
    arr.push_back(student("jay", 20));
    arr.push_back(student("sam", 40));

    sort(arr.begin(), arr.end(), comparator());

    for(student s : arr){
        cout<<s.name<<" "<<s.age<<endl;
    }

    return 0;
}