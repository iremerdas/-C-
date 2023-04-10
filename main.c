#include <stdio.h>

int selection_sort(int arr[], int length){
    int min, temp, i ,j;

    for(i=0;i<length-1;i++){
        min=i;
        for(j=i+1;j<length-i;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}

int main()
{
     int length;
    while(1){
        printf("Enter the number of elements of your array: "); scanf("%d", &length);
        int arr[length];
        for(int i=0;i<uzunluk;i++){
            scanf("%d",&arr[i]);
        }
        printf("\n");
        selection_sort(arr,length);
        for(int i=0;i<length;i++){
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
