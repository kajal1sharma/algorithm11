
#include <iostream>

using namespace std;
//2,4

//5,3  den <num
void Egyptianfraction(int num,int den)
{
    if(den==0 || num==0){
        return;
    }
    if(num%den==0){
    cout<< num/den;    
    }
    
    if(den%num==0){
        cout<<"1/"<<den/num;
        return;
    }

    if(den<num){
        cout<<num/den<<" + ";
        num=num%den;
    
        Egyptianfraction(num,den);
        return;
    }    
    
    int n=den/num+1;
    cout<<"1/"<<n<<" + ";
    
    num=num*n-den;
    den=den*n;
    Egyptianfraction(num,den);
}


int main()
{
    //number=3/5;
    int num=3;
    int den=5;
    Egyptianfraction(num,den);
    return 0;
}
