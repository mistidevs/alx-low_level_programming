#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "hetairas", "woza");
    hash_table_set(ht, "mentioner", "wozi");
    hash_table_set(ht, "heliotropes", "wota");
    hash_table_set(ht, "neurospora", "wora");
    return (EXIT_SUCCESS);
}
