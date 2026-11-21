#include <genesis.h>
#include "resources.h"
#include "sprites.h"

int main()
{
    SPR_init();
    init_uma();
    init_misc();
    while(1)
    {
        update_uma();
        SPR_update();
        SYS_doVBlankProcess();
    }
    return (0);
}
