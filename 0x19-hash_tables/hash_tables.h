#ifndef __HASH_TABLES_H__
#define __HASH_TABLES_H__

/**
 * struct hash_node_s - Node of a hash table
 */
typedef struct hash_node_s
{
	char *key; /* unique key as string */
	char *value; /* value corresponding to key */
	struct hash_node_s *next; /* pointer to the next node of the list */
} hash_node_t;


/**
 * struct hash_table_s - Hash table data structure
 */
typedef struct hash_table_s
{
	unsigned long int size; /* size of array */
	hash_node_t **array; /* pointers to heads of linked lists for chaining */
} hash_table_t;

/* task functions */
hash_table_t *hash_table_create(unsigned long int);
unsigned long int hash_djb2(const unsigned char *);
unsigned long int key_index(const unsigned char *, unsigned long int);
int hash_table_set(hash_table_t *, const char *, const char *);
char *hash_table_get(const hash_table_t *, const char *);
void hash_table_print(const hash_table_t *);
void hash_table_delete(hash_table_t *);

/* helper functions */
hash_node_t *new_hash_node(const char *k, const char* v);

#endif /* __HASH_TABLES_H__ */
