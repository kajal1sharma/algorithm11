#include <iostream>

using namespace std;
bool constraintcheck(int board[9][9],int row,int col,int number){
    for(int i=0;i<9;i++){
        if(board[i][col]==number){
            return false;
        }
        
    }
    for(int i=0;i<9;i++){
        if(board[row][i]==number){
            return false;
        }
        
    }
    
    //block
    int x=row-row%3;
    int y=col-col%3;
    
    for(int i=x;i<=x+2;i++){
        for(int j=y;j<=y+2;j++){
            if(board[i][j]==number){
                return false;
            }
        }
    }
    return true;
}
bool sudokusolver(int board[9][9],int row,int col){
    
    if(row ==8 && col ==9){
        return true;
    }
    
    if(col==9 && row !=8){
        col=0;
        row =row+1;
    }
    
    if(board[row][col]!=0){
        return sudokusolver(board , row, col+1);
    }
    //options
    for(int i=1;i<=9;i++){
        if(constraintcheck(board,row,col,i)==true){
            board[row][col]=i;
            
            if(sudokusolver(board,row,col)==false){
               board[row][col]=0; 
            }
            else{
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int grid[9][9] = { {3, 0, 6, 5, 0, 8, 4, 0, 0}, 
         {5, 2, 0, 0, 0, 0, 0, 0, 0}, 
         {0, 8, 7, 0, 0, 0, 0, 3, 1}, 
         {0, 0, 3, 0, 1, 0, 0, 8, 0}, 
         {9, 0, 0, 8, 6, 3, 0, 0, 5}, 
         {0, 5, 0, 0, 9, 0, 6, 0, 0}, 
         {1, 3, 0, 0, 0, 0, 2, 5, 0}, 
         {0, 0, 0, 0, 0, 0, 0, 7, 4}, 
         {0, 0, 5, 2, 0, 6, 3, 0, 0} };
         
         //board , row col
    if(sudokusolver(grid,0,0)==true){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cout<<grid[i][j]<<"\t";
            }
            cout<<"\n\n";
        }
    }
    else{
        cout<<"no solution";
    }

    return 0;
}
