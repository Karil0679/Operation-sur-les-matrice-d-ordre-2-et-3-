#ifndef __matrice3X3__
#define __matrice3X3


/*Ecriture des differents 
prototipes des fonctions.........*/


void affiche_mat_3(float mat[3][3] );
void recuperation_mat_3(float mat[3][3] );
void addition_mat_3(float mat1[3][3],float mat2[3][3],float result[3][3]);
void soustration_mat_3(float mat1[3][3],float mat2[3][3],float result[3][3]);
void multiplication_mat_3(float mat1[3][3],float mat2[3][3],float result[3][3]);
float det_mat_3(float mat[3][3]);
void transposee_mat_3(float mat[3][3],float result[3][3]);
void calcule_cofacteur(float mat[3][3],float c[3][3]);
void inver_mat_3(float mat[3][3],float result[3][3]);
float trace_mat_3(float mat[3][3]);

      #endif

