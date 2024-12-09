#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_inorder - Parcourt un arbre binaire en ordre
 * @tree: Pointeur vers la racine de l'arbre
 * @func: Pointeur vers la fonction à appliquer sur chaque nœud
 *
 * Description:
 * Cette fonction parcourt un arbre binaire en suivant le parcours en ordre
 * (in-order) et applique la fonction `func` à chaque nœud de l'arbre.
 * Le parcours en ordre consiste à visiter d'abord le sous-arbre gauche,
 * puis la racine, et enfin le sous-arbre droit.
 *
 * Si l'arbre est vide (tree est NULL) ou si la fonction func est NULL,
 * la fonction ne fait rien.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))

{
if (tree == NULL || func == NULL)
{
return;
}

if (tree->left != NULL)
{
binary_tree_inorder(tree->left, func);
}

func(tree->n);

if (tree->right != NULL)
{
binary_tree_inorder(tree->right, func);
}
}

