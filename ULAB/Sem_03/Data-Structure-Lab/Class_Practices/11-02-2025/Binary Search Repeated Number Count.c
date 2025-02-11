#include <stdio.h>

int main(){
   int i, n, search, first, last, mid, count=0;
   printf("Enter the array element number: ");
   scanf("%d", &n);

   int arr[n];

   printf("Enter the elements of the array: ");
   for(i=0; i<n; i++){
      scanf("%d", &arr[i]);
   }

   printf("Enter the number to search: ");
   scanf("%d", &search);



   first = 0;
   last = n-1;
   count = 0;
   while(first <= last){
      mid = (first + last) / 2;

      if(search > arr[mid]){
         first = mid + 1;
      }
      else if(search == arr[mid]){
         count++;

         int left = mid - 1;
         while(left >= first && arr[left] == search) {
            count++;
            left--;
         }


         int right = mid + 1;
         while(right <= last && arr[right] == search) {
            count++;
            right++;
         }

         break;
      }
      else{
         last = mid - 1;
      }
   }

   if(count == 0){
      printf("Not found\n");
   }
   else{
      printf("%d times\n", count);
   }

   return 0;
}
