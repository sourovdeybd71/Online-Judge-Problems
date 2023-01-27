#include<stdio.h>
int main(){
    int n, res=0, k;
    scanf("%d %d",&n, &k);
    int arr[n];

    for(int i=1; i<=n; i++){
       scanf("%d", &arr[i]);
    }
    for(int i=1; i<=n; i++){
        if(arr[i]>=arr[k]&& arr[i]>0){
            res++;
        }
    }

    printf("%d",res);
    
}