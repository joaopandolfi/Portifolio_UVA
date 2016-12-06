#include <cstdio>
#include <iostream>
#include <string>
#include <map>
using namespace std;

#define gigante unsigned long long

int main() {
    int a, b;
    map<string, gigante> mapa;
    scanf("%d %d",&a,&b);

    int i=a;
    while(i--) {
        gigante v;
        string st;
        cin >> st >> v;
        mapa[st] = v;
    }

    i = b;
    while(i--) {
        gigante result = 0;
        string str;

        cin >> str;
        
        while ((str.length() != 1 || str[0] != '.')){
            result += mapa[str];
            cin >> str;
        }
        printf("%llu\n",result);
    
    }
    return 0;
}