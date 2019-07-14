#include <stdio.h>
void tran_Octol(int num_Dec)
{
    int num_Oct[100],Re;
    int temp = 0;
    int count = 0;
    char oct_char[8] = {'0','1','2','3','4','5','6','7','8'};
    printf("8进制数:");
    while(num_Dec>0){
    Re = num_Dec%8;
    num_Oct[count++] = Re;
    num_Dec=num_Dec/8;
    }
    printf("8进制数:");
    for(count=count-1;count>=0;count--){
        temp = num_Oct[count];
        printf("%c",oct_char[temp]);
    }
    printf("\n");
}

void tran_Hex(int num_Dec)
{
    int num_Hex[100],Re;
    int temp = 0;
    int count = 0;
    char hex_char[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    printf("16进制数:0x");
    while(num_Dec>0){
    Re = num_Dec%16;
    num_Hex[count++] = Re;
    num_Dec=num_Dec/16;
    }
    for(count=count-1;count>=0;count--){
        temp = num_Hex[count];
        printf("%c",hex_char[temp]);
    }
}

void tran_Bia(int num_Dec)
{
    int num_bia[100],Re;
    int temp = 0;
    int count = 0;
    char bia_char[2] = {'0','1'};
    while(num_Dec>0){
    Re = num_Dec%2;
    num_bia[count++] = Re;
    num_Dec=num_Dec/2;
    }
    printf("2进制数:");
    for(count=count-1;count>=0;count--){
        temp = num_bia[count];
        printf("%c",bia_char[temp]);
    }
    printf("\n");
}
int main(){
    int tran_num,num_Dec;
    printf("输入正整数：\n");
    scanf("%d",&num_Dec);
    printf("输入要转换的进制\n");
    scanf("%d",&tran_num);
switch(tran_num){
case 2:tran_Bia(num_Dec);break;
case 8:tran_Octol(num_Dec);break;
case 16:tran_Hex(num_Dec);break;
default:break;
    }
    printf("\n");
    return 0;
}