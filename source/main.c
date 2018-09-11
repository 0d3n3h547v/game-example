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
        int wall18_y, wall18_x;
        int wall19_y, wall19_x;
        int wall20_y, wall20_x;
        int wall21_y, wall21_x;
        int wall22_y, wall22_x;
        int wall23_y, wall23_x;
        int wall24_y, wall24_x;
        int wall25_y, wall25_x;
        int wall26_y, wall26_x;
        int wall27_y, wall27_x;
        int wall28_y, wall28_x;
        int wall29_y, wall29_x;
        int wall30_y, wall30_x;
        int wall31_y, wall31_x;
        int wall32_y, wall32_x;
        int wall33_y, wall33_x;
        int wall34_y, wall34_x;
        int wall35_y, wall35_x;
        int wall36_y, wall36_x;
        int wall37_y, wall37_x;
        int wall38_y, wall38_x;
        int wall39_y, wall39_x;
        int wall40_y, wall40_x;
        int wall41_y, wall41_x;
        int wall42_y, wall42_x;
        int wall43_y, wall43_x;
        int wall44_y, wall44_x;
        int wall45_y, wall45_x;
        int wall46_y, wall46_x;
        int wall47_y, wall47_x;
        int wall48_y, wall48_x;
        int wall49_y, wall49_x;
        int wall50_y, wall50_x;
        int wall51_y, wall51_x;
        int wall52_y, wall52_x;
        int wall53_y, wall53_x;
        int wall54_y, wall54_x;
        int wall55_y, wall55_x;
        int wall56_y, wall56_x;
        int wall57_y, wall57_x;
        int wall58_y, wall58_x;
        int wall59_y, wall59_x;
        int wall60_y, wall60_x;
        int wall61_y, wall61_x;
        int wall62_y, wall62_x;
        int wall63_y, wall63_x;
        int wall64_y, wall64_x;
        int wall65_y, wall65_x;
        int wall66_y, wall66_x;
        int wall67_y, wall67_x;
        int wall68_y, wall68_x;
        int wall69_y, wall69_x;
        int wall70_y, wall70_x;
        int wall71_y, wall71_x;
        int wall72_y, wall72_x;
        int wall73_y, wall73_x;
        int wall74_y, wall74_x;
        int wall75_y, wall75_x;
        int wall76_y, wall76_x;
        int wall77_y, wall77_x;
        int wall78_y, wall78_x;
        int wall79_y, wall79_x;
        
    srand(time(NULL));
    
    player_y = 17;
    player_x = 11;
    
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
    wall18_y = 6;
    wall19_y = 6;
    wall20_y = 6;
    wall21_y = 6;
    wall22_y = 6;
    wall23_y = 6;
    wall24_y = 6;
    wall25_y = 6;
    wall26_y = 6;
    wall27_y = 6;
    wall28_y = 6;
    wall29_y = 6;
    wall30_y = 6;
    wall31_y = 6;
    wall32_y = 6;
    wall33_y = 6;
    wall34_y = 6;
    wall35_y = 6;
    wall36_y = 6;
    wall37_y = 6;
    wall38_y = 6;
    wall39_y = 6;
    wall40_y = 6;
    wall41_y = 6;
    wall42_y = 6;
    wall43_y = 6;
    wall44_y = 6;
    wall45_y = 6;
    wall46_y = 6;
    wall47_y = 6;
    wall48_y = 6;
    wall49_y = 6;
    wall50_y = 6;
    wall51_y = 6;
    wall52_y = 6;
    wall53_y = 6;
    wall54_y = 6;
    wall55_y = 6;
    wall56_y = 6;
    wall57_y = 6;
    wall58_y = 6;
    wall59_y = 6;
    wall60_y = 6;
    wall61_y = 6;
    wall62_y = 6;
    wall63_y = 6;
    wall64_y = 6;
    wall65_y = 6;
    wall66_y = 6;
    wall67_y = 6;
    wall68_y = 6;
    wall69_y = 6;
    wall70_y = 6;
    wall71_y = 6;
    wall72_y = 6;
    wall73_y = 6;
    wall74_y = 6;
    wall75_y = 6;
    wall76_y = 6;
    wall77_y = 6;
    wall78_y = 6;
    wall79_y = 6;
    
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
    wall18_x = 19;
    wall19_x = 20;
    wall20_x = 21;
    wall21_x = 22;
    wall22_x = 23;
    wall23_x = 24;
    wall24_x = 25;
    wall25_x = 26;
    wall26_x = 27;
    wall27_x = 28;
    wall28_x = 29;
    wall29_x = 30;
    wall30_x = 31;
    wall31_x = 32;
    wall32_x = 33;
    wall33_x = 34;
    wall34_x = 35;
    wall35_x = 36;
    wall36_x = 37;
    wall37_x = 38;
    wall38_x = 39;
    wall39_x = 40;
    wall40_x = 41;
    wall41_x = 42;
    wall42_x = 43;
    wall43_x = 44;
    wall44_x = 45;
    wall45_x = 46;
    wall46_x = 47;
    wall47_x = 48;
    wall48_x = 49;
    wall49_x = 50;
    wall50_x = 51;
    wall51_x = 52;
    wall52_x = 53;
    wall53_x = 54;
    wall54_x = 55;
    wall55_x = 56;
    wall56_x = 57;
    wall57_x = 58;
    wall58_x = 59;
    wall59_x = 60;
    wall60_x = 61;
    wall61_x = 62;
    wall62_x = 63;
    wall63_x = 64;
    wall64_x = 65;
    wall65_x = 66;
    wall66_x = 67;
    wall67_x = 68;
    wall68_x = 69;
    wall69_x = 70;
    wall70_x = 71;
    wall71_x = 72;
    wall72_x = 73;
    wall73_x = 74;
    wall74_x = 75;
    wall75_x = 76;
    wall76_x = 77;
    wall77_x = 78;
    wall78_x = 79;
    wall79_x = 80;
    
    printf("\x1b[3;70H%d;%d", player_y, player_x);
    printf("\x1b[%d;%dHl", player_y, player_x);
    
    while(appletMainLoop())
    {
        hidScanInput();

        u64 kDown = hidKeysDown(CONTROLLER_P1_AUTO);
        
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
    printf("\x1b[%d;%dHX", wall18_y, wall18_x);
    printf("\x1b[%d;%dHX", wall19_y, wall19_x);
    printf("\x1b[%d;%dHX", wall20_y, wall20_x);
    printf("\x1b[%d;%dHX", wall21_y, wall21_x);
    printf("\x1b[%d;%dHX", wall22_y, wall22_x);
    printf("\x1b[%d;%dHX", wall23_y, wall23_x);
    printf("\x1b[%d;%dHX", wall24_y, wall24_x);
    printf("\x1b[%d;%dHX", wall25_y, wall25_x);
    printf("\x1b[%d;%dHX", wall26_y, wall26_x);
    printf("\x1b[%d;%dHX", wall27_y, wall27_x);
    printf("\x1b[%d;%dHX", wall28_y, wall28_x);
    printf("\x1b[%d;%dHX", wall29_y, wall29_x);
    printf("\x1b[%d;%dHX", wall30_y, wall30_x);
    printf("\x1b[%d;%dHX", wall31_y, wall31_x);
    printf("\x1b[%d;%dHX", wall32_y, wall32_x);
    printf("\x1b[%d;%dHX", wall33_y, wall33_x);
    printf("\x1b[%d;%dHX", wall34_y, wall34_x);
    printf("\x1b[%d;%dHX", wall35_y, wall35_x);
    printf("\x1b[%d;%dHX", wall36_y, wall36_x);
    printf("\x1b[%d;%dHX", wall37_y, wall37_x);
    printf("\x1b[%d;%dHX", wall38_y, wall38_x);
    printf("\x1b[%d;%dHX", wall39_y, wall39_x);
    printf("\x1b[%d;%dHX", wall40_y, wall40_x);
    printf("\x1b[%d;%dHX", wall41_y, wall41_x);
    printf("\x1b[%d;%dHX", wall42_y, wall42_x);
    printf("\x1b[%d;%dHX", wall43_y, wall43_x);
    printf("\x1b[%d;%dHX", wall44_y, wall44_x);
    printf("\x1b[%d;%dHX", wall45_y, wall45_x);
    printf("\x1b[%d;%dHX", wall46_y, wall46_x);
    printf("\x1b[%d;%dHX", wall47_y, wall47_x);
    printf("\x1b[%d;%dHX", wall48_y, wall48_x);
    printf("\x1b[%d;%dHX", wall49_y, wall49_x);
    printf("\x1b[%d;%dHX", wall50_y, wall50_x);
    printf("\x1b[%d;%dHX", wall51_y, wall51_x);
    printf("\x1b[%d;%dHX", wall52_y, wall52_x);
    printf("\x1b[%d;%dHX", wall53_y, wall53_x);
    printf("\x1b[%d;%dHX", wall54_y, wall54_x);
    printf("\x1b[%d;%dHX", wall55_y, wall55_x);
    printf("\x1b[%d;%dHX", wall56_y, wall56_x);
    printf("\x1b[%d;%dHX", wall57_y, wall57_x);
    printf("\x1b[%d;%dHX", wall58_y, wall58_x);
    printf("\x1b[%d;%dHX", wall59_y, wall59_x);
    printf("\x1b[%d;%dHX", wall60_y, wall60_x);
    printf("\x1b[%d;%dHX", wall61_y, wall61_x);
    printf("\x1b[%d;%dHX", wall62_y, wall62_x);
    printf("\x1b[%d;%dHX", wall63_y, wall63_x);
    printf("\x1b[%d;%dHX", wall64_y, wall64_x);
    printf("\x1b[%d;%dHX", wall65_y, wall65_x);
    printf("\x1b[%d;%dHX", wall66_y, wall66_x);
    printf("\x1b[%d;%dHX", wall67_y, wall67_x);
    printf("\x1b[%d;%dHX", wall68_y, wall68_x);
    printf("\x1b[%d;%dHX", wall69_y, wall69_x);
    printf("\x1b[%d;%dHX", wall70_y, wall70_x);
    printf("\x1b[%d;%dHX", wall71_y, wall71_x);
    printf("\x1b[%d;%dHX", wall72_y, wall72_x);
    printf("\x1b[%d;%dHX", wall73_y, wall73_x);
    printf("\x1b[%d;%dHX", wall74_y, wall74_x);
    printf("\x1b[%d;%dHX", wall75_y, wall75_x);
    printf("\x1b[%d;%dHX", wall76_y, wall76_x);
    printf("\x1b[%d;%dHX", wall77_y, wall77_x);
    printf("\x1b[%d;%dHX", wall78_y, wall78_x);
    printf("\x1b[%d;%dHX", wall79_y, wall79_x);
        
        printf("\x1b[3;70H%d;%d ", player_y, player_x);
        
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
//______________________________________________________________________wall 18
if (kDown & KEY_DUP) {
        if (player_y == wall18_y && player_x == wall18_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall18_y, wall18_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall18_y && player_x == wall18_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall18_y, wall18_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall18_y && player_x == wall18_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall18_y, wall18_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall18_y && player_x == wall18_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall18_y, wall18_x);
                       }
                      }
