#include<bits/stdc++.h>
#include"graphList.h"
using namespace std;

void DFS(struct Graph *G, int vertex)
{
	struct node *adjList = G->adjLists[vertex];
    struct node *temp = adjList;

    G->visited[vertex] = 1;
    printf("Visited %d \n", vertex);

    while (temp != NULL)
    {
        int connectedVertex = temp->vertex;

        if (G->visited[connectedVertex] == 0)
        {
            DFS(G, connectedVertex);
        }
        temp = temp->next;
    }
}

void DFS(struct Graph *G)
{
	struct node *adjList = G->adjLists[0];
    struct node *temp = adjList;

    G->visited[0] = 1;
    int connectedVertex = temp->vertex;
    printf("Visited %d \n", connectedVertex);

    while (temp != NULL)
    {
        connectedVertex = temp->vertex;

        if (G->visited[connectedVertex] == 0)
        {
            DFS(G, connectedVertex);
        }
        temp = temp->next;
    }
}


void DFS(struct Graph *G, int vertex, int dest)
{
	struct node *adjList = G->adjLists[vertex];
    struct node *temp = adjList;

    G->visited[vertex] = 1;
    printf("Visited %d \n", vertex);

    while (temp != NULL)
    {
        int connectedVertex = temp->vertex;

        if (G->visited[connectedVertex] == 0)
        {
            DFS(G, connectedVertex);
        }
        temp = temp->next;
    }
    if(G->visited[dest] == 0)
        {
        	cout<<dest<<" is unreachable from "<<vertex<<endl;
		}
	else
		{
			cout<<dest<<" is reachable from "<<vertex<<endl;
		}
}


