
//Write a function for mutliply(a, b), where a and b are both positive
//integers, but you can only use the + or − operators.
#include <iostream>

using namespace std;

int multiply(int a,int b){
    if(a==0){
        return 0;
    }
    else{
        return b+multiply(a-1,b);
    }
}

int main()
{
    int a=3;
    int b=4;
    
    cout<<multiply(a,b);
    return 0;
}
