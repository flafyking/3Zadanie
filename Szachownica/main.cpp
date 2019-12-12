#include <iostream>
#include <string>

using namespace std;

int Szach[10][10];


int main() {
	for(int i = 0;i < 10;i++){
		
		if(i % 2 == 0){
			for(int j = 0; j < 10; j++){
			if(j % 2 == 1){
				Szach[i][j] = 1;
			}else{
				Szach[i][j] = 0;
			}
		}
		}else{
			for(int j = 0; j < 10; j++){
			if(j % 2 == 1){
				Szach[i][j] = 0;
			}else{
				Szach[i][j] = 1;
			}
		}
		
		}
	
	}
	
	for(int i = 0;i < 10;i++){
		
		for(int j = 0; j < 10; j++){
			
			cout << Szach[i][j];
			cout << " ";

			}
			cout << "" << endl;
		}
	return 0;
}
