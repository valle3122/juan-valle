//
//  Rectangle.cpp
//  extra credit
//
//  Created by Juan Valle on 5/29/17.
//  Copyright © 2017 Juan Valle. All rights reserved.
//

#include "Rectangle.h"

    
Rectangle::Rectangle()
{
    length = 1;
    width = 1 ;
}
Rectangle::Rectangle(double newWidth , double newLength)
{
    length = newLength;
    width = newWidth;
    
}
void Rectangle::setlength(double newLength)
{
    length = newLength;
}

void Rectangle::setwidth(double newWidth)
{
    width = newWidth;
}
double Rectangle::getlength()
{
    return length;
}
double Rectangle::getwidth()
{
    return width;
}

double Rectangle::getArea ()
{
    return length * width ;
    
}
