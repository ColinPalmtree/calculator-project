// Game class manages everything
#pragma once
#include <vector>
#include "Board.h"

class Game {
public:
	// resetGame() can be deleted and only this one can be used i think?
	startGame();

	switchTurn(); // give other player ability to move

	// in checkers, the game ends if there are no valid moves
	checkWinCondition();

	resetGame(); // returns board state to start, resets turn count, clears move history

	logMove(); // im assuming this should call m_moveHistory.push_back()?
private:
	Board m_board;
	int m_current_turn; // keeps count of the game's length
	std::vector<std::string> m_move_history; // vector that stores move log
};