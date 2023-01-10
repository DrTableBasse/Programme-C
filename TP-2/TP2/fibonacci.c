#include "main.h"


void fibonacci(){
    //Un char c'est avant tout une valeur
    //exemple : 48 = '0'
    //La valeur est "changé" en caractère ASCII
    int n;
    unsigned long valeur;
    int quitter = 1;

    printf("Veuillez choisir une valeur n pour la suite de Fibonacci : ");
    scanf("%d", &n);
    //getchar();
    
    // appel de la fonction récursive
    valeur = calculfibo(n);

    printf("Résultat : %lu\n", valeur);


    //Menu pour revenir au menu principal OU relancer la fonction equation_2nd_degres()
    printf("Pour revenir au menu 0 sinon taper 1 : ");
    scanf("%i", &quitter);
    if (quitter !=1){
        quitter = 0;
    } 
}





//Fibonacci avec un graphique. Suffit de décommenter pour regarder.
/* double fibonacci() {
    unsigned long n1 = 0;
    unsigned long n2 = 1;
    unsigned long nbElements;
    int quitter = 1;
    unsigned long resultat;

    RGBABitmapImageReference * imageRef = CreateRGBABitmapImageReference();
    StringReference *errorMessage = CreateStringReference(L"", 0); 
    printf("Combien d'éléments souhaitez-vous dans la suite de Fibonacci ? ");
    scanf("%lu", &nbElements);
    
    double*x = malloc(sizeof(double)*nbElements); 
    double*y = malloc(sizeof(double)*nbElements);


    printf("Voici les %lu premiers éléments de la suite de Fibonacci :\n", nbElements);
    for (unsigned long i = 0; i <= nbElements; i++) {

        printf("Pour n =  %lu, F(n) = %lu\n",i, n1);
        int temp = n1 + n2;
        n1 = n2;
        n2 = temp;
        long x = n1;
        long y = x;

    }
    printf("\n");


    DrawScatterPlot(imageRef,800,800,x,10,y,10, errorMessage);
    size_t length;
    double *pngData = ConvertToPNG(&length, imageRef->image);
    WriteToFile(pngData, length, "fibonacci.png");

    //Menu pour revenir au menu principal OU relancer la fonction equation_2nd_degres()
    printf("Pour revenir au menu 0 sinon taper 1 : ");
    scanf("%i", &quitter);
    if (quitter !=1){
        quitter = 0;
    }
    return resultat;
}

*/