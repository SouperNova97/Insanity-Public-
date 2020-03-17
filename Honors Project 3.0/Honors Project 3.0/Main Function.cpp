#include <iostream>
#include <string>
#include <ctime>
#include <stdlib.h>
#define EAST_EDGE 19
#define NORTH_EDGE 0
#define SOUTH_EDGE 19
#define WEST_EDGE 0
#define X_COORDINATE '1'
#define Y_COORDINATE '1'

using namespace std;

char room1[20][20];
char room2[20][20];
char room3[20][20];
char room4[20][20];
char room5[20][20];
char room6[20][20];

void print_grid(char room[][20]);
void Room1(char room1[][20], int x, int y);
void Room2(char room2[][20], int x, int y);
void Room3(char room3[][20], int x, int y);
void Room4(char room4[][20], int x, int y);
void Room5(char room5[][20], int x, int y);
void Room6(char room6[][20], int x, int y);

int SwitchCase(int current_Amount_Room);

int Doorway(int currentRoom);

int main()
{
		string playerName;
		int current_Amount_Room = 0;
		cout << "Welcome to Insanity. " << endl;
		cout << endl;
		cout << endl;
		cout << "Thank you for playing the opening beta of this game! Hopefully you will enjoy it." << endl;
		cout << "In this beta, you will go through the first dungeon of the game." << endl;
		cout << "It will consist of many rooms that you must travel through" << endl;
		cout << "It is one large maze with only a few different ways out that you must find in order to escape the clutches of an unknown monster. Enjoy!!!" << endl;
		cout << "Your character's image is a captial X" << endl;

		system("Pause");
		system("CLS");

		cout << "You wake up and slowly stand up and try to ascess you surroundings. Suddenly, you feel something drift past you. Then you hear a voice come from across the dark room." << endl;
		cout << endl;
		cout << "What is your name?" << endl;
		cin >> playerName;
		cout << "Hello " << playerName << "!" << " In order to complete your quest and escape, you must figure out the puzzle that exists in this labyrinth of distortion." << endl;
		cout << endl;
		cout << "There are multiple ways to get out, but as the Game Master and ruler of this land, I won't ruin the surprise." << endl;
		cout << "It would be a shame if one of my subjects wanted to escape this asylum." << endl;
		cout << "The one clue I will provide is this..." << endl;
		cout << endl;
		cout << "Don't assume that the dungeon will not change and learn based on how you traverse it." << endl;
		cout << "MWAAHAAHAA" << endl;
		cout << "Nobody has ever escaped. You only go insane and forget everything you ever knew." << endl;

		system("Pause");
		system("CLS");

		char user_char = 'X';
		cout << "The figure departs, and a candle lights on the wall that provides some vision of what the room you are in looks like." << endl;

		for (int current_Amount_Room = 0; current_Amount_Room < 18; current_Amount_Room++)
		{
			SwitchCase(current_Amount_Room);
		}
		if (current_Amount_Room = 18)
		{
			Room6(room6, 1, 1);
			cout << "Great job... you escaped my trap... somehow... We will capture you and you will never escape one day..." << endl;
		}
	system("Pause");
	return 0;
}

//This function holds the switch case that calls the forming room array functions and the doorway functions
int SwitchCase(int current_Amount_Room)
{
	int currentRoom;
		static bool first = true;
		if (first)
		{
			srand(time(NULL));
			first = false;
		}
		currentRoom = rand() % 5 + 1;

	switch (currentRoom)
		{
		//This runs the room 1 function based on current room
		case 1: Room1(room1, 1, 1);
			Doorway(currentRoom);
			cout << "As you choose a door to travel through, you walk through a mysterious hallway. There are glowing objects on the walls and everything is spinning." << endl;
			cout << "Your mind becomes jumbled and you are disoriented. Everything suddenly goes dark, and you feel" << endl;
			system("Pause");
			system("CLS");
			break;

		//This runs the room 2 function based on current room
		case 2: Room2(room2, 1, 1);
			Doorway(currentRoom);
			cout << "As you go back through the hallway that led you to this room, you feel a weird air around you coming from the dead end room." << endl;
			system("Pause");
			system("CLS");
			break;

		//This runs the room 3 function based on current room
		case 3: Room3(room3, 1, 1);
			Doorway(currentRoom);
			cout << "As you walk down the hallway, you feel like there is something odd about this dungeon. It is almost like it is messing with your mind, attempting to make you go insane" << endl;
			system("Pause");
			system("CLS");
			break;

		//This runs the room 4 function based on current room
		case 4: Room4(room4, 1, 1);
			Doorway(currentRoom);
			cout << "You see writing on the wall of a open cell door. You walk up to read it and it says: ";
			cout << "It seems like there is no end to this madness. No matter where you go, they always find you." << endl;
			system("Pause");
			system("CLS");
			break;

		//This runs the room 5 function based on current room
		case 5: Room5(room5, 1, 1);
			Doorway(currentRoom);
			cout << "As you go back through the hallway that led you to this room, you feel a weird air around you coming from the dead end room." << endl;
			cout << "It is almost as if someone is watching you from the ceiling." << endl;
			system("Pause");
			system("CLS");
			break;

		default:
			break;
		}
	system("Pause");
	return 0;
}


