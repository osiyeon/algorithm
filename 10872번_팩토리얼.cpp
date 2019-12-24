/*
 * 10872번_팩토리얼.cpp
 *
 *  Created on: 2019. 12. 24.
 *      Author: 오시연
 */

#include <iostream>
using namespace std;

int main(){
	int N = 0;
	cin>>N;
	int result = 1;

	for(int i=1; i<=N; i++){
		result = result * i;
	}

	cout<<result;

}
