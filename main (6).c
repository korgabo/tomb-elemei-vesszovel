/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

void Elemek(int meret, const int tomb[]){
    for (int i = 0; i < meret-1; ++i){
    printf("%d,",tomb[i]);
}
printf("%d\n",tomb[meret-1]);
}

int main()
{
   
    int tomb[5];
    int meret = 5;
    int szam;
    printf("Adjon meg 5 számot! \n");
    for (int i = 0; i < meret; ++i) {
        printf("%d. szám: ",i+1);
        scanf("%d\n",&szam);
        tomb[i] = szam;
    }
    
Elemek(meret, tomb);
    return 0;
}
