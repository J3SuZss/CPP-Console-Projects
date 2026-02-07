
#include <iostream>
#include <windows.h>
using namespace std;    

void DrawBoard(char board[9]) 
{
	system("cls");
	cout << "╔═════╦═════╦═════╗" << endl;
	cout << "║  " << board[0] << "  ║  " << board[1] << "  ║  " << board[2] << "  ║" << endl;
	cout << "╠═════╬═════╬═════╣" << endl;
	cout << "║  " << board[3] << "  ║  " << board[4] << "  ║  " << board[5] << "  ║" << endl;
	cout << "╠═════╬═════╬═════╣" << endl;
	cout << "║  " << board[6] << "  ║  " << board[7] << "  ║  " << board[8] << "  ║" << endl;
	cout << "╚═════╩═════╩═════╝" << endl;
}
void HandleMove(char board[9], char player) 
{
	int move;
	cout << "Player " << player << ", enter your move (1-9): ";
	cin >> move;
	while (move < 1 || move > 9 || board[move - 1] == 'X' || board[move - 1] == 'O') 
	{
		cout << "Invalid move. Try again: ";
		cin >> move;
	}
	board[move - 1] = player;
}

bool CheckWinCondition(char board[9], char player) 
{
	
	for (int i = 0; i < 9; i += 3) 
	{
		if (board[i] == player && board[i + 1] == player && board[i + 2] == player) 
		{
			return true;
		}
	}
	
	for (int i = 0; i < 3; i++) 
	{
		if (board[i] == player && board[i + 3] == player && board[i + 6] == player) 
		{
			return true;
		}
	}
	
	if ((board[0] == player && board[4] == player && board[8] == player) || 
		(board[2] == player && board[4] == player && board[6] == player)) 
	{
		return true;
	}
	return false;
}

int main()
{
	SetConsoleOutputCP(65001);
	char board[9] =  {'1', '2', '3', '4', '5', '6', '7', '8', '9' };
	char player;
	int MoveCount = 0;
	
	
	while (true)
	{
		player = 'X';
		DrawBoard(board);
		HandleMove(board,player);
		MoveCount++;
		if (CheckWinCondition(board, player) == true)
		{
			DrawBoard(board);
			cout << "Player " << player << " wins!" << endl;
			return 0;
		}
		if (MoveCount == 9)
		{
			DrawBoard(board);
			cout << "It's a draw!" << endl;
			return 0;
		}
		

		player = '0';
		DrawBoard(board);
		HandleMove(board,player);
		MoveCount++;
		if(CheckWinCondition(board,player) == true)
		{
			DrawBoard(board);
			cout << "Player " << player << " wins!" << endl;
			return 0;
		}
	}   
}

