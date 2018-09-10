#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <switch.h>

int main(int argc, char **argv)
{
    gfxInitDefault();
    consoleInit(NULL);
    
        int player_y, player_x;
        
        int world_y, world_x;
        int world_w, world_z;
        
        int wall_y, wall_x;
        int wall1_y, wall1_x;
        int wall2_y, wall2_x;
        int wall3_y, wall3_x;
        
    srand(time(NULL));
    
    player_y = rand() % 10;
    player_x = rand() % 10;
    
    world_y = 0;
    world_x = 0;
    world_w = 46;
    world_z = 81;
    
    wall_y = 3;
    wall1_y = 3;
    wall2_y = 3;
    wall3_y = 3;
    wall_x = 10;
    wall1_x = 11;
    wall2_x = 12;
    wall3_x = 13;
    
    printf("\x1b[3;70H%d;%d", player_y, player_x);
    printf("\x1b[%d;%dHl", player_y, player_x);
    printf("\x1b[%d;%dHX", wall_y, wall_x);
    printf("\x1b[%d;%dHX", wall1_y, wall1_x);
    printf("\x1b[%d;%dHX", wall2_y, wall2_x);
    printf("\x1b[%d;%dHX", wall3_y, wall3_x);
    
    
    while(appletMainLoop())
    {
        hidScanInput();

        u64 kDown = hidKeysDown(CONTROLLER_P1_AUTO);
        
        printf("\x1b[3;70H %d ; %d ", player_y, player_x);
        
        if (kDown & KEY_DUP) {
                  printf("\x1b[%d;%dH ", player_y, player_x);
                  player_y = player_y - 1;
                  printf("\x1b[%d;%dHl", player_y, player_x);
                  }
        if (kDown & KEY_DDOWN) {
                  printf("\x1b[%d;%dH ", player_y, player_x);
                  player_y = player_y + 1;
                  printf("\x1b[%d;%dHl", player_y, player_x);
                  }
        if (kDown & KEY_DLEFT) {
                  printf("\x1b[%d;%dH ", player_y, player_x);
                  player_x = player_x - 1;
                  printf("\x1b[%d;%dHl", player_y, player_x);
                  }
        if (kDown & KEY_DRIGHT) {
                  printf("\x1b[%d;%dH ", player_y, player_x);
                  player_x = player_x + 1;
                  printf("\x1b[%d;%dHl", player_y, player_x);
                  }
                  
        if (kDown & KEY_PLUS) break;
//______________________________________________________________________world 0
        if (kDown & KEY_DUP) {
        if (player_y == world_y){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == world_y) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_x == world_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_x == world_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                       }
                      }
//_______________________________________________________________________world 1
        if (kDown & KEY_DUP) {
        if (player_y == world_w){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == world_w) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_x == world_z) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_x == world_z) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                       }
                      }
//______________________________________________________________________wall 0      
        if (kDown & KEY_DUP) {
        if (player_y == wall_y && player_x == wall_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall_y, wall_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall_y && player_x == wall_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall_y, wall_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall_y && player_x == wall_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall_y, wall_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall_y && player_x == wall_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall_y, wall_x);
                       }
                      }
//______________________________________________________________________wall 1
                if (kDown & KEY_DUP) {
        if (player_y == wall1_y && player_x == wall1_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall1_y, wall1_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall1_y && player_x == wall1_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall1_y, wall1_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall1_y && player_x == wall1_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall1_y, wall1_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall1_y && player_x == wall1_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall1_y, wall1_x);
                       }
                      }
//______________________________________________________________________wall 2
        if (kDown & KEY_DUP) {
        if (player_y == wall2_y && player_x == wall2_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall2_y, wall2_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall2_y && player_x == wall2_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall2_y, wall2_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall2_y && player_x == wall2_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall2_y, wall2_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall2_y && player_x == wall2_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall2_y, wall2_x);
                       }
                      }
//______________________________________________________________________wall 3 
        if (kDown & KEY_DUP) {
        if (player_y == wall3_y && player_x == wall3_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall3_y, wall3_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall3_y && player_x == wall3_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall3_y, wall3_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall3_y && player_x == wall3_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall3_y, wall3_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall3_y && player_x == wall3_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall3_y, wall3_x);
                       }
                      }
                      
        gfxFlushBuffers();
        gfxSwapBuffers();
        gfxWaitForVsync();
    }

    gfxExit();
    return 0;
}
