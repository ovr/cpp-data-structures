//
// Created by Дмитрий Пацура on 18.04.16.
//

#ifndef HASH_TABLE_BUCKET_H
#define HASH_TABLE_BUCKET_H

#include <string>

template<typename Value>
struct Bucket {
    std::string key;
    Value *value;
    Bucket<Value> *next;
};

#endif //HASH_TABLE_BUCKET_H
