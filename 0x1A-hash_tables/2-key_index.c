#include "hash_tables.h"

/**
* key_index - computing index of a key from the hashed code
* @key: char key
* @size: size of the hash table
*
* Return: key_index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_code;

hash_code = hash_djb2(key);

return (hash_code % size);
}