//______________________________________________________________________wall 19
if (kDown & KEY_DUP) {
        if (player_y == wall19_y && player_x == wall19_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall19_y, wall19_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall19_y && player_x == wall19_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall19_y, wall19_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall19_y && player_x == wall19_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall19_y, wall19_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall19_y && player_x == wall19_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall19_y, wall19_x);
                       }
                      }
//______________________________________________________________________wall 20
if (kDown & KEY_DUP) {
        if (player_y == wall20_y && player_x == wall20_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall20_y, wall20_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall20_y && player_x == wall20_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall20_y, wall20_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall20_y && player_x == wall20_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall20_y, wall20_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall20_y && player_x == wall20_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall20_y, wall20_x);
                       }
                      }
//______________________________________________________________________wall 21
if (kDown & KEY_DUP) {
        if (player_y == wall21_y && player_x == wall21_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall21_y, wall21_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall21_y && player_x == wall21_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall21_y, wall21_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall21_y && player_x == wall21_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall21_y, wall21_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall21_y && player_x == wall21_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall21_y, wall21_x);
                       }
                      }
//______________________________________________________________________wall 22
if (kDown & KEY_DUP) {
        if (player_y == wall22_y && player_x == wall22_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall22_y, wall22_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall22_y && player_x == wall22_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall22_y, wall22_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall22_y && player_x == wall22_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall22_y, wall22_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall22_y && player_x == wall22_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall22_y, wall22_x);
                       }
                      }
