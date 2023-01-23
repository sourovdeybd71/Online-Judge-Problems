#include<stdio.h>
#include<string.h>
int main(){
    char s[101], t[101];
    int i;
    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);
    for ( i = 0; i < strlen(s)-1; i++){
        if(s[i]>="A" && s[i]<="Z"){
            s[i]+=32;
        }
        if(t[i]>="A" && t[i]<="Z"){
            t[i]+=32;
        }
    }
    for ( i = 0; i < strlen(s)-1; i++){

        if(s[i]<t[i]){
            printf("-1\n");
            return 0;
        }
        else if(s[i]>t[i]){
            printf("1\n");
            break;
        }
        printf("0\n");

    }
}