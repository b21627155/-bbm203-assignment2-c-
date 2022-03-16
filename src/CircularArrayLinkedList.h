// Created by Mustafa on 2.12.2021.

#ifndef ASSIGNMENT2_CIRCULARARRAYLINKEDLIST_H
#define ASSIGNMENT2_CIRCULARARRAYLINKEDLIST_H

#endif //ASSIGNMENT2_CIRCULARARRAYLINKEDLIST_H

#include <iostream>
#include "TemporaryEmployee.h"
struct Node{
    int employeeNumber;
    Node *next;
};

struct Node *last = NULL;

struct Node *insertEmpty(struct Node *last, int dataEN){
    if (last != NULL){
        return last;
    }
    struct Node *temp = new Node;

    temp -> employeeNumber = dataEN;

    last = temp;
    last->next = last;

    return last;
}
struct Node *insertBegin(struct Node *last, int data){
    if (last == NULL){
        return insertEmpty(last, data);
    }
    struct Node *temp = new Node;

    temp -> employeeNumber = data;
    temp -> next = last -> next;
    last -> next = temp;

    return last;
}
struct Node *insertEnd(struct Node *last, int data){
    if (last == NULL){
        return insertEmpty(last, data);
    }
    struct Node *temp = new Node;

    temp -> employeeNumber = data;
    temp -> next = last -> next;
    last -> next = temp;
    last = temp;

    return last;
}
struct Node *insertAfter(struct Node *last, int data, int after_item){
    if (last == NULL){
        return NULL;
    }

    struct Node *temp, *p;
    p = last -> next;
    do{
        if (p ->employeeNumber == after_item){
            temp = new Node;
            temp -> employeeNumber = data;
            temp -> next = p -> next;
            p -> next = temp;

            if (p == last)
                last = temp;
            return last;
        }
        p = p -> next;
    }
    while(p != last -> next);

    cout << "The node with employeeNumber "<<after_item << " is not present in the list." << endl;
    return last;

}
void display(struct Node *last) {
    struct Node *p;
    if (last == NULL) {
        return;
    }
    p = last -> next;

    do {
        cout << p -> employeeNumber << " ";
        p = p -> next;
    } while(p != last->next);
    if(p == last->next)
        cout<<p->employeeNumber;
    cout<<"\n\n";
}
void deleteNode(Node** head, int key)
{
    // If linked list is empty retun
    if (*head == NULL)
        return;

    // If the list contains only a single node,delete that node; list is empty
    if((*head)->employeeNumber==key && (*head)->next==*head) {
        free(*head);
        *head=NULL;
    }
    Node *last=*head,*d;

// If key is the head
    if((*head)->employeeNumber==key) {
        while(last->next!=*head) // Find the last node of the list
            last=last->next;

        // point last node to next of head or second node of the list
        last->next=(*head)->next;
        free(*head);
        *head=last->next;
    }

// end of list is reached or node to be deleted not there in the list
    while(last->next!=*head&&last->next->employeeNumber!=key) {
        last=last->next;
    }
// node to be deleted is found, so free the memory and display the list
    if(last->next->employeeNumber==key) {
        d=last->next;
        last->next=d->next;
        cout<<"The node with employeeNumber "<<key<<" deleted from the list"<<endl;
        free(d);
        cout<<endl;
        cout<<"Circular linked list after deleting "<<key<<" is as follows:"<<endl;
        display(last);
    }

}
