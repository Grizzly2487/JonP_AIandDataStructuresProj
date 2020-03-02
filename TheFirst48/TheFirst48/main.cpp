#include "Game.h"
#include "StartScreen.h"
#include "CasePool.h"
using namespace std;

int main()
{
	StartScreen* startScreen = new StartScreen();
	Game* game = new Game();

	cout << "\n\n\n";
	cout << "\t\t\tThank You For Playing!\n\n\n";
	return 0;
}