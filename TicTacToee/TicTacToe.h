#pragma once
class TicTacToe
{
public:
    static const unsigned int row{ 3 };
	static const unsigned int col{ 3 };

	TicTacToe();

	void printArray() const;
	void welcomeMessage() const;

	void inputFirst();
	void inputSecond();
	void gameEndCheck();

	~TicTacToe();
private:
	int arena[row][col] = { 0 }; 

	bool checkArray(int, int) const;
	bool checkDraw() const;
	bool endGame{ false };

	int rows;
	int cols;
};

