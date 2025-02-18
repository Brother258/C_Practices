#include<stdio.h>
int main(){
    int a[7]={50,25,65,75,5,95,105};
    int n=7;
    int i,j;




    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(a[j]<a[j+1]){
                a[j] = a[j]^a[j+1];
                a[j+1] = a[j]^a[j+1];
                a[j] = a[j]^a[j+1];

            }
        }
    }

    printf("Descending sorted array : ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    int first, last, mid,search;
    first = 0;
    last = n-1;
    mid = (first+last)/2;

    printf("\n");
    printf("Enter the number to search : ");
    scanf(" %d",&search);




    while(first<=last){

            if(a[mid]==search){
                printf("Found at %d",mid+1);
                break;
            }
            else if(a[mid]<search){
                last = mid-1;
            }

            else{
                first = mid+1;
            }

            mid = (first+last)/2;


    }

    if(first>last){
        printf("Not found");
    }



}
