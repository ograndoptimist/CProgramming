/*
   Implementing a Data Abstract Structure: A Binary Search Tree.
   Public methods:
	-> insert_item()
	-> search_item()
*/
#include <stdlib.h>
#include <stdbool.h>


/*
   Binary Search Tree baseline structure
*/
typedef struct Node {
	struct Node* left;
	struct Node* right;
	int data_number;
} Node;


/* function's prototypes */
static Node* search_node(Node* node, int data_item);
bool search_item(Node* root, int data_item);
bool insert_item(Node* root, int data_item);
static Node* create_node(Node* node, int data_item);


/*
   A function that helps to find items on the tree.
   This is not a public function, then is not callable outside this file's scope.
*/
static Node* search_node(Node* node, int data_item)
{
	printf("passou na search_node!\n");
	if(node->data_number == data_item)
	{
		printf("passou na cond 1 da search_node!\n");
	} else if(node->data_number > data_item)
	{
		printf("passou na cond 2 da search_node!\n");
		return search_node(node->left, data_item);
	} else if(node->data_number < data_item)
	{
		printf("passou na cond 3 da search_node!\n");
		return search_node(node->right, data_item);
	}
	printf("passou no final da search_node!");	
	return node;	
}


/*
   A function that finds elements on the tree.
*/
bool search_item(Node* node, int data_item)
{
	printf("passou na search_item!\n");
	if(search_node(node, data_item)->data_number == data_item)
	{
		return true;
	} else
	{
		return false;
	}
}


/*
    A function that inserts elements on the tree.
*/
bool insert_item(Node* node, int data_item)
{
	printf("entrou na insert_item\n");
	if(!(node->data_number))
	{
		printf("cond 1 da insert_item\n");
		node->data_number = data_item;
		return true;		
	} else if(!search_item(node, data_item))
	{
		printf("cond 2 da insert_item\n");
		Node* new_node = create_node(node, data_item);
		new_node->data_number = data_item;
		return true;		
	}
	return false;	
}


/*
   A function that helps to insert items on the tree.
   This is not a public function, then is not callable outside this file's scope.
*/
static Node* create_node(Node* node, int data_item)
{	
	Node* new_node = (Node*) malloc(sizeof(Node));
	Node* parent = search_node(node, data_item);
	
	if((parent->left == NULL) && (parent->data_number > data_item))
	{
		parent->left = new_node;			
	} else if((parent->right == NULL) && (parent->data_number < data_item))
	{
		parent->right = new_node;
	}
	return new_node;	
}
