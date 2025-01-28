#include <stdio.h>
#include <stdlib.h>
#include <math.h> //Biblioth�que pour des fonctions math�matiques

int main()
{
    // Ceci est un commentaire court
    /* Ceci
    est un commentaire
    sur plusieurs lignes */
    printf("Hello world!\n\n"); // Cette instruction affiche Hello world ! a l'ecran et revient a la ligne

    int nombreDeVies; // Declarer une variable qui est nombreDeVies ici
    nombreDeVies = 5; // La variable nombreDeVies a pour valeur 5
    printf("Vous avez %d vies \n", nombreDeVies);
    printf("*** BAM ***\n");
    nombreDeVies = 4;
    printf("Ah merde il vous reste que %d vies maintenat ! \n", nombreDeVies);
    int nbreDeVies = 10, niveau = 1;
    printf("Vous avez %d vies et vous etes au niveau numero %d \n\n", nbreDeVies, niveau);

    // On initialise la variable age � 0
    int age = 0;                       // Grace cette definition si un nombre avec ou sans virgule est saisie, on aura 0 ans
    printf("Quel age avez-vous ? \n"); // Juste affiche le texte entre parenthese
    scanf("%d", &age);                 // On demande d'entrer l'age avec scanf
    printf("Ah donc vous avez %d ans \n\n", age);

    /*** Les calculs de base: +, -, *, /, %(modulo) ***/

    // Faire une addition des entiers
    int resultat = 0;
    resultat = 5 + 3;
    printf("5 + 3 = %d", resultat);
    printf("\n\n"); // On revient 2 fois a la ligne pour rendre claire le code

    // Faire une soustraction des floats
    float resultat1 = 0.0;
    resultat1 = 12.12 - 3.6;
    printf("12.12 - 3.6 = %.2f", resultat1); // %.2f demande seulement 2 chiffres apres la virgule
    printf("\n\n");                          // On revient 2 fois a la ligne pour rendre claire le code

    // Faire une divion de 2 entiers
    int resultat2 = 0;
    resultat2 = 1024 / 12;
    printf("1024 / 13 = %d", resultat2);
    printf("\n\n"); // On revient 2 fois a la ligne pour rendre claire le code

    int divsimple = 0;
    divsimple = 5 / 2;
    printf("5 / 2 = %d", divsimple); // Affiche 2. Car en C on prend en compte les nombres apres la virgule que des float ou double
    printf("\n\n");                  // On revient 2 fois a la ligne pour rendre claire le code

    double divfloat = 0.0;
    divfloat = 5.0 / 2.0;
    printf("5.0 / 2.0 = %.2f", divfloat); // Affiche 2,50 parceque c'est des flottants et on a demand� 2 chiffres apres la virgule
    printf("\n\n");                       // On revient 2 fois a la ligne pour rendre claire le code

    // Faire une multiplication des entiers
    int multi = 0;
    multi = 9 * 9;
    printf("9 * 9 = %d", multi);
    printf("\n\n"); // On revient 2 fois a la ligne pour rendre claire le code

    int restediv = 0;                 // D�claration et initialisation de la variable
    restediv = 49 % 2;                // Calcul du reste de la division de 49 par 2
    printf("49 %% 2 = %d", restediv); // On ecrit 2 fois: %% car 1 seule % fois c'est pour dire %d ou %f
    printf("\n\n");                   // Retour � la ligne pour une meilleure lisibilites

    /*** Calculs entre variables ***/

    /* Ici on a fait juste l'addition de 2 nombres, mais sachez qu'on peut faire plus d'operations
    Juste declarer les variables necessaire et effectuer les operations.
    Pour les autres operations juste changer les signes et le typages (int, float, double)
    Exemple: int a=0, b=0, c=0, d=0,e=0, resultat=0;
            resultat= a + b + c + d + e ;
    */

    // Ce programme fait la somme de 2 entiers entr�e par l'utilisateur et affiche le resultat
    /** Mon programme **/

        //Ce programme fait la somme de 2 entiers a et b et nous renvoi le resultat dans result
        int a, b, result ;
        printf("Valeur1: ");
        scanf("%d", &a);
        printf("Valeur2: ");
        scanf("%d",&b);
        result= a + b;
        printf("Valeur1 + Valeur2 = %d",result);
        printf("\n\n"); // Retour � la ligne pour une meilleure lisibilites


    // Ce programme fait la somme de 2 entiers entr�e par l'utilisateur et affiche le resultat
    /** Programme du prof **/

        int nombre1=0, nombre2=0, somme=0 ;
        printf("Entrez le nombre 1: ");
        scanf("%d", &nombre1);
        printf("Entrez le nombre 2: ");
        scanf("%d",&nombre2);
        //nombre++; on ajoute 1 au nombre1 entrez, donc si nombre1=5, alors dans somme on aura 6
        nombre1++;
        somme= nombre1 + nombre2;
        printf("%d + %d = %d",nombre1, nombre2,somme);
        printf("\n\n"); // Retour � la ligne pour une meilleure lisibilites


    int nombre_a_add = 2, nombre_a_sous = 2, nombre_a_mult = 2, nombre_a_div = 2, nombre_a_modulo = 2;
    nombre_a_add += 4;
    printf("nombre_a_add = %d", nombre_a_add);
    printf("\n\n"); // Retour � la ligne pour une meilleure lisibilites

    nombre_a_sous -= 3;
    printf("nombre_a_sous = %d", nombre_a_sous);
    printf("\n\n"); // Retour � la ligne pour une meilleure lisibilites

    nombre_a_mult *= 5;
    printf("nombre_a_mult = %d", nombre_a_mult);
    printf("\n\n"); // Retour � la ligne pour une meilleure lisibilites

    nombre_a_div /= 3;
    printf("nombre_a_div = %d", nombre_a_div);
    printf("\n\n"); // Retour � la ligne pour une meilleure lisibilites

    nombre_a_modulo %= 3;
    printf("nombre_a_modulo = %d", nombre_a_modulo);
    printf("\n\n"); // Retour � la ligne pour une meilleure lisibilites

    /* Renvoie la valeur absolu d'un nombre entier donc sans virgule */
    // Ceci marche sans emporter la bibliotheque <math.h> car c'est une fonction presente dans <stdio.h>
    int n1 = 0, n2 = -27;
    n1 = abs(n2);     // abs ne marche que pour les entiers
    printf("%d", n1); //%.f = permet d'afficher que la partie entiere de 'absolu'
    printf("\n\n");   // Retour � la ligne pour une meilleure lisibilites

    /* Renvoie la valeur absolu d'un nombre float ou double (avec virgule) */
    double absolu = 0, nb = -27;
    absolu = fabs(nb);     // fabs ne marche que en emportant la bibliotheque <math.h> et pour des valeurs: float et double.
    printf("%.f", absolu); //%.f = permet d'afficher que la partie entiere de 'absolu'
    printf("\n\n");        // Retour � la ligne pour une meilleure lisibilites

    /* Permet d'arrondir un nombre float, double */
    double dessus = 0, nb2 = 52.71;
    dessus = ceil(nb2);
    printf("%.f", dessus); // Je met le point entre % et f pour eviter les chiffres apres la virgule
    printf("\n\n");        // Retour � la ligne pour une meilleure lisibilites

    /* Fait le contraire de ceil, prend et affiche juste la partie entiere du float ou double */
    double dessous = 0, nb3 = 12.71;
    dessous = floor(nb3);
    printf("%.f", dessous); // Je met le point entre % et f pour eviter les chiffres apres la virgule
    printf("\n\n");         // Retour � la ligne pour une meilleure lisibilites

    /* Fait le contraire de ceil, prend et affiche juste la partie entiere du float ou double */
    double ini = 0, nb4 = 12, valpuiss = 2;
    ini = pow(nb4, valpuiss);
    printf("%.f", ini); // Je met le point entre % et f pour eviter les chiffres apres la virgule
    printf("\n\n");     // Retour � la ligne pour une meilleure lisibilites

    /** Ne prend que des entiers sinon c'est error **/

        //Fonction qui permet de calculer la puissance de 2 nombres entiers entr�s par l'utilisateur
        int aa=0, bb=0, cc=0;
        printf("Entrez le nombre entier : ");
        scanf("%d", &bb);
        printf("Entrez la puissance entiere : ");
        scanf("%d",&cc);
        //nombre++; on ajoute 1 au nombre1 entrez, donc si nombre1=5, alors dans somme on aura 6
        //nombre1++;
        aa=pow(bb, cc);
        printf("%d ** %d = %d", bb,cc, aa);
        printf("\n\n"); // Retour � la ligne pour une meilleure lisibilites


    /** Prend comme valeurs des entiers comme floattant **/


        //Fonction qui permet de calculer la puissance de 2 nombres flottantes entr�s par l'utilisateur
        float aaa=0.0, bbb=0.0, ccc=0.0;
        printf("Entrez le nombre floattant : ");
        scanf("%f", &bbb);
        printf("Entrez la puissance flottante : ");
        scanf("%f",&ccc);
        //nombre++; on ajoute 1 au nombre1 entrez, donc si nombre1=5, alors dans somme on aura 6
        //nombre1++;
        aaa=pow(bbb, ccc);
        printf("%.2f ** %.2f = %.2f", bbb,ccc, aaa);
        printf("\n\n"); // Retour � la ligne pour une meilleure lisibilites


    /** Prend comme valeurs des doubles, entiers, floattant **/


        //Fonction qui permet de calculer la puissance de 2 nombres flottantes entr�s par l'utilisateur
        double aaaa=0.0, bbbb=0.0, cccc=0.0;
        printf("Entrez le nombre floattant : ");
        scanf("%lf", &bbbb);//Utilisation de %lf pour lire un double
        printf("Entrez la puissance flottante : ");
        scanf("%lf",&cccc);//Utilisation de %lf pour lire un double
        //nombre++; on ajoute 1 au nombre1 entrez, donc si nombre1=5, alors dans somme on aura 6
        //nombre1++;
        aaaa=pow(bbbb, cccc);
        printf("%.2lf ** %.2lf = %.2lf", bbbb,cccc, aaaa);//Utilisation de %lf pour lire les 3 doubles
        printf("\n\n"); // Retour � la ligne pour une meilleure lisibilites


    return 0;
}
