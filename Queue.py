class Queue:

    def __init__(self) -> None:
        self.List = []
        self.front = 0
        self.back = -1

    # Get length of Queue using this method
    def Len(self):
        return len(self.List)
    
    # Private method to check if Queue is empty or not
    def __ifEmpty(self):
        if(self.Len() == 0):
            return True
        return False
    
    # Enqueue elements to the Queue using this method
    def Enqueue(self, Val):
        self.back = self.back + 1
        self.List.insert(self.back , Val)
        self.front = self.front - 1

    # Dequeue elements from the Queue using Dequeue method
    def Dequeue(self):
        self.List.pop(self.front)
        self.front = self.front + 1
        self.back = self.back- 1

    # Use Front method to get the front of Queue
    def Front(self):
        try:
            return self.List[self.front]
        except IndexError:
            print(" Index error , hence showing indexx ",self.front)
    
    # Use the Back method to get Back of Queue
    def Back(self):
        try:
            return self.List[self.back]
        except IndexError:
            print(" Index error , hence showing indexx ",self.back)
        #if(self.Len() != 0):
            #return self.List[self.back]

    def Out_Queue(self):
        for i in range(self.Len()):
            print(self.List[i])


# To try sample run uncomment it.
"""
que = Queue()
que.Enqueue(30)
que.Enqueue(40)
que.Enqueue(50)
que.Enqueue(60)
que.Enqueue(70)

que.Out_Queue()

print("Front is : ",que.Front())
print("Back is : ",que.Back())

que.Dequeue()

que.Out_Queue()
print("After first Deque")
print("Front is : ",que.Front())
print("Back is : ",que.Back())

que.Enqueue(100)
que.Out_Queue()
print("Front is : ",que.Front())
print("Back is : ",que.Back())

"""
    

