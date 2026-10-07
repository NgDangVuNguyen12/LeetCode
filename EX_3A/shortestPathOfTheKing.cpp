#include <iostream>
using namespace std;

int main() {

    char board[8][8];
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            board[i][j] = ' ';
        }
    }

    // for (int i = 7; i >= 0; i--) {
    //     for (int j = 0; j < 8; j++) {
    //         cout << char('a' + j) << i + 1 << " ";
    //     }
    //     cout << endl;
    // }

    string dbd, dkt;
    cout << "Nhap toa do dau: ";
    cin >> dbd;
    cout << "Nhap toa do ket thuc: ";
    cin >> dkt;

    char xdbd = dbd[0];
    char xdkt = dkt[0];
    
    int sdbd = dbd[1] - '0';
    int sdkt = dkt[1] - '0';
    int dem = 0;

    while (xdbd != xdkt || sdbd != sdkt){
        int vtri1 = xdbd - xdkt;
        int vtri2 = sdbd - sdkt;

        if(vtri1 < 0 && vtri2 < 0){
            sdbd++;
            xdbd++;
            dem++;
        }
        else if(vtri1 < 0 && vtri2 > 0){
            sdbd--;
            xdbd++;
            dem++;
        }
        else if(vtri1 > 0 && vtri2 < 0){
            sdbd++;
            xdbd--;
            dem++;
        }
        else if(vtri1 > 0 && vtri2 > 0){
            sdbd--;
            xdbd--;
            dem++;
        }
        else if(vtri1 == 0 && vtri2 < 0){
            sdbd++;
            dem++;
        }
        else if(vtri1 == 0 && vtri2 > 0){
            sdbd--;
            dem++;
        }
        else if(vtri1 < 0 && vtri2 == 0){
            xdbd++;
            dem++;
        }
        else if(vtri1 > 0 && vtri2 == 0){
            xdbd--;
            dem++;
        }
        else if(vtri1 == 0 && vtri2 == 0){
            break;
        };
    }
    cout << "So buoc di toi thieu la: " << dem << endl;
    sdbd = dbd[1] - '0';
    sdkt = dkt[1] - '0';
    xdbd = dbd[0];
    xdkt = dkt[0];
    while (xdbd != xdkt || sdbd != sdkt){
        int vtri1 = xdbd - xdkt;
        int vtri2 = sdbd - sdkt;

        if(vtri1 < 0 && vtri2 < 0){
            cout << "RU" << endl;
            sdbd++;
            xdbd++;
        }
        else if(vtri1 < 0 && vtri2 > 0){
            cout << "RD" << endl;
            sdbd--;
            xdbd++;
        }
        else if(vtri1 > 0 && vtri2 < 0){
            cout << "LU" << endl;
            sdbd++;
            xdbd--;
        }
        else if(vtri1 > 0 && vtri2 > 0){
            cout << "LD" << endl;
            sdbd--;
            xdbd--;
        }
        else if(vtri1 == 0 && vtri2 < 0){
            cout << "U" << endl;
            sdbd++;
        }
        else if(vtri1 == 0 && vtri2 > 0){
            cout << "D" << endl;
            sdbd--;
        }
        else if(vtri1 < 0 && vtri2 == 0){
            cout << "R" << endl;
            xdbd++;
        }
        else if(vtri1 > 0 && vtri2 == 0){
            cout << "L" << endl;
            xdbd--;
        }
        else if(vtri1 == 0 && vtri2 == 0){
            break;
        };
    }
    return 0;
}