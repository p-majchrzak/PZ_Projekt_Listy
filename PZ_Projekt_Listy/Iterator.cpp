//
//  Iterator.cpp
//  PZ_Projekt_Listy
//
//  Created by Piotr Majchrzak on 18/10/2026.
//

#include "Iterator.hpp"
#include "Node.hpp"

Iterator::Iterator(){
    current = nullptr;
}
void Iterator::setCurrent(Node *node){
    current = node;
}

int Iterator::getValue(){
    return current->data;
}
