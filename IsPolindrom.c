#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

char kelime[20];
char kelimenintersi[20];

printf("Palindrom olup olmadığını kontrol etmek istediğiniz kelimeyi girin:\n");
gets(kelime);

strcpy(kelimenintersi, kelime);
strrev(kelimenintersi);
printf("%s'in tersi: %s\n", kelime, kelimenintersi);

if (strcmp(kelime, kelimenintersi) == 0){

printf("%s Palindromdur.\n", kelime);
}

else{

printf("%s Palindrom değildir.\n", kelime);
}

system("pause");

return 0;

}