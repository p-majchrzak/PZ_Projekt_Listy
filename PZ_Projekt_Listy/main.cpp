//
//  main.cpp
//  PZ_Projekt_Listy
//
//  Created by Piotr Majchrzak
//

#include <iostream>
#include "List.hpp"

using namespace std;

int main(int argc, const char * argv[]) {

    List list;

    cout << "=== DODAWANIE NA POCZATEK ===" << endl;
    list.addFirst(20);
    list.addFirst(10);
    list.showAll();

    cout << "\n=== DODAWANIE NA KONIEC ===" << endl;
    list.addLast(30);
    list.addLast(40);
    list.showAll();

    cout << "\n=== DODAWANIE POD INDEKSEM ===" << endl;
    list.addAt(2, 25);
    list.showAll();

    cout << "\n=== WYSWIETLANIE ODWROTNIE ===" << endl;
    list.showReverse();

    cout << "\n=== USUWANIE Z POCZATKU ===" << endl;
    list.removeFirst();
    list.showAll();

    cout << "\n=== USUWANIE Z KONCA ===" << endl;
    list.removeLast();
    list.showAll();

    cout << "\n=== USUWANIE POD INDEKSEM ===" << endl;
    list.removeAt(1);
    list.showAll();

    cout << "\n=== TEST ITERATORA ===" << endl;
    list.showNext();
    list.showNext();
    list.showPrevious();

    cout << "\n=== CZYSZCZENIE LISTY ===" << endl;
    list.clear();
    list.showAll();

    cout << "\n=== PONOWNE DODAWANIE ===" << endl;
    list.addFirst(100);
    list.addLast(200);
    list.showAll();

    cout << "\n=== TEST BLEDNEGO INDEKSU ===" << endl;
    list.removeAt(10);

    cout << "\n=== KONIEC TESTOW ===" << endl;

    return 0;
}
