#ifndef _STACK_H
#define _STACK_H
#define STACK_INIT_SIZE 100 //初始栈的最大长度
#define STACKINCREMENT 10 //每次新增的栈的长度

template <class DataType>
class Stack{
public:
	Stack();
	void Push(DataType e); //插入为e的新栈顶元素
	int Pop(DataType &e); //删除栈顶元素
	int GetTop(DataType &e); //取出栈顶元素
	int StackEmpty(); //判断栈是否为空：空返回1
	~Stack(); //栈被销毁
private:
	DataType *base; //栈尾
	DataType *top; //栈顶
	int stacksize;
};
#endif