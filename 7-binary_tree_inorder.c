#include "binary_trees.h"
/**
 * binary_tree_inorder - function for print inorder tree of left, center, right.
 * @tree: pointer the root in tree.
 * @func: function for print value the node.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	else
	{
		binary_tree_inorder(tree->left, *func);
		func(tree->n);
		binary_tree_inorder(tree->right, *func);
	}
}
