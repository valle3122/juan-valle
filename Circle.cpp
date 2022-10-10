//
//  Circle.cpp
//  extra credit
//
//  Created by Juan Valle on 5/29/17.
//  Copyright © 2017 Juan Valle. All rights reserved.
//

#include "Circle.h"

    
Circle::Circle()
{
    radius = 1 ;
}
    
Circle::Circle(double newRadius)
{
    radius = newRadius;
}

double Circle::getArea()
{
    return radius * radius * 3.14159;
}
    
