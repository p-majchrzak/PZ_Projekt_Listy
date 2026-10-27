/**
 * @file NodeFactory.hpp
 * @brief Declaration of the NodeFactory class.
 * @author Piotr Majchrzak
 * @date 18/10/2026
 */

#ifndef NodeFactory_hpp
#define NodeFactory_hpp

#include "Node.hpp"
#include <stdio.h>

/**
 * @class NodeFactory
 * @brief Creates new nodes for the list.
 */
class NodeFactory {
public:
    /**
     * @brief Creates a new node with the given value.
     * @param value Value to store in the node.
     * @return Pointer to the created node.
     */
    static Node *create(int value);
};

#endif /* NodeFactory_hpp */
