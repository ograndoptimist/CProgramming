#include <stdio.h>
#include <stdlib.h>

#include "binary_search_tree.h"


int main(int argc, char* argv[])
{
	Node* root;
	root = (Node*) malloc(sizeof(Node));
	int i;
	int items[] = {100, 2, 300, 34, 25, 600};
	
	for(i = 0; i < 6; i++)
	{
		printf("Inserting element %d\n", items[i]);
		insert_item(root, items[i]);
	}

	printf("\n");

	items[0] = 600;
	items[1] =  300;
	items[2] = 2;
	items[3] =  25;
	items[4] =  34;
	items[5] =  100;

	for(i = 0; i < 6; i++)
	{
		if(search_item(root, items[i]))
		{
			printf("Elemento %d foi encontrado!\n", items[i]);
		}
	}
		
	return 0;	
}
