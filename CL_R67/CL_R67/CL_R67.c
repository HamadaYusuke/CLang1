#include<stdio.h>
#include<stdlib.h>
void addList(int);
void dispList(void);
struct List{
	int data;
	struct List *next;
};
struct List *head=NULL;

void main(void){
	int i,value;
	for(i=0;i<10;i++){
		printf("リストに追加する要素の値を入力してください:");
		scanf("%d",&value);/*データ値入力*/
		addList(value); /*追加関数呼び出し*/
	}
	printf("\n");　　　　　
	dispList();
}
void addList(int value){
	struct List *current,*newdata;
	/*構造体変数のためのメモリ領域の確保*/
	newdata=(struct List*)malloc(sizeof(struct List));
	if(newdata==NULL){
		printf("メモリの確保に失敗しました\n");
		return;
	}
	newdata->data=value;
	newdata->next=NULL;
	/*最初のデータはheadがnewdataを指すよになる*/
	if(head=NULL){
		head=newdata;
		return;
	}
	/*２番目以降のデータの場合はリスト末尾のデータを探索し*/
	current=head;
	while(current->next!=NULL){
		current=current->next;
}
void dispList(void){
	struct List *current;
	/*リストの先頭からデータを順に表示*/
	current=head;
}
	while(current!=NULL){
		printf("リストのデータ:%d\n",current->data);
		current->next;
	}
}