//
//  List.cpp
//  PZ_Projekt_Listy
//
//  Created by Piotr Majchrzak on 18/10/2026.
//

#include "List.hpp"
#include "Node.hpp"
#include "NodeFactory.hpp"
#include <iostream>
using namespace std;

List::List(){
    first = nullptr;
    last = nullptr;
    size = 0;
}
List::~List(){
    Node *current = first;

    while(current != nullptr){
        Node *temp = current;
        current = current->next;
        delete temp;
    }

    first = nullptr;
    last = nullptr;
    size = 0;
}
bool List::isEmpty(){
    return first == nullptr;
}

void List::addFirst(int value){
    Node *node = NodeFactory::create(value);
    if (isEmpty()){
        first = last = node;
    }else{
        node -> next = first;
        first->previous = node;
        first = node;
    }
    size++;
    iterator.setCurrent(first);
}

void List::showAll(){
    int counter = 1;
    Node *current = first;
    while(current != nullptr){
        cout << counter << ") " << current->data << endl;
        current = current->next;
        counter++;
    }
}
void List::addLast(int value){
    Node *node = NodeFactory::create(value);

    if(isEmpty()){
        first = last = node;
    }else{
        node->previous = last;
        last->next = node;
        last = node;
    }

    size++;
    iterator.setCurrent(first);
}
void List::addAt(int index, int value){
    if(index < 0 || index > size){
        cout << "Nieprawidlowy indeks!" << endl;
        return;
    }

    if(index == 0){
        addFirst(value);
        return;
    }

    if(index == size){
        addLast(value);
        return;
    }

    Node *current = first;

    for(int i = 0; i < index; i++){
        current = current->next;
    }

    Node *node = NodeFactory::create(value);

    node->next = current;
    node->previous = current->previous;
    current->previous->next = node;
    current->previous = node;

    size++;
    iterator.setCurrent(first);
}
void List::removeFirst(){
    if(isEmpty()){
        cout << "Lista jest pusta!" << endl;
        return;
    }

    Node *temp = first;

    if(first == last){
        first = nullptr;
        last = nullptr;
    }else{
        first = first->next;
        first->previous = nullptr;
    }

    delete temp;
    size--;
    iterator.setCurrent(first);
}

void List::removeLast(){
    if(isEmpty()){
        cout << "Lista jest pusta!" << endl;
        return;
    }

    Node *temp = last;

    if(first == last){
        first = nullptr;
        last = nullptr;
    }else{
        last = last->previous;
        last->next = nullptr;
    }

    delete temp;
    size--;
    iterator.setCurrent(first);
}
void List::removeAt(int index){
    if(index < 0 || index >= size){
        cout << "Nieprawidlowy indeks!" << endl;
        return;
    }

    if(index == 0){
        removeFirst();
        return;
    }

    if(index == size - 1){
        removeLast();
        return;
    }

    Node *current = first;

    for(int i = 0; i < index; i++){
        current = current->next;
    }

    current->previous->next = current->next;
    current->next->previous = current->previous;

    delete current;
    size--;
    iterator.setCurrent(first);
}
void List::showReverse(){
    int counter = 1;
    Node *current = last;

    while(current != nullptr){
        cout << counter << ") " << current->data << endl;
        current = current->previous;
        counter++;
    }
}
void List::showNext(){
    if(iterator.hasNext()){
        cout << "Nastepny element: " << iterator.next() << endl;
    }else{
        cout << "Brak nastepnego elementu!" << endl;
    }
}

void List::showPrevious(){
    if(iterator.hasPrevious()){
        cout << "Poprzedni element: " << iterator.previous() << endl;
    }else{
        cout << "Brak poprzedniego elementu!" << endl;
    }
}
