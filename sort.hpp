/*
|------------------------------|
|started writing in 21/nov/25  |
|partial end in                |
|end in  Still to be completed |
|written by francesco-lol      |
|------------------------------|
*/
#include<algorithm> //to use the swap() function
#include<math.h> //to use the pow() function

#ifndef SORT //to prevent the file from being included multiple times
#define SORT

/*
|------------------------------|
|    Optimized bubble sort     |
|------------------------------|
*/

template<typename Var, size_t Dim> //Var = generic functions, Dim = automatic calculation of the array size
void bubbleSort(Var (&array)[Dim])
{
    for(size_t i = 0;i < Dim - 1;i++) //terates through the array
    {
        bool early_exit = false; 

        for(size_t j = 0;j < Dim - i - 1;j++) //compares and swaps pairs of elements
        {
            if(array[j] > array[j + 1])
            {
                std::swap(array[j],array[j + 1]);
                early_exit = true;
            }
        }

        if(early_exit == false) //If no swap occurred the array is already sorted
        break;
    }
}

/*
|------------------------------|
|       Insertion sort         |
|------------------------------|
*/

template<typename Var, size_t Dim>
void insertionSort(Var (&array)[Dim])
{
    for(size_t i = 1; i < Dim; i++) //iterates through the array starting from the second element
    {
        Var key = array[i];
        size_t j = i ; //sets the counter j for the while loop with the value = i 

            while((j > 0) and (array[j - 1] > key )) //if the condition (j > 0) and (array[j - 1] > key ) is met, it enters the loop and swaps the elements array[i - 1],array[i], decrement j
            {
                array[j] = array[j - 1];
                j--; 
            }

        array[j] = key;    
    }
}

/*
|------------------------------|
|        Selection sort        |
|------------------------------|
*/

template<typename Var, size_t Dim>
void selectionSort(Var (&array)[Dim]) 
{
    for(size_t i = 0;i < Dim - 1;i++) //iterates through the array and swap array[i],array[min]
    {
        size_t minIndex = i; //sets the min to the value of the counter i
        
        for(size_t j = i + 1; j < Dim; j++) //If array[j] <  array[minIndex] min is set to the value of the counter j
        {
            if(array[j] <  array[minIndex])
            {
                minIndex = j;
            }
        }

        std::swap(array[i],array[minIndex]);
    } 
}

/*
|------------------------------|
|         Shell sort           |
|------------------------------|
*/

template<typename Var, size_t Dim>
void shellSort(Var (&array)[Dim]) 
{

    for(size_t gap = Dim/2;gap > 0; gap /= 2) //It iterates through the array starting from a gap equal to dim/2, and each time the gap is halved
    {
        for(size_t i = gap; i < Dim;i++) 
        {
            for(size_t j = i; (j >= gap) && (array[j - gap] > array[j]);j -= gap)
            {
                std::swap(array[j],array[j - gap]);
            }
        }
    }  
}

/*
|------------------------------|
|         Gnome sort           |
|------------------------------|
*/

template<typename Var, size_t Dim>
void gnomeSort(Var (&array)[Dim]) 
{
    size_t i = 1;

    while(i < Dim) //It iterates through the array starting from the second element
    {
        if(array[i] >= array[i - 1]) //If array[i] is greater than or equal to array[i - 1], then increment the counter i by 1
       {
             i++;
       }

       else //Otherwise, it swaps array[i] and array[i - 1], and if the counter i is greater than 1, it decrements it, otherwise, it sets it to 1
       {
            std::swap(array[i],array[i - 1]);

            if(i > 1)
            {
                i--;
            }
            else
            {
                i = 1;
            }
       }
    }        
}

#endif