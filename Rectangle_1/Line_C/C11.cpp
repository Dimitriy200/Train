// Включение всех заголовков
#include<bits/stdc++.h>


#define inf 0x3f3f3f3f
#define maxm 100005
#define maxn 2005

//Структура, позволяющая обрабатывать два объекта как один объект
// #define PII pair<int, int>
//
// #define fi first
// #define se second

//Псевдонимы
// typedef long long ll;
// typedef unsigned long long ull;

using namespace std;

//Вычисление арккосинуса
// const double pi         =   acos(-1);
// const int mod           =   998244353;
// const double eps        =   1e-10;
const int N             =   1e2+10;

int n;
int a[N];

int main() {
    /*
    Определяет, синхронизируются ли стандартные потоки C++ со стандартными потоками C после каждой операции ввода-вывода.
    Нужно для оптимизации ввода вывода. https://codeforces.com/blog/entry/5217?locale=ru
    относится к ф-ии tie
    */
    ios_base::sync_with_stdio(false);
    
    cin.tie(0);
    cout.tie(0);
    
    //int a,b,c;   ---- ?
    int t;
    
    cin>>t;
    
    while(t--){
        cin>>n;
        
        for(int i=1; i<=n; i++)
            cin>>a[i];

        int res=a[1];
        
        for(int i=2;i<=n;i++)
            res&=a[i];
        
        cout<<res<<endl;
        system("pause");
    }
    return 0;
}