#define MAX 1000
class twoStacks {
  public:
    int arr[MAX];
    int top1;
    int top2;

    twoStacks() {
        top1 = -1;       
        top2 = MAX;
    }

    // Function to push an integer into the stack1.
    void push1(int x) {
        if (top1 < top2 - 1) {
            top1++;
            arr[top1] = x;
        } else {
            std::cout << "Stack Overflow\n";
        }
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        if (top1 < top2 - 1) {
            top2--;
            arr[top2] = x;
        } else {
            std::cout << "Stack Overflow\n";
        }
    }

    // Function to remove an element from top of the stack1.
    int pop1() {
        if (top1 >= 0) {
            int x = arr[top1];
            top1--;
            return x;
        } else {
            return -1; 
        }
    }

    // Function to remove an element from top of the stack2.
    int pop2() {
         if (top2 < MAX) {
            int x = arr[top2];
            top2++;
            return x;
        } else {
            return -1; 
        }
    }
};