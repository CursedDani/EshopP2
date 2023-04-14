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
        string resolution = to_string(R)+" GB";
        this->ScreenResolution = resolution;
    }

    void getInfo()
    {
         cout << "Brand:        " << this->getBrand()     << "\n";
           cout << "Model:        " << this->getModel() << "\n";
           cout << "Price:        " << this->getPrice() << "\n";
           cout << "Resolution:         " << this->ScreenResolution << "\n";
           cout << endl << "**********************************" << endl;
    }

    tv(){}
};
#endif