//This function allows for travelling betwe
int Doorway(int currentRoom)
{
	switch (currentRoom)
	{
	case 1: 
	{
		int doorway;
		int doorways[] = { 1, 2, 3, 0 };
		do
		{
			cout << "Which door (";
			for (int i = 0; i < 4; i++)
			{
				if (0 != doorways[i])
				{
					cout << doorways[i];
				}
				if (3 != i)
				{
					cout << " , ";
				}
				else
				{
					cout << ')';
				}
			}
			cout << "? ";
			cin >> doorway;
		} while (0 == doorways[doorway - 1]);
		return currentRoom;
		break;
	}
	case 2:
	{
		int doorway;
		int doorways[] = { 0, 0, 0, 4 };
		do
		{
			cout << "Which door (";
			for (int i = 0; i < 4; i++)
			{
				if (0 != doorways[i])
				{
					cout << doorways[i];
				}
				if (3 != i)
				{
					cout << " , ";
				}
				else
				{
					cout << ')';
				}
			}
			cout << "? ";
			cin >> doorway;
		} while (0 == doorways[doorway - 1]);
		return currentRoom;
		break;
	}
	case 3:
	{
		int doorway;
		int doorways[] = { 0, 2, 3, 4 };
		do
		{
			cout << "Which door (";
			for (int i = 0; i < 4; i++)
			{
				if (0 != doorways[i])
				{
					cout << doorways[i];
				}
				if (3 != i)
				{
					cout << " , ";
				}
				else
				{
					cout << ')';
				}
			}
			cout << "? ";
			cin >> doorway;
		} while (0 == doorways[doorway - 1]);
		return currentRoom;
		break;
	}
	case 4: 
	{
		int doorway;
		int doorways[] = { 0, 2, 3, 4 };
		do
		{
			cout << "Which door (";
			for (int i = 0; i < 4; i++)
			{
				if (0 != doorways[i])
				{
					cout << doorways[i];
				}
				if (3 != i)
				{
					cout << " , ";
				}
				else
				{
					cout << ')';
				}
			}
			cout << "? ";
			cin >> doorway;
		} while (0 == doorways[doorway - 1]);

		return currentRoom;
		break;
	}
	case 5:
	{
		int doorway;
		int doorways[] = { 0, 2, 0, 0 };
		do
		{
			cout << "Which door (";
			for (int i = 0; i < 4; i++)
			{
				if (0 != doorways[i])
				{
					cout << doorways[i];
				}
				if (3 != i)
				{
					cout << " , ";
				}
				else
				{
					cout << ')';
				}
			}
			cout << "? ";
			cin >> doorway;
		} while (0 == doorways[doorway - 1]);

		return currentRoom;
		break;
	}
		default:
			break;
	}
}


//This Prints the Room after all the data has been stored in the Array
void print_grid(char room[][20])
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			cout << room[i][j] << " ";
		}
		cout << endl;
	}
}


