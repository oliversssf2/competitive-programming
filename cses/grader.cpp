#include <cstdio>
#include <cstdlib>
using namespace std;
void init(int);
int whereis(int);

int ARRAY[1000];

int smaller(int i, int j) {
    if (ARRAY[i] < ARRAY[j]) return 1;
    else return 0;
}
int main() {
    int n, m, i, k;
    scanf ("%d %d", &n, &m);
    for (int i=0; i<n; i++) {
        scanf ("%d", &ARRAY[i]);
    }
    init(n);
    for (i=0; i<m; i++) {
        scanf ("%d", &k);
        printf("User function returns: %d\n", whereis(k));
    }
    return 0;
}