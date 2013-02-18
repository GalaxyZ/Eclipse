/**
 *	Implements the GameContainer class
 *
 *	
 *
 *	created 15/02/2013 - Thomas "Cyto"
 */
#include <core/GameContainer.h>

#include <core/Game.h>
#include <cassert>

GameContainer::GameContainer(boost::shared_ptr< IGame > game) : _game(game)
{
	is_running = false;
}

GameContainer::~GameContainer()
{}

	
void GameContainer::start() const
{
	_game->init(*this);
	this->setup;
	this->gameLoop();
}

void GameContainer::stop() const
{
	is_running = false;
}

void GameContainer::gameLoop() const
{
	assert(is_running == false)	
	is_running = true;
	while(is_running){
		//Actions here
	}
}
