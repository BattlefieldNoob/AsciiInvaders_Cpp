/*
 * main.cpp
 *
 *  Created on: 26/set/2014
 *      Author: Antonio
 */
#include <iostream>

#include <windows.h>
#include "GameObjects/GameStates/GameStateManager.hpp"
#include "GameObjects/GameStates/PlayState.hpp"


using namespace std;

GameStateManager* gsm;

int main(){
    gsm=new GameStateManager();
    gsm->pushState(new PlayState(gsm));
    do{
	//MAIN LOOP 			MAIN LOOP 		MAIN LOOP 		MAIN LOOP			MAIN LOOP
	gsm->update();
	gsm->render();
    }while(gsm->isRunning());
    delete gsm;//rimuovo dalla ram tutto
    return (0);
}
