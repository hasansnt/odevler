#include <stdio.h>

int main()
{
    int sayi1, sayi2;
    char islem;
    
    printf("islemi seciniz(+,-,*,/): ");
    scanf("%c", &islem);
    
    printf("Birinci sayiyi giriniz: ");
    scanf("%d", &sayi1);
    
    printf("İkinci sayiyi giriniz: ");
    scanf("%d", &sayi2);
    
    switch(islem)
    {
        case '+':
            printf("Sonuc: %d", sayi1 + sayi2);
            break;
        case '-':
            printf("Sonuc: %d", sayi1 - sayi2);
            break;
        case '*':
            printf("Sonuc: %d", sayi1 * sayi2);
            break;
        case '/':
            printf("Sonuc: %d", sayi1 / sayi2);
            break;
    }
    
    return 0;
}
