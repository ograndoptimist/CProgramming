#include <stdio.h>
#include <stdlib.h>

#include "binary_search_tree.h"


int main(int argc, char* argv[])
{
	Node* root;
	root = (Node*) malloc(sizeof(Node));
	int i;
	int items[] = {1, 2, 3, 4, 5, 6};
	printf("Parte 1 completa!\n");

	for(i = 0; i < 6; i++)
	{
		printf("Inserting elements...\n");
		insert_item(root, items[i]);
	}

	for(i = 0; i < 6; i++)
	{
		printf("Searching elements\n");
		search_item(root, items[i]);
	}
		
	return 0;	
}
