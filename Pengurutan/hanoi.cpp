//no solved
#include <iostream>
using namespace std;

int counter=0;

//looks for free pole                                                           
int free(int from, int to){
    for(int i=1;i<=3;i++)
		if((i!=from)&&(i!=to))return i;
    return -1;
}

class hanoi{
public:
	int ndisks;
	int from, to;
	void move(int from, int to);
	void solve(int from, int to );
	void solve();
	void move();
}Tower;

//print out the move
void hanoi::move(int from, int to){	
	counter++;
	cout<<"Please move\t"<<from<<" -> "<<to<<endl;
}

void hanoi::move(){	
	counter++;
	cout<<"Please move\t"<<from<<" -> "<<to<<endl;
}

void hanoi::solve(int from, int to){
	int fp;
	fp=free(from,to);
	switch(ndisks){
		case 0:
			cout<<"Ended, nothing to move!"<<endl;
			break;
			//just one
		case 1:
			Tower.move(from,to);
			break;
			//solve for 2 disks
		case 2:
			Tower.move(from,fp);
			Tower.move(from,to);
			Tower.move(fp,to);
			break;
			//recursive solving
		default:
			Tower.ndisks-=1;
			Tower.solve(from,fp);
			Tower.move(from,to);
			Tower.solve(fp,to);
			break;
	}
}

void hanoi::solve(){
	Tower.solve(from,to);	
}

int main(){
  int n;
  cout<<"Give me the number of disks:";
  cin >>n;
	Tower.ndisks=n;
	Tower.from=1;
	Tower.to=3;
	cout<<"\nHere's the solution\n\n";
  Tower.solve();
	cout<<"\n\nSolved in "<<counter<<" moves"<<endl;
  return 0;
}
