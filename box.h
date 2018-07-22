/* box - физические обьекты  ящики
 *  обладают общими правилами (позиция размер ... )
 * 
 */
 
class box{
	private:
		float x, y; // позиция в пространстве
		float xlv, ylv, xrv, yrv, xrn, yrn; // точки ящика х l-левый v-верхний r - правый n - нижний
		
		
		
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
		
		};
		
		box(){
			set_data_box(0, 0, 0, 0);
		};		
		
		box(float tx, float ty, float td, float th){
			set_data_box(tx, ty, td, th);
		};
		
		
};


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