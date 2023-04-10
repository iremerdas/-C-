#include <stdio.h>

int taumu(int kelime[], int a, int b){
    if(a!=(strlen(kelime)-1)){
        if(kelime[b]!=kelime[a]){
            b++;
            taumu(kelime,a,b);
            a++;
        }
        else
            return 0;
    }else{
        if(kelime[b]==kelime[a])
            return 0;
        else
            return 1;
    }

}

int main()
{
     char kelime[]="mcnvb";

     if(taumu(kelime,1,0))
        printf("doru");
     else
        printf("yanlis");

        /*int toplam=0, carpim=1;

        for(int i=1;i<=4;i++){
            carpim=i*i;
            toplam+=carpim;
        }
        printf("%d", toplam); */

    return 0;
}
