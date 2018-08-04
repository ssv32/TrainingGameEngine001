class CScena{
	public:
		string url_file_scena; // ссылка на файл сцены 
		ListObjectScen ListObjectScenDinamic;// список видимых объектов сцены // которые нужно отрисовать
		ListObjectScen ListObjectScenStatic;// полный список объектов сцены
	
	public:
		int LoadingScena(); // загрузить сцену // составить списки объектов сцены 
		void Update_ListObjectScenDinamic(); // определить видимые игроку объекты
		void Update_ListObjectScenStatic(); // определить общий список объектов сцены
};