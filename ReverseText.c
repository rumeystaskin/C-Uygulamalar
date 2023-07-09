#include <stdio.h>
#include <string.h>
void terscevir(char*, int, int);
 
int main()
{
    char string_array[150];
    printf("Metin giriniz:");
    scanf("%s", &string_array);
 
    
    terscevir(string_array, 0, strlen(string_array)-1);
    printf("\nMetnin ters hali: %s",string_array);
 
    return 0;
}
 
void terscevir(char *x, int baslangic, int bitis)
{
    char chr;
    if (baslangic >= bitis)
      
       return;
 
    chr = *(x+baslangic);
    *(x+baslangic) = *(x+bitis);
    *(x+bitis) = chr;
 
    terscevir(x, ++baslangic, --bitis);
}