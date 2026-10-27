/**
 * @file Node.hpp
 * @brief Declaration of the Node class.
 * @author Piotr Majchrzak
 * @date 18/10/2026
 */

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>

/**
 * @class Node
 * @brief Represents one element of a doubly linked list.
 *
 * Each node stores a value and pointers to the next and previous nodes.
 */
class Node {
public:
    /// Value stored in the node.
    int data;

    /// Pointer to the next node.
    Node *next;

    /// Pointer to the previous node.
    Node *previous;

    /**
     * @brief Creates a new node with the given value.
     * @param number Value to store in the node.
     */
    Node(int number);
};

#endif /* Node_hpp */
