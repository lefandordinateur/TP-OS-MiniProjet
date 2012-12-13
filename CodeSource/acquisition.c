#include <stdio.h>
#include "acquisition.h"



/**
 * \brief see Header
*/
void acquisition(unsigned int nbAcquisition,unsigned int delaiEntreLesSeries, unsigned int nbrAcquisitionSerie, unsigned int delaiEntreDeuxAcquisition,int* tabResultat)
{
    printf("%d \n",tabResultat[0]);
    tabResultat[0] = 4;
    /*unsigned int incrementAcquisition = 0;
    
    for(incrementAcquisition=0; incrementAcquisition< nbAcquisition;incrementAcquisition++)
    {
        tabResultat[incrementAcquisition] = recupereHeure();
        printf("Valeur du tableau inséré %d\n",tabResultat[incrementAcquisition]);
        sleep(delaiEntreDeuxAcquisition);
    }*/
}


/**
 * \brief see Header
 */
int recupereHeure(void)
{
    /* Déclaration d'un pointeur sur une structure de type timezone */
    struct timezone * tz;
    struct timeval * tv;
    
    tz = (struct timezone *) malloc (sizeof(struct timezone));
    if(tz == NULL)
    {
        perror("Problème allocation mémoire");
        exit(1);
    }
    /* Déclaration d'un pointeur sur une structure de type timezone */
    
    tv = (struct timeval *) malloc (sizeof(struct timeval));
    if(tv == NULL)
    {
        perror("Problème allocation mémoire");
        exit(1);
    }
    
    /* Initialisation des structures */
    gettimeofday(tv,tz);
    
    /* Affichage des résultats */
    printf("\n\n Seconde : [%d] \n\n µseconde : [%d] \n\n",(int)tv->tv_sec,(int)tv->tv_usec);
    
    return tv->tv_sec;
}
