//Zara Amer
//CSCI 135
//Lab 12
//4/30/2023

#include <iostream>
#include <vector>

//Task A: A big benefit of vectors is their ability to be returned from functions. 
//For this task, program a function called vector<int> makeVector(int n) that returns
//a vector of n integers that range from 0 to n-1. Your function must be implemented
//outside the main function and must return a vector.

std::vector<int> makeVector(int n){
    std::vector<int> v;
    for(int i = 0; i < n; i++){
        v.push_back(i);
    }
    return v;
}

//Task B: Implement the function vector<int> goodVibes(const vector<int>& v); 
//that, given a vector of integers, returns a vector with only the positive integers in the same order.

std::vector<int> goodVibes(const std::vector<int>& v){
    std::vector<int> v2;
    for(int i = 0; i < v.size(); i++){
        if(v[i] > 0){
            v2.push_back(v[i]);
        }
    }
    return v2;
}

//Task C: Implement the function void gogeta(vector<int> &goku, vector<int> &vegeta) 
//that appends elements of the second vector into the first and empties the second vector. 

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){
    for(int i = 0; i < vegeta.size(); i++){
        goku.push_back(vegeta[i]);
    }
    vegeta.clear();
}

//Task D: Implement the function vector<int> sumPairWise(const vector<int> &v1, const vector<int> &v2) 
//that returns a vector of integers whose elements are the pairwise sum of the elements from the two vectors
//passed as arguments. If a vector has a smaller size than the other, consider extra entries from the shorter vectors as 0.

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2){
    std::vector<int> v3;
    if(v1.size() > v2.size()){
        for(int i = 0; i < v1.size(); i++){
            if(i < v2.size()){
                v3.push_back(v1[i] + v2[i]);
            }
            else{
                v3.push_back(v1[i]);
            }
        }
    }
    else{
        for(int i = 0; i < v2.size(); i++){
            if(i < v1.size()){
                v3.push_back(v1[i] + v2[i]);
            }
            else{
                v3.push_back(v2[i]);
            }
        }
    }
    return v3;
}