#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int const N = 10;
int count = 0;
 
void Sort(int a[], int n) {
    int i,j,k,t;
    for(i = 0; i < n - 1; ++i) {
        k = i;
        for(j = i + 1; j < n; ++j) {
            if(a[k] < a[j]) k = j;
        }
        if(i != k) {
            t = a[i];
            a[i] = a[k];
            a[k] = t;
        }
    }
}
 
int DelSame(int a[], int n) {
    int i,j,k;
    for(i = 0; i < n - 1; ++i) {
        for(j = i + 1; j < n; ++j) {
            if(a[i] == a[j]) {
                for(k = j; k < n - 1; ++k)
                    a[k] = a[k + 1];
                --n;
                --j;
            }
        }
    }
    return n;
}
 
void Show(int a[], int n) {
    int i;
    for(i = 0; i < n; ++i)
        printf("%d ",a[i]);
    printf("\n");
}
 
int main() {
    int a[10],i,n;
    srand(time(0));
    for(i = 0; i < N; i++)
        a[i] = rand()%10;
    printf("排序前:\n");
    Show(a,N);
    Sort(a,N);
    printf("排序后:\n");
    Show(a,N);
    n = DelSame(a,N);
    printf("删除相同元素后:\n");
    Show(a,n);
    return 0;
}