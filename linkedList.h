#include "Node.h"
#include "tv.h"
#include "phone.h"
#include "pc.h"

#ifndef LIST_H
#define LIST_H
class linkedList
{
    private:
        Node *head = nullptr;
        int size=0;

    public:

    void showList()
    {
        Node *current = head;
    if (head == NULL) {
      cout << "\n";
      cout << "The list is empty\n";
    }
    while (current != NULL) {

      cout << "\n"

           << "Brand:         " << string(current->data->getBrand()) << "\n"
           << "Model:           " << string(current->data->getModel()) << "\n"
           << "Price:        " << string(current->data->getPrice()) << "\n"
           << endl;
      current = current->next;
      
    } 
    }
};
#ednif