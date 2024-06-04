#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree 
{
	int n;
	struct binary_tree *parent;
	struct binary_tree *left;
	struct binary_tree *right;
};
typedef struct binary_tree binary_tree_t;

typedef struct binary_tree_s bst_t;

int main(void)
{
	int var;
}