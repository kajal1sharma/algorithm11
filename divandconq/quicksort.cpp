//last ele is chosen as a pivot ele
#include <iostream>

using namespace std;
int partition(int arr[],int lo,int hi){
    int pivot =arr[hi];
    int i=lo;
    int j=hi-1;
    int pivotindex=hi;
    
    while(true){
        
        while(i<hi && arr[i]<pivot){
            i++;
        }
        while(j>lo && arr[j]>pivot){
            j--;
        }
        if(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
        else if(i>=j){
            int temp=arr[i];
            arr[i]=arr[pivotindex];
            arr[pivotindex]=temp;
            pivotindex=i;
            break;
        }
    }
    return pivotindex;
}
void quicksort(int arr[],int lo,int hi){
    if(lo>=hi){
        return ;
    }
    int pivotindex=partition(arr,lo,hi);
    
    quicksort(arr,lo,pivotindex-1);
    quicksort(arr,pivotindex+1,hi);
}
int main()
{
    int arr[]={23,6,9,4,5,7,3};
    int len=sizeof(arr)/sizeof(int); 
    quicksort(arr,0,len-1);
    
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
