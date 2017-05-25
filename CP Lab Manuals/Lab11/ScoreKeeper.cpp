#include<iostream>
using namespace std;
class ScoreKeeper{
	private:
	string courseName;
	int noOfSubjects;
	int *scores;
	public:
		ScoreKeeper()
		{
			scores=new int;
		}
		ScoreKeeper(string name,int num)
		{
			courseName = name;
			noOfSubjects=num;
			scores=new int[num];
		}
		friend istream& operator >>(istream &inputStream,ScoreKeeper &k1);
		friend ostream& operator <<(ostream &outputStream,ScoreKeeper &k1);
		ScoreKeeper operator =(ScoreKeeper const &obj)
		{
			this->courseName=obj.courseName;
			this->noOfSubjects=obj.noOfSubjects;
			if(this->scores)
			{
				delete []this->scores;
			}
			this->scores=new int[this->noOfSubjects];
			for(int i=0;i<this->noOfSubjects;i++)
			{
				this->scores[i]=obj.scores[i];
			}
			return (*this);
		}
		~ScoreKeeper()
		{
			if(scores)
			{
				delete []scores;
			}
			
		}
};
istream& operator >>(istream &inputStream,ScoreKeeper &k1)
{
	cout<<"Enter the Marks:"<<endl;
			for(int i=0;i<k1.noOfSubjects;i++)
			{
				cin>>k1.scores[i];
				while(k1.scores[i]<0||k1.scores[i]>100)
				{
					cout<<"Error!Enter valid marks:"<<endl;
					cin>>k1.scores[i];
				}
			}
			return inputStream;
}
ostream& operator <<(ostream &outputStream,ScoreKeeper &k1)
{
	cout<<k1.courseName<<endl;
	cout<<"Marks:"<<endl;
	for(int i=0;i<k1.noOfSubjects;i++)
	{
		cout<<k1.scores[i]<<endl;
	}
	
	return outputStream;
}
int main()
{
	string name;
	int num;
	cout<<"Enter the course name:"<<endl;
//	cin.ignore();
	cin>>name;
	cout<<"Enter the number of subjects:"<<endl;
	cin>>num;
	ScoreKeeper k1(name,num);
	ScoreKeeper k2;
	cin>>k1;
	cout<<k1;
	k2=k1;
	cout<<k2;
		return 0;
}
