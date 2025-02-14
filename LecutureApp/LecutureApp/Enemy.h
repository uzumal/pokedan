#pragma once
#include "all.h"

extern void turnToPokemon(pokemon* me, pokemon* enemy);
extern NODE* Astar(pokemon* enemy);
extern bool isNearPokemon(pokemon* me, pokemon* enemy);
extern bool isNearPokemon2(pokemon* me, pokemon* enemy);
extern bool findPokemon(pokemon* me, pokemon* enemy);
extern void charaMoveEnemy(pokemon* me, int x, int y);
extern bool isNearEnemy(pokemon* e, int x, int y);
extern void enemyMove(pokemon* enemy);
extern void randomEnemyPut(pokemon* e[ENEMYNUM]);
extern void sortEnemy();
extern void enemyMapMove(pokemon*,int tmp_mx, int tmp_my);
extern void mainEnemyMove(int, int);
extern void mainBossMove(int, int);