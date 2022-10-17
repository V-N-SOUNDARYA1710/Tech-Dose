int array[46] = {0};
    int max = -1;
    for (int itr = lowLimit; itr <= highLimit; itr++) {
        int sumOfDigit = 0;
        for (int jtr = itr; jtr > 0; jtr /= 10) {
            sumOfDigit += jtr % 10;
        }
        ++array[sumOfDigit];
        if(max < array[sumOfDigit]) max = array[sumOfDigit];        
    }
    return max;
