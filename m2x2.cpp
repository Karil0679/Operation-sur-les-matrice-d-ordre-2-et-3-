#include<iostream>
#include"m2X2.h"


//récuper ma matrice 2X2....
void recuperation_mat_2(float mat[2][2] )
{
for(int i=0 ;i<=2 ;i++)
  {
    for(int j=0 ;j<=2 ; j++ )
      {
        std::cout<< mat[i][j]<<"  " ;
      }
  } 
}


//Afficher ma matrice 2X2....
void affiche_mat_2(float mat[2][2] ){
for(int i=0 ;i<2 ;i++)
  {
    for(int j=0 ;j<2 ; j++ )
      {
        std::cout<< mat[i][j] <<"  " ;
      }
      std::cout<<"\n";
  } 
}
 

// addition de deux matrice 2X2....

void addition_mat_2(float mat1[2][2],float mat2[2][2],float result[2][2])
{

  result[0][0]=mat1[0][0]+mat2[0][0] ;
  result[0][1]=mat1[0][1]+mat2[0][1] ;
  result[1][0]=mat1[1][0]+mat2[1][0] ;
  result[1][1]=mat1[1][1]+mat2[1][1] ;
}


// soustration de deux matrice 2X2....

void soustration_mat_2(float mat1[2][2],float mat2[2][2],float result[2][2])
{
  
  result[0][0]=mat1[0][0]-mat2[0][0] ;
  result[0][1]=mat1[0][1]-mat2[0][1] ;
  result[1][0]=mat1[1][0]-mat2[1][0] ;
  result[1][1]=mat1[1][1]-mat2[1][1] ;
}


//multiplication de deux matrice 2X2....

void multiplication_mat_2(float mat1[2][2],float mat2[2][2],float result[2][2])
{
  result[0][0]=mat1[0][0]*mat2[0][0]+mat1[0][0]*mat2[1][0] ;
  result[0][1]=mat1[0][1]*mat2[0][1]+mat1[0][1]*mat2[1][1] ;
  result[0][0]=mat1[1][0]*mat2[0][0]+mat1[1][0]*mat2[1][0] ; 
  result[0][0]=mat1[1][1]*mat2[0][1]+mat1[1][1]*mat2[1][1] ;
}




//   determinant de deux matrice 2X2....

float det_mat_2(float mat[2][2])
{
    //result=mat[2][2];
   float result= mat[0][0]*mat[1][1]-mat[1][0]*mat[0][1] ;
  return result ;     
}


    //   inverse de deux matrice 2X2....

   float inver_mat_2( float mat[2][2],float result[2][2])
   {
     float A= det_mat_2(mat) ;
     float inver[2][2];
          if(A!=0)
              {
                result[0][0]= inver[0][0]-mat[1][1]/A;
                result[1][0]= inver[1][0]-mat[1][0]/A;                   
                result[0][1]= inver[0][1]-mat[0][1]/A; 
                result[1][1]= inver[1][1]-mat[0][0]/A;
               }  
                 else
                 {
                    A == 0 ;
                    std::cout << "la matrice n'est pas inverse !"<< std::endl ;
                    return 0 ;;
                 }
              return result[2][2] ;
   }


   // transposee d'une matrice 2X2....

    void transposee_mat_2( float mat[2][2] , float result[2][2] ) 
    {
          result[0][0]=mat[0][0] ;
          result[1][0]=mat[0][1] ;
          result[0][1]=mat[1][0] ;
          result[1][1]=mat[1][1] ;
     }


   // trace d'une matrice 2X2....

     float trace_mat_2( float mat[2][2] )
     {
      float result=mat[0][0]+mat[1][1] ;
        
        return result ;

     }

   