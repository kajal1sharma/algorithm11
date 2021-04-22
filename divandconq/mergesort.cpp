#include <iostream>

using namespace std;

void merging(int arr[],int lo,int middle,int high){
    int leftsize=middle-lo+1;
    int rightsize=high-middle;
    int left[leftsize];
    int right[rightsize];
    int k=lo;
    for(int i=0;i<leftsize;i++){
        left[i]=arr[k];
        k++;
    }
     for(int i=0;i<rightsize;i++){
        right[i]=arr[k];
        k++;
    }
    k=lo;
    int j=0,i=0;
    
    while(i<leftsize && j<rightsize){
        if(left[i]>right[j]){
            arr[k]=right[j];
            j++;
            k++;
        }
        else if(left[i]<right[j]){
            arr[k]=left[i];
            i++;
            k++;
        }
    }
    while(i<leftsize){
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<rightsize){
        arr[k]=right[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int lo,int high){
    if(lo>=high){
        return ;
    }
    
    int middle=(high+lo)/2;
    mergesort(arr,lo,middle);
    mergesort(arr,middle+1,high);
    
     merging(arr,lo,middle,high);
}

int main()
{
    int arr[]={4,2,3,5,9,7,8,1};
    int size=sizeof(arr)/sizeof(int);
    
    mergesort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
