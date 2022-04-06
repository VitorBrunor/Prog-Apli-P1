/*
Aluno: Vitor Brunor de Sousa
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char words[50];
char alfabeto[26] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n',
'o','p','q','r','s','t','u','v','w','x','y','z'};

int teclado(){

   scanf("%c", &words);
    for(int ii=0;ii<strlen(words);ii++){

        int jj;
        for(jj=0;jj<strlen(alfabeto);jj++){

            if(words[ii] == alfabeto[jj]){
                switch(jj){

                    //T 2 a, b, c.
                    case 0: printf("#2=1\n");break;
                    case 1: printf("#2=2\n");break;
                    case 2: printf("#2=3\n");break;

                    //T 3: d, e, f.
                    case 3: printf("#3=1\n");break;
                    case 4: printf("#3=2\n");break;
                    case 5: printf("#3=3\n");break;

                    //T 4: g, h, i.
                    case 6: printf("#4=1\n");break;
                    case 7: printf("#4=2\n");break;
                    case 8: printf("#4=3\n");break;

                    //T 5: j, k, l.
                    case 9: printf("#5=1\n");break;
                    case 10: printf("#5=2\n");break;
                    case 11: printf("#5=3\n");break;

                    //T 6: m, n, o.
                    case 12: printf("#6=1\n");break;
                    case 13: printf("#6=2\n");break;
                    case 14: printf("#6=3\n");break;

                    //T 7: p, q, r, s.
                    case 15: printf("#7=1\n");break;
                    case 16: printf("#7=2\n");break;
                    case 17: printf("#7=3\n");break;
                    case 18: printf("#7=4\n");break;

                    //T 8: t, u, v.
                    case 19: printf("#8=1\n");break;
                    case 20: printf("#8=2\n");break;
                    case 21: printf("#8=3\n");break;

                    //T 9: w, x, y, z.
                    case 22: printf("#9=1\n");break;
                    case 23: printf("#9=2\n");break;
                    case 24: printf("#9=3\n");break;
                    case 25: printf("#9=4\n");break;
                }
                teclado();
            }
        }
    }
    return (words);
}

int main(){
    printf("Entre com a palavra que quiser:\n");
    teclado();
    system("pause");
    return 0;
}