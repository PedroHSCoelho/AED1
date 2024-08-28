#include <stdio.h>
 
int main() {
 
    double N1, N2, N3, N4, Nexame, media, Mfinal;
    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
    media = ((N1*2) + (N2*3) + (N3*4) + (N4*1))/10;
    if(media >= 7){
        printf("Media: %.1lf\n", media);
        printf("Aluno aprovado.\n");
    }
    else if(media < 5){
        printf("Media: %.1lf\n", media);
        printf("Aluno reprovado.\n");
    }
    else if(media >= 5 && media <= 6.9){
        printf("Media: %.1lf\n", media);
        printf("Aluno em exame.\n");
        scanf("%lf", &Nexame);
        Mfinal = (media + Nexame)/2;
        printf("Nota do exame: %.1lf\n", Nexame);
        if(Mfinal >= 5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", Mfinal);
        }
        else{
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", Mfinal);
        }
    }
    
    return 0;
}