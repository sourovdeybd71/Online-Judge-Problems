// #include<stdio.h>
// #include<string.h>

// int main(){
//     int t;
//     char name[100];
//     scanf("%d",&t);
//     for (int i = 1; i <=t; i++)
//     {
    
//     fgets(name, sizeof(name), stdin);

//     int l=strlen(name)-1;

//     if(l>10){
//         printf("%c%d%c\n", name[0], l-2, name[l-1]);
//     }
//     else{
//         printf("%s\n",name);
//     }
//     }
    
//     return 0;
// }

#include<stdio.h>
int main()
{
    char str[]="Programming";
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c ",str[i]);
        i+=1;
    }
    printf(".");
    return 0;
}