#include<iostream>
#include<queue>
using namespace std;

int tester(priority_queue <int> my_queue, int testValue, int size) {

        for(int i =0;i<size;i++) {
            int gq = my_queue.top();
            if (testValue == gq) {
                return 1;
            }
            my_queue.push(gq);
        }
        return 0;
}

int main() {
    priority_queue <int> my_queue;
    int inputs,tests;
    cin >> inputs;
    for(int i =0;i<inputs;i++) {
        int temp;
        cin >> temp;
        my_queue.push(temp);
    }
    // For testing whether an element exists or not!
    cin >> tests;
    for(int i =0;i<tests;i++) {
        int testValue;
        cin >> testValue;
        int result = tester(my_queue,testValue,inputs);
        cout <<result<<endl;
    }



    
    return 0;

}