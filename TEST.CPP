#include<iostream.h>
#include<conio.h>
int getno(int a[], int n)
{

    int total = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++)
    {
	total=total-a[i];
    }
    return total;
}
void main()
{
    clrscr();
    int arr[100],p;
    cout<<"PLEASE ENTER THE SIZE OF ARRAY"<<endl;
    cin>>p;
    cout<<"ENTER THE ARRAY ELEMENTS"<<endl;
    for(int j=0; j<p; j++)
    {
       cin>>arr[j];
    }
    int miss = getno(arr, p);
    cout <<"THE MISSING NUMBER IN THE ARRAY IS: "<< miss;
    getch();
}