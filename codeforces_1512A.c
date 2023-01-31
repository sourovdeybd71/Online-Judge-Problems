#include<stdio.h>
int main(){
    int n, t;
    scanf("%d",&t);
    int count=0;

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        
        
        for(int i=2; i<n/2; i++)
        {
            if(n==0 || n==1){
            
            break;
            
        }
           else if(n%i == 0)
            {
            count++;
            break;
            }
        }
        if(count>0)
            printf("No\n");
        else
            printf("Yes\n");

    }
        
}





//  #include<stdio.h>
//  int main(){

//     int j, t;
//     scanf("%d",&t);
//     for(j=1; j<=t; j++){
        
//      int n, maxN=101;
//      scanf("%d",&n);
//      int arr[n+1];
     

        
//      for (int i = 1; i <= n; i++)
//      {
//          scanf("%d", &arr[i]);
        
//         }
//     int arr2[maxN];
//     for (int i = 0; i < maxN; i++)
//      {
//         arr2[i]=0;
        
//      }
//      for (int i = 1; i <= n; i++)
//      {
//         arr2[arr[i]]+=1;
        
//      }
//      int index;
//      for (int i =  1; i <=n; i++)
//      {
//         if (arr2[arr[i]]==1){
//             index=i;
//             break;
//         }
        
//      }
//      printf("%d\n",index);
//     }

//  }
 
        