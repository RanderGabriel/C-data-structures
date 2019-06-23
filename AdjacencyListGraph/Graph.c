#include <stdlib.h>
#include "Graph.h"

Graph *createGraph(int v)
{
	int i;
	Graph *g = (Graph *) malloc (sizeof(Graph));
	g->size = v;
	g->vertices = (Node *) malloc (v*sizeof(Node));
	for(i = 0; i < v; i++)
	{
		g->vertices[i].next = NULL;
	}
	return g;
}

void addEdge(int from, int to, Graph *g)
{
	Node *fromNode = (Node *) malloc (sizeof(Node));
	fromNode->data = from;
	fromNode->next = g->vertices[to].next;
	g->vertices[to].next = fromNode;
	
	Node *toNode = (Node *) malloc (sizeof(Node));
	toNode->data = to;
	toNode->next = g->vertices[from].next;
	g->vertices[from].next = toNode;
}
