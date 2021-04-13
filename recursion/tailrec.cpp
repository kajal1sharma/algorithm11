//tail recurison
#include <iostream>

using namespace std;

void tailrec(int n){
    if(n==0){
        return;
    }
    else{
    int a=90;
    a=a+n;
    cout<<a<<" "<<n<<endl;//task
    //logic is before the recursive call
    tailrec(n-1);//recurdsion//if this call is after the task =>tail recursion
    }
}

int main()
{
    int n=3;
    tailrec(n);
    return 0;
}
//with return
/*
//tail recurison
#include <iostream>

using namespace std;

int tailrec(int n){
    if(n==0){
        return 10;
    }
    else{
    int a=90;
    a=a+n;
    cout<<a<<" "<<n<<endl;//task
    //logic is before the recursive call
    return tailrec(n-1);//recurdsion//if this call is after the task =>tail recursion
    }
}

int main()
{
    int n=3;
    cout<<tailrec(n);
    return 0;
}

*/
