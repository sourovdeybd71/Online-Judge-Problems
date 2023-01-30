// #include<stdio.h>
// int main(){
//     int n, a, b, c, sum=0;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d %d %d", &a, &b, &c);
//         if(a+b+c>=2){
//             sum++;
//         }

//     }
//     printf("%d",sum);
// }


#include<stdio.h>
int main(){
    int n, a, counter=0, sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
       counter=0;
       for(int j=0; j<3; j++){
        scanf("%d",&a);
        if(a==1){
            counter++;
        }
       
       }
        if(counter>=2){
            sum++;
        }

    }
    printf("%d",sum);
}