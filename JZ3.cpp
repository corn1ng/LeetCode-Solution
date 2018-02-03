class Solution {
public:
    bool duplicate(int numbers[], int length, int* duplication) {
        for(int i=0; i<length; ++i)
        {
          while(numbers[i] != i)
          {
              if(numbers[i] == numbers[numbers[i]])
              {
                  *duplication = numbers[i];
                  return true;
              }
              //swap(numbers[i],numbers[numbers[i]]);
              int temp = numbers[i];
              numbers[i] = numbers[temp];
              numbers[temp] = temp;
          }
        }
        return false;
    }
};