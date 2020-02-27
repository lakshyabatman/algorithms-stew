class Node:
    def __init__ (self,value,Min):
        self.value = value
        self.Min = Min
        self.next = None

class MinStack:
    def __init__(self):
        self.top = None
    def push(self,num):
        if(self.top==None):
            e = Node(value=num,Min=num)
            self.top = e
        else:
            e = Node(value=num,Min = min(num,self.top.Min))
            e.next = self.top
            self.top = e
    def pop(self):
        if(self.top == None):
            return -1
        else: 
            n = self.top.value
            self.top = self.top.next
            return n
    def getMin(self):
        if(self.top == None):
            return -1
        return self.top.Min


n = MinStack()
for i in range(10):
    n.push(i)
for i in range(10):
    print(n.getMin())
    m = n.pop()
    print(m)