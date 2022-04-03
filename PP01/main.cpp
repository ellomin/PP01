#include <iostream>
#include <string>

using namespace std;

class Player
{
public :
	Player()   // 생성자
	{
		cout << "주인공 생성되었습니다" << endl;
	}
	~Player()  // 소멸자
	{
		cout << "으악" << endl;
	} 
private :

};

int main()
{
	
	Player *player = new Player();
	delete(player);

	return 0;
}
