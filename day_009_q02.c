/* name: Arpan Kumar Bartia
   reg no: 2041002035
   sec E
*/
#include<stdio.h>
void deblank(char[],int,char[]);
int main(){
    int size;
    printf("Enter the size of the string\n");
    scanf("%d",&size);
    char p[size];
    char m[size];
    printf("Enter the String\n");
    scanf(" %[^\n]s",p);
    deblank(p,size,m);
    printf("The modified string is %s\n",m);
}
void deblank(char c[] ,int size, char m[])
{
    int k=0;
    for(int i=0;i<size;i++)
    {
        if(c[i]!=' ')
        {
            m[k++]=c[i];
        }
    }
}
