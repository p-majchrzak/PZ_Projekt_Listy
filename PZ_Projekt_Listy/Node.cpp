/**
 * @file Node.cpp
 * @brief Implementation of the Node class.
 * @author Piotr Majchrzak
 * @date 18/10/2026
 */

#include "Node.hpp"

/**
 * @brief Creates a new node with the given value.
 * @param number Value to store in the node.
 *
 * The next and previous pointers are set to nullptr.
 */
Node::Node(int number) {
    data = number;
    next = nullptr;
    previous = nullptr;
}
