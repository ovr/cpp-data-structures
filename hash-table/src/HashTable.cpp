//
// Created by Дмитрий Пацура on 18.04.16.
//

#include "HashTable.h"
#include <iostream>

int HashTable::hash(std::string key) {
    int value = 0;

    for (int i = 0; i < key.length(); i++) {
        value += key[i];
    }

    return value % capacity;
}

HashTable::~HashTable() {

}

void HashTable::insert(Bucket<int> *bucket) {
    if (!this->first) {
        this->first = bucket;
    }

    if (this->last) {
        auto *last = (Bucket<int>*)this->last;
        last->next = bucket;
    }

    this->last = bucket;

    this->count++;
}

void HashTable::printTable() {
    if (this->count > 0) {
        auto *bucket = (Bucket<int>*)this->first;

        while (bucket) {
            std::cout << "key: " << bucket->key << " value: " << *bucket->value << std::endl;

            bucket = (Bucket<int>*)bucket->next;
        }
    }
}
