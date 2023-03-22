#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> myQueue;
    
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);
	myQueue.push(4);
	myQueue.push(5);

    cout << "El primer valor de la cola es: " << myQueue.front() << endl;
	myQueue.pop();
	cout<<"El nuevo valor ahora es:"<< myQueue.front()<<endl;
	
    return 0;
}

void reverseQueue(queue <int> &q){
	
	
}
