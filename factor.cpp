#include<iostream>
using namespace std;

class Factor
{
    public:
        int a = 0,b = 0,sum = 0,sumx = 0;
        
        Factor(int x)
        {
            this->a = x;
        }

        int factor()
        {
            if(a<0)
            {
                a=-a;
            }
            for(b=1;b<a;b++)
            {
                if(a % b != 0)
                {
                    sumx += b;
                }
                else if(a % b == 0)
                {
                    sum += b;
                }
            }
            return (sumx-sum);
        }
};

int main()
{
    int iNo = 0;

    int iRet = 0;

    cout<<"Enter a number : \t";
    cin>>iNo;

    Factor obj(iNo);
    iRet = obj.factor();

    cout<<iRet<<"\t";

    return 0;
}