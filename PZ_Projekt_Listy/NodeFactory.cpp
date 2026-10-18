//
//  NodeFactory.cpp
//  PZ_Projekt_Listy
//
//  Created by Piotr Majchrzak on 18/10/2026.
//

#include "NodeFactory.hpp"

Node* NodeFactory::create(int value){
    return new Node(value);
}
