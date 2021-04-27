
#include <iostream>

using namespace std;

int power(int x,int y){
    
    if(y==1){
        return x;
    }
    if(y%2==0)
    return power(x,y/2)*power(x,y/2);
    else if(y%2!=0){
        return x*power(x,y/2)*power(x,y/2);
    }
}
int main()
{
    int x=2;
    int y=10;
    
    int result=power(x,y);
cout<<result;
    return 0;
}
