
#include <iostream>

using namespace std;
string compareprefix(string s,string r){
    
    string ans="";
    
    for(int i=0;s[i]!='\0' && r[i]!='\0' ;i++){
        if(s[i]==r[i]){
            ans=ans+s[i];
        }
        else{
            break;
        }
    }
    
    return ans;
}
string prefix(string arr[],int lo,int hi){
    if(lo==hi){
        return arr[lo];
    }
    else{
        int mid=(lo+hi)/2;
        string preleft=prefix(arr,lo,mid);
        string preright=prefix(arr,mid+1,hi);
        
        string ans=compareprefix(preleft,preright);
    return ans;
        
    }
    
}
int main()
{
    
    string arr[]={"abcdredsz","abcjdfgdgf","abkdshfjkdh","abcdkkjfr","abcdfrtr"};
    string ans=prefix(arr,0,4);
    cout<<ans;    
    return 0;
}











