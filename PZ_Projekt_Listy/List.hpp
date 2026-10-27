/**
 * @file List.hpp
 * @brief Declaration of the List class.
 * @author Piotr Majchrzak
 * @date 18/10/2026
 */

#ifndef List_hpp
#define List_hpp

#include <stdio.h>
#include "Node.hpp"
#include "Iterator.hpp"

/**
 * @class List
 * @brief Implements a doubly linked list.
 *
 * The list allows adding, removing and displaying elements.
 * It also supports moving through the list using an iterator.
 */
class List {
private:
    /// Pointer to the first node.
    Node *first;

    /// Pointer to the last node.
    Node *last;

    /// Number of elements in the list.
    int size;

    /// Iterator used to move through the list.
    Iterator iterator;

public:
    /**
     * @brief Creates an empty list.
     */
    List();

    /**
     * @brief Deletes the list and frees its memory.
     */
    ~List();

    /**
     * @brief Checks if the list is empty.
     * @return True if the list is empty, otherwise false.
     */
    bool isEmpty();

    /**
     * @brief Adds a new element at the beginning.
     * @param value Value to add.
     */
    void addFirst(int value);

    /**
     * @brief Displays all elements from first to last.
     */
    void showAll();

    /**
     * @brief Adds a new element at the end.
     * @param value Value to add.
     */
    void addLast(int value);

    /**
     * @brief Adds an element at the given index.
     * @param index Position where the element will be added.
     * @param value Value to add.
     */
    void addAt(int index, int value);

    /**
     * @brief Removes the first element.
     */
    void removeFirst();

    /**
     * @brief Removes the last element.
     */
    void removeLast();

    /**
     * @brief Removes an element at the given index.
     * @param index Position of the element to remove.
     */
    void removeAt(int index);

    /**
     * @brief Displays all elements from last to first.
     */
    void showReverse();

    /**
     * @brief Moves the iterator forward and displays the next value.
     */
    void showNext();

    /**
     * @brief Moves the iterator backward and displays the previous value.
     */
    void showPrevious();

    /**
     * @brief Removes all elements from the list.
     */
    void clear();
};

#endif /* List_hpp */