//______________________________________________________________________wall 23
if (kDown & KEY_DUP) {
        if (player_y == wall23_y && player_x == wall23_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall23_y, wall23_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall23_y && player_x == wall23_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall23_y, wall23_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall23_y && player_x == wall23_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall23_y, wall23_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall23_y && player_x == wall23_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall23_y, wall23_x);
                       }
                      }
//______________________________________________________________________wall 24
if (kDown & KEY_DUP) {
        if (player_y == wall24_y && player_x == wall24_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall24_y, wall24_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall24_y && player_x == wall24_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall24_y, wall24_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall24_y && player_x == wall24_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall24_y, wall24_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall24_y && player_x == wall24_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall24_y, wall24_x);
                       }
                      }
//______________________________________________________________________wall 25
if (kDown & KEY_DUP) {
        if (player_y == wall25_y && player_x == wall25_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall25_y, wall25_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall25_y && player_x == wall25_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall25_y, wall25_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall25_y && player_x == wall25_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall25_y, wall25_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall25_y && player_x == wall25_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall25_y, wall25_x);
                       }
                      }
//______________________________________________________________________wall 26
if (kDown & KEY_DUP) {
        if (player_y == wall26_y && player_x == wall26_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall26_y, wall26_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall26_y && player_x == wall26_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall26_y, wall26_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall26_y && player_x == wall26_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall26_y, wall26_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall26_y && player_x == wall26_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall26_y, wall26_x);
                       }
                      }
