Here you go — I’ve separated all **Question 1s** and **Question 2s** into two clear lists 👇

---

### **List 1: Question 1 (13 Marks each)**

1. Write a program to generate the Fibonacci series.
2. Write a program to accept a number from the user and display sum of its digits.
3. Write a recursive function to print the factorial for a given number.
4. Write a program that compares two dates (in DD/MM/YYYY format) and prints which one is earlier.
5. Write a program to perform basic operations, indexing and slicing on arrays.
6. Write a program to compute number of characters and words in a string.

---

### **List 2: Question 2 (12 Marks each)**

1. Write a program to implement basic array operations: Insert an element at a specific position in an array.
2. Stack Application: Write a program to implement a stack using an array.
3. Write a program to Create a singly linked list taking input from user.
4. Write a program to Create a singly linked list taking input from user. *(repeated)*
5. Write a program to create a binary search tree.
6. Write a program to implement basic array operations: Insert an element at a specific position in an array. *(repeated)*

---

Would you like me to **remove duplicates** or keep them as-is (since they might be part of different sets)?

Here are **Python programs** for all the **Question 1 (13 marks)** tasks 👇

---

### **1️⃣ Fibonacci Series**

```python
n = int(input("Enter number of terms: "))
a, b = 0, 1
for i in range(n):
    print(a, end=" ")
    a, b = b, a + b
```

---

### **2️⃣ Sum of Digits**

```python
num = int(input("Enter a number: "))
sum_digits = 0
while num > 0:
    sum_digits += num % 10
    num //= 10
print("Sum of digits:", sum_digits)
```

---

### **3️⃣ Recursive Factorial**

```python
def factorial(n):
    if n == 0 or n == 1:
        return 1
    return n * factorial(n - 1)

n = int(input("Enter a number: "))
print("Factorial:", factorial(n))
```

---

### **4️⃣ Compare Two Dates**

```python
d1 = list(map(int, input("Enter first date (DD/MM/YYYY): ").split('/')))
d2 = list(map(int, input("Enter second date (DD/MM/YYYY): ").split('/')))

if d1[2:] + d1[1:2] + d1[:1] < d2[2:] + d2[1:2] + d2[:1]:
    print("First date is earlier")
elif d1 == d2:
    print("Both dates are same")
else:
    print("Second date is earlier")
```

---

### **5️⃣ Array Operations, Indexing & Slicing**

```python
import array as arr

a = arr.array('i', [10, 20, 30, 40, 50])
print("Array:", a.tolist())
print("First element:", a[0])
print("Last element:", a[-1])
print("Sliced array (2nd to 4th):", a[1:4].tolist())
```

---

### **6️⃣ Count Characters and Words**

```python
text = input("Enter a string: ")
chars = len(text)
words = len(text.split())
print("Characters:", chars)
print("Words:", words)
```

---

Would you like me to give the **Question 2 programs (12 marks)** also in Python next?


Perfect 👍 Here are **short exam-style (8–10 lines)** C++ versions of all **Question 2 (12 marks)** programs — clean and concise, ideal for quick writing in exams 👇

---

### **1️⃣ Basic Array Operations — Insert Element**

```cpp
#include <iostream>
using namespace std;
int main() {
    int a[100], n, pos, val;
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    cin >> pos >> val;
    for(int i=n;i>=pos;i--) a[i]=a[i-1];
    a[pos-1]=val; n++;
    for(int i=0;i<n;i++) cout << a[i] << " ";
}
```

---

### **2️⃣ Stack using Array**

```cpp
#include <iostream>
using namespace std;
int s[5], top=-1;
void push(int x){ if(top<4) s[++top]=x; }
void pop(){ if(top>=0) cout<<s[top--]<<" "; }
int main(){
    push(10); push(20); push(30);
    pop(); pop(); pop();
}
```

---

### **3️⃣ Singly Linked List**

```cpp
#include <iostream>
using namespace std;
struct Node{int d; Node* n;};
int main(){
    Node *h=NULL,*t=NULL,*p; int n,x; cin>>n;
    while(n--){ p=new Node; cin>>x; p->d=x; p->n=NULL;
        if(!h) h=t=p; else t->n=p, t=p; }
    for(p=h;p;p=p->n) cout<<p->d<<" ";
}
```

---

### **4️⃣ Binary Search Tree**

```cpp
#include <iostream>
using namespace std;
struct Node{int d;Node*l,*r;};
Node* ins(Node* r,int v){
    if(!r) return new Node{v,0,0};
    v<r->d? r->l=ins(r->l,v):r->r=ins(r->r,v);
    return r;
}
void in(Node* r){if(r){in(r->l);cout<<r->d<<" ";in(r->r);}}
int main(){Node* r=NULL;int n,v;cin>>n;while(n--){cin>>v;r=ins(r,v);}in(r);}
```

---

Would you like me to make **short versions (8–10 lines)** of the **Question 1 (Python)** programs too for exam use?

### **Long code of dsa
Here are **C++ short programs** for all the **Question 2 (12 Marks each)** 👇

---

### **1️⃣ Basic Array Operations — Insert Element**

```cpp
#include <iostream>
using namespace std;
int main() {
    int arr[100], n, pos, val;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i=0;i<n;i++) cin >> arr[i];
    cout << "Enter position and value: ";
    cin >> pos >> val;
    for(int i=n;i>=pos;i--) arr[i]=arr[i-1];
    arr[pos-1]=val;
    n++;
    cout << "Array after insertion: ";
    for(int i=0;i<n;i++) cout << arr[i] << " ";
}
```

---

### **2️⃣ Stack using Array**

```cpp
#include <iostream>
using namespace std;
#define SIZE 5
int stack[SIZE], top = -1;

void push(int val) {
    if(top == SIZE-1) cout << "Stack Overflow\n";
    else stack[++top] = val;
}
void pop() {
    if(top == -1) cout << "Stack Underflow\n";
    else cout << "Popped: " << stack[top--] << endl;
}
void display() {
    if(top == -1) cout << "Stack Empty\n";
    else for(int i=top;i>=0;i--) cout << stack[i] << " ";
    cout << endl;
}

int main() {
    push(10); push(20); push(30);
    display();
    pop();
    display();
}
```

---

### **3️⃣ Singly Linked List (Input from User)**

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node *head = NULL, *temp, *newNode;
    int n, val;
    cout << "Enter number of nodes: ";
    cin >> n;
    for(int i=0;i<n;i++) {
        newNode = new Node;
        cout << "Enter value: ";
        cin >> val;
        newNode->data = val;
        newNode->next = NULL;
        if(head == NULL) head = temp = newNode;
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    cout << "Linked List: ";
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
```

---

### **4️⃣ Binary Search Tree (BST)**

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

Node* insert(Node* root, int val) {
    if(!root) {
        root = new Node{val, NULL, NULL};
    } else if(val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);
    return root;
}

void inorder(Node* root) {
    if(root) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = NULL;
    int n, val;
    cout << "Enter number of nodes: ";
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> val;
        root = insert(root, val);
    }
    cout << "Inorder traversal: ";
    inorder(root);
}
```

---

Would you like me to make **all these programs shorter (exam-style 8–10 lines each)** or keep them detailed for full marks (12-mark answers)?


