#include "Product.h"

#ifndef PHONE_H
#define PHONE_H
class phone : public product
{
    private:
    string ScreenResolution;
    string Storage;   
    public:
    phone(string M,string B,float P,int R,int S)
    {
        string resolution = string(R + " Inches");
        this->ScreenResolution = resolution;
        string st = string(S + " GB");
        product(M,B,P);
    }

    string getBrand()
    {
        return this->Brand;
    }

    string getModel()
    {
        return this->Model;
    }

    float getPrice()
    {
        return this->Price;
    }

    string getRes()
    {
        return this->ScreenResolution;
    }

    string getStorage()
    {
        return this->Storage;
    }
    phone(){}
};
#endif
