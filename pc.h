#include "Product.h"

#ifndef PC_H
#define PC_H
class pc : public product
{
    private:
    string ScreenResolution;
    string Storage;   

    public:
    pc(string M,string B,float P,int R,int S)
    {
        product(M,B,P);
        string resolution = to_string(R)+" Inches";
        this->ScreenResolution = resolution;
        string st = to_string(S)+" GB";
        this->Storage = st;
    }


    string getResolution()
    {
        return this->ScreenResolution;
    }

    string getStorage()
    {
        return this->Storage;
    }


    void getInfo()
    {
         cout << "Brand:        " << this->getBrand() << "\n";
           cout << "Model:        " << this->getModel() << "\n";
           cout << "Price:        " << this->getPrice() << "\n";
           cout << "Resolution:         " << this->ScreenResolution << "\n";
           cout << "Storage:         " << this->Storage << "\n";
           cout << endl << "**********************************" << endl;
    }
    pc(){}

};
#endif
