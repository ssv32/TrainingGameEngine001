/* tphysics класс определяющий столкновения
 * столкновения между box и player
 */
class tphysics{
	int collisionBoxBox(box box1, box box2); // проверить столкновения box с box
	int collisionPlayerBox(player player1, box box1); // проверить столкновения player с box
	int collisionPlayerPlayer(player player1, player player2); // проверить столкновения player с player
	
};