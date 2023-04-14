#include <iostream>
using namespace std;

#ifndef PRODUCT_H
#define PRODUCT_H
class product
{
    private:
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

    string getBrand(){return this->Brand;};

    float getPrice(){return this->Price;};

    string getModel(){return this->Model;};

    virtual string getResolution(){return "";};
    virtual string getStorage(){return "";};
    virtual void getInfo()
    {
           cout << "Brand:        " << this->Brand << "\n";
           cout << "Model:        " << this->Model << "\n";
           cout << "Price:        " << this->Price << "\n";
           cout << endl << "**********************************" << endl;
    };
    product(){}

};

#endif