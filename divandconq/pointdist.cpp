#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;


class Point{
    public:
    int x;
    int y;
};

int comparexaxis(const void* p1,const void*p2){
    Point *a=(Point*)p1;
    Point*b=(Point*)p2;
    int diff=a->x-b->x;
    return diff;
}
int compareyaxis(const void* p1,const void*p2){
    Point *a=(Point*)p1;
    Point*b=(Point*)p2;
    int diff=a->y-b->y;
    return diff;
}
float finddist(Point p1,Point p2){
    float ans=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
    return ans;
}
float bruteforce(Point p[],int n){
    float distance= 9999;
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            float dist=finddist(p[i],p[j]);
            if(dist<distance){
                distance=dist;
            }
        }
    }
    
    return distance;
    
}
float stripminidist(Point strip[],int n){
    float mindist=9999;
    qsort(strip,n,sizeof(Point),compareyaxis);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            float d=finddist(strip[i],strip[j]);
            if(d<mindist){
                mindist=d;
            }
        }
    }
    return mindist;
}
float findclosest(Point p[],int n){
    if(n==3 || n==2){
        return bruteforce(p,n);
    }
    int middle=n/2;
    Point temp=p[middle];
    //left subpart
    float leftmin=findclosest(p,middle);
    float rightmin=findclosest(p,n-middle);
    float mini;
    if(leftmin<rightmin)
    mini=leftmin;
    else
    mini=rightmin;
    
    int stripsize=0;
    Point strip[n];
    for(int i=0;i<n;i++){
        if(abs(p[i].x-temp.x)<mini){
            strip[stripsize]=p[i];
            stripsize++;
        }
    }
    
     float stripmini=stripminidist(strip,stripsize);
     
     if(stripmini<mini)
     return stripmini;
     else
     return mini;
     
    
}

int main()
{
  Point p[5];
  
  p[0].x=5;
  p[0].y=3;
  
  p[1].x=2;
  p[1].y=3;
  
  p[2].x=12;
  p[2].y=5;
  
  p[3].x=12;
  p[3].y=6;
  
  p[4].x=9;
  p[4].y=4;
  
  int n=5;
  //array sort on the basis of x axis
  qsort(p,n,sizeof(Point),comparexaxis);
  
//   for(int i=0;i<=4;i++){
//       cout<<p[i].x<<" ";
//   }
    
    int distance=findclosest(p,n);
    cout<<"the minimum distance is:  "<<distance;
  
    return 0;
}
