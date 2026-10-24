//
//  main.cpp
//  PZ_Projekt_Listy
//
//  Created by Piotr Majchrzak on 14/10/2026.
//

#include <iostream>
#include "List.hpp"

using namespace std;

int main(int argc, const char * argv[]) {

    List list;

    list.addFirst(10);
    list.addFirst(20);
    list.addFirst(30);

    list.addLast(40);
    list.addLast(50);

    list.showAll();

    return 0;
}
