#ifndef BOMB_FUNC
#define BOMB_FUNC

#include "bomb_class.hpp"
#include "SaveLoad.hpp"

//char check_map(char direction, creature &caracter);
char check_map(char direction, int& x, int& y);
int create_bomb(int x, int y);
int check_map_bomb(char facing, int  x, int  y);
void kill_enemy(int x, int y);
int explode_bomb(int x, int y, int size, int diagonal);
int enemy_move(int i);
void pick_powerup(int y, int x);

#endif