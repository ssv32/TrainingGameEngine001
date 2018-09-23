/* player - игрок или враг
 * 
 */ 
 
//#include "box.cpp" // класс с физическими обьектами
 
class player : public box {
	private:
		float speedX, speedY; // скоростьдвижения по x и Y 
		//string textureName; // имя текстуры
		int NAnimation; // номер текущей анимации
		int health; // здоровье
		int NII; // номер модели поведения // для врагов // поведение в классе II 
		//char* name; // имя игрока
	
	public:
		/*player() : {
			
		};*/
		void showDataPlayer_TextInfo();
		
};


/* showDataBox_TextInfo - выведет на экран данные по box в виде текста
 * 
 */
void player::showDataPlayer_TextInfo(){
	cout << "\n===player====" << endl;
	cout << "name = " << name << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "d = " << d << endl;
	cout << "h = " << h << endl;
	cout << "textureName = " << textureName << endl;
	cout << "xlv = " << xlv << endl;
	cout << "\n=======" << endl;
	
}