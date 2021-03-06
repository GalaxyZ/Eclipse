#pragma once

/**
 * Defines an Interface for a game (any game)
 *
 * Is non-copyable.
 *
 * creation : 21/01/2013 - Thomas "Cyto"
 */

#include <boost/utility.hpp>
#include <string>

class GameContainer;
class Graphics;

class IGame : private boost::noncopyable
{
public:
	virtual std::string getTitle() const = 0; //Shall return the title of the game
	virtual void init(GameContainer &gc) = 0; //Initializes the game. @post : the game is initialised.
	virtual void update(GameContainer &gc, int delta) = 0; //Updates the game's logic.	
	virtual void render(GameContainer &gc, Graphics &graph) = 0; //Render a frame
	virtual bool closeRequested() = 0; //Ask to close the game. returns true if accepted, false else. Beware, the game can still be deleted if returns false
	virtual ~IGame(){}; //virtual destructor to allow proper cleaning in the derived classes.
};

