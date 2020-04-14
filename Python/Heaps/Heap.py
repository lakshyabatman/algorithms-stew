class MaxHeap:
    def __init__(self):
        self.heapArray =[]
    
    def insert(self,val):
        self.heapArray.append(val)
        self.maxHeapify(index = 0)

    def swap(self,index1,index2):
        self.heapArray[index1],self.heapArray[index2] = self.heapArray[index2],self.heapArray[index1]

    def compare(self,index1,index2):
        return index1 if self.heapArray[index1]> self.heapArray[index2] else index2
    
    def maxHeapify(self,index):
        if index >= len(self.heapArray):
            return
        ls = self.leftChild(index)
        rs = self.rightChild(index)
        if (ls < len(self.heapArray) and rs < len(self.heapArray)):
            self.maxHeapify(ls)
            self.maxHeapify(rs)
            if self.heapArray[index] < self.heapArray[ls] and self.heapArray[index] < self.heapArray[rs]:
                indexToSwapWith = self.compare(ls,rs)
                self.swap(index,indexToSwapWith)
            elif self.heapArray[index]< self.heapArray[ls]:
                self.swap(index,ls)
            else:
                self.swap(index,rs)
        elif(ls < len(self.heapArray)):
            self.maxHeapify(ls)
            if self.heapArray[index] < self.heapArray[ls]:
                self.swap(index,ls)

    def leftChild(self,index):
        return 2*index+1
    
    def rightChild(self,index):
        return 2*index+2

    def extractMax(self):
        value = self.heapArray.pop(0)
        self.maxHeapify(0)
        return value

# Driver code
maxHeap = MaxHeap()
maxHeap.insert(1)
maxHeap.insert(2)
maxHeap.insert(3)
maxHeap.insert(4)
maxHeap.insert(5)
maxHeap.insert(6)
maxHeap.insert(7)


# Todo: Work on this bad boi!!!
class MinHeap:

    def __init__(self):
        self.heapArray = []

    def compare(self,index1,index2):
        return index1 if self.heapArray[index1]< self.heapArray[index2] else index2
    
    def minHeapify(self,index):
        if index >= len(self.heapArray):
            return
        ls = self.leftChild(index)
        rs = self.rightChild(index)
        if (ls < len(self.heapArray) and rs < len(self.heapArray)):
            self.minHeapify(ls)
            self.minHeapify(rs)
            if self.heapArray[index] > self.heapArray[ls] and self.heapArray[index] > self.heapArray[rs]:
                indexToSwapWith = self.compare(ls,rs)
                self.swap(index,indexToSwapWith)
            elif self.heapArray[index] > self.heapArray[ls]:
                self.swap(index,ls)
            else:
                self.swap(index,rs)
        elif(ls < len(self.heapArray)):
            self.minHeapify(ls)
            if self.heapArray[index] > self.heapArray[ls]:
                self.swap(index,ls)
        
    def swap(self,index1,index2):
        self.heapArray[index1],self.heapArray[index2] = self.heapArray[index2],self.heapArray[index1]

    def insert(self,val):
        self.heapArray.append(val)
        self.minHeapify(0)

    def leftChild(self,index):
        return 2*index+1
    
    def rightChild(self,index):
        return 2*index+2

minHeap = MinHeap()
minHeap.insert(1)
minHeap.insert(2)
minHeap.insert(3)
# minHeap.insert(4)
# minHeap.insert(5)
# minHeap.insert(6)
print(minHeap.heapArray)





