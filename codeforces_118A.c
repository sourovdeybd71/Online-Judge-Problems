#include<stdio.h>
#include<string.h>
int main(){
    char s[101];
    int i;
    fgets(s, sizeof(s), stdin);
    
    // printf("%s",s);
    for ( i = 0; i < strlen(s)-1; i++)
    {
        /* code */
        if(s[i]>="A" && s[i]<='Z'){
            s[i]+=32;
        }
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'
        || s[i]=='o'|| s[i]=='u'|| s[i]=='y'){
            //nothing
        }
        else{
            printf(".%c",s[i]);
        }

    }
    

}