//Room 1 Design: Basic room 
void Room1(char room1[][20], int x, int y)
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			room1[i][j] = ' ';
		}
	}
	
	//Top Wall Left Side
	for (int i = 0; i < 13; i++)
	{
		room1[0][i] = (char)254;
	}

	//Top corner
	for (int i = 1; i < 18; i++)
	{
		room1[i][0] = (char)221;
	}

	//Door on West Side
	room1[8][0] = ' ';
	room1[10][0] = ' ';
	room1[9][0] = ' ';

	//East Wall
	for (int i = 0; i < 18; i++)
	{
		room1[i][18] = (char)221;
	}

	//Bottom wall
	for (int i = 1; i < 18; i++)
	{
		room1[18][i] = (char)254;
		room1[18][5] = ' ';
		room1[18][6] = ' ';
		room1[18][7] = ' ';
	}

	room1[18][18] = (char)217;
	room1[14][16] = (char)188;
	room1[16][14] = (char)201;
	room1[0][18] = (char)191;
	room1[0][17] = (char)254;
	room1[18][0] = (char)192;
	room1[0][0] = (char)218;
	room1[0][16] = (char)254;
	room1[2][2] = 'O';

	char room_copy[20][20];
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			room_copy[i][j] = room1[i][j];
		}
	}
	room_copy[y][x] = 'X';
	print_grid(room_copy);
	system("Pause");

}


//Room 2 Design: Dead End Room: Must turn around
void Room2(char room2[][20], int x, int y)
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			room2[i][j] = ' ';
		}
	}

	//Top Wall
	for (int i = 0; i < 18; i++)
	{
		room2[0][i] = (char)254;
	}

	//West Wall
	for (int i = 1; i < 18; i++)
	{
		room2[i][0] = (char)221;
	}
	//East Wall
	for (int i = 1; i < 18; i++)
	{
		room2[i][18] = (char)221;
	}

	//Bottom wall
	for (int i = 1; i < 18; i++)
	{
		room2[18][i] = (char)254;
	}
	room2[18][18] = (char)217;
	room2[0][18] = (char)191;
	room2[18][0] = (char)192;
	room2[0][0] = (char)218;
	room2[15][0] = ' ';
	room2[14][0] = ' ';
	room2[16][0] = ' ';
	
	char room_copy[20][20];

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			room_copy[i][j] = room2[i][j];
		}
	}
	room_copy[y][x] = 'X';
	print_grid(room_copy);

	system("Pause");

}


//Room 3 Design: Another Basic room
void Room3(char room3[][20], int x, int y)
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			room3[i][j] = ' ';
		}
	}

	//Top Wall
	for (int i = 0; i < 18; i++)
	{
		room3[0][i] = (char)254;
	}

	//West Wall
	for (int i = 1; i < 18; i++)
	{
		room3[i][0] = (char)221;
	}
	//East Wall
	for (int i = 1; i < 18; i++)
	{
		room3[i][18] = (char)221;
	}

	//Bottom wall
	for (int i = 1; i < 18; i++)
	{
		room3[18][i] = (char)254;
		room3[18][7] = ' ';
		room3[18][8] = ' ';
		room3[18][9] = ' ';
	}
	room3[12][18] = ' ';
	room3[13][18] = ' ';
	room3[14][18] = ' ';
	room3[0][0] = (char)218;
	room3[18][0] = (char)192;
	room3[18][18] = (char)217;
	room3[0][18] = (char)191;
	room3[2][18] = ' ';
	room3[3][18] = ' ';
	room3[4][18] = ' ';

	char room_copy[20][20];
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			room_copy[i][j] = room3[i][j];
		}
	}
	room_copy[y][x] = 'X';
	print_grid(room_copy);
	system("Pause");
}


//Room 4 Design:  Yet another Basic room
void Room4(char room4[][20], int x, int y)
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			room4[i][j] = ' ';
		}
	}

		//Top Wall
		for (int i = 0; i < 18; i++)
		{
			room4[0][i] = (char)254;
		}

		//West Wall
		for (int i = 1; i < 18; i++)
		{
			room4[i][0] = (char)221;
		}
		//East Wall
		for (int i = 1; i < 18; i++)
		{
			room4[i][18] = (char)221;
		}

		//Bottom wall
		for (int i = 1; i < 18; i++)
		{
			room4[18][i] = (char)254;
			room4[7][18] = ' ';
			room4[8][18] = ' ';
			room4[9][18] = ' ';
		}
		room4[18][12] = ' ';
		room4[18][13] = ' ';
		room4[18][14] = ' ';
		room4[0][0] = (char)218;
		room4[18][0] = (char)192;
		room4[18][18] = (char)217;
		room4[0][18] = (char)191;
		room4[18][2] = ' ';
		room4[18][3] = ' ';
		room4[18][4] = ' ';

		char room_copy[20][20];

		for (int i = 0; i < 20; i++)
		{
			for (int j = 0; j < 20; j++)
			{
				room_copy[i][j] = room4[i][j];
			}
		}
		room_copy[y][x] = 'X';
		print_grid(room_copy);
		system("Pause");
}


