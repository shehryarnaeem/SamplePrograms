#include<iostream>
using namespace std;
class Meal{
	string entree;
	int calorieCount;
	public:
		Meal()
		{
			calorieCount=0;
		}
		Meal(string e1,int count)
		{
			entree=e1;
			calorieCount=count;
		}
		friend istream& operator >>(istream &inputStream,Meal &k1);
		friend ostream& operator <<(ostream &outputStream,Meal &k1);
		Meal operator +(Meal k1)
		{
			Meal temp;
			temp.entree="Daily Count";
			temp.calorieCount=this->calorieCount+k1.calorieCount;
			return temp;
		}
};
istream& operator >>(istream &inputStream,Meal &k1)
{
	cout<<"Enter entree name:"<<endl;
	cin>>k1.entree;
	cout<<"Enter the calorie count:"<<endl;
	cin>>k1.calorieCount;
			return inputStream;
}
ostream& operator <<(ostream &outputStream,Meal &k1)
{
	cout<<k1.entree<<endl;
	cout<<k1.calorieCount<<endl;
}
int main()
{
	Meal breakfast,lunch,dinner,total;
	cout<<"Enter the Breakfast Values:"<<endl;
	cin>>breakfast;
	cout<<"Enter the Lunch Values:"<<endl;
	cin>>lunch;
	cout<<"Enter the Dinner Values:"<<endl;
	cin>>dinner;
	cout<<"Breakfast:"<<endl;
	cout<<breakfast<<endl;
	cout<<"Lunch:"<<endl;
	cout<<lunch<<endl;
	cout<<"Dinner:"<<endl;
	cout<<dinner<<endl;
	total=breakfast+lunch+dinner;
	cout<<"Total:"<<endl;
	cout<<total;
	return 0;
}
