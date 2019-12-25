/* 백준 알고리즘
 * 1463_1로 만들기.cpp
 *
 *  Created on: 2019. 12. 25.
 *      Author: 오시연
 */

//실패
//#include <iostream>
//using namespace std;
//const int MAX=1000000;
//int count[MAX][3]={0,};
//int result[MAX]={0,};
//
//int calculate(int n){
//	if(n==1)
//		result[n]=0;
//	if(n==2||n==3)
//		result[n]=1;
//	else{
//		if(n%3==0){
//			count[n][0]=result[n/3]+1;
//		}
//		if(n%2==0){
//			count[n][1]=result[n/2]+1;
//		}
//		count[n][2]=result[n-1]+1;
//
//		result[n]=count[n][0];
//		if(result[n]==0){
//			result[n]=count[n][1];
//			if(result[n]==0){
//				result[n]=count[n][2];
//			}
//			else{
//				if(result[n]>=count[n][2])
//					result[n]=count[n][2];
//			}
//		}
//		else if((result[n]>=count[n][1])&&(count[n][1]!=0)){
//			result[n]=count[n][1];
//			if(result[n]>=count[n][2])
//				result[n]=count[n][2];
//		}
//		else{
//			if(result[n]>=count[n][2])
//				result[n]=count[n][2];
//		}
//	}
//	return result[n];
//}
//int main(){
//	int n=0;
//	int result=0;
//
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		result=calculate(i);
//	}
//	cout<<result<<endl;
//}

//성공
#include <iostream>
using namespace std;
int count[1000000]={0,};

int main(){
	int n=0;
	count[1]=0;
	count[2]=1;
	count[3]=1;

	cin>> n;
	for(int i=4; i<=n; i++){
		if(i%3==0){
			count[i]=count[i/3]+1<count[i-1]+1?count[i/3]+1:count[i-1]+1;
		}
		else if(i%2==0){
			count[i]=count[i/2]+1<count[i-1]+1?count[i/2]+1:count[i-1]+1;
		}
		else
			count[i]=count[i-1]+1;
	}
	cout<<count[n]<<endl;

}
