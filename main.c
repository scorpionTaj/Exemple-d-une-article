#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
typedef struct {
int code[50];
float pu[50];
char nom[50];
}facture;
int main()
{
    facture article[50];
    int i,nbr[50],montant[50];
    float total;
    for(i=0;i<2;i++)
    {
        printf("\nDonner le code d'article %d : ",i+1); // Ecrire et Lire le code d'article
        scanf("%d",&article[i].code);
        printf("\nDonner le nom d'article %d : ",i+1); // Ecrire et Lire le nom d'article
        scanf("%s",&article[i].nom);
        printf("\nDonner le Prix Unitaire d'article %d : ",i+1); // Ecrire et Lire le Prix Unitaire d'article
        scanf("%f",&article[i].pu[i]);
        printf("\nDonner le nombre d'article %d : ",i+1); // Ecrire et Lire le nombre d'article
        scanf("%d",&nbr[i]);
        montant[i]=(article[i].pu[i]*nbr[i]); // Affectuer le montant
    }
    printf("ARTICLE %10 NOMBRE %10P_UNIT %10MONTANT\n");
    for(i=0;i<2;i++)
   {
        printf("%s %10d %7.2f %7.2d\n",article[i].nom,nbr[i],article[i].pu[i],montant[i]);
        total=montant[i]+total; // affectuer le total
    }
    printf("\t \t TOTAL \t %.2f",total);
    return 0;
}
