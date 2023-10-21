#ifndef LINKED
#define LINKED

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - Singly linked list node
 * @str: String stored in the node (malloc'ed string)
 * @len: Length of the string
 * @next: Pointer to the next node in the list
 *
 * Description: This structure represents a node in a singly linked list.
 * Each node stores a string and its length. The 'next' pointer points to
 * the next node in the list. Memory for the 'str' member is allocated using
 * malloc and should be freed when the node is no longer needed.
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /*LINKED*/
