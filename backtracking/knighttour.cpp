
#include <iostream>

using namespace std;
bool constraintcheck(int board[8][8],int x,int y){
    if(x>=0 && x<=7 && y>=0 && y<=7 && board[x][y]==0){
        return true;
    }
    return false;
}
bool knighttour(int board[8][8],int move ,int x,int y){
    
    if(move==65){
        return true;
    }
    
    int xoptions[8]={2,1,-1,-2,-2,-1,1,2};
    int yoptions[8]={1,2,2,1,-1,-2,-2,-1};
    
    for(int i=0;i<8;i++){
        int nx=x+xoptions[i];
        int ny=y+yoptions[i];
        
        if(constraintcheck(board,nx,ny)==true){
            board[nx][ny]=move;
            if(knighttour(board,move+1,nx,ny)==false){
                board[nx][ny]=0;
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
   int board[][]={{0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0}};
                    
                    board[0][0]=1;
                    
                    if(knighttour(board,2,0,0)==true){
                       for(int i=0;i<8;i++){
                           for(int j=0;j<8;j++){
                               cout<<board[i][j]<<" "
                           }
                           cout<<"\n";
                       } 
                    }
                    else{
                        cout<<"not possible ";
                    }

    return 0;
}
