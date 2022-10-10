//
//  main.cpp
//  extra credit
//
//  Created by Juan Valle on 2/18/17.
//  Copyright © 2017 Juan Valle. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Tempeture.h"
#include "Quadratic.h"
#include "Reverse.h"
using namespace std;
void greeting();
void AreaofCircle();
void AreaofSquare();
void AreaOfRectangle();
void tempeture();
void quadratic();
void reverse();
void ArrayRotation();
void month();

int main()

{
    while(true)
    {
        greeting();
        int calculation;
        cin >> calculation;
        switch (calculation)
        {
            case 1 : AreaofCircle(); break;
            case 2 : AreaofSquare(); break;
            case 3 : AreaOfRectangle(); break;
            case 4 : tempeture();break;
            case 5 : quadratic();break;
            case 6 : ArrayRotation();break;
            case 7 : month();break;
            default : exit (0);
        }
        
        cin.ignore(999,'\n');
        cout << endl;
        cin.clear();
        //system("CLS");
        
    }
    return 0;
    
}
void greeting()
{
    
    cout << "Juan Valle";
    cout << endl << endl;
    cout << "Programs";
    cout << endl;
    cout << "=================================";
    cout << endl;
    cout << "    1: Circle" << endl;
    cout << "    2: Square" << endl;
    cout << "    3: Rectangle" << endl ;
    cout << "    4: Tempeture"<<endl;
    cout << "    5: Quadratic"<<endl ;
    cout << "    6: Reverse a string"<<endl;
    cout << "    7: Monthly budget"<< endl;
    cout << "other: Exit ";
    cout << endl;
    cout << "=================================";
    cout << endl;
    cout << "Enter Option:";
    
    if(cin.fail())
    {
        cout << "use a number" << endl;
        
        
    
    
    }
}
void AreaofCircle()
{
    double radius;
    cout << "Enter a radius for the circle " << endl;
    cin >> radius;
    if(radius < 0 || cin.fail())
    {
        cout << "Wrong " << endl;
    }
    Circle name(radius);
    
    cout << "The area of the circle is " << name.getArea();
    cout << endl;
    
    
       
    
}
void AreaofSquare()
{
    double side;
    cout << "Enter the side: ";
    cin >> side;
    if (side < 0 || cin.fail() )
    {
        cout << "Wrong " << endl;
        cin.clear();
        return;
        
        
    }
    
    Square square(side);
    
    cout << "The area of the square is " << square.getArea() << endl;
}
void AreaOfRectangle()
{
    
    double length;
    double width;
    cout << "Enter the length and width: ";
    cin >> length;
    if (length < 0 || cin.fail())
    {
        cout << "Wrong" <<endl;
    }
    cin >> width;
    if ( width < 0 || cin.fail())
    {
        cout << "Wrong" << endl;
        return;
    }
    Rectangle rectangle (length , width);
    
    cout << "The area of the rectangle is " <<rectangle.getArea() << endl;
    
}

void tempeture()
{
    double tempf;
    cout<<"Enter your tempeture in fahrenheit"<<endl;
    cin >>tempf;
    if(cin.fail())
    {
        cout <<"please put a number"<<endl;
        return;
    }
    //need a function to calculate to convert the tempeture
    //need the caller for the class
    //vector<double> subway_child;
    Tempeture tempeture(tempf);
    
    cout<<"the tempeture in celcius is: "<<tempeture.getTempc() <<endl;
    cin.ignore(999,'\n');
}
void quadratic()
{
    double b;
    double a;
    double c;
    
    cout << "Enter a"<<endl;
    cin >> a;
    cout << "Enter b"<<endl;
    cin>> b;
    cout << "Enter c"<<endl;
    cin >> c;
    
    if(cin.fail())
    {
        cout << "Please enter a number"<<endl;
        return;
    }
    
    Quadratic quadratic(a,b,c);
    quadratic.answer();
    
    
}
void ArrayRotation()
{
    
    int size;
    cout << "Put size of array"<<endl;
    cin >> size;
    cin.ignore(999,'\n');
    Reverse reverse(size);
    reverse.answer();
    cin.ignore(999,'\n');
    
    
}
void month()
{
    int rate;
    double pay;
    double expenses;
    double total;
    //double sum =0;
    vector<double> a;
    
    cout << "Put when you get payed monthly or bi-weekly: 1 for monthly and 2 for bi-weekly"<<endl;
    cin >> rate;
    if(rate == 1)
    {
        cout << "Put how much you make monthly"<<endl;
        cin >> pay;
        
        cout << "Enter all of your expenses(Put -1 to finish):"<<endl;
        
        while(expenses != -1)//this will put into an vector
        {
            
            cin >> expenses;
            a.push_back(expenses);
        }
        //for(int i = 0 ; i< a.size()-1;i++)// size is 3 because it takes -1 into the vector so need to be -1 from the size
            
        //{// this vector and this output was just for testing
            //cout << a[i]<<endl; // this outputs the total vector
        //}
        
        //need to create a for loop to go through the vector and calculate
        
        for(int i = 0 ; i<a.size()-1;i++)
        {
            pay -= a[i];
            //cout << pay<<endl;
        }
        cout << "Your month total is:$"<<pay<<endl;
        cout << "Press enter to go back to the options."<<endl;
        cin.ignore(999,'\n');
    }
    else if(rate == 2)
    {
        cout<< "Put how much you make bi weekly"<<endl;
        cin >> pay;
        total = pay * 2;
    
        cout << "Enter all of your expenses (Put -1 to finish):"<<endl;
        while(expenses != -1)
        {
       
            cin>>expenses;
            a.push_back(expenses);
        
        }
        for(int i = 0 ; i<a.size()-1;i++)
        {
            total -= a[i];
        }
            cout << "Your month total is:$"<<total<<endl;
            cout<<"Press enter to go back to the options.";
            cin.ignore(999,'\n');
        
    }
    
}


