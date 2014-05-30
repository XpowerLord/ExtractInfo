#include "stack.h"

/*———— 构造函数，创建一个新的空栈 ————–*/
template <class DataType>
Stack::Stack()
{
	if(!(base=(DataType*)malloc(STACK_INIT_SIZE*sizeof(DataType)))) exit(1);
	top=base;
	stacksize=STACK_INIT_SIZE;
}

/*——– 插入为e的新栈顶元素 ————–*/
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

/*——– 删除栈顶元素 ————–*/
template <class DataType>
int Stack::Pop(DataType &e)
{
	if(top==base) return 0;
	e=*–top;
	return 1;
}

/*——– 取出栈顶元素 ————–*/
template <class DataType>
int Stack::GetTop(DataType &e)
{
	if(top==base) return 0;
	e=*(top-1);
	return 1;
}

/*———— 判断栈是否为空：空返回1 ————–*/
template <class DataType> 
int Stack::StackEmpty()
{
	return top==base? 1:0;
}

/*———— 销毁栈 ————–*/
template <class DataType>
Stack::~Stack()
{
	free(base);
}

