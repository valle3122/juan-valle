//
//  Quadratic.h
//  extra credit
//
//  Created by Juan Valle on 8/21/22.
//  Copyright © 2022 Juan Valle. All rights reserved.
//

#ifndef Quadratic_h
#define Quadratic_h
class Quadratic
{
private:
    double a;
    double b;
    double c;
public:
    
    Quadratic();
    Quadratic(double newA,double newB, double newC);
    void setA(double newA);
    double getA();
    void setB(double newB);
    double getB();
    void setC(double newC);
    double getC();
    void answer();
    
};


#endif /* Quadratic_h */
