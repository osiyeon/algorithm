/* 백준알고리즘
 * 2156_포도주 시식.cpp
 *
 *  Created on: 2019. 12. 28.
 *      Author: 오시연
 */

/* 백준 알고리즘 2156번 */
#include <iostream>
using namespace std;

int max(int a, int b){
	int max = a;
	if(max<=b)
		max=b;
	return max;
}

int main(){
	int n=0;
	cin>>n;
	int amount[n];
	int result[n];

	for(int i=0; i<n; i++){
		cin>>amount[i];
	}
	result[0]=amount[0];
	result[1]=result[0]+amount[1];
	result[2]=max(amount[0],amount[1])+amount[2];
	result[3]=max(result[1],amount[0]+amount[2])+amount[3];

	for(int i=4; i<n; i++){
		result[i]=max(result[i-1],result[i-2])+amount[i];
		cout<<"i: "<<i<<"result: "<<result[i]<<endl;
	}

	cout<<result[n-1];
}

