git
void bubbleSortArray()
{
    int pass = 1; //step 1

    do 
    {
        for (int j = 0; j <= n-1-pass; j++)
        {  //step 2

            if (arr[j] > arr[j+1]) //step 3
            {  
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

        pass = pass + 1; //step 4

    } while (pass <= n - 1); //step 5
}