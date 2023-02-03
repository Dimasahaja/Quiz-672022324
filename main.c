#include <stdio.h>
#include <stdlib.h>

void main(){

    int menu, z, a, b;
        printf("Menu \n");
        printf("1. Level 1\n");
        printf("2. Level 2\n");
        printf("3. Level 3\n");
        printf("4. Exit\n\n");
        printf("Pilih Menu : ");
        scanf("%d",&menu);

    switch(menu){
    case 1:
        system("cls");
        printf("Masukkan Angka : ");
        scanf("%d",&z);
        for(a=0; a<=z; a++){
            for(b=0; b<=a; b++){
                printf("%d",a+b);
            }
        printf("\n");
    }
        break;

    case 2:
        system("cls");
        printf("Masukkan Angka : ");
        scanf("%d", &z);
        for(a=1; a<=z; a++){
            for(b=1; b<=a; b++){
                printf("%d",a*b);
            }
        printf("\n");
    }
        break;

    case 3:
        system("cls");
        printf("Masukkan Angka : ");
        scanf("%d",&z);
        for(a=0; a<z; a++){
            for(b=a; b<z; b++){
                printf(" ");
            }
            for(b=0; b<=a; b++){
                printf("%d",b+1);
            }
            for(b=a; b>0; b--){
                 printf("%d",b);
            }
            printf("\n");
        }

        for(a=z-1; a>0; a--){
            for(b=a; b <=z; b++){
                printf(" ");
            }
            for(b=1; b<=a; b++){
                printf("%d",b);
            }
            for (b=a-1; b>=1; b--){
                 printf("%d", b);
            }
            printf("\n");
        }
        break;
    }
}
