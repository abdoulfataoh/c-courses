#include <stdio.h>

struct DonneeMeteo
{
    int jour;
    int mois;
    int annee;
    float temperature;
    float humudite;
    double precipitation;
};

int menu(){
    int choix;
    printf("-- Application pour Agriculteurs --\n");
    printf("1. Entrez 1 pour enregistrer les donnees de la meteo du jour\n");
    printf("2. Entrez 2 pour pour l'analyse et interpretation des donnees la meteo\n");
    printf("0. Entrez 0 pour quitter\n");
    printf("Quel est votre choix: ");
    scanf("%d", &choix);
    
    while (choix < 0 || choix > 2)
    {
        printf("Choix invalide\n");
        printf("Quel est votre choix: ");
        scanf("%d", &choix);

    }
    
    return choix;
}


//definir une fonction qui prend comme parametre un tableau qui remplit ce tableau
//avec les donnees de la meteo

void saisirMeteo(....)
{
    struct DonneeMeteo donne;
    printf("Entrez le jour: \n");
    scanf("%d", &donne.jour);
    printf("Entrez le mois: \n");
    scanf("%d", &donne.mois);

}

// A faire
int analyseEtInterpreation()
{
    // completer la fonction
}

int main(){
   int choix;
   choix = menu();

   if (choix == 0){
    printf("Merci d'avoir utiliser notre application\n");
    printf("Aurevoir !!!\n");
   }
   else if (choix == 1)
   {
    //appeller la fonction qui permet d'enregistrer les donnees de la meteo
   }
   else if (choix == 2)
   {
    //definir et appeler la fonction qui permet de faire l'analyse
   }
   
}
