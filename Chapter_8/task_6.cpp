#include <iostream>
#include <cstring>
 
template <class T>
T maxn(T arr[], int n);
 
template <> const char* maxn<const char*>(const char* arr[], int n);
 
int main()
{
 
    int arr[5]={2,7,6,4,3};
    std::cout<<maxn(arr,5)<<std::endl;;
 
    double arrDbl[4]={1.3,4.6,8.7,3.5};
    std::cout<<maxn(arrDbl,4)<<std::endl;
 
    const char *array[3]={ "short", "long long long", "the longest one"};
    std::cout<<maxn(array,3)<<std::endl;
 
    return 0;
}
 
template <class T>
T maxn(T arr[], int n)
{
    T max=arr[0];
 
    for (int i=1; i<5; i++){
        if (arr[i]>max)
            max=arr[i];
    }
 
    return max;
}
 
template <> const char* maxn<const char*>(const char* arr[], int n)
{
    const char *p=arr[0];
 
    for (int i=1; i<n; i++){
        if ((strlen(arr[i])) > (strlen(p)))
            p=arr[i];
    }
 
    return p;
 
}