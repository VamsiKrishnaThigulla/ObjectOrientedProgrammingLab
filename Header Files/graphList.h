#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;

struct node
{
    int vertex;
    struct node *next;
};

struct Graph
{
    int numVertices;
    int *visited;
    struct node **adjLists; // we need int** to store a two dimensional array. Similary, we need struct node** to store an array of Linked lists
};

struct node *createNode(int v)
{
    struct node *newNode = (node *)malloc(sizeof(struct node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
};

struct Graph *createGraph(int vertices)
{
    struct Graph *graph = (Graph *)malloc(sizeof(struct Graph));
    graph->numVertices = vertices;

    graph->adjLists = (node **)malloc(vertices * sizeof(struct node *));

    graph->visited = (int *)malloc(vertices * sizeof(int));

    int i;
    for (i = 0; i < vertices; i++)
    {
        graph->adjLists[i] = NULL;
        graph->visited[i] = 0;
    }
    return graph;
};

void addedge(struct Graph *graph, int src, int dest)
{
    // Add edge from src to dest
    struct node *newNode = createNode(dest);
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;

    // Add edge from dest to src
    newNode = createNode(src);
    newNode->next = graph->adjLists[dest];
    graph->adjLists[dest] = newNode;
};

void printgraph(struct Graph *graph)
{
    int v;
    for (v = 0; v < graph->numVertices; v++)
    {
        struct node *temp = graph->adjLists[v];
        printf("\n Adjacency list of vertex %d\n ", v);
        while (temp)
        {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }
}

