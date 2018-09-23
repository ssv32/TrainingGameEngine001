#include <sstream>
#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h> 
//#include <stdlib.h>  

using namespace std;

#include "game.h" // класс игры
#include "box.h" // класс с физическими обьектами
#include "player.h" // класс описывает игрока и врагов
#include "tphysics.h" // класс определяющий столкновения

#include "ListObjectScen.h"

#include "CScena.h"

int main(int argc, char* argv[]){
	
	
	CScena asd2( "data/level/Level0" );
	
	cout << "CScena = " << asd2.url_file_scena << "\n" << endl; 
	
	int a = asd2.LoadingScena();
	
	cout << "a= " << a << endl;
	
	
	//ListObjectScen* asd3;
	
	CListObjectScen CListObjectScen0; 
	
	box asd1(0,0,1,1, "test_test.jpg");
//	asd1.showDataBox_TextInfo();
	
	///asd3 = CListObjectScen0.addListBox(NULL , asd1 );
	//asd3 = CListObjectScen0.addListBox(asd3 ,  asd1);

	//cout << "-=" << asd2.ListObjectScenStatic->OptionName ;
	
	CListObjectScen0.show_object( asd2.ListObjectScenStatic );
	

	
	
	cout << "compile ok" << endl;
	
	game game1; 
	
	game1.start1();
	
	
	return 0;
}