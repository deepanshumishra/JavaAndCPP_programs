//C++ code


#include <iostream>
include <iostream>
#include <iostream>
using namespace std;

bool isSafe(int board[][10],int i,int j,int n){
    //check for column
    for(int row=0;row<i;row++){
        if(board[row][j]==1){
            return false;
        }
    }
    //check for left diagonal
    int x=i;
    int y=j;
    while(x>=0 && y>=0){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y--;
    }
    //check for right diagonal
    x=i;
    y=j;
    while(x>=0 && y<n){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y++;
    }
    return true;
}

bool solveNQueen(int board[][10],int i,int n){
    //Base Case
    if(i==n){
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==1){
                    count++;
                }
            }
        }
        if(count!=0){
        cout<<"[";
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==1){
                    cout<<j+1<<" ";
                }
            }
        }
        cout<<"] ";
        }
        else{
            cout<<-1;
        }
    }
    //rec case
    for(int j=0;j<n;j++){
        if(isSafe(board,i,j,n)){
            board[i][j]=1;
            bool nextQueenRakhPaye = solveNQueen(board,i+1,n);
            if(nextQueenRakhPaye){
                return true;
            }
            board[i][j]=0;
        }
    }
    return false;
}


int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n==2||n==3){
	        cout<<-1;
	    }
	    else{
	    int board[10][10]={0};
	    solveNQueen(board,0,n);
	    }
	    cout<<endl;
	}
	return 0;
}
