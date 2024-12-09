#ifndef BINARY_TREES_H
#define BINARY_TREES_H
#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
int n;
struct binary_tree_s *parent;
struct binary_tree_s *left;
struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;

void binary_tree_print(const binary_tree_t *tree);
/* Exercice 0*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Exercice 1*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* Exercice 2*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* Exercice 3*/
void binary_tree_delete(binary_tree_t *tree);

/* Exercice 4*/
int binary_tree_is_leaf(const binary_tree_t *node);

/* Exercice 5*/
int binary_tree_is_root(const binary_tree_t *node);

/* Exercice 6*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* Exercice 7*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* Exercice 8*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* Exercice 9*/
size_t binary_tree_height(const binary_tree_t *tree);

/* Exercice 10*/
size_t binary_tree_depth(const binary_tree_t *tree);

/* Exercice 11*/
size_t binary_tree_size(const binary_tree_t *tree);

/*Exercice 12*/
size_t binary_tree_leaves(const binary_tree_t *tree);

/* Exercice 13*/
size_t binary_tree_nodes(const binary_tree_t *tree);

/* Exercice 14*/
int binary_tree_balance(const binary_tree_t *tree);

/* Exercice 15*/
int binary_tree_is_full(const binary_tree_t *tree);

/* Exercice 16*/
int binary_tree_is_perfect(const binary_tree_t *tree);

/* Exercice 17*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* Exercice 18*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

#endif
