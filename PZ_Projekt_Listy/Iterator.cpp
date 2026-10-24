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
    if(current == nullptr){
        return -1;
    }

    return current->data;
}

bool Iterator::hasNext(){
    return current != nullptr && current->next != nullptr;
}

bool Iterator::hasPrevious(){
    return current != nullptr && current->previous != nullptr;
}

int Iterator::next(){
    if(hasNext()){
        current = current->next;
        return current->data;
    }

    return -1;
}

int Iterator::previous(){
    if(hasPrevious()){
        current = current->previous;
        return current->data;
    }

    return -1;
}
