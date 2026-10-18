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
    //dodac zwalnianie pamieci
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
