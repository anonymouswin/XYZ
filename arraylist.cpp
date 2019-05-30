#include<iostream>
using namespace std;
char arr[10];
int count = 0;
int main()
	{
		cout<<"Enter the lowercase character" <<" " << endl;
		for(int j=0;j<10;j++)
		{
			cin >> arr[j];
			if(arr[j]< 96 || arr[j]>122)
				{
					cout<<"String is not in lowercase" <<endl;
				}
			cout <<"String is"<< " " << arr[j]<<endl;
		}
		for(int j=0;j<10;j++)
			{	
				cout<<"abc"<<endl;
				for(int i=0;i<10;i++)
				{
					if(arr[j]==arr[i])
						{
							cout<< "Frequency of arr[i] is" << ++count <<endl;
						}
				}
		}
		return 0;

	}

