#include <iostream>
using namespace std;

int st[100]; 
int top = -1;

void insertSorted(int x) {
    if (top == -1 || x > st[top]) {
        st[++top] = x;
        return;
    }
    int temp = st[top--]; 
    insertSorted(x);
    st[++top] = temp;     
}

void sortStack() {
    if (top == -1) return;
    int temp = st[top--];
    sortStack();
    insertSorted(temp);
}

int main() {
    
    st[++top] = 3;
    st[++top] = 1;
    st[++top] = 4;
    st[++top] = 2;

    sortStack();

    cout << "Sorted stack (top to bottom): ";
    while (top != -1) {
        cout << st[top--] << " ";
    }
    return 0;
}
