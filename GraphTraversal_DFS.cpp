#include <cstdio>
#include <cstring>
#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
#include <iostream>
#include <math.h>

using namespace std;

#define sc2(a, b) scanf("%d%d", &a, &b)
#define scan(x) cin>>x
#define fr(i, a, n) for(int i = (a); i < (n); i++)
#define println(x) cout<<x<<"\n";

#include <list>
#include <map>

/**If you want the graph to be a generic type, That means we'll define a tempate
class so that we can work with a  graph of integers, we can work with a graph of strings.*/
template <typename T>

class Graph{
    map<T, list<T>> l; /** This means that if we define T as int then his line will be map<int, List<int>> l;*/

public:
    void addEdge(int x, int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void dfs_helper(T src, map<T, bool> &visited){
        // Recursive function that will traverse the graph

        cout << src << " ";
        visited[src] = true;
        //go to all neighbor of that node that is not visited
        for(T nbr : l[src]){
            if(!visited[nbr]){
                dfs_helper(nbr, visited);
            }
        }
    }

    void dfs(T src){
        map<T, bool> visited;
        // Mark all the nodes as not visited in the beginning.
        for(auto p : l){
            T node = p.first;
            visited[node] = false;
        }
        dfs_helper(src, visited);
    }
};

int main(){

    Graph<int> g;
    g.addEdge(0,1);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);

    g.dfs(0);

    return 0;
}
