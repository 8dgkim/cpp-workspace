#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    int i, j;

    getline(cin, str);

    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; j < = i; j++) {
            cout << str[j];
        }
        cout << '\n';
    }
    
    return 0;
}