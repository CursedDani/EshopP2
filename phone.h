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
        product(M,B,P);
        this->ScreenResolution = to_string(R)+" Inches";
        this->Storage= to_string(S)+" GB";
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
         cout << "Brand:        " << this->getBrand()<< "\n";
           cout << "Model:        " << this->getModel() << "\n";
           cout << "Price:        " << this->getPrice() << "\n";
           cout << "Resolution:         " << this->ScreenResolution << "\n";
           cout << "Storage:         " << this->Storage << "\n";
           cout << endl << "**********************************" << endl;
    }
    phone(){}
};
#endif
