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
	void draw_Board();
};

void Board::draw_Board(){
	for(int i = 0; i < 19; i++) cout << m_board[i] << endl;
}

int main()
{

	return 0;
}