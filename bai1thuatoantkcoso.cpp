#include <bits/stdc++.h>
using namespace std;
int linearsearch(int *a, int n, int x) {
    for(int i=0;i<n;i++) if(a[i]==x) return i;
    return -1;
}
int main() {
    int a[]={4,9,8,5,8};
    int n=5;
    int c=linearsearch(a,n,0);
    cout<<c;
}