#include <stdio.h>

int selection_sort(int arr[], int length){  // Fonksiyon parametre olarak sıralamak istenen diziyi ve dizinin uzunluğunu alır
    int max, temp, i ,j;

    /*
     *  İlk for döngüsü dizinin son elemanını kıyaslamayacağından dizinin uzunluğundan bir eksik dönecektir.
     *  i'nin max değişkenine eşitlenmesi i sayacının değerini korumak için yapılmıştır ve
       ilk döngünün her yenilenmesinde değerinin güncellenmesi için ilk for döngüsünün hemen altına yazılmıştır.
     *  İçteki döngü değişkeni j kıyaslanacak değeri tutuyor gibi düşünülebilir, haliyle i+1 değerini alacaktır.
    */
    for(i=0;i<length-1;i++){
        max=i;
        for(j=i+1;j<length;j++){
            if(arr[max]<arr[j]){
                max=j;
            }
        }
        // Swap işlemi
        temp=arr[i];
        arr[i]=arr[max];
        arr[max]=temp;
    }
}

int main()
{
    int length;
    while(1){
        printf("\nEnter the number of elements of your array: \n(or press '00' to exit!)\n"); scanf("%d", &length);
        int arr[length];
        if(length==00)
            break;
        // Dizinin elemanlarını alma
        for(int i=0;i<length;i++){
            scanf("%d",&arr[i]);
        }
        printf("\nSorted from largest to smallest:\n");
        selection_sort(arr,length);
        for(int i=0;i<length;i++){
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