//Room 5 Design: Dead end room
void Room5(char room5[][20], int x, int y)
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			room5[i][j] = ' ';
		}
	}

	//Top Wall
	for (int i = 0; i < 18; i++)
	{
		room5[0][i] = (char)254;
	}

	//West Wall
	for (int i = 1; i < 18; i++)
	{
		room5[i][0] = (char)221;
	}
	//East Wall
	for (int i = 1; i < 18; i++)
	{
		room5[18][i] = (char)254;
	}

	//Bottom wall
	for (int i = 1; i < 18; i++)
	{
		room5[i][18] = (char)254;
		room5[7][18] = ' ';
		room5[8][18] = ' ';
		room5[9][18] = ' ';
	}
	room5[18][18] = (char)217;
	room5[0][18] = (char)191;
	room5[18][0] = (char)192;
	room5[0][0] = (char)218;

	char room_copy[20][20];

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			room_copy[i][j] = room5[i][j];
		}
	}
	room_copy[y][x] = 'X';
	print_grid(room_copy);
	system("Pause");
}


//Room 6 is the exit room
void Room6(char room6[][20], int x, int y)
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			room6[i][j] = ' ';
		}
	}
	//West Wall
	for (int i = 1; i < 19; i++)
	{
		room6[i][0] = (char)221;
	}
	//East wall
	for (int i = 1; i < 19; i++)
	{
		room6[i][19] = (char)221;
	}
	//North Wall
	for (int i = 1; i < 19; i++)
	{
		room6[0][i] = (char)254;
	}
	//Bottom Wall
	room6[19][0] = (char)254;
	room6[19][1] = (char)254;
	room6[19][2] = (char)254;
	room6[19][3] = (char)254;
	room6[19][4] = (char)254;
	room6[19][5] = (char)254;
	room6[19][6] = (char)254;
	room6[19][7] = (char)254;
	room6[19][8] = (char)254;
	room6[19][9] = (char)254;
	room6[19][10] = ' ';
	room6[19][11] = ' ';
	room6[19][12] = ' ';
	room6[19][13] = (char)254;
	room6[19][14] = (char)254;
	room6[19][15] = (char)254;
	room6[19][16] = (char)254;
	room6[19][17] = (char)254;
	room6[19][18] = (char)254;
	room6[19][19] = (char)254;
	room6[19][20] = (char)254;

	room6[19][19] = (char)217;
	room6[0][19] = (char)191;
	room6[19][0] = (char)192;
	room6[0][0] = (char)218;
	//Special Message When entering room because game is finished
	room6[3][3] = '\\';
	room6[3][4] = '_';
	room6[3][5] = '/';
	room6[4][4] = '|';
	room6[5][4] = '|';
	room6[4][6] = '/';
	room6[5][6] = '\\';
	room6[4][7] = '\\';
	room6[5][7] = '/';
	room6[4][9] = '|';
	room6[5][9] = '|';
	room6[5][10] = '_';
	room6[4][11] = '|';
	room6[5][11] = '|';
	room6[7][4] = '|';
	room6[8][4] = '|';
	room6[9][4] = '|';
	room6[7][5] = '\\';
	room6[9][5] = '/';
	room6[8][6] = '|';
	room6[8][8] = '*';
	room6[9][8] = '|';
	room6[8][10] = '/';
	room6[9][10] = '\\';
	room6[7][11] = '|';
	room6[8][11] = '|';
	room6[9][11] = '|';
	room6[11][4] = '-';
	room6[11][5] = '|';
	room6[11][6] = '-';
	room6[12][5] = '|';
	room6[13][4] = '_';
	room6[13][5] = '|';
	room6[13][6] = '_';
	room6[12][8] = '-';
	room6[11][9] = '|';
	room6[12][9] = '|';
	room6[12][10] = '-';
	room6[13][9] = '|';
	
	char room_copy[20][20];
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			room_copy[i][j] = room6[i][j];
		}
	}
	room_copy[y][x] = 'X';
	print_grid(room_copy);
}