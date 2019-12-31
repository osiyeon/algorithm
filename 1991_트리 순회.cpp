/* 백준알고리즘
 * 1991_트리 순회.cpp
 *
 *  Created on: 2019. 12. 29.
 *      Author: 오시연
 */

#include<iostream>
using namespace std;

typedef struct node{
	node* left;
	node* right;
	char value;
};

void preorder(node* ptr){
	if(ptr !='.'){
		cout<<ptr->value<<' ';
		preorder(ptr->left);
		preorder(ptr->right);
	}
}

void inorder(node* ptr){
	if(ptr !='.'){
		inorder(ptr->left);
		cout<<ptr->value<<' ';
		inorder(ptr->right);
	}
}

void postorder(node* ptr){
	if(ptr !='.'){
		postorder(ptr->left);
		postorder(ptr->right);
		cout<<ptr->value<<' ';
	}
}

int main(){
	int n;
	char c1, c2, c3;

	cin>>n;
	for(int i=0; i<n; i++){
		cin>> c1 >> c2 >> c3;
		node *tree;
		tree = (node*)malloc(sizeof(node));
		tree->value=c1;
		tree->left=c2;
		tree->right=c3;
	}
	preorder(&tree);

}
