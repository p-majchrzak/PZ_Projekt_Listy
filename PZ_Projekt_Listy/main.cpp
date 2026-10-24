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

    list.addLast(10);
    list.addLast(20);
    list.addLast(30);
    list.addLast(40);
    list.addLast(50);

    cout << "Lista w normalnej kolejnosci:" << endl;
    list.showAll();

    cout << "\nLista w odwrotnej kolejnosci:" << endl;
    list.showReverse();

    return 0;
}
