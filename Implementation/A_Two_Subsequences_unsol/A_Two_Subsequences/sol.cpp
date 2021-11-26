#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	string str, sub_str1, sub_str2;
	char* temp;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> str;
		temp = str[0];	
		for(int j = 1; j < str.length(); j++)
		{
			if(temp > str[j])
			{
				temp = str[j];
			}
		}
		for(int k = 0; k < str.length(); k++)
		{
			if(strcmp(temp,str[k]))
			{
				str.erase(k,1);
				break;
			}
		}
		cout << temp << " " << str << endl;
	}
	return 0;
}


