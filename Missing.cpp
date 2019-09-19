    #include <iostream>
     
    using namespace std;
     
     
    void swap(int* a, int* b)
    {
      int t = *a;
      *a = *b;
      *b = t;
    }
     
     
    int partition (int arr[], int low, int high)
    {
      int pivot = arr[high];
      int i = (low - 1);
      for (int j = low; j <= high - 1; j++)
      {
        if (arr[j] < pivot)
        {
        i++;
        swap(&arr[i], &arr[j]);
        }
      }
      swap(&arr[i + 1], &arr[high]);
      return (i + 1);
    }
     
    void quickSort(int arr[], int low, int high)
    {
      if (low < high)
      {
      int pi = partition(arr, low, high);
      quickSort(arr, low, pi - 1);
      quickSort(arr, pi + 1, high);
      }
    }
     
    int missing (int arr[],int n){
        int t;
        int mult = 2;
        cin>>t;
        
        while(t--)
        {
            cin>>n;
            int arr[n];
            for(int i = 0; i < n; i++){
                cin>>arr[i];
            }
            cout<<missing(arr,n)<<endl;
        }
        
        quickSort(arr,0, n-1);
        
        
        for(int i = 0; i < n;i++){
            if(arr[i] >= mult)
                {
                    arr[i] = mult;
                    mult +=2;
                }
        }
        
        return mult;
    }
     
    int main() {
      int n;
      int arr[n];
      missing(arr,n);
    }

