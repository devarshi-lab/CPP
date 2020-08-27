/*
 Accept range from user and display perfect numbers from that range.
Input : 5 30
Output : 6 28 
*/

#include<iostream>
using namespace std;

class Perfect
{
	public:
		int no1,no2;
		int i,j,iSum;

		Perfect(int start,int stop)
		{
			iSum = 0;
			this->no1=start;
			this->no2=stop;
		}

		void DisplayPerfect()
		{
			for(i = no1;i<=no2;i++)
			{
				iSum = 0;
				for(j = 1;j<i;j++)
				{
					if(i % j == 0)
					{
						iSum += j;
					}
				}
				if(iSum == i)
				{
					cout<<i<<"\t";
				}
			}
		}
};

int main()
{
	int iStart = 0,iStop = 0;

	cout<<"Enter the range : \t";
	cin>>iStart>>iStop;

	Perfect obj(iStart,iStop);

	obj.DisplayPerfect();

	return 0;
}