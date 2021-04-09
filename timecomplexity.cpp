//constant time 
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i=n;i>=0;i=i/2){
        //......10,5,2,1,10=>5
        //50,25,12,6,3,1,0=>7
        //10000,5000,2500,1250,625,312,156,78,39,19,9,4,2,1,0=>15   log n 
    }
    
    //
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //       for(int k=0;k<n;k++){
    //         //..... 
    //       }
    //     }
    // }
    // //O(n*n*n)
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //       //..... 
    //     }
    // }
    //O(n*n)
    
    
    
    // for(int i=0;i<n;i++){
    // //......    
    // }//O(n)
    
    // int arr[100]={1,2,3,4,5};
    // int key;
    // cin>>key;
    // for(int i=0;i<5;i++){
        
    //     for(int j=0;j<5;j++){
            
            
    //     }
    //     if(arr[i]==key){
    //         cout<<"found";
    //     }
    // }
    
    // int arrsor[]={1,2,3,4,5};
    // int size=sizeof(arrsor)/sizeof(int);
    // int key=1;//best case
   // int key=4;//average case 
    //int key=13;//worst case
    // int flag=0;
    
    //algorithm
    // if(arrsor[0]==key)
    // cout<<"element found at 0";
    // else 
    // cout<<"element not found";
    
    
    // for(int i=0;i<size;i++){
    //     if(arrsor[i]==key){
    //         cout<<"element found at "<<i<<" index";
    //         flag=1;
    //         break;
    //     }
        
    // }
    // if(flag==0){
    //     cout<<"element not found";
    // }

    return 0;
}
