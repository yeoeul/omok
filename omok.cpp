#include <iostream>
#include <wchar.h>

#define BLACK 1;
#define WHITE 2;

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

void Board::put_Stone(int x, int y, int color){
	if(color == BLACK) m_board[y][x] = '●';
	else if(color == WHITE) m_board[y][x] = '○';
}

void Board::draw_Board(){
	for(int i = 0; i < 19; i++) cout << m_board[i] << endl;
}

class Player{
private:
	int m_Stone_color;
public:
	Player(int Stone_color);
	void put_Stone(int x, int y);
}

void Player::put_Stone(int x, int y, int color){
	setBoard(x, y, color);
}

int main(){
	return 0;
}
