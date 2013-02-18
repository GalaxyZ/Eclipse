/**
 *	Implements the GameContainer class
 *
 *	
 *
 *	created 15/02/2013 - Thomas "Cyto"
 */
#include <core/GameContainer.h>

#include <core/Game.h>

GameContainer::GameContainer(boost::shared_ptr< IGame > game) : _game(game)
{
	is_running = false;
}

GameContainer::~GameContainer()
{}

	
void GameContainer::start() const
{
	is_running = true;
	this->setup;
	_game->init(*this);
	this->gameLoop();
}

void GameContainer::stop() const
{
	is_running = false;
}

void GameContainer::gameLoop() const
{
	while(is_running){
		//Actions here
	}
}
