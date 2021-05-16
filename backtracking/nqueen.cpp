
#include <iostream>

using namespace std;

bool checkconstraint(int board[4][4],int row,int col){
    //vertically checking for any other queen
    for(int i=0;i<=row;i++){
        if(board[i][col]==1){
            return false;
        }
    }
//left diag    
    for(int i=row,j=col;i>=0 && j>=0;i--,j--){
        if(board[i][j]==1){
            return false;
        }
    }
    for(int i=row,j=col;i>=0 && j<4;i--,j++){
        if(board[i][j]==1){
            return false;
        }
    }
    
    return true;
}

bool placequeen(int board[4][4], int row){
    if(row==4){
        
        //all the queen have been placed
        return true;
    }
    for(int col=0;col<4;col++){
        if(checkconstraint(board,row,col)==true){
            board[row][col]=1;
            
            //placing the next queen
            if(placequeen(board,row+1)==false){
                board[row][col]=0;
            }
            else{
                return true;
            }
            
        }
        else{
            
        }
        
    }
    
    return false;
    
    
}

int main()
{
    int board[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    
    if(placequeen(board ,0)==true){
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                cout<<board[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    else{
        cout<<"no valid solution\n";
    }


    return 0;
}
