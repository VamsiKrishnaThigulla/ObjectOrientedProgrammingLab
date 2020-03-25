#include<bits/stdc++.h>
#include"dfs.h"
using namespace std;

int main()
{

    struct Graph *graph = createGraph(4);
    addedge(graph, 0, 1);
    addedge(graph, 0, 2);
    addedge(graph, 1, 2);
    addedge(graph, 2, 3);

    printgraph(graph);

    DFS(graph, 2, 4);
    DFS(graph, 2, 3);
    
    return 0;
}

