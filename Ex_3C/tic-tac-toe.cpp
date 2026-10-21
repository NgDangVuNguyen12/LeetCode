#include <iostream>
using namespace std;
int main(){
    char board[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> board[i][j];
        }
    }
    // check hàng ngang
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j+=3){
            if(board[i][j] == board[i][j+1] && board[i][j] == board[i][j+2]){
                if(board[i][j] == 'X'){
                    cout << "The first player won" << endl;
                    return 0;
                }
                else{
                    cout << "The second player won" << endl;
                    return 0;
                }
            }
        }
        cout << endl;
    }
    // check hàng dọc
    for(int j = 0; j < 3; j++){
        int i = j;
        if(board[i][j] == board[i+1][j] && board[i][j] == board[i+2][j]){
            if(board[i][j] == 'X'){
                cout << "The first player won" << endl;
                return 0;
            }
            else{
                cout << "The second player won" << endl;
                return 0;
            }
        }
        cout << endl;
    }
    // check đường chéo
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2]){
        if(board[0][0] == 'X'){
            cout << "The first player won" << endl;
            return 0;
        }
        else{
            cout << "The second player won" << endl;
            return 0;
        }
    }
    if(board[0][2] == board[1][1] && board[0][2] == board[2][0]){
        if(board[0][2] == 'X'){
            cout << "The first player won" << endl;
            return 0;
        }
        else{
            cout << "The second player won" << endl;
            return 0;
        }
    }
    // nếu không có người chiến thắng
    int demX = 0;
    int demO = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(board[i][j] == 'X'){
                demX++;
            }
            else if(board[i][j] == 'O'){
                demO++;
            }
        }
    }
    if(demX > demO){
        cout << "Second" << endl;
        return 0;
    }
    else if(demO > demX){
        cout << "First" << endl;
        return 0;
    }
    else{
        cout << "draw" << endl;
        return 0;
    }
    cout << "No winner" << endl;
}