//______________________________________________________________________wall 27
if (kDown & KEY_DUP) {
        if (player_y == wall27_y && player_x == wall27_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall27_y, wall27_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall27_y && player_x == wall27_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall27_y, wall27_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall27_y && player_x == wall27_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall27_y, wall27_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall27_y && player_x == wall27_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall27_y, wall27_x);
                       }
                      }
//______________________________________________________________________wall 28
if (kDown & KEY_DUP) {
        if (player_y == wall28_y && player_x == wall28_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall28_y, wall28_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall28_y && player_x == wall28_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall28_y, wall28_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall28_y && player_x == wall28_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall28_y, wall28_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall28_y && player_x == wall28_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall28_y, wall28_x);
                       }
                      }
//______________________________________________________________________wall 29
if (kDown & KEY_DUP) {
        if (player_y == wall29_y && player_x == wall29_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall29_y, wall29_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall29_y && player_x == wall29_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall29_y, wall29_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall29_y && player_x == wall29_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall29_y, wall29_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall29_y && player_x == wall29_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall29_y, wall29_x);
                       }
                      }
//______________________________________________________________________wall 30
if (kDown & KEY_DUP) {
        if (player_y == wall30_y && player_x == wall30_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall30_y, wall30_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall30_y && player_x == wall30_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall30_y, wall30_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall30_y && player_x == wall30_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall30_y, wall30_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall30_y && player_x == wall30_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall30_y, wall30_x);
                       }
                      }
//______________________________________________________________________wall 31
if (kDown & KEY_DUP) {
        if (player_y == wall31_y && player_x == wall31_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall31_y, wall31_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall31_y && player_x == wall31_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall31_y, wall31_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall31_y && player_x == wall31_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall31_y, wall31_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall31_y && player_x == wall31_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall31_y, wall31_x);
                       }
                      }
//______________________________________________________________________wall 32
if (kDown & KEY_DUP) {
        if (player_y == wall32_y && player_x == wall32_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall32_y, wall32_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall32_y && player_x == wall32_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall32_y, wall32_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall32_y && player_x == wall32_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall32_y, wall32_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall32_y && player_x == wall32_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall32_y, wall32_x);
                       }
                      }
//______________________________________________________________________wall 33
if (kDown & KEY_DUP) {
        if (player_y == wall33_y && player_x == wall33_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall33_y, wall33_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall33_y && player_x == wall33_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall33_y, wall33_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall_y && player_x == wall_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall33_y, wall33_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall33_y && player_x == wall33_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall33_y, wall33_x);
                       }
                      }
//______________________________________________________________________wall 34
if (kDown & KEY_DUP) {
        if (player_y == wall34_y && player_x == wall34_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall34_y, wall34_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall34_y && player_x == wall34_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall34_y, wall34_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall34_y && player_x == wall34_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall34_y, wall34_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall34_y && player_x == wall34_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall34_y, wall34_x);
                       }
                      }
