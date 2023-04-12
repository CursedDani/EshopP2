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

    phoneAu
};
#endif
