#include "LinkedList.h"
#include <stdlib.h>

// Retorna uma nova lista com o elemento fornecido
Node *create(int toAdd) {
	Node *newNode = (Node *) malloc (sizeof(Node));
	newNode->data = toAdd;
	newNode->next = NULL;
	return newNode;
}

// Adiciona um nó no início da lista
void add(int toAdd, Node **list) {
	Node *newNode = (Node *) malloc (sizeof(Node));
	newNode->data = toAdd;
	newNode->next = *list;
	*list = newNode;
}

// Remove a node on the specified index
void removeNode(int index, Node **list) {
	Node *i;
	int j = 0;
	for(i=*list; i != NULL; i = i->next)
	{
		if(j==index-1)
		{
			break;
		}
		j++;
	}
	if(i==NULL)
	{
		printf("Index is greater than the list length!!\n");
		exit(1);
	}
	Node *toRemove = i->next;
	i->next = i->next->next;
	free(toRemove);
}

// Retorna o nó na posição especificada
Node *getNode(int index, Node *list) {
	Node *i;
	int j = 0;
	for(i=list; i != NULL; i = i->next)
	{
		if(j==index)
		{
			return i;
		}
		j++;
	}
	exit(1);
}

// Apaga a lista
void clearList(Node *list)
{
	Node *i;
	for(i=list; i != NULL; i = i->next)
	{
		free(i);
	}
}
