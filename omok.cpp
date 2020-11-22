#include <iostream>
#include <wchar.h>

using namespace std;

class Board{
private:
	wchar_t m_board[19][19];
public:
	Board(){
		for(int i = 0; i < 19; i++) for(int j = 0; j < 19; j++) m_board[i][j] = L'┼';
	}
	void setboard(int x, int y, int color);
	void draw_Board();
};

void Board::setBoard(int x, int y, int color){
	m_board[y][x] = color;
}

void Board::draw_Board(){
	for(int i = 0; i < 19; i++) cout << m_board[i] << endl;
}

class Player{
private:
	
public:
	void put_Stone(int x, int y);
}

void Player::put_Stone(int x, int y, int color){
	setBoard(x, y, color);
}

int main()
{

	return 0;
}
