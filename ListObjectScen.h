struct ListObjectScen{ // структура для хранения списков объектов сцены // будет нужна в нескольких классах
	string OptionName; // имя что хранится // box или player
	box OptionBox; // объекты сцены
	player OptionPlayer; // враги , игроки
	ListObjectScen *next;
};
 
/* CListObjectScen - класс для работы со структурой ListObjectScen
 * 
 */ 
class CListObjectScen{
	public:
		ListObjectScen List;
	public:	
		ListObjectScen* addListBox(ListObjectScen* head, box box0); // добавить box в список ListObjectScen
		ListObjectScen* addListPlayer(ListObjectScen* head, player player0); // добавить player в список ListObjectScen
		
		
		void show_object(ListObjectScen* obj); // вывести список
};

/* addListBox - создаст в памяти обьект ListObjectScen и вернёт указатель на него
 *  добавит обьек box
 *  next - это указатель напредыдущий обьект
 */ 

ListObjectScen* CListObjectScen::addListBox(ListObjectScen* head, box box0){
//	ListObjectScen* temp = (ListObjectScen*) malloc(sizeof(ListObjectScen));
	ListObjectScen* temp = new ListObjectScen;
	temp->OptionName = "box";
	temp->OptionBox = box0;
	temp->next = head;
	return temp;
}

/* addListPlayer - создаст в памяти обьект ListObjectScen и вернёт указатель на него
 *  добавит обьек player
 *  next - это указатель напредыдущий обьект
 */ 

ListObjectScen* CListObjectScen::addListPlayer(ListObjectScen* head, player player0){
//	ListObjectScen* temp = (ListObjectScen*) malloc(sizeof(ListObjectScen));
	ListObjectScen* temp = new ListObjectScen;
	temp->OptionName = "player";
	temp->OptionPlayer = player0;
	temp->next = head;
	return temp;
}

void CListObjectScen::show_object(ListObjectScen* obj){
	ListObjectScen* temp = obj;
	
	while (temp != NULL){
		cout << "---" << temp->OptionName << "\n" << endl;
		
		if (temp->OptionName == "box") {
			temp->OptionBox.showDataBox_TextInfo();
		}else if (temp->OptionName == "player") {
			temp->OptionPlayer.showDataPlayer_TextInfo();
		}
			
		temp = temp->next;
	}
	
}