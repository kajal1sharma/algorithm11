//fractional knapsack
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

struct vegetable{
    string name;
    int value;
    int weight;
    
    vegetable(string name,int value, int weight){
        this->name=name;
        this->value=value;
        this->weight=weight;
    }
};
bool compare(struct vegetable veg1,struct vegetable veg2){
    float v1=(float)veg1.value/(float)veg1.weight;
    float v2=(float)veg2.value/(float)veg2.weight;
    
    if(v1>v2)
    return true;
    else
    return false;
}
void  fractionalknapsack(struct vegetable list[],int n,int weight_of_vegetable){
    //descending sort
    sort(list,list+n,compare);
    // for(int i=0;i<n;i++){
    //     cout<<list[i].name<<endl;
    // }
    
    float cost=0;
    int weight=0;
    for(int i=0;i<n;i++){
        if(weight+list[i].weight<=weight_of_vegetable){
            weight=weight+list[i].weight;
            cost=cost+list[i].value;
            cout<<list[i].name<<" + ";
        }
        else{
            int remainweight=weight_of_vegetable-weight;
            cost=cost+((float)list[i].value/(float)list[i].weight)*remainweight;
            break;
        }
    }
    
    cout<<"  = "<< cost;
}
int main()
{
    vegetable list[]={{"potato",1000,100},{"ladyfinger",2000,10},{"cauliflower",500,10},{"brinjal",100,10},{"tomatoes",2000,50}};
    int weight_of_vegetable=100;
    fractionalknapsack(list,5,weight_of_vegetable);
    return 0;
}
