//
//  Iterator.hpp
//  PZ_Projekt_Listy
//
//  Created by Piotr Majchrzak on 18/10/2026.
//

#ifndef Iterator_hpp
#define Iterator_hpp

#include <stdio.h>
#include "Node.hpp"

class Iterator{
private:
    Node *current;
public:
    Iterator();
    void setCurrent(Node *node);
    int getValue();
    bool hasNext();
    bool hasPrevious();
    int next();
    int previous();
    //cos tu trzeba jeszcze dodac
};

#endif /* Iterator_hpp */
