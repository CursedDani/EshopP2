#include "Product.h"
using namespace std;

#ifndef TV_H
#define TV_H
class tv : public product
{
    private:
    string ScreenResolution;
    public:
    tv(string M,string B,float P,int R)
    {
        string resolution = string(R + " Inches");
        this->ScreenResolution = resolution;
        product(M,B,P);
    }

    tv(){}
};
#endif