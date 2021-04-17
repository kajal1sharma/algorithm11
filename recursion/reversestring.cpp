
#include <iostream>

using namespace std;

string reverse(string s,int i){
    if(i==s.length()/2){
        return s;
    }
    else{
        int j=s.length()-1-i;
        
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        
        return reverse(s,i+1);
    }
}

int main()
{
   string s="Techie Delight";
   cout<<reverse(s,0);
  
    return 0;
}
