//
// Created by Дмитрий Пацура on 18.04.16.
//

#ifndef HASH_TABLE_HASHTABLE_H
#define HASH_TABLE_HASHTABLE_H


#include <string>
#include <iostream>
#include "Bucket.h"

template <typename Value>
class HashTable {
protected:
    unsigned int capacity;
    unsigned int count;

    Bucket<Value> *first = nullptr;

    Bucket<Value> *last = nullptr;

    int hash(std::string key) {
        int value = 0;

        for (int i = 0; i < key.length(); i++) {
            value += key[i];
        }

        return value % capacity;
    }

    ~HashTable() {

    }
public:
    void insert(const std::string key, const Value &value) {
        auto *bucket = new Bucket<Value>;
        bucket->key = key;
        bucket->value = new Value(value);

        if (!this->first) {
            this->first = bucket;
        }

        if (this->last) {
            auto *last = this->last;
            last->next = bucket;
        }

        this->last = bucket;

        this->count++;
    }

    void insertBucket(Bucket<Value> *bucket) {
        if (!this->first) {
            this->first = bucket;
        }

        if (this->last) {
            auto *last = this->last;
            last->next = bucket;
        }

        this->last = bucket;

        this->count++;
    }


    void printTable() {
        if (this->count > 0) {
            auto *bucket = this->first;

            while (bucket) {
                std::cout << "key: " << bucket->key << " value: " << *bucket->value << std::endl;

                bucket = bucket->next;
            }
        }
    }
};


#endif //HASH_TABLE_HASHTABLE_H
