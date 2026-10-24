//
//  List.cpp
//  PZ_Projekt_Listy
//
//  Created by Piotr Majchrzak on 18/10/2026.
//

#include "List.hpp"
#include "Node.hpp"
#include "NodeFactory.hpp"
#include <iostream>
using namespace std;

List::List(){
    first = nullptr;
    last = nullptr;
    size = 0;
}
List::~List(){
    Node *current = first;

    while(current != nullptr){
        Node *temp = current;
        current = current->next;
        delete temp;
    }

    first = nullptr;
    last = nullptr;
    size = 0;
}
bool List::isEmpty(){
    return first == nullptr;
}

void List::addFirst(int value){
    Node *node = NodeFactory::create(value);
    if (isEmpty()){
        first = last = node;
    }else{
        node -> next = first;
        first->previous = node;
        first = node;
    }
    size++;
    iterator.setCurrent(first);
}

void List::showAll(){
    int counter = 1;
    Node *current = first;
    while(current != nullptr){
        cout << counter << ") " << current->data << endl;
        current = current->next;
        counter++;
    }
}
void List::addLast(int value){
    Node *node = NodeFactory::create(value);

    if(isEmpty()){
        first = last = node;
    }else{
        node->previous = last;
        last->next = node;
        last = node;
    }

    size++;
    iterator.setCurrent(first);
}
void List::addAt(int index, int value){
    if(index < 0 || index > size){
        cout << "Nieprawidlowy indeks!" << endl;
        return;
    }

    if(index == 0){
        addFirst(value);
        return;
    }

    if(index == size){
        addLast(value);
        return;
    }

    Node *current = first;

    for(int i = 0; i < index; i++){
        current = current->next;
    }

    Node *node = NodeFactory::create(value);

    node->next = current;
    node->previous = current->previous;
    current->previous->next = node;
    current->previous = node;

    size++;
    iterator.setCurrent(first);
}