//______________________________________________________________________wall 35
if (kDown & KEY_DUP) {
        if (player_y == wall35_y && player_x == wall35_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall35_y, wall35_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall35_y && player_x == wall35_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall35_y, wall35_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall35_y && player_x == wall35_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall35_y, wall35_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall35_y && player_x == wall35_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall35_y, wall35_x);
                       }
                      }
//______________________________________________________________________wall 36
if (kDown & KEY_DUP) {
        if (player_y == wall36_y && player_x == wall36_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall36_y, wall36_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall36_y && player_x == wall36_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall36_y, wall36_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall36_y && player_x == wall36_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall36_y, wall36_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall36_y && player_x == wall36_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall36_y, wall36_x);
                       }
                      }
//______________________________________________________________________wall 37
if (kDown & KEY_DUP) {
        if (player_y == wall37_y && player_x == wall37_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall37_y, wall37_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall37_y && player_x == wall37_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall37_y, wall37_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall37_y && player_x == wall37_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall37_y, wall37_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall37_y && player_x == wall37_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall37_y, wall37_x);
                       }
                      }
//______________________________________________________________________wall 38
if (kDown & KEY_DUP) {
        if (player_y == wall38_y && player_x == wall38_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall38_y, wall38_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall38_y && player_x == wall38_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall38_y, wall38_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall38_y && player_x == wall38_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall38_y, wall38_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall38_y && player_x == wall38_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall38_y, wall38_x);
                       }
                      }
//______________________________________________________________________wall 39
if (kDown & KEY_DUP) {
        if (player_y == wall39_y && player_x == wall39_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall39_y, wall39_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall39_y && player_x == wall39_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall39_y, wall39_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall39_y && player_x == wall39_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall39_y, wall39_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall39_y && player_x == wall39_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall39_y, wall39_x);
                       }
                      }
//______________________________________________________________________wall 40
if (kDown & KEY_DUP) {
        if (player_y == wall40_y && player_x == wall40_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall40_y, wall40_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall40_y && player_x == wall40_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall40_y, wall40_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall40_y && player_x == wall40_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall40_y, wall40_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall40_y && player_x == wall40_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall40_y, wall40_x);
                       }
                      }
                      //-------------------------------------------------wall 41
if (kDown & KEY_DUP) {
        if (player_y == wall41_y && player_x == wall41_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall41_y, wall41_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall41_y && player_x == wall41_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall41_y, wall41_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall41_y && player_x == wall41_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall41_y, wall41_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall41_y && player_x == wall41_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall41_y, wall41_x);
                       }
                      }
//______________________________________________________________________wall 42
        if (kDown & KEY_DUP) {
        if (player_y == wall42_y && player_x == wall42_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall42_y, wall42_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall42_y && player_x == wall42_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall42_y, wall42_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall42_y && player_x == wall42_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall42_y, wall42_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall42_y && player_x == wall42_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall42_y, wall42_x);
                       }
                      }
//______________________________________________________________________wall 43
        if (kDown & KEY_DUP) {
        if (player_y == wall43_y && player_x == wall43_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall43_y, wall43_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall43_y && player_x == wall43_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall43_y, wall43_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall43_y && player_x == wall43_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall43_y, wall43_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall43_y && player_x == wall43_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall43_y, wall43_x);
                       }
                      }
//______________________________________________________________________wall 44
        if (kDown & KEY_DUP) {
        if (player_y == wall44_y && player_x == wall44_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall44_y, wall44_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall44_y && player_x == wall44_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall44_y, wall44_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall44_y && player_x == wall44_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall44_y, wall44_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall44_y && player_x == wall44_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall44_y, wall44_x);
                       }
                      }
//______________________________________________________________________wall 45
        if (kDown & KEY_DUP) {
        if (player_y == wall45_y && player_x == wall45_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall45_y, wall45_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall45_y && player_x == wall45_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall45_y, wall45_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall45_y && player_x == wall45_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall45_y, wall45_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall45_y && player_x == wall45_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall45_y, wall45_x);
                       }
                      }
//______________________________________________________________________wall 46
        if (kDown & KEY_DUP) {
        if (player_y == wall46_y && player_x == wall46_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall46_y, wall46_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall46_y && player_x == wall46_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall46_y, wall46_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall46_y && player_x == wall46_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall46_y, wall46_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall46_y && player_x == wall46_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall46_y, wall46_x);
                       }
                      }
