#include<iostream>
using namespace std;

class stack{

    private:
        int arr[5];
        int top =-1;
    public:
        stack(){
           
            top =-1;
            for(int i =0; i<5; i++){
                arr[i] = 0;
            }
        }

        bool isEmpty(){
            if(top == -1){
                return 1;
            }
            else{
                return 0;
            }
        }

        bool isFull(){
            if(top == 4){
                return 1;
            }
            else{
                return 0;
            }
        }

       void push(int e){
            top++;
            arr[top] = e;
        }

        void pop(){
            arr[top] = 0;
            top--;
        }

        int peek(int pos){
            return arr[pos];
        }

        int count(){
        return (top+1);
       } 

       void display(){
        for(int i =4; i>-1;i--){
            cout << arr[i] <<endl;
        }
       }
       void change(int e, int pos){
        arr[pos] = e;

         }

};

int main(){

    stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(8);
    s1.display();
    cout<<"  " <<endl;
    s1.change(9,0);
    s1.display();
}
