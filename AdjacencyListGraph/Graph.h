#include "LinkedList.h"

typedef struct G {
	int size;
	Node *vertices;
}Graph;

Graph *createGraph(int v);
void addEdge(int from, int to, Graph *g);

