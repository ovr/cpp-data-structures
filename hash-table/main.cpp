#include <iostream>
#include "src/HashTable.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    auto *ht = new HashTable<int>();

    auto *bucket1 = new Bucket<int>;
    bucket1->key = "key1";
    bucket1->value = new int(1);

    ht->printTable();

    ht->insert("key2", 2);
    ht->insert("key3", 3);

    ht->printTable();

    return 0;
}