/**
 * @file main.cpp
 * @brief Main function for testing the doubly linked list.
 * @author Piotr Majchrzak
 */

#include <iostream>
#include "List.hpp"

using namespace std;

/**
 * @brief Runs tests for the List class.
 * @param argc Number of command line arguments.
 * @param argv Array of command line arguments.
 * @return 0 when the program finishes successfully.
 */
int main(int argc, const char *argv[]) {
    List list;

    // Test adding elements at the beginning.
    cout << "=== DODAWANIE NA POCZATEK ===" << endl;
    list.addFirst(20);
    list.addFirst(10);
    list.showAll();

    // Test adding elements at the end.
    cout << "\n=== DODAWANIE NA KONIEC ===" << endl;
    list.addLast(30);
    list.addLast(40);
    list.showAll();

    // Test adding an element at a given index.
    cout << "\n=== DODAWANIE POD INDEKSEM ===" << endl;
    list.addAt(2, 25);
    list.showAll();

    // Test displaying elements in reverse order.
    cout << "\n=== WYSWIETLANIE ODWROTNIE ===" << endl;
    list.showReverse();

    // Test removing the first element.
    cout << "\n=== USUWANIE Z POCZATKU ===" << endl;
    list.removeFirst();
    list.showAll();

    // Test removing the last element.
    cout << "\n=== USUWANIE Z KONCA ===" << endl;
    list.removeLast();
    list.showAll();

    // Test removing an element at a given index.
    cout << "\n=== USUWANIE POD INDEKSEM ===" << endl;
    list.removeAt(1);
    list.showAll();

    // Test moving through the list with the iterator.
    cout << "\n=== TEST ITERATORA ===" << endl;
    list.showNext();
    list.showNext();
    list.showPrevious();

    // Test removing all elements.
    cout << "\n=== CZYSZCZENIE LISTY ===" << endl;
    list.clear();
    list.showAll();

    // Test adding elements after clearing the list.
    cout << "\n=== PONOWNE DODAWANIE ===" << endl;
    list.addFirst(100);
    list.addLast(200);
    list.showAll();

    // Test removing an element with an invalid index.
    cout << "\n=== TEST BLEDNEGO INDEKSU ===" << endl;
    list.removeAt(10);

    // End of all tests.
    cout << "\n=== KONIEC TESTOW ===" << endl;

    return 0;
}
