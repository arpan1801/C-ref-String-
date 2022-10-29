/* name: Arpan Kumar Bartia
   reg no: 2041002035
   sec E
*/
#include<stdio.h>
int check(char [], int);
int main(){
    int size;
    printf("Enter the size of the string\n");
    scanf("%d",&size);
    char p[size];
    printf("Enter the chemical formula\n");
    scanf(" %[^\n]s",p);
    if(check(p,size) == 1)
    {
        printf("Hydroxide is present\n");
    }
    else
    {
        printf("Hydroxide is not present\n");
    }
}
int check(char c[], int size)
{
    if(c[size-1] == 'H' && c[size-2] == 'O')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
