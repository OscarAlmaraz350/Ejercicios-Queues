#include <iostream>
#include <queue>
#include <unordered_set>
using namespace std;

void reverseQueue(queue<int> &q) {
    if (q.empty()) {
        return;
    }
    int front = q.front();
    q.pop();
    reverseQueue(q);
    q.push(front);
}
void removeDuplicates(queue<int>& q) {
    unordered_set<int> seen;
    queue<int> newQ;
    
    while (!q.empty()) {
        int element = q.front();
        q.pop();
        
        if (seen.find(element) == seen.end()) {
            seen.insert(element);
            newQ.push(element);
        }
    }
    
    q = newQ;
}
void printQueue(queue<int>q){
	while (!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}
int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(4);
    q.push(4);
    q.push(4);
    q.push(4);

    cout << "Cola original: ";
    printQueue(q);
	reverseQueue(q);
    cout << "\nCola revertida: ";
    printQueue(q);
    removeDuplicates(q);
    cout << "\nCola sin repeticiones: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
		
    return 0;
}