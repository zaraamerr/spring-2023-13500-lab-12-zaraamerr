//Zara Amer
//CSCI 135
//Lab 12
//4/30/2023

#include <iostream>
#include <vector>
#include "funcs.h"

int main(){
    //Test Task A
    std::vector<int> v = makeVector(10); //returns [0,1,2,3,4,5,6,7,8,9]
    //print out each element in the vector v
    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    //Test Task B
    std::vector<int> v2 {1,2,-1,3,4,-1,6};
    std::vector <int> v3 = goodVibes(v2); //returns [1,2,3,4,6]
    //print out each element in the vector v3
    for(int i = 0; i < v3.size(); i++){
        std::cout << v3[i] << " ";
    }
    std::cout << std::endl;

    //Test Task C
    std::vector<int> v4 {1,2,3};
    std::vector<int> v5 {4,5};
    gogeta(v4, v5); //v4 is now [1,2,3,4,5] and v5 is empty
    //print out each element in the vector v4
    for(int i = 0; i < v4.size(); i++){
        std::cout << v4[i] << " ";
    }
    //print out each element in the vector v5
    std::cout << std::endl;
    for(int i = 0; i < v5.size(); i++){
        std::cout << v5[i] << " ";
    }
    std::cout << std::endl;

    //Test Task D
    std::vector<int> v6 {1,2,3};
    std::vector<int> v7 {4,5};
    std::vector<int> v8 = sumPairWise(v6, v7); //returns [5, 7, 3]
    //print out each element in the vector v8
    for(int i = 0; i < v8.size(); i++){
        std::cout << v8[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}