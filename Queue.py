class Queue:

    def __init__(self) -> None:
        self.List = []
        self.Front = -1
        self.Back = -1

    def Len(self):
        return len(self.List)
    
    def __ifEmpty(self):
        if(self.Len() == 0):
            return True
        return False
    
    def Enqueue(self, Val):
        self.Back += self.Back
        self.List.insert(self.Back , Val)

    def Dequeue(self):
        self.Front += self.Front

    def Front(self):
        return self.Front + 1
    
    def Back(self):
        return self.Back + 1
        
