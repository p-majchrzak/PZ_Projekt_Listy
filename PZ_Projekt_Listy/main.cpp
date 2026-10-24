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

    cout << "Lista poczatkowa:" << endl;
    list.showAll();

    cout << "\nUsuwanie elementu pod indeksem 2:" << endl;
    list.removeAt(2);
    list.showAll();

    cout << "\nUsuwanie pierwszego elementu:" << endl;
    list.removeAt(0);
    list.showAll();

    cout << "\nUsuwanie ostatniego elementu:" << endl;
    list.removeAt(2);
    list.showAll();

    cout << "\nTest nieprawidlowego indeksu:" << endl;
    list.removeAt(10);

    return 0;
}
