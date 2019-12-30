/* 백준 알고리즘
 * 10844_쉬운 계단 수.cpp
 *
 *  Created on: 2019. 12. 30.
 *      Author: 오시연
 */

/* 백준 알고리즘 10844번 */

#include <iostream>
using namespace std;

int main(){
	int n=0;
	long long result=0;

	cin>>n;
	long long sub[11]={};
	long long add[11]={};
	long long count[11]={};

	count[0]=count[10]=0;
	for(int i=1; i<10; i++){
		count[i]=1;
	}
	if(n>=2){
		for(int j=2; j<=n;j++){
			count[10]=0;
			for(int i=1; i<=10; i++){
				sub[i-1]=count[i];
			}
			for(int i=0; i<10; i++){
				add[i+1]=count[i];
			}
			for(int i=0; i<=10; i++){
				count[i]=sub[i]+add[i];
				count[i]=count[i]%1000000000;
			}
		}
	}
	for(int j=0; j<10; j++){
		result+=count[j];
	}
	cout<<result%1000000000;
}


