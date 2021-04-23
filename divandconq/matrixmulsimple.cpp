#include <iostream>

using namespace std;

int main(){
int A[4][4],B[4][4];


cout<<"enter the inputs of A\n";

for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cin>>A[i][j];
    }
}
cout<<"enter the inputs of B\n";
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cin>>B[i][j];
    }
}
int C[4][4];

for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        C[i][j]=0;
        for(int k=0;k<4;k++){
            C[i][j]=C[i][j]+A[i][k]*B[k][j];
        }
    }
}


for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cout<<C[i][j]<<" ";
        
    }
    cout<<endl;
}
return 0;
}