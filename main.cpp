#include <iostream>
using namespace std;
bool gameover;
const int width=20;
const int height=20;
int x,y,fruitX,fruitY,score;
enum edirection{stop=0,left ,right , top,down};
edirection dir;
void gamesetup()
{
	gameover=false;
	dir=stop;
	x=width/2;
	y=height/2;
	fruitX=rand()%width;
	fruitY=rand()%height;
	score=0;
}
void draw ()
{
	system("cls");
	for(int i=0;i<width+1;i++)
		cout<<"#";
	cout<<endl;
	for(int i=0;i<height;i++)
	{
		for(int j=0;j<width;j++)
		{
			if(j==0)
				cout<<"#";
			else
				cout<<" ";
			if(j==width-1)
				cout<<"#";
		}
		cout<<endl;
	}
	for(int i=0;i<width+1;i++)
		cout<<"#";
	cout<<endl;
	
}
void input()
{

}
void logic()
{

}



int main() {
  gamesetup();
  while(!gameover)
  {
	  draw();
	  input();
	  logic();
  }
}