/* player - игрок или враг
 * 
 */ 
 
//#include "box.cpp" // класс с физическими обьектами
 
class player : public box {
	private:
		float speedX, speedY; // скоростьдвижения по x и Y 
		char* textureName; // имя текстуры
		int NAnimation; // номер текущей анимации
		int health; // здоровье
		int NII; // номер модели поведения // для врагов // поведение в классе II 
		char* name; // имя игрока
	
	protected:
		/*player() : {
			
		};*/
};