//
//  List.hpp
//  PZ_Projekt_Listy
//
//  Created by Piotr Majchrzak on 18/10/2026.
//

#ifndef List_hpp
#define List_hpp

#include <stdio.h>
#include "Node.hpp"
#include "Iterator.hpp"

class List{
private:
    Node *first;
    Node *last;
    int size;
    Iterator iterator;
public:
    List();
    ~List();
    bool isEmpty();
    void addFirst(int value);
    void showAll();
    void addLast(int value);
    void addAt(int index, int value);
    //tu trzeba jeszcze cos dodac
};

#endif /* List_hpp */
