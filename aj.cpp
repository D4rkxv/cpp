#include<iostream>
#include<ctime>
#include<cstdlib>
#include<conio.h>
#include<windows.h>
using namespace std;
const int N=16;
void wypisz(char tab[N][N]){
	for(int x=0;x<N;x++){
for(int y=0;y<N;y++){

cout<<tab[x][y];
}

cout<<endl;	}
}
//****************************************************************
main(){
	char tab[N][N];
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(i==0||i==N-1)
			tab[i][j]='-';
			else if(j==0||j==N-1)
			tab[i][j]='|';
			else
			tab[i][j]=' ';	
		}		
	}
//	wypisz(tab);
tab[6][6]='x';
int x=6,y=6;
char remember1=getch();
char remember2=getch();
	do{
	Sleep(500);
	system("cls");
	while(remember1!='R');{
	if(kbhit()){//pamiec kierunku
	if(remember2=='H'){
		tab[x][y]=' ';//UP
		
		x--;
		tab[x][y]='x';	
	}
	if(remember2=='P'){
		tab[x][y]=' '; //Down
		x++;
		tab[x][y]='x';
		
	}if(remember2=='K'){
		tab[x][y]= ' ';//Left
		y--;
		tab[x][y]='x';
		
	}if(remember2=='M'){
		tab[x][y]=' ';//right
		y++;
		tab[x][y]='x';}
	
}
 
}
 {
 }
wypisz(tab);
	
}while(remember1!='R');	
return 0;

}

