/* HO VA TEN: TRUONG VAN HIEN
MSSV: 20194276
Lop thuc hanh: 710817 */

#include <iostream> 
using namespace std;
struct Node { 
    int data; 
    Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

// push a new element to the beginning of the list
Node* prepend(Node* head, int data) {
    Node *tmp = new Node(data);
    if (head == NULL){
        head = tmp;
        return head;
    }
    tmp->next = head;
    return tmp;
}

// print the list content on a line
void print(Node* head) {
    if (head == NULL){
        cout << endl;
        return;
    }
    cout << head->data << " ";
    head = head ->next;
    print(head);
}

// return the new head of the reversed list
Node* reverse(Node* head) {
    if (head == NULL) return NULL;
    Node *p = head;
    Node *h = head;
    Node *q;
    p = p->next;
    while (p != NULL){
        q = p;
        p = p->next;
        q->next = head;
        head = q;
    }
    h->next = NULL;
    return head;
}
  
int main() {
    int n, u;
    cin >> n;
    Node* head = NULL;
    for (int i = 0; i < n; ++i){
        cin >> u;
        head = prepend(head, u);
    } 
    
    cout << "Original list: ";
    print(head);

    head = reverse(head);
    
    cout << "Reversed list: ";
    print(head);

    return 0; 
}
