//
//  Reverse.cpp
//  extra credit
//
//  Created by Juan Valle on 9/6/22.
//  Copyright © 2022 Juan Valle. All rights reserved.
//

#include <stdio.h>
#include "Reverse.h"
#include <iostream>

using namespace std;

Reverse::Reverse()
{
    
    size = 1;
}
Reverse::Reverse(int newsize)
{
    
    size = newsize;
}
void Reverse::setsize(int newsize)
{
    size = newsize;
}
int Reverse::getsize()
{
    return size;
}
void Reverse::answer()
{
    // need to make code to rotate array using the first number of array
    int *a = new int (size);
    // if we want them to keep going without a pre determined size need a vector (example month program)
    
    while(true)
    {
        cout<< "Enter the array"<<endl;
    
        for(int i = 0 ; i<size ; i++)
        {
            cin >> a[i];
        }
            //need to get first index to use as spot on where to rotate
        int index = a[0];
        
        if(index < size)
        {
    
            for(int i = index ; i < size ; i++)
            {
            // example 36789 should be 89367 123 231
                cout << a[i]; // this should output 89 23
            }
            for(int i = 0 ; i<index;i++)
            {
                cout << a[i];//this should output 367 1
            }
            cout << endl;
            cout << "Press enter to get back to the selection"<<endl;
            break;
        
        }
        else
            cout << "Please put a first number in the array that is less than the size"<<endl;
        
    }
}