//______________________________________________________________________wall 47
        if (kDown & KEY_DUP) {
        if (player_y == wall47_y && player_x == wall47_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall47_y, wall47_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall47_y && player_x == wall47_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall47_y, wall47_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall47_y && player_x == wall47_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall47_y, wall47_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall47_y && player_x == wall47_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall47_y, wall47_x);
                       }
                      }
//______________________________________________________________________wall 48
        if (kDown & KEY_DUP) {
        if (player_y == wall48_y && player_x == wall48_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall48_y, wall48_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall48_y && player_x == wall48_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall48_y, wall48_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall48_y && player_x == wall48_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall48_y, wall48_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall48_y && player_x == wall48_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall48_y, wall48_x);
                       }
                      }
//______________________________________________________________________wall 49
        if (kDown & KEY_DUP) {
        if (player_y == wall49_y && player_x == wall49_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall49_y, wall49_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall49_y && player_x == wall49_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall49_y, wall49_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall49_y && player_x == wall49_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall49_y, wall49_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall49_y && player_x == wall49_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall49_y, wall49_x);
                       }
                      }
//______________________________________________________________________wall 50
        if (kDown & KEY_DUP) {
        if (player_y == wall50_y && player_x == wall50_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall50_y, wall50_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall50_y && player_x == wall50_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall50_y, wall50_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall50_y && player_x == wall50_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall50_y, wall50_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall50_y && player_x == wall50_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall50_y, wall50_x);
                       }
                      }
//______________________________________________________________________wall 51
        if (kDown & KEY_DUP) {
        if (player_y == wall51_y && player_x == wall51_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall51_y, wall51_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall51_y && player_x == wall51_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall51_y, wall51_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall51_y && player_x == wall51_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall51_y, wall51_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall51_y && player_x == wall51_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall51_y, wall51_x);
                       }
                      }
//______________________________________________________________________wall 52
        if (kDown & KEY_DUP) {
        if (player_y == wall52_y && player_x == wall52_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall52_y, wall52_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall52_y && player_x == wall52_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall52_y, wall52_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall52_y && player_x == wall52_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall52_y, wall52_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall52_y && player_x == wall52_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall52_y, wall52_x);
                       }
                      }
//______________________________________________________________________wall 53
        if (kDown & KEY_DUP) {
        if (player_y == wall53_y && player_x == wall53_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall53_y, wall53_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall53_y && player_x == wall53_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall53_y, wall53_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall53_y && player_x == wall53_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall53_y, wall53_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall53_y && player_x == wall53_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall53_y, wall53_x);
                       }
                      }
//______________________________________________________________________wall 54 
        if (kDown & KEY_DUP) {
        if (player_y == wall54_y && player_x == wall54_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall54_y, wall54_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall54_y && player_x == wall54_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall54_y, wall54_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall54_y && player_x == wall54_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall54_y, wall54_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall54_y && player_x == wall54_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall54_y, wall54_x);
                       }
                      }
//______________________________________________________________________wall 55
        if (kDown & KEY_DUP) {
        if (player_y == wall55_y && player_x == wall55_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall55_y, wall55_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall55_y && player_x == wall55_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall55_y, wall55_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall55_y && player_x == wall55_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall55_y, wall55_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall55_y && player_x == wall55_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall55_y, wall55_x);
                       }
                      }
//______________________________________________________________________wall 56
        if (kDown & KEY_DUP) {
        if (player_y == wall56_y && player_x == wall56_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall56_y, wall56_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall56_y && player_x == wall56_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall56_y, wall56_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall56_y && player_x == wall56_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall56_y, wall56_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall56_y && player_x == wall56_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall56_y, wall56_x);
                       }
                      }
//______________________________________________________________________wall 57
        if (kDown & KEY_DUP) {
        if (player_y == wall57_y && player_x == wall57_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall57_y, wall57_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall57_y && player_x == wall57_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall57_y, wall57_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall57_y && player_x == wall57_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall57_y, wall57_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall57_y && player_x == wall57_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall57_y, wall57_x);
                       }
                      }
