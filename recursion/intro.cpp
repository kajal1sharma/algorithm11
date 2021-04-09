//binary seqarch
#include <iostream>

using namespace std;
void print(int a){
    if(a==4)
    return;
    cout<<"hi iam a print function!!";
    print(a+1);
}
int main()
{
   print(2);
    return 0;
}
