#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sifreleme(char liste[],int boyut){
    for (int i = 0; i < boyut; i++)
    {
        if (liste[i]>='a' && liste[i]<='}')
        {
            liste[i] = liste[i] - 28;
        }
        else if (liste[i]>= 'A' && liste[i]<= '^')
        {
            liste[i] = liste[i] + 35;
        }
        
        
    }
    
}
void sifrecoz(char liste[],int boyut){
    for (int i = 0; i < boyut; i++)
    {
        
        if (liste[i]>='a' && liste[i]<='}')
        {
            liste[i] = liste[i] - 35;
        }
        else if (liste[i]>= 'A' && liste[i]<= '^')
        {
            liste[i] = liste[i] + 28;
        }
    }
    
}

void listeyaz(char liste[],int boyut){
    for (int i = 0; i < boyut; i++)
    {
        srand(time(NULL));
        int sayi = rand()%10+1;
        printf("%c%c%c%c",'C'+i+sayi,liste[i],'\\'+i+sayi,'x'+i+sayi);
    }
    
}
void listeyazcozulmus(char liste[],int boyut){
    for (int i = 0; i < boyut; i++)
    {
        printf("%c",liste[i]);
    }
    
}


int main() {
    char liste[] = "Biz ALLAH Yolundayiz!";
    int boyut = sizeof(liste)/sizeof(liste[0]);
    listeyazcozulmus(liste,boyut);
    printf("\n");
    sifreleme(liste,boyut);
    listeyaz(liste,boyut);
    printf("\n");
    sifrecoz(liste,boyut);
    listeyazcozulmus(liste,boyut);

    return 0;
}

