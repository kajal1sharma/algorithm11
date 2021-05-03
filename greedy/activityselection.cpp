
#include <iostream>

using namespace std;

int main()
{
    int start[]={6,1,2,3,8,0};
    int end[]={8,2,6,5,9,3};
    
    
    //sorting on the basis of end[]
    for(int i=0;i<6;i++){
        for(int j=0;j<6-i-1;j++){
            if(end[j]>end[j+1]){
                int temp=end[j];
                end[j]=end[j+1];
                end[j+1]=temp;
                
                temp=start[j];
                start[j]=start[j+1];
                start[j+1]=temp;
            }
        }
    }
    
    int endtime=0;
    for(int j=0;j<6;j++){
        if(start[j]>=endtime){
            cout<<"start at :: "<<start[j]<<"  end:: "<<end[j]<<endl;
            endtime=end[j];
        }
    }
    

    return 0;
}
