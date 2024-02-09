//จงเขียนโปรแกรมภาษา C เปลี่ยนเลขฐานสิบให้เป็นเลขฐานแปด เลขฐานสิบหกเป็นเลขฐานสิบ เลขฐานสิบหกเป็นเลขฐานแปด และเลขฐานแปดเป็นเลขฐานสิบหก โดยใช้คำสั่งเงื่อนไข if else
#include <stdio.h>
void main()
{
    int type;
    int value;
    do{
        printf("Convert digit:\n");
        printf("                  1: decimal to octal\n");
        printf("                  2: hexadecimal to decimal\n");
        printf("                  3: hexadecimal to octal\n");
        printf("                  4: octal to hexadecimal\n");

        printf("enter your type: ");
        scanf("%d",&type);
        if(type==1){
            printf("enter decimal value: ");
            scanf("%d", &value);
            printf("%d in octal is: %o\n", value, value);
            printf("----------------------------------------\n");
        }
        else if(type==2){
            printf("enter hexadecimal value: ");
            scanf("%x", &value);
            printf("%x in decimal is: %d\n", value, value);
            printf("----------------------------------------\n");
        }
        else if(type==3){
            printf("enter hexadecimal  value: ");
            scanf("%x", &value);
            printf("%x in octal is: %o\n", value, value);
            printf("----------------------------------------\n");
        }
        else if(type==4){
            printf("enter octal value: ");
            scanf("%o", &value);
            printf("%o in octal is: %x\n", value, value);
            printf("----------------------------------------\n");
        }
    }while(type != 0);
}
