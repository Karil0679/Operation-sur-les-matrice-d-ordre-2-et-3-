#include<iostream>
#include"m3X3.h"



//récuper ma matrice 3X3....
void recuperation_mat_3(float mat[3][3] )
{
for(int i=0 ;i<=3 ;i++)
  {
    for(int j=0 ;j<=3 ; j++ )
      {
        std::cout<< mat[i][j]<<" " ;
      }
  } 
}


//Afficher ma matrice 3X3....
void affiche_mat_3(float mat[3][3] )
{
for(int i=0 ;i<=3 ;i++)
  {
    for(int j=0 ;j<=3 ; j++ )
      {
        std::cout<< mat[i][j]<<"  " ;
      }
      std::cout << std::endl;
  } 
}


// addition de deux matrice 3X3....

void addition_mat_3(float mat1[3][3],float mat2[3][3],float result[3][3])
{

  result[0][0]=mat1[0][0]+mat2[0][0] ; 
  result[0][1]=mat1[0][1]+mat2[0][1] ;
  result[1][0]=mat1[1][0]+mat2[1][0] ;
  result[1][1]=mat1[1][1]+mat2[1][1] ;
  result[0][2]=mat1[0][2]+mat2[0][2] ;
  result[1][2]=mat1[1][2]+mat2[1][2] ;
  result[2][0]=mat1[2][0]+mat2[2][0] ;
  result[2][1]=mat1[2][1]+mat2[2][1] ;
  result[2][2]=mat1[2][2]+mat2[2][2] ;

  affiche_mat_3(result);
  

}
// soustration de deux matrice 3X3....

void soustration_mat_3(float mat1[3][3],float mat2[3][3],float result[3][3])
{
  
  result[0][0]=mat1[0][0]-mat2[0][0] ; 
  result[0][1]=mat1[0][1]-mat2[0][1] ;
  result[1][0]=mat1[1][0]-mat2[1][0] ;
  result[1][1]=mat1[1][1]-mat2[1][1] ;
  result[0][2]=mat1[0][2]-mat2[0][2] ;
  result[1][2]=mat1[1][2]-mat2[1][2] ;
  result[2][0]=mat1[2][0]-mat2[2][0] ;
  result[2][1]=mat1[2][1]-mat2[2][1] ;
  result[2][2]=mat1[2][2]-mat2[2][2] ;

}
//multippplicationde deux matrice 3X3....
void multiplication_mat_3(float mat1[3][3],float mat2[3][3],float result[3][3])
{
  result[0][0]=mat1[0][0]*mat2[0][0]+mat1[0][1]*mat2[1][0]+mat1[0][2]*mat2[2][0]   ;
  result[0][1]=mat1[0][0]*mat2[0][1]+mat1[0][1]*mat2[1][1]+mat1[0][2]*mat2[2][1]   ;
  result[0][2]=mat1[0][0]*mat2[0][2]+mat1[0][1]*mat2[1][2]+mat1[0][2]*mat2[2][2]   ; 
  result[1][0]=mat1[1][0]*mat2[0][0]+mat1[1][1]*mat2[1][0]+mat1[1][2]*mat2[2][0]   ;
  result[1][1]=mat1[1][0]*mat2[0][1]+mat1[1][1]*mat2[1][1]+mat1[1][2]*mat2[2][1]   ;
  result[1][2]=mat1[1][0]*mat2[0][2]+mat1[1][1]*mat2[1][2]+mat1[1][2]*mat2[2][2]   ;
  result[2][0]=mat1[2][0]*mat2[0][0]+mat1[2][1]*mat2[1][0]+mat1[2][0]*mat2[2][2]   ; 
  result[2][1]=mat1[2][0]*mat2[0][1]+mat1[2][1]*mat2[1][1]+mat1[2][2]*mat2[2][1]   ;
  result[2][2]=mat1[2][0]*mat2[0][2]+mat1[2][1]*mat2[1][2]+mat1[2][2]*mat2[2][2]   ;


}
//   determinant de deux matrice 3X3....

float det_mat_3(float mat[3][3])
{
    
   
   float a = mat[0][0];
   float b = mat[0][1];
   float c = mat[0][2];
   float d = mat[1][0];
   float e = mat[1][1];
   float f = mat[1][2];
   float g = mat[2][0];
   float h = mat[2][1];
   float i = mat[2][2];

   float result = a*(e*i-f*h)-b*(d*i-f*g)+c*(d*h-e*g);

       return result ;
}

  //transposee de matrice 3X3....

    void transposee_mat_3(float mat[3][3],float result[3][3])
    {
          result[0][0]=mat[0][0];
          result[0][1]=mat[1][0];
          result[0][2]=mat[2][0];
          result[1][0]=mat[1][0];
          result[1][1]=mat[1][1];
          result[1][2]=mat[2][1];
          result[2][0]=mat[0][2];
          result[2][1]=mat[1][2];
          result[2][2]=mat[2][2];
                                             

 }
// inverse matrice 3X3....
void calcule_cofacteur(float mat[3][3],float c[3][3])
{

       c[0][0] =  (mat[1][1]*mat[2][2]-mat[1][2]*mat[2][1]);
       c[0][1] = -(mat[1][0]*mat[2][2]-mat[1][2]*mat[2][0]);
       c[0][2] =  (mat[1][0]*mat[2][1]-mat[1][1]*mat[2][0]);
       c[1][0] = -(mat[0][1]*mat[2][2]-mat[0][2]*mat[2][1]);
       c[1][1] =    mat[0][0]*mat[2][1]-mat[0][2]*mat[2][0];
       c[1][2] = -(mat[0][0]*mat[2][1]-mat[0][1]*mat[2][0]);
       c[2][0] =    mat[0][1]*mat[1][2]-mat[0][2]*mat[1][1];
       c[2][1] = -(mat[0][0]*mat[1][2]-mat[0][2]*mat[1][0]);
       c[2][2] =    mat[0][0]*mat[1][1]-mat[0][1]*mat[1][0];

}

void inver_mat_3(float mat[3][3],float result[3][3])
{
  float A = det_mat_3(mat);
  float trans[3][3];
   transposee_mat_3(mat,trans);

   if(A==0)
     {
      std:: cout <<"la matrice n'est pas invincible"<< std::endl ;
      
     }
     else
     {
        for(int i = 0 ; i<3;i++)
        {
            for(int j = 0; j<3;j++)
            {
                result[i][j]=trans[i][j]/A ;
            }
        }
     }
}  
 //trace matrice 3X3....

float trace_mat_3(float mat[3][3])
{
  float result = mat[0][0]+mat[1][1]+mat[2][2] ;

  return result ;

}