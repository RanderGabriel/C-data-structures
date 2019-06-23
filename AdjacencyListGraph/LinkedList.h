#include <stdio.h>

struct n {
	int data;
	struct n *next;
};

typedef struct n Node;

// Adiciona um nó no início da lista
void add(int toAdd, Node **list);
// Remove a node on the specified index
void removeNode(int index, Node **list);
// Retorna o nó na posição especificada
Node *getNode(int index, Node *list);
// Apaga a lista
void clearList(Node *list);
