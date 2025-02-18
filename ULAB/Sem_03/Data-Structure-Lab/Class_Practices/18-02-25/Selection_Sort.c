#include <stdio.h>
int main(){
   int arr[4] = {5,4,10,1};
   int i,j,min,n=4,temp;

   for(i=0;i<n-1;i++){
      min = i;

      for(j=i+1;j<n;j++){
         if(arr[min]>arr[j]){
            min = j;
         }
      }

      if(min!=i){
         temp = arr[i];
         arr[i] = arr[min];
         arr[min] = temp;
      }

   }

   printf("Sorted array is : ");
   for(i=0;i<n;i++){
      printf("%d ",arr[i]);
   }



return 0;
}
