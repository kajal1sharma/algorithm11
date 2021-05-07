/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int minimum(int key[],bool mstvertex[],int n){
    int min=INT_MAX;
    int index;
    for(int i=0;i<n;i++){
        if(mstvertex[i]==false  && key[i]<min){
            min=key[i];
            index=i;
        }
    }
    return index;
}
void prims(int graph[7][7],int n){
    
    
    int key[n];
    bool mstvertex[n];
    int mst[n];
    for(int i=0;i<n;i++){
        key[i]=INT_MAX;
        mstvertex[i]=false;
    }
    
    key[0]=0;
    mst[0]=-1;
    
    for(int i=0;i<n;i++){
        int u=minimum(key,mstvertex,n);
        
        mstvertex[u]=true;
        
        for(int j=0;j<n;j++){
            if(graph[u][j]!=0  &&  mstvertex[j]==false && graph[u][j]<key[j]) {
                mst[j]=u;
                key[j]=graph[u][j];
            }       
        }
    }
    
    for(int i=1;i<n;i++){
        cout<<mst[i]<<"  :  "<<i<<"   = " <<graph[i][mst[i]]<<"\n";
    }
}

int main()
{
    int graph[7][7]={{0,5,1,4,0,0,0},
    {5,0,0,8,0,6,0},
    {1,0,0,3,2,0,0},
    {4,8,3,0,0,8,0},
    {0,0,2,0,0,7,9},
    {0,6,0,8,7,0,0},
    {0,0,0,0,9,0,0}};
    
    prims(graph,7);
    
    
    return 0;
}
