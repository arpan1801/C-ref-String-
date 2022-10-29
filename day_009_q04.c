/*
name: Arpan Kumar Bartia
sec: E
reg no: 2041002035
*/
#include <stdio.h>
int check(char [], int);
int main(){
    int size;
    printf("Enter the size of the string\n");
    scanf("%d",&size);
    char p[size];
    printf("Enter the string\n");
    scanf(" %[^\n]s",p);
    if(p[size-1] == 'y')
    {
        for(int i=0;i<size-1;i++)
        {
            printf("%c",p[i]);
        }
        printf("ies\n");
    }
    else if(p[size-1] == 's' || (p[size-1] == 'h' && p[size-2] == 'c') || (p[size-1] == 'h' && p[size-2] == 's'))
    {
        for(int i=0;i<size-1;i++)
        {
            printf("%c",p[i]);
        }
        printf("es\n");
    }
    else
    {
        for(int i=0;i<size-1;i++)
        {
            printf("%c",p[i]);
        }
        printf("s\n");
    }
}
