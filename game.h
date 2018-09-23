class game{
	public:
		int statDisplay; // состояние экрана 
		// состояния экрана
		//  0 - главное меню
		//  1 - игра загружается
		//  2 - игра (запущен игровой цикл)
		//  3 - пауза (пауза во время игры нажата)
		////
		
		string scenas[2]; // список сцен // потом подгрузятся в класс сцена

		
	public:
		
		game() : statDisplay(0){
			
			// список карт
			scenas[0] = "data/scena1.txt";
			scenas[1] = "data/scena1.txt";
		};
		
		game(int in) : statDisplay(in){};
		
		int get_statDisplay() {// получить текущее состояние игры 
			return statDisplay;
		}; 
		
		/* set_statDisplay - установить текущее состояние игры
		 * вх. int номер экрана состояния 
		 * вых. 1 - всё ок, 0 - ошибка
		*/
		int set_statDisplay(int temp){
			statDisplay = temp;
			return 1;
		} 
		
		int set_scenas(string sc[]);
		
		void gameloop();
		
		int start1();
		/*{ // запуск экрана по текущему состоянию игры
			
			cout << "start = " << statDisplay << endl;
			
			return 1;
		}*/
		

};



int game::start1(){ // запуск экрана по текущему состоянию игры
			
	cout << "start = " << statDisplay << endl;
	
	return 1;
}
/*
void game::gameloop(){
	while
}*/
