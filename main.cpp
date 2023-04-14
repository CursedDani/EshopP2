#include "linkedList.h"

int main()
{
    linkedList list;
    phone *il = new phone("1","1",1,1,1);
    list.addItem(il);
    tv *ol = new tv("222222","2",2,2);
    list.addItem(ol);
    pc *aaa = new pc("a","a",3,3,3);
    list.addItem(aaa);
    cout << "\n"<<endl;
    list.showList();
    list.deleteItem(ol);
    list.showList();
    return 0;
};