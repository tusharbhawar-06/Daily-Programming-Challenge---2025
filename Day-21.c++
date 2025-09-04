#include <iostream>
using namespace std;

int st[100];
int top = -1;


void insertBottom(int x) {
    if (top == -1) { 
        st[++top] = x; 
        return;
    }
    int temp = st[top--];  
    insertBottom(x);     
    st[++top] = temp;     
}


void reverseStack() {
    if (top == -1) return;
    int temp = st[top--];  
    reverseStack();         
    insertBottom(temp);     
}

int main() 
    
    st[++top] = 1;
    st[++top] = 2;
    st[++top] = 3;
    st[++top] = 4;

    reverseStack();

    cout << "Reversed stack (top to bottom): ";
    while (top != -1) {
        cout << st[top--] << " ";
    }
    return 0;
}
