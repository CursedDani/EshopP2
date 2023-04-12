#include <iostream>
using namespace std;

#ifndef PRODUCT_H
#define PRODUCT_H
class product
{
    protected:
        string Model;
        float Price;
        string Brand;

    public:

    product(string M,string B,float P)
    {
        this->Brand = B;
        this->Model = M; 
        this->Price = P;
    }   

    product(){}

};
#endif