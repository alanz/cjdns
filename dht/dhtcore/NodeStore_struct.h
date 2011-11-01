#ifndef NODE_STORE_STRUCT_H
#define NODE_STORE_STRUCT_H

#include "dht/dhtcore/NodeStore.h"

/** A list of DHT nodes. */
struct NodeStore
{
    /** The address prefix of the address of "our" node. */
    uint32_t thisNodePrefix;

    /** A pointer to the first of an array of node headers. */
    struct NodeHeader* headers;

    /**
     * A pointer to the first of the array of nodes
     * Each node corrisponds to the header at the same index in the header array.
     */
    struct Node* nodes;

    /** The maximum number of nodes which can be allocated. */
    uint32_t capacity;

    /** The number of nodes in the list. */
    uint32_t size;
};

#endif
