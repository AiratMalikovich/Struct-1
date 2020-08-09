#pragma once
#include <string>
#include <iostream>
using namespace std;

struct Square {
    int a;
   double Perimeter (){
       double area;
       area = a*4;
       return area;
   }
    double Area (){
        double per;
        per = sqrt(a);
        return per;
    }
};
