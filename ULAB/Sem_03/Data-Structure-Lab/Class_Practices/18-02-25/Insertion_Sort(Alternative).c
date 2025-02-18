#include <stdio.h>
int main(){
   int arr[5] = {10,56,34,98,96};
   int i,j,min,n=5,key,flag;

   printf("Unsorted array is : ");
   for(i=0;i<n;i++){
      printf("%d ",arr[i]);
   }

   printf("\n");

   for(i=1;i<=n-1;i++){
      key = arr[i];

      for(j=i-1;j>=0;j--){
         if(arr[j]>key){
            arr[j+1]= arr[j];
            flag = 1;
         }
         else{
            break;
         }
      }

      if(flag){
         arr[j+1]=key;
      }

   }

   printf("Sorted array is : ");
   for(i=0;i<n;i++){
      printf("%d ",arr[i]);
   }



return 0;
}
