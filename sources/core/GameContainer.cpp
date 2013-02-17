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
}

GameContainer::~GameContainer()
{}

