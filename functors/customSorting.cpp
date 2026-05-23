#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class comp{
    public:
    bool operator()(int a, int b){
        return a>b;
    }
};


int main(){


    vector<int> arr = {3, 5, 3, 2, 7};
    
    sort(arr.begin(), arr.end(), comp());

    for(int a : arr){
        cout<<a<<" ";
    }

    return 0;
}