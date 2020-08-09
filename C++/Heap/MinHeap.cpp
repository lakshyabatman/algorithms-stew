/**
 * 
 *@description: Min heap implementation
 * 
 *@author: Lakshya Khera
 * 
 * */

#include<iostream>
#include<climits>
using namespace std;


void swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 


class MinHeap {
  private:
    int *harr;
    int capacity;
    int heap_size;

  public:
    MinHeap(int capacity);
    void minHeapify(int v);
    int parent(int i) { return (i-1)/2; }
    int left(int i) { return (2*i + 1); }
    int right(int i) { return (2*i+2); }
    int extractMin();
    void decreaseKey(int i,int new_val);  
    int getMin() { return harr[0]; } 
    void deleteKey(int i); 
    void insertKey(int k); 

};

MinHeap::MinHeap(int capacity) {
  harr = new int[capacity];
  this->capacity = capacity;
  heap_size = 0;
}
void MinHeap::insertKey(int val ) {
  if(capacity == heap_size) {
    cout << "Overflow"<<endl;
    return;
  }
  heap_size++;
  int i = heap_size-1;
  harr[i] = val;
  while(i!=0 && harr[parent(i)] >harr[i]) {
    swap(&harr[parent(i)],&harr[i]);
    i = parent(i);
  }

}

void MinHeap::minHeapify(int i) {
  int l = left(i);
  int r = right(i);

  int smallest = i;
  if(l < heap_size && harr[l] <  harr[i]) {
    smallest = l;
  }
  if(r< heap_size && harr[r]< harr[i]) {
    smallest = r;
  }
  if(smallest !=i) {
    swap(&harr[i], &harr[smallest]);
    minHeapify(smallest);
  }

}

int MinHeap::extractMin() {
  if(heap_size == 0) return INT_MAX;
  if(heap_size == 1) {
    heap_size--;
    return harr[0];
  }
  
  int root = harr[0];
  harr[0] = harr[heap_size-1];
  heap_size--;
  minHeapify(0);
  return root;

}



void MinHeap::decreaseKey(int i, int k) {
  harr[i] = k;
  while(i!=0 && harr[parent(i)]> harr[i]) {
    swap(&harr[i],&harr[parent(i)]);
    i = parent(i);
  }
}

void MinHeap::deleteKey(int i) {
  harr[i] = INT_MIN;
  minHeapify(0);
  extractMin();
}




int main() {
    MinHeap h(11); 
    h.insertKey(3); 
    h.insertKey(2); 
    h.deleteKey(1); 
    h.insertKey(15); 
    h.insertKey(5); 
    h.insertKey(4); 
    cout << h.getMin() << " "; 
    h.insertKey(45); 
    cout << h.extractMin() << " "; 

    cout << h.getMin() << " "; 
    h.decreaseKey(2, 1); 
    cout << h.getMin(); 
    return 0;
}