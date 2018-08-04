#include <iostream>
#include <string>
using namespace std;

#include "game.h" // класс игры
#include "box.h" // класс с физическими обьектами
#include "player.h" // класс описывает игрока и врагов
#include "tphysics.h" // класс определяющий столкновения

// структура для хранения списков объектов сцены // будет нужна в нескольких классах
struct ListObjectScen{
	string OptonsName; // имя что хранится // box или player
	box OptionBox; // объекты сцены
	player OptionPlayer; // враги , игроки
	ListObjectScen *next;
};
////


int main(int argc, char* argv[]){
	
	string asd;
	
	cout << "compile ok" << endl;
	
	game game1; 
	
	game1.start1();
	
	
	return 0;
}