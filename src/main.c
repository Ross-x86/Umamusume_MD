#include <genesis.h>
#include "resources.h"

//Sprites + Ubicasiones
Sprite* uma1;
u16 x1 = 0, y1 = 0;
Sprite* uma2;
u16 x2 = 0, y2 = 104;
Sprite* uma3;
u16 x3 = 0, y3 = 56;
Sprite* uma4;
u16 x4 = 0, y4 = 160;

Sprite* slogo;

int main()
{
    SPR_init();
    PAL_setPalette(PAL0, spr_uma1.palette->data, DMA_QUEUE);
    PAL_setPalette(PAL1, spr_logo.palette->data, DMA_QUEUE);
    uma1 = SPR_addSprite(&spr_uma1, 0, 0, TILE_ATTR(PAL0, FALSE, FALSE, FALSE));
    uma2 = SPR_addSprite(&spr_uma2, 0, 104, TILE_ATTR(PAL0, FALSE, FALSE, FALSE));
    uma3 = SPR_addSprite(&spr_uma3, 0, 56, TILE_ATTR(PAL0, FALSE, FALSE, FALSE));
    uma4 = SPR_addSprite(&spr_uma4, 0, 160, TILE_ATTR(PAL0, FALSE, FALSE, FALSE));
    slogo = SPR_addSprite(&spr_logo, 216, 8, TILE_ATTR(PAL0, FALSE, FALSE, FALSE));
    VDP_drawText("umamusume demo v0.1", 0, 0);
    while(1)
    {
        SPR_update();
        SYS_doVBlankProcess();
    }
    return (0);
}
