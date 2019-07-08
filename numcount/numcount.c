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

void const_num(int a[],int *p,int n){
    int i;
    for(i=0;i < n;++i) {
        if (a[i]<0)
        *p[0]+=1;
        if (0==a[i])
        *p[1]+=1;
        if (a[i]>0)
        *p[2]+=1;
    }
}
 
int main() {
    int a[10]={-1,-1,-2,0,0,3,2,5,6,6};
    int b[3]={0};
    int *p=b[0];
    int i,n;
    srand(time(0));

    printf("排序前:\n");
    Show(a,N);
    Sort(a,N);
    printf("排序后:\n");
    Show(a,N);
    const_num(a,p,n);
    printf("小于0的个数:%d\n",b[0]);
    printf("等于0的个数:%d\n",b[1]);
    printf("大于0的个数:%d\n",b[2]);
    n = DelSame(a,N);
    printf("删除相同元素后:\n");
    Show(a,n);
    return 0;
}