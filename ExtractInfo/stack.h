#ifndef _STACK_H
#define _STACK_H
#define STACK_INIT_SIZE 100 //��ʼջ����󳤶�
#define STACKINCREMENT 10 //ÿ��������ջ�ĳ���

template <class DataType>
class Stack{
public:
	Stack();
	void Push(DataType e); //����Ϊe����ջ��Ԫ��
	int Pop(DataType &e); //ɾ��ջ��Ԫ��
	int GetTop(DataType &e); //ȡ��ջ��Ԫ��
	int StackEmpty(); //�ж�ջ�Ƿ�Ϊ�գ��շ���1
	~Stack(); //ջ������
private:
	DataType *base; //ջβ
	DataType *top; //ջ��
	int stacksize;
};
#endif