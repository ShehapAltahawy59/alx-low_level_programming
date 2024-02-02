#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 *
 * Description: function that gives you the index of a key
 *
 * @key: the key
 * @size: the size of the array of the hash table
 *
 * Return: index at which the key/value pair should be stored in the array
 * of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash;

    hash = hash_djb2(key);
    if (hash != 0)
    {
        return (hash % size);
    }
    return (0);
}
