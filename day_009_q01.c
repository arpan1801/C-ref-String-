/* name: Arpan Kumar Bartia
   reg no: 2041002035
   sec E
*/
#include<stdio.h>
int main(){
    int size,num=0;
    printf("Enter the size of the string\n");
    scanf("%d",&size);
    char p[size];
    printf("Enter the string\n");
    scanf("%s",p);
    for(int i=0;i<size;i++)
    {
        int c=(int)(p[i]);
        c-=48;
        num=num*10+c;
    }
    printf("The number is %d\n",num);
}
