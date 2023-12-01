#include<iostream>
#include<vector>
#include<stack>
#include<deque>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


// void doubleIt(ListNode* head) {
//     int keeper = 0;
//     stack<ListNode*>st;
//     queue<int>qt;
//     // get all count
//     while(!head) {
//         st.push(head);
//         keeper += head->val;
//         head = head->next;
//     }
//     keeper *= 2;
//     while(keeper > 0) {
//         int digit = keeper % 10;
//         qt.push(digit);
//         keeper /= 10;
//     }
//     if(st.size() < qt.size()) {
//         int qSize = qt.size();
//         // need to add more ListNode at the tail of list
//         while(st.size() != qSize) {
//             ListNode* newNode = new ListNode(0);
//             ListNode* previous_node = st.top();
//             previous_node->next = newNode;
//             st.push(newNode);
//         }
//     }
//     while(!st.empty()) {
//         ListNode* current = st.top();
//         current->val = qt.front();
//         qt.pop();
//         st.pop();
//     }
// }

ListNode* doubleItSecondWay(ListNode* head) {
    int sum = 0;
    ListNode* current = head;
    deque<int>qt;
    while(!current) {
        sum += current->val;
        current = current->next;
    }
    sum *= 2;
    
    while(sum > 0) {
        int digit = sum % 10;
        qt.push_front(digit);
        sum /= 10;
    }
    ListNode* nHeadCopy = new ListNode(0);
    current = nHeadCopy;
    while(!qt.empty()) {
        ListNode* pp_element = new ListNode(qt.back());
        current->next = pp_element;
        current = current->next;
        qt.pop_back();
    }
    // if(!head) {
    //     ListNode* temp = new ListNode(0);
    //     return temp;
    // }
    return nHeadCopy->next;
}

int main() {
    // List Node [1,8,9] -> [3,7,8]
    ListNode* a;
    ListNode* b;
    ListNode* c;
    c->val = 9;
    b->val = 8;
    a->val = 1;
    a->next = b;
    b->next = c;

    ListNode* z = doubleItSecondWay(a);
    cout << z->val;
    return 0;
}