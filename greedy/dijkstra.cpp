#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int mindis(int distances[],bool key[],int n){
    int min=INT_MAX;
    int index;
    for(int i=0;i<n;i++){
        if(key[i]==false && distances[i]<=min){
            min=distances[i];
            index=i;
        }
    }
    
    return index;
}
void dijkstras(int graph[6][6],int n,int source){
    int distances[n];
    
    bool key[n];
    
    for(int i=0;i<n;i++){
        distances[i]=INT_MAX;
        key[i]=false;
    }
    
    distances[source]=0;
    
    for(int i=0;i<n-1;i++){
        int u=mindis(distances,key,n);
        key[u]=true;
        
        for(int j=0;j<n;j++){
            if(key[j]==false && graph[u][j]!=0 && distances[u]!=INT_MAX  
            && distances[u]+graph[u][j]<distances[j])
            {
                distances[j]= distances[u]+graph[u][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<"from : "<<i <<" =>  "<<distances[i]<<"\n";
    }
    
}

int main()
{
    int graph[6][6]={
      {0,2,8,7,0,0},
      {2,0,0,0,0,3},
      {8,0,0,0,4,9},
      {7,0,0,0,1,0},
      {0,0,4,1,0,0},
      {0,3,9,0,0,0}
    };
    
    dijkstras(graph,6,0);

    return 0;
}
