#include <stdio.h>


struct Contact
{
    char nom[32];
    int telephone;
    char email[128];
    char sexe;
};


int menu(){
    int choix;
    printf("***Phone v1**\n");
    printf("1. Ajouter un Contact\n");
    printf("2. Afficher tous les contacts\n");
    printf("3. Rechercher un contact\n");
    printf("4. Supprimer un contact\n");
    printf("5. Mettre à jour un contact\n");
    printf("0. Quittez\n");
    printf("Quel est votre choix: ");
    scanf("%d", &choix);

    while (choix <0 || choix > 5 )
    {
        printf("Choix invalide\n");
        printf("Quel est votre choix: ");
        scanf("%d", &choix);
    }
    return choix;
}

// Creer une fonction Ajouter qui permet d'ajouter un contact
// dans une tableau
// A completer
// N'oubier pas de declarer une variable global qui contiendra la liste des contact

void ajouter()
{
    struct Contact nouveau_contact;
    printf("Quel est le nom: ");
    scanf("%s", nouveau_contact.nom);
    printf("Quel est le telephone: ");
}

int main(){
    int choix;

    choix = menu();
    if (choix == 1)
    {
        ajouter();
    }
    
}
