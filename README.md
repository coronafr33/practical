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
