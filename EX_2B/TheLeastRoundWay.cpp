#include <iostream>

using namespace std;
int main(){
    int n;
    do{
        cout << "Nhap n = ";
        cin >> n;
    }while(n < 2 || n > 1000);

    char z[n+2];
    int a[1000][1000];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int x = a[0][0];
    int i = 0, j = 0, y = 0;
    while(i != n-1 || j != n-1){
        if(i == n-1){
            j++;
            x = x * a[i][j];
            z[y] = 'R';
            y++;
        }
        else if(j == n-1){
            i++;
            x = x * a[i][j];
            z[y] = 'D';
            y++;
        }
        else if(a[i][j+1] < a[i+1][j]){
            j++;
            x = x * a[i][j];
            z[y] = 'R';
            y++;
        }
        else{
            i++;
            x = x * a[i][j];
            z[y] = 'D';
            y++;
        }
    }

    cout << x << endl;
    for(int i = 0; i < y; i++){
        cout << z[i];
    }

    return 0;
}