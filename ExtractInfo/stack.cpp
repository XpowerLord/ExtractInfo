#include "stack.h"

/*�������� ���캯��������һ���µĿ�ջ ���������C*/
template <class DataType>
Stack::Stack()
{
	if(!(base=(DataType*)malloc(STACK_INIT_SIZE*sizeof(DataType)))) exit(1);
	top=base;
	stacksize=STACK_INIT_SIZE;
}

/*�����C ����Ϊe����ջ��Ԫ�� ���������C*/
template <class DataType>
void Stack::Push(DataType e)
{
	if(top-base>=stacksize)
	{
		if(!(base=(DataType*)realloc(base,(stacksize+STACKINCREMENT)*sizeof(DataType)))) exit(1);
		top=base+stacksize;
		stacksize+=STACKINCREMENT;
	}
	*top++=e;
}

/*�����C ɾ��ջ��Ԫ�� ���������C*/
template <class DataType>
int Stack::Pop(DataType &e)
{
	if(top==base) return 0;
	e=*�Ctop;
	return 1;
}

/*�����C ȡ��ջ��Ԫ�� ���������C*/
template <class DataType>
int Stack::GetTop(DataType &e)
{
	if(top==base) return 0;
	e=*(top-1);
	return 1;
}

/*�������� �ж�ջ�Ƿ�Ϊ�գ��շ���1 ���������C*/
template <class DataType> 
int Stack::StackEmpty()
{
	return top==base? 1:0;
}

/*�������� ����ջ ���������C*/
template <class DataType>
Stack::~Stack()
{
	free(base);
}

