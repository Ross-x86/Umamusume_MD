#ifndef SPRITES
#define SPRITES
#include <genesis.h>

/*
    Header file para los sprites

    Cosas utiles que recordar
    
    las umas usan la paleta de colores 0
    el logo y el cursor usan la paleta 1
    el fondo usaria la paleta 2
    la paleta 3 creo que vendria a ser la paleta de color del texto supongo
*/

void init_uma(void);         //poner las umas en su lugar
void init_misc(void);        //poner el logo, texto y el cursor
void update_uma(void);       //actualizar la ubicacion de las umas
void update_ct(u8 opcion);   //actualizar el cursor Y el texto de la uma seleccionada

#endif