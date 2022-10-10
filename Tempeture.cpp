//
//  Tempeture.cpp
//  extra credit
//
//  Created by Juan Valle on 8/2/22.
//  Copyright © 2022 Juan Valle. All rights reserved.
//

#include "Tempeture.h"

Tempeture::Tempeture()
{
    tempf =1;
}
Tempeture::Tempeture(double newTempf)
{
    tempf = newTempf;
}

void Tempeture::setTempf(double newTempf)
{
    tempf = newTempf;
}
double Tempeture::getTempf()
{
    return tempf;
}
double Tempeture::getTempc()
{
    double tempc1 = 0;
    double tempc2 = 0;
    tempc1 = tempf -32;
    tempc2 = tempc1 / 1.8;
    return tempc2;
}
