//
//  Node.hpp
//  PZ_Projekt_Listy
//
//  Created by Piotr Majchrzak on 18/10/2026.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>

class Node{
public:
    int data;
    Node *next;
    Node *previous;
    
    Node(int number);
};

#endif /* Node_hpp */
