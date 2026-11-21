#include <genesis.h>
#include "sprites.h"
#include "resources.h"

//sprites and shit
Sprite* uma1;
u16 x1 = 0, y1 = 0;
Sprite* uma2;
u16 x2 = 0, y2 = 104;
Sprite* uma3;
u16 x3 = 0, y3 = 56;
Sprite* uma4;
u16 x4 = 0, y4 = 160;

Sprite* ui_logo;
Sprite* ui_cursor;

//Posiciones del cursor, mafufadas de 8 bits no pasa de ahi
u8 CurY[4] = {16, 72, 120, 176};
u8 CurX = 64;

void init_uma(void)
{
    PAL_setColor(63, RGB24_TO_VDPCOLOR(0xffffff));
    PAL_setPalette(PAL0, spr_uma1.palette->data, DMA_QUEUE);
    
    uma1 = SPR_addSprite(&spr_uma1, x1, y1, TILE_ATTR(PAL0, FALSE, FALSE, FALSE));
    uma2 = SPR_addSprite(&spr_uma2, x2, y2, TILE_ATTR(PAL0, FALSE, FALSE, FALSE));
    uma3 = SPR_addSprite(&spr_uma3, x3, y3, TILE_ATTR(PAL0, FALSE, FALSE, FALSE));
    uma4 = SPR_addSprite(&spr_uma4, x4, y4, TILE_ATTR(PAL0, FALSE, FALSE, FALSE));
}

void init_misc(void)
{
    PAL_setPalette(PAL1, spr_logo.palette->data, DMA_QUEUE);

    ui_logo = SPR_addSprite(&spr_logo, 216, 8, TILE_ATTR(PAL1, FALSE, FALSE, FALSE));
    ui_cursor = SPR_addSprite(&spr_cursor, CurX, CurY[0], TILE_ATTR(PAL1, false, false, false));

    VDP_setTextPlane(BG_A);
    VDP_setTextPalette(PAL3);
    VDP_setTextPriority(1);
    VDP_drawText("MINI DEMO V1", 27, 5);
    VDP_drawText("ELIGE A TU UMA", 25, 26);
    VDP_drawText("Agnes Tachyon", 26, 25);
}

void update_uma(void)
{
    SPR_setPosition(uma1, x1, y1);
    SPR_setPosition(uma2, x2, y2);
    SPR_setPosition(uma3, x3, y3);
    SPR_setPosition(uma4, x4, y4);
}

void update_ct(u8 opcion)
{
    //terminar
}