//______________________________________________________________________wall 58
        if (kDown & KEY_DUP) {
        if (player_y == wall58_y && player_x == wall58_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall58_y, wall58_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall58_y && player_x == wall58_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall58_y, wall58_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall58_y && player_x == wall58_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall58_y, wall58_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall58_y && player_x == wall58_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall58_y, wall58_x);
                       }
                      }
//______________________________________________________________________wall 59
        if (kDown & KEY_DUP) {
        if (player_y == wall59_y && player_x == wall59_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall59_y, wall59_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall59_y && player_x == wall59_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall59_y, wall59_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall59_y && player_x == wall59_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall59_y, wall59_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall59_y && player_x == wall59_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall59_y, wall59_x);
                       }
                      }
//______________________________________________________________________wall 60
        if (kDown & KEY_DUP) {
        if (player_y == wall60_y && player_x == wall60_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall60_y, wall60_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall60_y && player_x == wall60_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall60_y, wall60_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall60_y && player_x == wall60_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall60_y, wall60_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall60_y && player_x == wall60_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall60_y, wall60_x);
                       }
                      }
//______________________________________________________________________wall 61
        if (kDown & KEY_DUP) {
        if (player_y == wall61_y && player_x == wall61_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall61_y, wall61_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall61_y && player_x == wall61_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall61_y, wall61_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall61_y && player_x == wall61_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall61_y, wall61_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall61_y && player_x == wall61_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall61_y, wall61_x);
                       }
                      }
//______________________________________________________________________wall 62
        if (kDown & KEY_DUP) {
        if (player_y == wall62_y && player_x == wall62_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall62_y, wall62_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall62_y && player_x == wall62_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall62_y, wall62_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall62_y && player_x == wall62_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall62_y, wall62_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall62_y && player_x == wall62_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall62_y, wall62_x);
                       }
                      }
//______________________________________________________________________wall 63
        if (kDown & KEY_DUP) {
        if (player_y == wall63_y && player_x == wall63_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall63_y, wall63_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall63_y && player_x == wall63_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall63_y, wall63_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall63_y && player_x == wall63_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall63_y, wall63_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall63_y && player_x == wall63_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall63_y, wall63_x);
                       }
                      }
//______________________________________________________________________wall 64
        if (kDown & KEY_DUP) {
        if (player_y == wall64_y && player_x == wall64_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall64_y, wall64_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall64_y && player_x == wall64_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall64_y, wall64_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall64_y && player_x == wall64_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall64_y, wall64_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall64_y && player_x == wall64_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall64_y, wall64_x);
                       }
                      }
//______________________________________________________________________wall 65
        if (kDown & KEY_DUP) {
        if (player_y == wall65_y && player_x == wall65_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall65_y, wall65_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall65_y && player_x == wall65_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall65_y, wall65_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall65_y && player_x == wall65_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall65_y, wall65_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall65_y && player_x == wall65_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall65_y, wall65_x);
                       }
                      }
//______________________________________________________________________wall 66
        if (kDown & KEY_DUP) {
        if (player_y == wall66_y && player_x == wall66_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall66_y, wall66_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall66_y && player_x == wall66_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall66_y, wall66_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall66_y && player_x == wall66_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall66_y, wall66_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall66_y && player_x == wall66_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall66_y, wall66_x);
                       }
                      }
//______________________________________________________________________wall 67
        if (kDown & KEY_DUP) {
        if (player_y == wall67_y && player_x == wall67_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall67_y, wall67_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall67_y && player_x == wall67_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall67_y, wall67_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall67_y && player_x == wall67_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall67_y, wall67_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall67_y && player_x == wall67_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall67_y, wall67_x);
                       }
                      }
//______________________________________________________________________wall 68
        if (kDown & KEY_DUP) {
        if (player_y == wall68_y && player_x == wall68_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall68_y, wall68_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall68_y && player_x == wall68_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall68_y, wall68_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall68_y && player_x == wall68_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall68_y, wall68_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall68_y && player_x == wall68_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall68_y, wall68_x);
                       }
                      }
//______________________________________________________________________wall 69
        if (kDown & KEY_DUP) {
        if (player_y == wall69_y && player_x == wall69_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall69_y, wall69_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall69_y && player_x == wall69_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall69_y, wall69_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall69_y && player_x == wall69_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall69_y, wall69_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall69_y && player_x == wall69_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall69_y, wall69_x);
                       }
                      }
