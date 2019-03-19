#include<iostream>
using namespace std;

class cpe1b
    {
    	public:
    	        void binary(int num);
    	        void checkprime(int num);
    	        void reverse(int num);
    	        long num[100],size;
    	   
	};
	
	int main()
	{
		cpe1b POLESTICO;
		POLESTICO.num[100],size;
	}
		
		
		
	long cpe1b::num[100],size;
	
	for(size=0;;size++)
		{
			cin>>num[size];
			if(num[size]==0)
				{
					break;
				}
		}
	for(int i=3;i<size;i++)
		{
			if(checkprime(i)!=0)
				{
		
					int x=binary(i);
					int y=reverse(x);
					if(x==y)
						{
						num[i]=143;
						}
					
				}
		}
	for(int i=0;i<size;i++)
		{
			cout<<"No.["<<i<<"] = "<<num[i]<<endl;
		}
	
void cpe1b::binary(int num)
	{
		int bin=0,rem;
		while(num!=0)
			{
				rem=num%2;
				bin=(bin*10)+rem;
				num/=2;
			}
		return bin;
	}
	
	
	
	
void cpe1b::checkprime(int num){
	for(int i=2;i<num;i++)
		{
			if(num%i==0)
				{
					return 0;
				}
		}
		return 1;
	
}


void cpe1b::reverse(int num){
//	cout<<num;
	int rem,rev=0;
	while(num!=0)
		{
			rem=num%10;
			rev=(rev*10)+rem;
			num=num/10;
		}
		return rev;
}

