#ifndef __matrice2X2__
#define __matrice2X2__



/*Ecriture des differents 
prototipes des fonctions.........*/ 


void recuperation_mat_2(float mat[2][2] );
void affiche_mat_2 (float mat[2][2] );
void addition_mat_2(float mat1[2][2],float mat2[2][2],float result[2][2]);
void soustration_mat_2(float mat1[2][2],float mat2[2][2],float result[2][2]);
void multiplication_mat_2(float mat1[2][2],float mat2[2][2],float result[2][2]) ;
float det_mat_2(float mat[2][2]) ;
float inver_mat_2( float mat[2][2],float result[2][2]) ;
void transposee_mat_2( float mat[2][2] , float result[2][2] ) ;
float trace_mat_2( float mat[2][2] ) ;

#endif