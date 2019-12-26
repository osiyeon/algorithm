/* 백준 알고리즘
 * 1003_피보나치 함수.cpp
 *
 *  Created on: 2019. 12. 26.
 *      Author: 오시연
 */

//실패
//#include <iostream>
//using namespace std;
////fib(0)=0 1번/0번, fib(1)=1 0번/1번;
////fib(2)=fib(0)+fib(1)=2 1번/1번;
////fib(3)=fib(1)0번/1번+fib(2)1번/1번=3 1번/2번
////fib(4)=fib(3)1번/2번+fib(2)1번/1번=5 2번/3번,
////fib(5)=fib(4) 2번/3번 +fib(3) 1번/2번 =8 3번/5번;
////fib(6)=fib(4) 2번/3번+fib(5) 3번/5번 = 13 5번/8번
//
//int main(){
//	int n=0;
//
//	cin>>n;
//	int k[n]={};
//	int max=0;
//
//	for(int i=0; i<n; i++){
//		cin>>k[i];
//		if(max<=k[i])
//			max=k[i];
//	}
//
//	int fib0[max]={};
//	int fib1[max]={};
//
//	fib0[0]=1; fib1[0]=0;
//	fib0[1]=0; fib1[1]=1;
//
//	for(int i=2; i<=max; i++){
//		fib0[i]=fib0[i-2]+fib0[i-1];
//		fib1[i]=fib1[i-2]+fib1[i-1];
//	}
//
//	for(int i=0; i<n; i++){
//		cout<<fib0[k[i]]<<" "<<fib1[k[i]]<<endl;
//	}
//}
//->fib0[]와 fib1[]의 사이즈를 max로 해놓고 -> 마지막 인덱스 max-1
//fib0[max]에 값을 넣어줘서 런타임 에러뜸
//
//
//성공
#include <iostream>
using namespace std;

int main(){
	int n=0;

	cin>>n;
	int k[n]={};
	int max=0;

	for(int i=0; i<n; i++){
		cin>>k[i];
		if(max<=k[i])
			max=k[i];
	}

	int fib0[max+1]={};
	int fib1[max+1]={};

	fib0[0]=1; fib1[0]=0;
	fib0[1]=0; fib1[1]=1;

	for(int i=2; i<=max; i++){
		fib0[i]=fib0[i-2]+fib0[i-1];
		fib1[i]=fib1[i-2]+fib1[i-1];
	}

	for(int i=0; i<n; i++){
		cout<<fib0[k[i]]<<" "<<fib1[k[i]]<<endl;
	}
}

