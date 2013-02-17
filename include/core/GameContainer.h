#pragma once

/**
 * Defines an abstract base class for a GameContainer (Window Management, Loop Management)
 *
 *
 * !!Non Copyable !!
 *
 * created 15/02/2013 - Thomas "Cyto
 */

#include <boost/utility.hpp>
#include <boost/smart_ptr/shared_ptr.hpp>
#include <string>

#include "Game.h"

class GameContainer : private boost::noncopyable
{
public:
	GameContainer(boost::shared_ptr< IGame > game);
	
	void start() const; //Starts the game
	void stop() const; //Stops the game
	
	virtual void setTitle(const std::string &title) = 0; //Set the Window title
	

	virtual ~GameContainer(); //Virtual destructor for polymorphic base class
	
	
protected:
	virtual void setup() = 0; //Called to set up the GameContainer. SHOULD NOT CALL Game::init()
	virtual void cleanup() = 0;//Called to clean the GameContainer after the game has stopped (do not call Game::closeRequested())
private:
	//Private methods
	void gameLoop() const; //Process the game Loop



	//Private attributes
	boost::shared_ptr< IGame > _game;
};
