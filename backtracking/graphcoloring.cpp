#include <iostream>

using namespace std;

bool checkconstraint(int graph[6][6],int color[6],int c,int vertex){
    
    for(int i=0;i<6;i++){
        if(graph[vertex][i]==1   &&  color[i]==c){
            return false;
        }
        
    }
    
    return true;
    
}

bool colorgraph(int graph[6][6], int color[6],int n,int vertex){
    
    if(vertex==6){
        return true;
    }
    
    for(int i=1;i<=n;i++){
        if(checkconstraint(graph,color,i,vertex)==true){
            color[vertex]=i;
            
            if(colorgraph(graph,color,n,vertex+1)==false){
                color[vertex]=0;
            }
            else{
                return true;
            }
        }
    }
    
    return false;
    
}

int main()
{
   int graph[6][6]={{0,1,1,0,0,0},
   {1,0,0,1,1,0},
   {1,0,0,1,0,1},
   {0,1,1,0,0,1},
   {0,1,0,0,0,0},       
   {0,0,1,1,0,0}};
   
   int n=3;
   
   int color[6]={0,0,0,0,0,0};
   
   if(colorgraph(graph,color,n,0)==true){
       for(int i=0;i<6;i++){
           cout<< color[i]<<"  ";
       }
   }
   else{
       cout<<"we cannot color this graph using  "<<n<<"  colors";
   }
    return 0;
}
