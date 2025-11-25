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
        for(size_t j = 0;j < Dim - i - 1;j++) //compares and swaps pairs of elements
        {
            if(array[j] > array[j + 1])
            {
                std::swap(array[j],array[j + 1]);
            }
        }
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
        size_t j = array[i - 1]; //sets the counter j for the while loop with the value == array[i - 1]

            while((i > 0) and (array[j] > array[i])) //if the condition (i > 0) and (array[j] > array[i]) is met, it enters the loop and swaps the elements array[i - 1],array[i], decrement j
            {
                std::swap(array[i - 1],array[i]);
                j--; 
            }
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
    for(size_t i = 0;i < Dim - 1;i++) //iterates through the array up to the second-to-last element
    {
        size_t min = i; //sets the min to the value of the counter i
        
        for(size_t j = i + 1; j < Dim; j++) //starting from index i + 1, if array[i] >  array[i + 1] is met then min = j and swap array[min],array[i] otherwise swap array[min],array[i]”
        {
            if(array[i] >  array[i + 1])
            {
                min = j;
            }
  
            std::swap(array[min],array[i]);
        }
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
        for(size_t i = gap + 1; i < Dim;i++) //As long as the condition (i < Dim) && (array[j] > array[j + gap]) is true, it swaps array[j],array[i]
        {
            for(size_t j = i - gap; (i < Dim) && (array[j] > array[j + gap]);j - gap)
            {
                std::swap(array[j],array[i]);
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