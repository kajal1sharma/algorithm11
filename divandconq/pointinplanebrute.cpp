#include <iostream>
#include <cmath>
using namespace std;


class Point{
    public:
    int x;
    int y;
};
int main()
{
  Point p[5];
  
  p[0].x=2;
  p[0].y=3;
  
  p[1].x=5;
  p[1].y=3;
  
  p[2].x=9;
  p[2].y=4;
  
  p[3].x=12;
  p[3].y=6;
  
  p[4].x=12;
  p[4].y=5;
  
  Point a1,a2;
  float min=999;
  for(int i=0;i<4;i++){
      for(int j=i+1;j<5;j++){
          int distance=sqrt((p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y));
          if(distance<min){
              min=distance;
              a1.x=p[i].x;
              a1.y=p[i].y;
              
              a2.x=p[j].x;
              a2.y=p[j].y;
          }
      }
  }
  
  cout<<"the two points are\n";
  cout<<a1.x<< "  :  "<<a1.y<<"\n";
  cout<<a2.x<<"  :  "<<a2.y<<endl;
  cout<<"with distance "<<min;
    return 0;
}
