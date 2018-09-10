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
        int wall4_y, wall4_x;
        int wall5_y, wall5_x;
        int wall6_y, wall6_x;
        int wall7_y, wall7_x;
        int wall8_y, wall8_x;
        int wall9_y, wall9_x;
        int wall10_y, wall10_x;
        int wall11_y, wall11_x;
        int wall12_y, wall12_x;
        int wall13_y, wall13_x;
        int wall14_y, wall14_x;
        int wall15_y, wall15_x;
        int wall16_y, wall16_x;
        int wall17_y, wall17_x;
        
    srand(time(NULL));
    
    player_y = rand() % 10;
    player_x = rand() % 10;
    
    world_y = 0;
    world_x = 0;
    world_w = 46;
    world_z = 81;
    
    wall_y = 6;
    wall1_y = 6;
    wall2_y = 6;
    wall3_y = 6;
    wall4_y = 6;
    wall5_y = 6;
    wall6_y = 6;
    wall7_y = 6;
    wall8_y = 6;
    wall9_y = 6;
    wall10_y = 6;
    wall11_y = 6;
    wall12_y = 6;
    wall13_y = 6;
    wall14_y = 6;
    wall15_y = 6;
    wall16_y = 6;
    wall17_y = 6;
    
    wall_x = 1;
    wall1_x = 2;
    wall2_x = 3;
    wall3_x = 4;
    wall4_x = 5;
    wall5_x = 6;
    wall6_x = 7;
    wall7_x = 8;
    wall8_x = 9;
    wall9_x = 10;
    wall10_x = 11;
    wall11_x = 12;
    wall12_x = 13;
    wall13_x = 14;
    wall14_x = 15;
    wall15_x = 16;
    wall16_x = 17;
    wall17_x = 18;
    
    
    printf("\x1b[3;70H%d;%d", player_y, player_x);
    printf("\x1b[%d;%dHl", player_y, player_x);
    printf("\x1b[%d;%dHX", wall_y, wall_x);
    printf("\x1b[%d;%dHX", wall1_y, wall1_x);
    printf("\x1b[%d;%dHX", wall2_y, wall2_x);
    printf("\x1b[%d;%dHX", wall3_y, wall3_x);
    printf("\x1b[%d;%dHX", wall4_y, wall4_x);
    printf("\x1b[%d;%dHX", wall5_y, wall5_x);
    printf("\x1b[%d;%dHX", wall6_y, wall6_x);
    printf("\x1b[%d;%dHX", wall7_y, wall7_x);
    printf("\x1b[%d;%dHX", wall8_y, wall8_x);
    printf("\x1b[%d;%dHX", wall9_y, wall9_x);
    printf("\x1b[%d;%dHX", wall10_y, wall10_x);
    printf("\x1b[%d;%dHX", wall11_y, wall11_x);
    printf("\x1b[%d;%dHX", wall12_y, wall12_x);
    printf("\x1b[%d;%dHX", wall13_y, wall13_x);
    printf("\x1b[%d;%dHX", wall14_y, wall14_x);
    printf("\x1b[%d;%dHX", wall15_y, wall15_x);
    printf("\x1b[%d;%dHX", wall16_y, wall16_x);
    printf("\x1b[%d;%dHX", wall17_y, wall17_x);
    
    
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
//___________________________________________________________________world y, x
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
//___________________________________________________________________world w, z
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
                      //--------------------------------------------------wall 4
        if (kDown & KEY_DUP) {
        if (player_y == wall4_y && player_x == wall4_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall4_y, wall4_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall4_y && player_x == wall4_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall4_y, wall4_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall4_y && player_x == wall4_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall4_y, wall4_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall4_y && player_x == wall4_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall4_y, wall4_x);
                       }
                      }
                      //-----------------------------------------------wall 5
        if (kDown & KEY_DUP) {
        if (player_y == wall5_y && player_x == wall5_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall5_y, wall5_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall5_y && player_x == wall5_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall5_y, wall5_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall5_y && player_x == wall5_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall5_y, wall5_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall5_y && player_x == wall5_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall5_y, wall5_x);
                       }
                      }
                      //------------------------------------------------wall 6
        if (kDown & KEY_DUP) {
        if (player_y == wall6_y && player_x == wall6_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall6_y, wall6_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall6_y && player_x == wall6_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall6_y, wall6_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall6_y && player_x == wall6_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall6_y, wall6_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall6_y && player_x == wall6_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall6_y, wall6_x);
                       }
                      }
                      //--------------------------------------------------wall 7
        if (kDown & KEY_DUP) {
        if (player_y == wall7_y && player_x == wall7_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall7_y, wall7_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall7_y && player_x == wall7_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall7_y, wall7_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall7_y && player_x == wall7_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall7_y, wall7_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall7_y && player_x == wall7_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall7_y, wall7_x);
                       }
                      }
                      //--------------------------------------------------wall 8
        if (kDown & KEY_DUP) {
        if (player_y == wall8_y && player_x == wall8_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall8_y, wall8_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall8_y && player_x == wall8_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall8_y, wall8_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall8_y && player_x == wall8_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall8_y, wall8_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall8_y && player_x == wall8_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall8_y, wall8_x);
                       }
                      }
                      //-----------------------------------------------wall 9
        if (kDown & KEY_DUP) {
        if (player_y == wall9_y && player_x == wall9_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall9_y, wall9_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall9_y && player_x == wall9_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall9_y, wall9_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall9_y && player_x == wall9_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall9_y, wall9_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall9_y && player_x == wall9_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall9_y, wall9_x);
                       }
                      }
                      //------------------------------------------------wall 10
        if (kDown & KEY_DUP) {
        if (player_y == wall10_y && player_x == wall10_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall10_y, wall10_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall10_y && player_x == wall10_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall10_y, wall10_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall10_y && player_x == wall10_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall10_y, wall10_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall10_y && player_x == wall10_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall10_y, wall10_x);
                       }
                      }
                      //-------------------------------------------------wall 11
        if (kDown & KEY_DUP) {
        if (player_y == wall11_y && player_x == wall11_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall11_y, wall11_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall11_y && player_x == wall11_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall11_y, wall11_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall11_y && player_x == wall11_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall11_y, wall11_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall11_y && player_x == wall11_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall11_y, wall11_x);
                       }
                      }
                      //------------------------------------------------wall 12
        if (kDown & KEY_DUP) {
        if (player_y == wall12_y && player_x == wall12_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall12_y, wall12_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall12_y && player_x == wall12_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall12_y, wall12_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall12_y && player_x == wall12_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall12_y, wall12_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall12_y && player_x == wall12_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall12_y, wall12_x);
                       }
                      }
                      //----------------------------------------------wall 13
        if (kDown & KEY_DUP) {
        if (player_y == wall13_y && player_x == wall13_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall13_y, wall13_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall13_y && player_x == wall13_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall13_y, wall13_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall13_y && player_x == wall13_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall13_y, wall13_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall13_y && player_x == wall13_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall13_y, wall13_x);
                       }
                      }
                      //-------------------------------------------------wall 14
        if (kDown & KEY_DUP) {
        if (player_y == wall14_y && player_x == wall14_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall14_y, wall14_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall14_y && player_x == wall14_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall14_y, wall14_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall14_y && player_x == wall14_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall14_y, wall14_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall14_y && player_x == wall14_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall14_y, wall14_x);
                       }
                      }
                      //-------------------------------------------------wall 15
        if (kDown & KEY_DUP) {
        if (player_y == wall15_y && player_x == wall15_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall15_y, wall15_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall15_y && player_x == wall15_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall15_y, wall15_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall15_y && player_x == wall15_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall15_y, wall15_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall15_y && player_x == wall15_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall15_y, wall15_x);
                       }
                      }
                      //------------------------------------------------wall 16
        if (kDown & KEY_DUP) {
        if (player_y == wall16_y && player_x == wall16_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall16_y, wall16_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall16_y && player_x == wall16_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall16_y, wall16_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall16_y && player_x == wall16_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall16_y, wall16_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall16_y && player_x == wall16_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall16_y, wall16_x);
                       }
                      }
                      //---------------------------------------------wall 17
        if (kDown & KEY_DUP) {
        if (player_y == wall17_y && player_x == wall17_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall17_y, wall17_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall17_y && player_x == wall17_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall17_y, wall17_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall17_y && player_x == wall17_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall17_y, wall17_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall17_y && player_x == wall17_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall17_y, wall17_x);
                       }
                      }
        gfxFlushBuffers();
        gfxSwapBuffers();
        gfxWaitForVsync();
    }

    gfxExit();
    return 0;
}
