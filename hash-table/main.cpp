#include <iostream>
#include "src/HashTable.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    auto *ht = new HashTable();

    auto *bucket1 = new Bucket<int>;
    bucket1->key = "key1";
    bucket1->value = new int(5);

    ht->insert(
        bucket1
    );

    auto *bucket2 = new Bucket<int>;
    bucket2->key = "key2";
    bucket2->value = new int(6);

    ht->insert(
            bucket2
    );

    ht->printTable();

    return 0;
}