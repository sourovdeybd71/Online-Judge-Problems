#include<stdio.h>
int main(){
    int arr[10][10], index, index2;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
             /* code */
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
             /* code */
            if(arr[i][j]==1){
                // printf("%d %d",i,j);
                
                if(i>2){
                    index= (i-2);
                }
                else{
                    index= (-1)*(i-2);
                }
                if(j>2){
                    index2= (j-2);
                }
                else{
                    index2= (-1)*(j-2);
                }
                // int index2= (j-2);
                int sum=(index+index2);
                printf("\n%d", sum);

            }
        }
        
    }
    
}