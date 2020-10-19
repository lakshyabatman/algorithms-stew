#include<iostream>
using namespace std;


class IterativeSegmentTree {
    private:
    int *segmentTree;


    public:
    IterativeSegmentTree(int arr[],int n ) {
        this->segmentTree = new int[2*n];
        this->construct(arr,n,0,n-1,0);
        cout << this->segmentTree[1] <<endl;
    }

    void construct(int arr[],int n, int ss,int se,int si ) {
        for(int i=0;i<n;i++) {
            this->segmentTree[n+i] = arr[i];
        }
        for(int i =n-1;i>=1;i--) { 
            this->segmentTree[i] = min(this->segmentTree[2*i],this->segmentTree[2*i+1]);
        }


    }  
};

int main() {
    int a[10] = { 2, 6, 10, 4, 7, 28, 9, 11, 6, 33 };
    IterativeSegmentTree *seg = new IterativeSegmentTree(a,10);


    return 0;
}