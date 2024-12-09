#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
* binary_tree_size - Mesure la taille d'un arbre binaire
* @tree: Pointeur vers le nœud racine de l'arbre à mesurer
*
* Return: La taille de l'arbre, 0 si tree est NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
