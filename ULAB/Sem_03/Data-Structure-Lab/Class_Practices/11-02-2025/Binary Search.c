#include <stdio.h>
int main(){
   int i, n,search,first,last,mid;
   printf("Enter the array element number : ");
   scanf(" %d",&n);

   int arr[n];

   for(i=0; i<n;i++){
      scanf(" %d",&arr[i]);
   }

   printf("Enter the number to search : ");
   scanf(" %d",&search);

   first=0;
   last=n-1;
   mid = (first+last)/2;

   while(first<=last){
      if(search>arr[mid]){
         first=mid+1;
      }

      else if(search<arr[mid]){
         last=mid-1;
      }
      else{
         printf("%d found at %d",search,mid+1);
         break;
      }

      mid=(first+last)/2;
   }

   if(first>last){
      printf("Not found");
   }

return 0;
}
