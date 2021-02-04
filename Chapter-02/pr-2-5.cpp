#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    int count = 0;
    int i;

    getline(cin, str);

    for (i = 0; str[i] != '\0'; i++) { // 가운데 조건 i < (int)str.length() 도 가능. 그런데 시간이 오래 걸릴 듯?
        if (str[i] == 'x') {
            count++;
        }
    }

    cout << count << '\n';
    
    return 0;
}