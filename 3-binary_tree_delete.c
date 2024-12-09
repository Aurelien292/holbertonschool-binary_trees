#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Supprime un arbre binaire entier
 * @tree: Pointeur vers le nœud racine de l'arbre à supprimer
 */
void binary_tree_delete(binary_tree_t *tree)
{
binary_tree_t *current, *temp;
binary_tree_t **stack;
int top = -1;
int max_size = 1000; // Ajustez selon la taille maximale attendue de l'arbre

if (tree == NULL)
return;

stack = malloc(sizeof(binary_tree_t*) * max_size);
if (stack == NULL)
return;

current = tree;

while (current != NULL || top >= 0)
{
while (current != NULL)
{
if (current->right)
stack[++top] = current->right;
stack[++top] = current;
current = current->left;
}

current = stack[top--];

if (top >= 0 && current->right && current->right == stack[top])
{
temp = stack[top--];
stack[++top] = current;
current = temp;
}
else
{
free(current);
current = NULL;
}
}

free(stack);
}
