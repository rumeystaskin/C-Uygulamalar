#include <stdio.h>
 
main(){

    int dizi[10];
    int gecici;
    
    for(int i = 0; i < 10; i++)
    {
        printf("Dizinin %d. değerini girin: ", i+1 );
        scanf("%d",&dizi[i]);
    }

    printf("\nDizinin küçükten büyüğe sıralanmış hali\n");
    
    for(int i = 0; i < 9; i++)
    {
        for(int j = i+1; j < 10; j++)
        {
            if(dizi[j] < dizi[i]){
                gecici = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = gecici;
            }
        }
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d\t",dizi[i]);
    }
    
}
