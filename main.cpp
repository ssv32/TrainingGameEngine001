#include <iostream>
#include <string>
using namespace std;


#include "game.h" // класс игры
#include "box.h" // класс с физическими обьектами
#include "player.h" // класс описывает игрока и врагов
#include "tphysics.h" // класс определяющий столкновения


int main(int argc, char* argv[]){
	
	string asd;
	
	cout << "compile ok" << endl;
	
	game game1; 
	
	game1.start1();
	
	
	return 0;
}