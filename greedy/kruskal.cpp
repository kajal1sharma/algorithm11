#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int mst[5];

int find(int i){
    while(mst[i]!=i){
        i=mst[i];
        
    }
    
    return i;
}
void unions(int i,int j){
    int a=find(i);
    int b=find(j);
    
    mst[a]=b;
}
void kruskal(int graph[5][5],int n){
    for(int i=0;i<n;i++){
        mst[i]=i;
    }
    int edges=0;
    while(edges<n-1){
        
        int min=INT_MAX;
        int a=-1;
        int b=-1;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(find(i)!=find(j) && graph[i][j]<min){
                    min=graph[i][j];
                    a=i;
                    b=j;
                }
            }
        }
        //connect
        unions(a,b);
        cout<<a<<"--->"<<b<<"  with cost    ->  "<<min<<endl;
        edges++;
        
    }
    
}
int main()
{
  int graph[5][5]={
      {INT_MAX,1,12,INT_MAX,INT_MAX},
      {1,INT_MAX,6,8,3},
      {12,6,INT_MAX,4,INT_MAX},
      {INT_MAX,8,4,INT_MAX,INT_MAX},
      {INT_MAX,3,INT_MAX,INT_MAX,INT_MAX}
  };

kruskal(graph,5);
    return 0;
}
