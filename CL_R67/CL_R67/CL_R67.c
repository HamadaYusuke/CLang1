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
		printf("���X�g�ɒǉ�����v�f�̒l����͂��Ă�������:");
		scanf("%d",&value);/*�f�[�^�l����*/
		addList(value); /*�ǉ��֐��Ăяo��*/
	}
	printf("\n");�@�@�@�@�@
	dispList();
}
void addList(int value){
	struct List *current,*newdata;
	/*�\���̕ϐ��̂��߂̃������̈�̊m��*/
	newdata=(struct List*)malloc(sizeof(struct List));
	if(newdata==NULL){
		printf("�������̊m�ۂɎ��s���܂���\n");
		return;
	}
	newdata->data=value;
	newdata->next=NULL;
	/*�ŏ��̃f�[�^��head��newdata���w����ɂȂ�*/
	if(head=NULL){
		head=newdata;
		return;
	}
	/*�Q�Ԗڈȍ~�̃f�[�^�̏ꍇ�̓��X�g�����̃f�[�^��T����*/
	current=head;
	while(current->next!=NULL){
		current=current->next;
}
void dispList(void){
	struct List *current;
	/*���X�g�̐擪����f�[�^�����ɕ\��*/
	current=head;
}
	while(current!=NULL){
		printf("���X�g�̃f�[�^:%d\n",current->data);
		current->next;
	}
}