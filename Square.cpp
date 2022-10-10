//
//  Square.cpp
//  extra credit
//
//  Created by Juan Valle on 6/6/17.
//  Copyright © 2017 Juan Valle. All rights reserved.
//

#include "Square.h"

Square::Square()
{
    side = 1;
}
Square::Square(double newSide)
{
    side = newSide;
    
}

double Square::getArea()
{
    return side * side;
}

