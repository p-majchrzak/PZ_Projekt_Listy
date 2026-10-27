/**
 * @file Iterator.cpp
 * @brief Implementation of the Iterator class.
 * @author Piotr Majchrzak
 * @date 18/10/2026
 */

#include "Iterator.hpp"
#include "Node.hpp"

/**
 * @brief Creates an iterator with no current node.
 */
Iterator::Iterator() {
    current = nullptr;
}

/**
 * @brief Sets the current node.
 * @param node Pointer to the node.
 */
void Iterator::setCurrent(Node *node) {
    current = node;
}

/**
 * @brief Returns the value of the current node.
 * @return Node value or -1 if the current node does not exist.
 */
int Iterator::getValue() {
    if (current == nullptr) {
        return -1;
    }

    return current->data;
}

/**
 * @brief Checks if the next node exists.
 * @return True if the next node exists, otherwise false.
 */
bool Iterator::hasNext() {
    return current != nullptr && current->next != nullptr;
}

/**
 * @brief Checks if the previous node exists.
 * @return True if the previous node exists, otherwise false.
 */
bool Iterator::hasPrevious() {
    return current != nullptr && current->previous != nullptr;
}

/**
 * @brief Moves the iterator to the next node.
 * @return Value of the next node or -1 if it does not exist.
 */
int Iterator::next() {
    if (hasNext()) {
        current = current->next;
        return current->data;
    }

    return -1;
}

/**
 * @brief Moves the iterator to the previous node.
 * @return Value of the previous node or -1 if it does not exist.
 */
int Iterator::previous() {
    if (hasPrevious()) {
        current = current->previous;
        return current->data;
    }

    return -1;
}
