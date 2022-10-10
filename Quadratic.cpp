//
//  Quadratic.cpp
//  extra credit
//
//  Created by Juan Valle on 8/21/22.
//  Copyright © 2022 Juan Valle. All rights reserved.
//

#include "Quadratic.h"
#include <cmath>
#include <iostream>
using namespace std;

Quadratic::Quadratic()
{
    a=1;
    b=1;
    c=1;
}
Quadratic::Quadratic(double newA,double newB, double newC)
{
    a=newA;
    b=newB;
    c=newC;
}
void Quadratic::setA(double newA)
{
    a = newA;
}
double Quadratic::getA()
{
    return a;
}
void Quadratic::setB(double newB)
{
    b=newB;
}
double Quadratic::getB()
{
    return b;
}
void Quadratic::setC(double newC)
{
    c = newC;
}
double Quadratic::getC()
{
    return c;
}
void Quadratic::answer()
{
    double discriminant = (b*b) - 4 *a*c;
    double top = sqrt(discriminant);
    double bottom = 2*a;
    double imaginary = abs(discriminant);
    double imaginary1 = sqrt(imaginary);
    
    double quad1 = (b + top);
    double quad2 = (b - top);
    
    if(discriminant > 0 )
    {
        cout << "Solution has 2 real answers"<<endl;
        cout << "Answer 1: "<<quad1/bottom<<endl;
        cout << "Answer 2: "<<quad2/bottom<<endl;
        cin.ignore(999,'\n');
        
        
    }
    else if(discriminant == 0 )
    {
        cout << "Solution has 1 answer"<<endl;
        cout << "Answer is: "<<quad1/bottom;
        cin.ignore(999,'\n');
        
    }
    else if(discriminant <0)
    {
        cout << "Solution has 2 imaginary numbers"<<endl;
        cout << " Answer 1: "<< a/bottom <<"+"<<imaginary1/bottom<<"i"<<endl;
        cout << " Answer 2: "<< a/bottom <<"-"<<imaginary1/bottom<<"i"<<endl;
        cin.ignore(999,'\n');
    }
    
}
