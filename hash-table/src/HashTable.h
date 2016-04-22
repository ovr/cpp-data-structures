//
// Created by Дмитрий Пацура on 18.04.16.
//

#ifndef HASH_TABLE_HASHTABLE_H
#define HASH_TABLE_HASHTABLE_H


#include <string>
#include "Bucket.h"

class HashTable {
protected:
    unsigned int capacity;
    unsigned int count;

    void *first = nullptr;

    void *last = nullptr;

    int hash(std::string key);

    ~HashTable();
public:
    void insert(Bucket<int> *bucket);

    void printTable();
};


#endif //HASH_TABLE_HASHTABLE_H
