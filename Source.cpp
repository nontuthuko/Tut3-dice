#include <iostream>

using namespace std;
class Dice{
#define SIZE 10
public:
	Dice(){
		Display();

	}
	~Dice(){}
private:
	void declare(){

	}
	int Roll(){
		return (rand() % 5 + 1);
	}
	float Average(int Avg[], int){
		int sum = 0;
		int i = 0;
		cout << "Enter" << SIZE << "elements";
		for (i = 1; i <= SIZE; i++){
			Avg[i] = Roll();
			sum = sum + Avg[i];
		}
		return(sum / SIZE);
	}
	float Average(Dice AVG, int NUMBER){
		int j = 0;
		int sum = 0;
		cout << "Enter" << NUMBER << "elements";
		for (j = 1; j <= NUMBER; j++){
			sum = sum + AVG.Roll();

		}
		return(sum / NUMBER);
	}
	void Display(){
		int Avg[SIZE];
		Dice AVG;
		int no_of_rolls = 10;

		cout << "Average is " << Average(AVG, no_of_rolls) << "computed using Object" << endl;
		cout << endl;
		cout << "Average is " << Average(Avg, SIZE) << "computed using Array" << endl << endl;
	}
};
int main(){
	Dice calculate;
	return 0;

}