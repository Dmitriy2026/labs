#include <iostream>
#include <cmath>

using BinaryPredicate = bool (*) (int, int);
using UnaryPredicate = bool (*) (int);
void print_array (int* first, int* last)
{
    for (; first!=last; ++first)
    {
        std::cout << *first << std::endl;
    }
}
void fill_array_1 (int* first, int* last)
{
    int temp =0;
    for (int i=1; first!=last; ++first,  temp = temp*2)
    {
        *first = i;
    }
}
void fill_array_2 (int* first, int* last)
{
    int temp = 1;
    for (int i=2; first!=last; ++first, ++i)
    {
        *first = temp;

    }
}
void fill_geometric_progression_4 (int* first, int* last, int a, int d)
{
    int temp = 0;
    for (;first!=last;++first)
    {
        *first = a * std::pow(d,temp++);
    }
}
void fill_fibonacci (int* first, int* last, int a, int d)
{
    *(first++) = 0;
    *(first++) = 1;

    for (;first!=last;++first)
    {
        *first = *(first - 1) + *(first - 2);
    }
}
void fill_task_6 (int* first, int* last, int a, int b)
{
    *(first++)=a;
    *(first++)=b;
    int temp = a+b;
    for (;first!=last;++first)
    {
        *first = temp;
        temp = temp + *first;
    }
}
void print_task_7 (int* first, int* last)
{

    for (;first!=last;--first)
    {
        std::cout<<*first<<std::endl;
    }
}
void print_task_8 (int* first, int* last, UnaryPredicate p)
{

    for (;first!=last;++first)
    {
        if(p(*first))
        {
            std::cout<<*first <<std::endl;
        }
    }
}
int task_18 (int* first, int* last, int* k)
{

    for (; first!=last; ++first)
    {
        if(*first < *k)
        {
            return *first;
        }
    }
    return 0;
}
int task_19 (int* first, int* last, int* k, int* p)
{
    for(;first<last;++first)
    {
        if(*first < *k && *first < *p)
        {
            return *first;
        }
    }
    return 0;
}
int accum (int* first, int* last)
{
    int temp = 0;
    for (; first<last; ++first)
    {
        temp = temp + *first;
    }
    return temp;
}
int middle_arythmetic (int* first, int* last)
{
    int temp = last-first;
    return  accum(first, last)/temp;
}
int task_22 (int* first, int* last, int* k, int* l)
{
    return accum (first, k) + accum (l, last);
}
int task_23 (int* first, int* last, int* k, int* l)
{
    int temp = (last-first)-(k-l);
    return task_22(first, last, k, l)/temp;
}
void arithmetic_progression_3 (int* first, int* last, int d, int a)
{
    int temp = 0;
    for(; first<last; ++first)
    {
        *first = a + (temp++)*d;
    }
}

int main()
{
    int arr[10]{1,23,54,-65,-100,54,87,4,21,8};
   // fill_array_1(arr,arr+10);
   // fill_array_2(arr,arr+10);
  //  arithmetic_progression_3(arr,arr+10,2,5);
  //  fill_geometric_progression_4(array, array + 10, 2, 5);
    //fill_fibonacci(arr, arr+10);
   // fill_task_6(arr,arr+10,2,7);
    //print_task_7(arr+9,arr);
    //print_task_8(array, array+10, is_positive);
    //print_task_18(arr, arr+10, arr+4);
    //std::cout << task_18(arr, arr+10, arr+3);
    //std::cout << task_20(arr, arr+10);
  //  std::cout << task_21(arr, arr+10);
   // std::cout << task_22(arr, arr+10, arr+3);
   std::cout << task_23(arr, arr+10, arr+3, arr+7);
   // print_array(arr,arr+10);
    return 0;
}
