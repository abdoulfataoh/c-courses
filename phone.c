#include <stdio.h>

struct Contact
{
    char nom[32];
    int telephone;
    char email[128];
    char sexe[1];
};

const int TAILLE = 100;
struct Contact repertoire[100]; // tableau de contacts

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

void ajouter(struct Contact tab[])
{
    struct Contact nouveau_contact;
    printf("Quel est le nom: ");
    scanf("%s", nouveau_contact.nom);
    printf("Quel est le telephone: ");
    scanf("%d", &nouveau_contact.telephone);
    printf("Quel est l'email: ");
    scanf("%s", nouveau_contact.email);
    printf("Quel est le sexe: ");
    scanf("%s", nouveau_contact.sexe);
    tab[0] = nouveau_contact;
}

void afficher(struct Contact tab[], int taille)
{
    
    for (int i = 0; i <  TAILLE; i++)
    {   
        struct Contact c;
        c = tab[i];
        if (c.nom != 0 c.nom) // defisser la condition pour que les cases vide ne saffiche pas
        {
            printf("nom = %s telephone = %d \n", c.nom, c.telephone); //complter la ligne avec toutes les information du contact
            printf("-----------------\n");
        }
    }
}

//definissez la fonction la fonction rechercher qui en parametre le tableau, la taille du tableau, le nom a recherche


// definir la fonction modifier

int main(){
    int choix;

    while (1)
    {

        choix = menu();

        if (choix == 0)
        {
            printf("Vous avez choisi de quitter\n");
            printf("Merci!!\n");
            // comment arreter le programme. peut etre exit ?
        }

        if (choix == 1)
        {
            ajouter(repertoire);
        }

        if (choix == 2)
        {
            afficher(repertoire, TAILLE);
        }

        // completer les options ici
    }
 
}
