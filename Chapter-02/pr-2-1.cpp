#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i * 10 + j << '\t';
        }
        cout << '\n';
    }
    
    return 0;
}