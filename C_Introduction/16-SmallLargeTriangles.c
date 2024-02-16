#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
    /**
    * Sort an array a of the length n
    */
    double arr[n+1];
    
    triangle temp;
 
    for(int i=0;i<n;i++)
    {
        double area_2,p;
        p=((tr[i].a+tr[i].b+tr[i].c)/2.0);
        area_2=(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
        arr[i]=area_2;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
               temp=tr[i];
                tr[i]=tr[j];
                tr[j]=temp;
            }
            
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++) {
        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    sort_by_area(tr, n);
    for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    return 0;
}