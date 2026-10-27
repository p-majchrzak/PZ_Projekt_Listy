/**
 * @file Iterator.hpp
 * @brief Declaration of the Iterator class.
 * @author Piotr Majchrzak
 * @date 18/10/2026
 */

#ifndef Iterator_hpp
#define Iterator_hpp

#include <stdio.h>
#include "Node.hpp"

/**
 * @class Iterator
 * @brief Allows moving through the list.
 *
 * The iterator can move forward and backward
 * and read the value of the current node.
 */
class Iterator {
private:
    /// Pointer to the current node.
    Node *current;

public:
    /**
     * @brief Creates an empty iterator.
     */
    Iterator();

    /**
     * @brief Sets the current node.
     * @param node Pointer to the node.
     */
    void setCurrent(Node *node);

    /**
     * @brief Returns the value of the current node.
     * @return Value stored in the current node.
     */
    int getValue();

    /**
     * @brief Checks if the next node exists.
     * @return True if the next node exists, otherwise false.
     */
    bool hasNext();

    /**
     * @brief Checks if the previous node exists.
     * @return True if the previous node exists, otherwise false.
     */
    bool hasPrevious();

    /**
     * @brief Moves to the next node.
     * @return Value of the next node.
     */
    int next();

    /**
     * @brief Moves to the previous node.
     * @return Value of the previous node.
     */
    int previous();
};

#endif /* Iterator_hpp */
