// Design a data structure which represents a stack using only one array common for both
#include<iostream>
#include<stack>
using namespace std;

class TwoStack
{
    int *arr;
    int top1;
    int top2;
    int size;


    public:

        // Initialise TwoStack
        TwoStack(int s)
        {
            this -> size = s;
            top1 = -1;
            top2 = s;
            arr = new int[s];
        }

        // Push in Stack1
        void push1(int num)
        {
            if(top2-top1 > 1)
            {
                top1++;
                arr[top1]= num;
            }
            else
            {
                cout<<"Stack overflowed";
            }
        }

        // Push in stack2
        void push2(int num)
        {
            if(top2-top1 > 1)
            {
                top2--;
                arr[top2]= num;
            }
            else
            {
                cout<<"Stack overflowed";
            }
        }

        // Pop from stack1
        int pop1()
        {
            if (top1>=0)
            {
                int ans = arr[top1];
                top1--;
                return ans;
            }
            else
            {
                return -1;
            }
        }

        // Pop from stack2
        int pop2()
        {
            if (top2 < size)
            {
                int ans = arr[top2];
                top2++;
                return ans;
            }
            else
            {
                return -1;
            }
        }
};


int main()
{
    TwoStack st(5);
    st.push1(22);
    st.push1(45);
    st.push1(78);

    st.push2(2);
    st.push2(3);
    // st.push2(4);

    st.pop1();
    st.pop2();
    return 0;
}