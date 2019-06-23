#include <stdio.h>

struct n {
	void *data;
	struct n *next;
};

typedef struct n Node;

// Adiciona um n� no in�cio da lista
void add(void *toAdd, Node **list);
// Remove a node on the specified index
void removeNode(int index, Node **list);
// Retorna o n� na posi��o especificada
Node *getNode(int index, Node *list);
// Apaga a lista
void clearList(Node *list);
