/* 백준 알고리즘
 * 10871_X보다 작은 수.cpp
 *
 *  Created on: 2020. 1. 6.
 *      Author: 오시연
 */

#include<iostream>
using namespace std;

int main(){
	int N, X;
	cin>>N>>X;

	int num[N];

	for(int i=0; i<N; i++){
		cin>>num[i];
		if(num[i]<X){
			cout<<num[i]<<" ";
		}
	}


}
