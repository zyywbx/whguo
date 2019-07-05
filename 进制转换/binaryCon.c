#include <stdio.h>

int main(){
    int num_Dec,Re;
    int count = 0;
    int temp=0;
    int num_Hex[100] ;
    char hex_char[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    printf("输入正整数：\n");
    scanf("%d",&num_Dec);
    while(num_Dec>0){
        Re = num_Dec%16;
        num_Hex[count++] = Re;
        num_Dec=num_Dec/16;
    }
    printf("16进制数:0x");
    for(count=count-1;count>=0;count--){
        temp = num_Hex[count];
        printf("%c",hex_char[temp]);
    }
    printf("\n");
    return 0;
}