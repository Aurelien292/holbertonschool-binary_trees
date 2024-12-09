#include "binary_trees.h"

/**
* binary_tree_depth - Mesure la profondeur d'un nœud dans un arbre binaire
* @tree: Pointeur vers le nœud dont on veut mesurer la profondeur
*
* Return: La profondeur du nœud, 0 si tree est NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
