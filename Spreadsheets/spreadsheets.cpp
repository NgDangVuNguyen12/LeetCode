#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string numToCol(int col)
{
    string x = "";

    while (col > 0)
    {
        col--;
        char c = 'A' + (col % 26);
        x = c + x;
        col /= 26;
    }

    return x;
}

int colToNum(string col)
{
    int x = 0;

    for (int i = 0; i < col.length(); i++)
    {
        x = x * 26 + (col[i] - 'A' + 1);
    }

    return x;
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;

        if (s[0] == 'R' && isdigit(s[1]))
        {
            int posC = s.find('C');

            string rowStr = s.substr(1, posC - 1);
            int row = stoi(rowStr);

            string colStr = s.substr(posC + 1);
            int col = stoi(colStr);

            cout << numToCol(col) << row << endl;
        }
        else
        {
            int pos = 0;

            while (pos < s.length() && isalpha(s[pos]))
            {
                pos++;
            }

            string colName = s.substr(0, pos);
            string rowStr = s.substr(pos);

            int col = colToNum(colName);
            int row = stoi(rowStr);

            cout << "R" << row << "C" << col << endl;
        }
    }

    return 0;
}