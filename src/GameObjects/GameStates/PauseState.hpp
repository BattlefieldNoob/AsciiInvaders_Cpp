/*
 * PauseState.hpp
 *
 *  Created on: 03/ott/2014
 *      Author: Antonio
 */

#ifndef GAMEOBJECTS_GAMESTATES_PAUSESTATE_HPP_
#define GAMEOBJECTS_GAMESTATES_PAUSESTATE_HPP_

#include "GameState.hpp"
#include "../GameEntities/BattleField.hpp"
#include "GameStateManager.hpp"

class PauseState:public GameState{
    BattleField* gameField;
    GameStateManager* gsm;
    void init();
public:
    PauseState(GameStateManager* gsm);
    void update();
    void render();
    bool isRunning();
    void dispose();
};



#endif /* GAMEOBJECTS_GAMESTATES_PAUSESTATE_HPP_ */
