
class Stack:
    
    # Stack using python list is implemented
    # a list and top of stack is initialised in constructor
    def __init__(self) -> None:
        self.__Arr = list()
        self.__Top_of_Stack = -1

    # ifempty method is defined to check if stack is empty.
    def __ifempty(self):
        if(self.__Arr == []):
            return True
        return False


    # push method is defined to push element in stack.
    def push(self, Val):
        self.__Top_of_Stack = self.__Top_of_Stack + 1
        self.__Arr.insert(self.__Top_of_Stack,Val)
    

    # peek method just outputs current top of stack.
    def peek(self):
        if(not self.__ifempty()):
            return self.__Arr[self.__Top_of_Stack]
        else:
            print("Stack is empty")

    # pop method removes top of stack from the stack and next element is made top of stack
    def pop(self):
        if(not self.__ifempty()):
            Val = self.__Arr.pop(self.__Top_of_Stack)
            self.__Top_of_Stack = self.__Top_of_Stack - 1
            return Val
        else:
            print("Stack is empty")

    # len method outputs length of stack.
    def len(self):
        return len(self.__Arr)

    # out_stack method outputs th current stack.
    def out_stack(self):
        for i in range(self.__Top_of_Stack , -1 , -1):
            print("At position ",i," element is : ",self.__Arr[i])

    # this is destructor 
    #def __del__(self):
        #print("Stack is destroyed")
    

# using stack
"""
stack = Stack()
stack.push(100)
stack.push(90)
stack.push(80)
stack.push(70)
stack.push(60)

stack.out_stack()

print(stack.peek())
print(stack.pop())
print(stack.peek())

stack.out_stack()"""
