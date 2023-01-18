#include<stdio.h>
int main(){
    int n, even=0, odd=0, i,res;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    for(i=0; i<n; i++){
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    if(even==1){
        for(i=0; i<n; i++){
            if(arr[i]%2==0)
                res=i;
        }

    }
    else{
        for(i=0; i<n; i++){
            if(arr[i]%2!=0)
                res=i;
        }
    }
    printf("%d",res+1);

}