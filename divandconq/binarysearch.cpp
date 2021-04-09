//binary seqarch
#include <iostream>

using namespace std;
int binarysearch(int arr[],int lo,int hi,int key){
    if(lo>hi){
        return -1;
    }
    int middle=(lo+hi)/2;
    
    if(arr[middle]==key){
        return middle;
    }
    else if(arr[middle]<key){
        return binarysearch(arr,middle+1,hi,key);
    }
    else if(arr[middle]>key){
        return binarysearch(arr,lo,middle-1,key);
    }
}
int main()
{
    //sorted order elements 
    int arr[]={2,4,5,6,7,8,9,10};
    int len=sizeof(arr)/sizeof(int);
    //int key=4;//average case
     //int key=6;//best case 
    // int key=3;//worst case
     int key=11;//worst case
    
    int index= binarysearch(arr,0,len-1,key);

if(index==-1){
    cout<<"element not found";
}    
else{
    cout<<"found at "<<index<<" index";
}
    return 0;
}
