class MinStack {

private:
    int topIndex;
    double* arr;
    int topIndex1;
    double* arr1;
    double minimum;

public:
    MinStack() {
        topIndex = -1;
        arr = new double[10000];
        minimum = 2e31;
        arr1 = new double[10000];
    }
    
    void push(int val) {
        topIndex++;
        arr[topIndex] = val;
        minimum = std::min(minimum, arr[topIndex]);
        arr1[topIndex] = minimum;
    }
    
    void pop() {
        topIndex--;
        if(topIndex != -1){
            minimum = arr1[topIndex];
        }
        else{
            minimum = 2e31;
        }
    }
    
    int top() {
        return arr[topIndex];
    }
    
    int getMin() {
        return arr1[topIndex];
    }
};
