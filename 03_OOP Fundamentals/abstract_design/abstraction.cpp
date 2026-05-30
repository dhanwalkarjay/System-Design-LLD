#include <iostream>
#include "bird_design.h"

using namespace std;

void birdDoesSomething(Bird* bird) {
    bird->fly();
    bird->eat();
}

int main() {

    Bird* sparrow = new Sparrow(); 
    Bird* eagle = new Eagle();
    birdDoesSomething(sparrow);
    birdDoesSomething(eagle);

    return 0;
}