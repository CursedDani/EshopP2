#include "Node.h"
#include "phone.h"
#include "tv.h"
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
    if (head->data == nullptr)  {
      cout << "\n";
      cout << "The list is empty\n";
    }
    else
    {
    Node *current = head;
    
    while (current != nullptr) {
          current->data->getInfo();
          cout << current->data->getBrand() << endl;
      current = current->next;  
    }
    
    } 
    }
  
    void addItem(product *p)
    {
      if (head == nullptr)
      {
        head = new Node(p);
        this->size++;
      }
      else
      {
        Node *current = head;
        while (current->next!=nullptr)
        {
          current = current->next;
        }
        current->next = new Node(p);
      }
      cout << "product added successfully!"<<endl;
    }

    void deleteItem(product* p)
    {
      if (head==nullptr)
      {
        cout << "\nThere are no items to delete" << endl;
      }
      else
      {
        Node* prev = nullptr;
        Node* current = head;
        while (current!=nullptr)
        {
          if (current->data == p)
          {
            prev->next = current->next;
            delete current;
            cout << "Item deleted succesfully"<<endl;
          }
          else
          {
            prev = current;
            current = current->next;
            cout << "The item has not been found" << endl;
          }
        }
        }
      }
    };

#endif