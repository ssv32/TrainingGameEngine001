/* box - физические обьекты  ящики
 *  обладают общими правилами (позиция размер ... )
 * 
 */
 
class box{
	public:
		float x, y; // позиция в пространстве
		float d, h; // длинна ширина
		float xlv, ylv, xrv, yrv, xrn, yrn; // точки ящика х l-левый v-верхний r - правый n - нижний
		string textureName; // имя текстуры
		string name; // имя объекта
		
	public:
		void set_data_box(float tx, float ty, float td, float th){ // добавть данные 
			x = tx;
			y = ty;
			xlv = tx; 
			ylv = ty + th;
			xrv = tx + td;   
			yrv = ty + th; 
			xrn = tx + td;
			yrn = ty;
			d = td;
			h = th;
		
		};
		
		void set_textureName(string text); // установить текстуру
		
		box(){
			set_data_box(0, 0, 0, 0);
			set_textureName("");
			name = "";
		};		
		
		box(float tx, float ty, float td, float th){
			set_data_box(tx, ty, td, th);
		};
		
		box(float tx, float ty, float td, float th, string text){
			set_data_box(tx, ty, td, th);
			set_textureName(text);
			name = "box";
		};
		
		void showDataBox_TextInfo(); // показать данные обьекта в виде текста
};

void box::set_textureName(string text){
	textureName = text;
}

/* set_data_box - установить данные 
 * вх. tx, ty - позиция обьекта, td - длинна, th - ширина
 * запишутся данные - xlv, ylv, xrv, yrv, xrn, yrn
 */
/*void box::set_data_box(float tx, float ty, float td, float th){
	x = tx;
	y = ty;
	xlv = tx; 
	ylv = ty + th;
	xrv = tx + td;   
	yrv = ty + th; 
	xrn = tx + td;
	yrn = ty;
}*/

/* showDataBox_TextInfo - выведет на экран данные по box в виде текста
 * 
 */
void box::showDataBox_TextInfo(){
	cout << "\n===box====" << endl;
	cout << "name = " << name << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "d = " << d << endl;
	cout << "h = " << h << endl;
	cout << "textureName = " << textureName << endl;
	cout << "xlv = " << xlv << endl;
	cout << "\n=======" << endl;
	
}