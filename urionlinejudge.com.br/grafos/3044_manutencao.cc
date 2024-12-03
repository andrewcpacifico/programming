#include <algorithm>
#include <cstring>
#include <iostream>
#include <set>
#include <vector>

#define MAX 400

using namespace std;

int n, time_s, visit[MAX];
vector<int> ADJ[MAX];

int dfs(int u, set<int>& ans){
    int menor = visit[u] = time_s++;
    int filhos = 0;
    for(int i = 0; i<ADJ[u].size(); i++){
       if(visit[ADJ[u][i]]==0){
          filhos++;
          int m = dfs(ADJ[u][i], ans);
          menor = min(menor,m);
          if(visit[u]<=m && (u!=0 || filhos>=2)){
              ans.insert(u);
          }
       }else{
          menor = min(menor, visit[ADJ[u][i]]);
       }
    }
    return menor;
}

set<int> get_articulacoes(){
    set<int> ans;
    time_s = 1;
    memset(visit, 0, n * sizeof(int));
    dfs(0,ans);
    return ans;
}

int main()
{
    int m, x, y, i, count = 1;

    cin >> n >> m;

    while (n != 0 || m != 0) {
        for (i = 0; i < n; i++) ADJ[i].clear();

        for (i = 0; i < m; i++) {
            cin >> x >> y;
            ADJ[x - 1].push_back(y - 1);
            ADJ[y - 1].push_back(x - 1);
        }

        cout << "Teste " << count++ << endl;
        set<int> ans = get_articulacoes();

        if (ans.size() > 0) {
            for (set<int>::iterator iter = ans.begin(); iter != ans.end(); iter++) {
                cout << *iter + 1 << " ";
            }
        } else {
            cout << "nenhum";
        }
        cout << endl << endl;

        cin >> n >> m;
    }

    return 0;
}
