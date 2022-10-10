//
//  Circle.h
//  extra credit
//
//  Created by Juan Valle on 5/29/17.
//  Copyright © 2017 Juan Valle. All rights reserved.
//

#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
    
public:
    
    Circle();
    Circle(double newRadius);
    double getArea();
};


#endif