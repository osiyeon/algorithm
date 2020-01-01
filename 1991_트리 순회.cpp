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
}node;

void preorder(node* ptr){
	if(ptr->value !='.'){
		cout<<ptr->value<<' ';
		preorder(ptr->left);
		preorder(ptr->right);
	}
}

void inorder(node* ptr){
	if(ptr->value !='.'){
		inorder(ptr->left);
		cout<<ptr->value<<' ';
		inorder(ptr->right);
	}
}

void postorder(node* ptr){
	if(ptr->value !='.'){
		postorder(ptr->left);
		postorder(ptr->right);
		cout<<ptr->value<<' ';
	}
}
void findValue(char c1, node* root, node* newNode){
	cout<<root->value<<endl;
	if(c1 == root->left->value){
		cout<<root->left->value<<endl;
		root->left = newNode;
		cout<<"1"<<endl;
	}
	else if(c1 == root->right->value){
		root->right = newNode;
		cout<<"2"<<endl;
	}
	else{
		if(root->left != NULL && root->right !=NULL){
			cout<<"?"<<endl;
			findValue(c1, root->left, newNode);
			cout<<"@"<<endl;
			findValue(c1, root->right, newNode);
			cout<<"3"<<endl;
		}
	}
}

int main(){
	int n;
	char c1, c2, c3;

	node* root = new node;
	root = NULL;

	cin>>n;
	for(int i=0; i<n; i++){
		cin>> c1 >> c2 >> c3;
		node* newNode = new node;
		node* leftNode = new node;
		node* rightNode = new node;

		newNode->left, newNode->right = NULL;
		leftNode->left, leftNode->right = NULL;
		rightNode->left, rightNode->right = NULL;

		newNode->value = c1;
		leftNode->value = c2;
		rightNode->value = c3;
		newNode->left = leftNode;
		newNode->right = rightNode;

		//		cout<<newNode->value<<endl;
		cout<<c1<<" "<<c2<<" "<<c3<<endl;

		if(root == NULL){
			root = newNode;
			cout<<"%"<<endl;;
		}
		else{
			cout<<"$"<<endl;
			cout<<" "<<root->left->value<<endl;

			findValue(c1, root, newNode);
		}
	}
	preorder(root);
	inorder(root);
	postorder(root);

}
