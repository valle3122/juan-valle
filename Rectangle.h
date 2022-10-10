//
//  Rectangle.h
//  extra credit
//
//  Created by Juan Valle on 5/29/17.
//  Copyright © 2017 Juan Valle. All rights reserved.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double length;
    double width;
    
public:
    
    Rectangle();
    Rectangle(double newWidth , double newLength);
    void setlength(double newLength);
    void setwidth(double newWidth);
    double getlength();
    double getwidth();
    double getArea();
    
};




#endif /* Rectangle_h */
