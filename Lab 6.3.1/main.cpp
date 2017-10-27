/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tmiller
 *
 * Created on October 11, 2017, 1:15 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Triangle 
{
public:
    Triangle() {};
    virtual void draw() 
    {
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
    }
};

class FirstTree : public Triangle
{
public:
    FirstTree() : Triangle() {};
    
    void draw() 
    {
        cout << "Drawing 1:" << endl;
        cout << " /\\" << endl;
        cout << "//\\" "\\" << endl;
    }  
};

class SecondTree : public Triangle
{
public:
    SecondTree() : Triangle() {};
    void draw() 
    {
        cout << "Drawing 2:" << endl;
        cout << " /\\" << endl;
        cout << "/**\\" << endl;
    }
};

class ThirdTree : public Triangle
{
public:
    ThirdTree() : Triangle() {};
    void draw() 
    {
        cout << "Drawing 3:" << endl;
        cout << " /\\" << endl;
        cout << "/++\\" << endl;
    }
};

int main(void) {
    
    FirstTree p_d1;
    SecondTree p_d2;
    ThirdTree p_d3;
    
    Triangle *trees[3];
    
    
    trees[0]= &p_d1;
    trees[1]= &p_d2;
    trees[2]= &p_d3;
    
    
    
    for(int i = 0; i < sizeof(trees); i++)
    {
        trees[i]->draw();
        
        
    }
    
    return 0;
}

