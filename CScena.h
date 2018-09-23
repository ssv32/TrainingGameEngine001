class CScena{
	public:
		string url_file_scena; // ссылка на файл сцены 
		//ListObjectScen ListObjectScenDinamic;// TODO список видимых объектов сцены // которые нужно отрисовать
		ListObjectScen* ListObjectScenStatic;// полный список объектов сцены
	
	public:
		CScena(string str) : url_file_scena(str){}; // инициализировать со ссылкой на файл карты 
		int LoadingScena(); // загрузить сцену // составить списки объектов сцены 
		//void Update_ListObjectScenDinamic(); // TODO определить видимые игроку объекты
		void Update_ListObjectScenStatic(); // определить общий список объектов сцены
		
};

/* LoadingScena - загружает файл с картой игры 
 * заполняет списки ListObjectScenDinamic / ListObjectScenStatic
 * 1 - если всё хорошо, 0 - если есть ошибка
 */
int CScena::LoadingScena(){
	
	int result = 0;
	string buff; // буфер промежуточного хранения текста
	string type_box = ""; 
	const char* url = url_file_scena.c_str() ;
	
	ListObjectScenStatic = NULL; // пока лист пустой
	CListObjectScen CListObjectScen0;	
		
		
	ifstream in( url ); 

	/*while(getline(in, buff)){ // пока не достигнут конец файла класть очередную строку в переменную (s)
        cout << buff << endl; // выводим на экран
        buff += "+"; // что нибудь делаем со строкой например я добавляю плюсик в конце каждой строки
        cout << buff << endl; // и снова вывожу на экран но уже модифицированную строку (без записи ее в файл)
    }*/

	if (in) {
		
		int i = 0;
		stringstream ss;
		float f_temp;
				
		box* object = new box;
		player* object2 = new player;
		
		while( buff != "%%" ){
			i++;
			ss.clear();
			buff = "";
			
			in >> buff;
			if ( (buff == "%") || (buff == "%%") ){ // если закончилась строка
				i = 0;
				type_box = "";
				delete object;
				delete object2;
				box* object = new box;
				player* object2 = new player;
								
			}
			
			if (i != 0){
				 
				if (i == 1){
					if(buff == "box"){
						//object.name = buff;
						//cout << "box" << endl;
						//box object;
					}else if (buff == "player"){
						//player object;
						//cout << "player" << endl;
						//object2.name = buff;					
					} else {
						i = 0;
					}
					
					type_box = buff;
				}
				
				if (i == 2) {
					
					if(type_box == "box"){
						object->name = buff;
					}else if (type_box == "player"){
						object2->name = buff;					
					} 
				}
				
				if (i == 3) {
					ss << buff;
					
					if(type_box == "box"){
						ss >> object->x;
					}else if (type_box == "player"){
						ss >> object2->x;					
					} 
				}
				
				
				if (i == 4) {
					ss << buff;
					ss >> f_temp;
					
					if(type_box == "box"){
						object->y = f_temp;
					}else if (type_box == "player"){
						object2->y = f_temp;		
					} 
				}
				
				if (i == 5) {
					ss << buff;
					
					if(type_box == "box"){
						ss >> object->d;
					}else if (type_box == "player"){
						ss >> object2->d;		
					} 
				}
				
				if (i == 6) {
					ss << buff;
					
					if(type_box == "box"){
						ss >> object->h;
						object->set_data_box(object->x, object->y, object->d, object->h );
					}else if (type_box == "player"){
						ss >> object2->h;
						object2->set_data_box(object2->x, object2->y, object2->d, object2->h );		
					} 
				}
				
				if (i == 7) {		
					
					// на этом шаге обьект box собран полносью и надо записать его в список сцены
					if(type_box == "box"){
						object->textureName = buff;
						ListObjectScenStatic = CListObjectScen0.addListBox(ListObjectScenStatic, *object );
					}else if (type_box == "player"){
						object2->textureName = buff;	
						ListObjectScenStatic = CListObjectScen0.addListPlayer(ListObjectScenStatic, *object2 );
					} 

				}
				
				
			}
			
		}
		result = 1;
	}
	
	in.close(); // Закрываем файл	
	return result;
}

/* Update_ListObjectScenDinamic
 * заполнит ListObjectScenDinamic // список видимых объектов сцены // которые нужно отрисовать
 */
/*void CScena::Update_ListObjectScenDinamic(){
	
}*/

/* Update_ListObjectScenStatic
 * заполнит ListObjectScenStatic // полный список объектов сцены
 */
void CScena::Update_ListObjectScenStatic(){
	
}