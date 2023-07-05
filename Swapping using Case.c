#include <stdio.h>

int main() {
    int num,  r, r2, r3, r4, r5, r6, r7, r8, r9,swap;
    printf("enter how many digits number you want to swap");
    scanf("%d", &num);
    switch (num){
        case 1:
            printf("enter atleast 2 digit number");
            break;
        case 2:
            printf("enter a 2 digits number");
            scanf("%d", &swap);
            if ( swap > 0){
                r= swap%10;
                printf("%d", r);
                swap = swap / 10;
                r2= swap % 10;
                printf("%d", r2);
                swap= swap /10;
            }
            break;
        case 3:
            printf("enter a 3 digits number");
            scanf("%d", &swap);
            if ( swap > 0){
                r= swap%10;
                printf("%d", r);
                swap = swap / 10;
                r2= swap % 10;
                printf("%d", r2);
                swap= swap /10;
                r3 = swap % 10;
                swap = swap / 10;
                printf("%d", r3);
            }break;
        case 4:
            printf("enter a 4 digits number");
            scanf("%d", &swap);
            if ( swap > 0){
                r= swap%10;
                printf("%d", r);
                swap = swap / 10;
                r2= swap % 10;
                printf("%d", r2);
                swap= swap /10;
                r3 = swap % 10;
                swap = swap / 10;
                printf("%d", r3);
                r4 = swap % 10;
                swap = swap /10;
                printf("%d", r4);
            }break;
        case 5:
            printf("enter a 5 digits number");
            scanf("%d", &swap);
            if ( swap > 0){
                r= swap%10;
                printf("%d", r);
                swap = swap / 10;
                r2= swap % 10;
                printf("%d", r2);
                swap= swap /10;
                r3 = swap % 10;
                swap = swap / 10;
                printf("%d", r3);
                r4 = swap % 10;
                swap = swap /10;
                printf("%d", r4);
                r5 = swap % 10;
                swap = swap /10;
                printf("%d", r5);
            }break;
        case 6:
            printf("enter a 6 digits number");
            scanf("%d", &swap);
            if ( swap > 0){
                r= swap%10;
                printf("%d", r);
                swap = swap / 10;
                r2= swap % 10;
                printf("%d", r2);
                swap= swap /10;
                r3 = swap % 10;
                swap = swap / 10;
                printf("%d", r3);
                r4 = swap % 10;
                swap = swap /10;
                printf("%d", r4);
                r5 = swap % 10;
                swap = swap /10;
                printf("%d", r5);
                r6 = swap % 10;
                swap = swap /10;
                printf("%d", r6);
            }break;
        case 7:
            printf("enter a 7 digits number");
            scanf("%d", &swap);
            if ( swap > 0){
                r= swap%10;
                printf("%d", r);
                swap = swap / 10;
                r2= swap % 10;
                printf("%d", r2);
                swap= swap /10;
                r3 = swap % 10;
                swap = swap / 10;
                printf("%d", r3);
                r4 = swap % 10;
                swap = swap /10;
                printf("%d", r4);
                r5 = swap % 10;
                swap = swap /10;
                printf("%d", r5);
                r6 = swap % 10;
                swap = swap /10;
                printf("%d", r6);
                r7 = swap % 10;
                swap = swap /10;
                printf("%d", r7);
            }break;
        case 8:
            printf("enter a 8 digits number");
            scanf("%d", &swap);
            if ( swap > 0){
                r= swap%10;
                printf("%d", r);
                swap = swap / 10;
                r2= swap % 10;
                printf("%d", r2);
                swap= swap /10;
                r3 = swap % 10;
                swap = swap / 10;
                printf("%d", r3);
                r4 = swap % 10;
                swap = swap /10;
                printf("%d", r4);
                r5 = swap % 10;
                swap = swap /10;
                printf("%d", r5);
                r6 = swap % 10;
                swap = swap /10;
                printf("%d", r6);
                r7 = swap % 10;
                swap = swap /10;
                printf("%d", r7);
                r8 = swap % 10;
                swap = swap /10;
                printf("%d", r8);
            }break;
        case 9:
            printf("enter a 9 digits number");
            scanf("%d", &swap);
            if ( swap > 0){
                r= swap%10;
                printf("%d", r);
                swap = swap / 10;
                r2= swap % 10;
                printf("%d", r2);
                swap= swap /10;
                r3 = swap % 10;
                swap = swap / 10;
                printf("%d", r3);
                r4 = swap % 10;
                swap = swap /10;
                printf("%d", r4);
                r5 = swap % 10;
                swap = swap /10;
                printf("%d", r5);
                r6 = swap % 10;
                swap = swap /10;
                printf("%d", r6);
                r7 = swap % 10;
                swap = swap /10;
                printf("%d", r7);
                r8 = swap % 10;
                swap = swap /10;
                printf("%d", r8);
                r9 = swap % 10;
                swap = swap /10;
                printf("%d", r9);
            }break;
        default:
            printf("enter value from 2 to 9");
    }
   return 0;
}
