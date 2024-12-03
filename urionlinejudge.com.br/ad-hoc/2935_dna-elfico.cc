#include <iostream>
#include <map>
#include <string>

using namespace std;

#define MAX 100000

int main()
{
    int t, n, i, j;
    string elf;
    map<string, bool> elfMap;

    string arr[MAX];

    cin >> t;
    while (t--) {
        cin >> n;

        for (i = 0; i < n; i++) {
            cin >> elf;
            sort(elf.begin(), elf.end());
            elfMap[elf] = true;
            arr[i] = elf;
        }

        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                cout << arr[i] << endl;
            }
        }

        // for (map<string, bool>::iterator it = elfMap.begin(); it != elfMap.end(); it++) {
        //     cout << it->first << " " << it->second << endl;
        // }
        elfMap.clear();
    }

    return 0;
}
