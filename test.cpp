#include <iostream>
using namespace std;


int  main()
 {
    int mat[3][3],i,j,sum = 0;
    /* input the array*/
    for (i=0; i<3;i++)
        for (j=0; j<3; j++)
        {
            std::cout << "\nEnter a number";
            cin >> mat[i][j];
        }
       /*  logic to sum the lower triangullar elements*/
    for (i=0; i<3;i++)
        for(j=0;j<3;j++)
        {if (i>=j) sum=sum+mat[i][j];}
    /*print  the array */
std::cout << "\n the ntered matrix is\n";
for (i=0 ; i<3 ; i++)
    {
        for(j=0;j<3;j++)
        {std::cout<<"   "<<mat[i][j];}
    std::cout<< "\n";
    };
    
     std::cout<< "\nSum of the lower triangular matric is " << sum;
 }
