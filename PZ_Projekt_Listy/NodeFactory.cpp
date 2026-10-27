/**
 * @file NodeFactory.cpp
 * @brief Implementation of the NodeFactory class.
 * @author Piotr Majchrzak
 * @date 18/10/2026
 */

#include "NodeFactory.hpp"

/**
 * @brief Creates a new node.
 * @param value Value to store in the node.
 * @return Pointer to the new node.
 */
Node* NodeFactory::create(int value) {
    return new Node(value);
}