//______________________________________________________________________wall 70
        if (kDown & KEY_DUP) {
        if (player_y == wall70_y && player_x == wall70_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall70_y, wall70_x);
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
        if (player_y == wall70_y && player_x == wall70_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall70_y, wall70_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall70_y && player_x == wall70_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall70_y, wall70_x);
                       }
                      }
//______________________________________________________________________wall 71
        if (kDown & KEY_DUP) {
        if (player_y == wall71_y && player_x == wall71_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall71_y, wall71_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall71_y && player_x == wall71_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall71_y, wall71_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall71_y && player_x == wall71_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall71_y, wall71_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall71_y && player_x == wall71_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall71_y, wall71_x);
                       }
                      }
//______________________________________________________________________wall 72
        if (kDown & KEY_DUP) {
        if (player_y == wall72_y && player_x == wall72_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall72_y, wall72_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall72_y && player_x == wall72_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall72_y, wall72_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall72_y && player_x == wall72_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall72_y, wall72_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall72_y && player_x == wall72_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall72_y, wall72_x);
                       }
                      }
//______________________________________________________________________wall 73
        if (kDown & KEY_DUP) {
        if (player_y == wall73_y && player_x == wall73_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall73_y, wall73_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall73_y && player_x == wall73_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall73_y, wall73_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall73_y && player_x == wall73_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall73_y, wall73_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall73_y && player_x == wall73_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall73_y, wall73_x);
                       }
                      }
//______________________________________________________________________wall 74
        if (kDown & KEY_DUP) {
        if (player_y == wall74_y && player_x == wall74_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall74_y, wall74_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall74_y && player_x == wall74_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall74_y, wall74_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall74_y && player_x == wall74_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall74_y, wall74_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall74_y && player_x == wall74_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall74_y, wall74_x);
                       }
                      }
//______________________________________________________________________wall 75
        if (kDown & KEY_DUP) {
        if (player_y == wall75_y && player_x == wall75_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall75_y, wall75_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall75_y && player_x == wall75_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall75_y, wall75_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall75_y && player_x == wall75_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall75_y, wall75_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall75_y && player_x == wall75_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall75_y, wall75_x);
                       }
                      }
//______________________________________________________________________wall 76
        if (kDown & KEY_DUP) {
        if (player_y == wall76_y && player_x == wall76_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall76_y, wall76_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall76_y && player_x == wall76_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall76_y, wall76_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall76_y && player_x == wall76_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall76_y, wall76_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall76_y && player_x == wall76_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall76_y, wall76_x);
                       }
                      }
//______________________________________________________________________wall 77
        if (kDown & KEY_DUP) {
        if (player_y == wall77_y && player_x == wall77_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall77_y, wall77_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall77_y && player_x == wall77_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall77_y, wall77_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall77_y && player_x == wall77_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall77_y, wall77_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall77_y && player_x == wall77_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall77_y, wall77_x);
                       }
                      }
//______________________________________________________________________wall 78
        if (kDown & KEY_DUP) {
        if (player_y == wall78_y && player_x == wall78_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall78_y, wall78_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall78_y && player_x == wall78_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall78_y, wall78_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall78_y && player_x == wall78_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall78_y, wall78_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall78_y && player_x == wall78_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall78_y, wall78_x);
                       }
                      }
//______________________________________________________________________wall 79
        if (kDown & KEY_DUP) {
        if (player_y == wall79_y && player_x == wall79_x){
                      player_y = player_y + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall79_y, wall79_x);
                       }
                      }
        if (kDown & KEY_DDOWN) {
        if (player_y == wall79_y && player_x == wall79_x) {
                      player_y = player_y - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall79_y, wall79_x);
                       }
                      }
        if (kDown & KEY_DLEFT) {
        if (player_y == wall79_y && player_x == wall79_x) {
                      player_x = player_x + 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall79_y, wall79_x);
                       }
                      }
        if (kDown & KEY_DRIGHT) {
        if (player_y == wall79_y && player_x == wall79_x) {
                      player_x = player_x - 1;
                      printf("\x1b[%d;%dHl", player_y, player_x);
                      printf("\x1b[%d;%dHX", wall79_y, wall79_x);
                       }
                      }
//______________________________________________________________________wall none
       
        gfxFlushBuffers();
        gfxSwapBuffers();
    }

    gfxExit();
    return 0;
}
