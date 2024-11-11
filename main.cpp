#include<iostream>
#include"m3X3.h"
#include"m2X2.h"


int main(int argc,char**argv){
    int choix ;
    
    float matrice2[2][2];
    float mat1[2][2],mat2[2][2],result[2][2] ;
     float matrice3[3][3];
    float mat3[3][3],mat4[3][3],result3[3][3] ;
    float C[3][3];
    std::cout << "choisir l'ordre de la matrice " << std::endl << "l'utilisateur n'as que deux choix possible (1 OU 2)"<<std::endl;
    std::cout <<"1: l'ordre 2 "<< std ::endl ;
    std::cout <<"2:l'ordre3 "<<std:: endl ;
    std::cin >> choix;
    
   
       if (choix==1){
            std::cout<<"entrer les elements de la premiere matrice"<< std :: endl;
        for (int i=0;i<2;i++)
       { 
        for (int j=0;j<2;j++)
        {
         std::cin>> mat1[i][j];
        }
       }
       
       std::cout<<"entrer les elements de la deuxieme matrice"<< std :: endl;
       { for (int i=0;i<2;i++){
        
        for (int j=0;j<2;j++){
        
      
         std::cin>> mat2[i][j];
        }
       }
       }
       
       int calcule;
       std::cout <<"entrer les calcule a effectuer"<< std ::endl;
       std::cout<<"1:addition"<<std::endl;
       std::cout<<"2:soustration"<<std::endl;
       std::cout<<"3:multiplication"<<std::endl;
       std::cout<<"4:determinant"<<std::endl;
       std::cout<<"5:inverse"<<std::endl;
       std::cout<<"6:la transposee"<<std::endl;
       std::cout<<"7:la trace"<<std::endl;
       std::cin>> calcule ;
      while(calcule < 1 || calcule > 7)
      { 
           std::cout <<  "error" << std::endl;
           std::cout <<"entrer les calcule a effectuer"<< std ::endl;
           std::cout<<"1:addition"<<std::endl;
           std::cout<<"2:soustration"<<std::endl;
           std::cout<<"3:multiplication"<<std::endl;
           std::cout<<"4:determinant"<<std::endl;
           std::cout<<"5:inverse"<<std::endl;
           std::cout<<"6:la transposee"<<std::endl;
           std::cout<<"7:la trace"<<std::endl;
           std::cin>> calcule ;

      }
     switch(calcule)
     {
        case 1:{
    
              addition_mat_2( mat1, mat2, result);
              affiche_mat_2 (result);
              std::cout <<"le result:"<<std::endl;
              }
        break;

        case 2:{

              soustration_mat_2(mat1, mat2, result);
              affiche_mat_2 (result);
              std::cout <<"le result:"<<std::endl;
              }
        break;

        case 3:{
               multiplication_mat_2(mat1, mat2, result);
               affiche_mat_2 (result);
               std::cout <<"le result:"<<std::endl;
               }
        break;

        case 4:{
               float determinant= det_mat_2(mat2);
                std::cout <<"le result:"<< determinant << std::endl;
                }
        break;

        case 5:{
                                                
                 float inverse= inver_mat_2(mat2,result);
                 affiche_mat_2 (result);
                 std::cout <<"le result:"<<std::endl;
                 inverse= inver_mat_2(mat1,result);
                 affiche_mat_2 (result);
                 std::cout <<"le result:"<<std::endl;
                 }
        break;

        case 6:{
        
                  transposee_mat_2(mat2, result);
                  affiche_mat_2 (result);
                  std::cout <<"le result:"<<std::endl;
                  transposee_mat_2(mat1, result);
                  affiche_mat_2 (result);
                  std::cout <<"le result:"<<std::endl;
                  }
        break;

        case 7:{
                   float T = trace_mat_2(mat1);
                   std::cout <<"le result:"<< T<< std::endl;
                   T = trace_mat_2(mat2);
                   std::cout <<"le result:"<< T << std::endl;
        }
        break;
        default:{
            std::cout<<"error"<<std::endl;
        }


       } 
       }
       if(choix==2)
       {
            std::cout<<"entrer les element de la premiere matrice "<<std::endl;
      for (int i=0;i<3;i++)
       { 
        for (int j=0;j<3;j++)
        {
         std::cin>> mat3[i][j];
        }
       }
       std::cout<<"entrer les element de la matrice 2"<<std :: endl;
              { for (int i=0;i<3;i++)
              {
        
        for (int j=0;j<3;j++){
        
      
         std::cin>> mat4[i][j];
        }
       }
       }
      int calcul;
       std::cout <<"entrer les calcule a effectuer"<< std ::endl;
       std::cout<<"1:addition"<<std::endl;
       std::cout<<"2:soustration"<<std::endl;
       std::cout<<"3:multiplication"<<std::endl;
       std::cout<<"4:determinant"<<std::endl;
       std::cout<<"5:la transposee"<<std::endl;
       std::cout<<"6:le cofacteur"<<std::endl;
       std::cout<<"7:l'inverse"<<std::endl;
       std::cout<<"8:trace"<<std::endl;
       std::cin>> calcul ;
       while(calcul < 1 || calcul > 8)
      { 
           std::cout <<  "error" << std::endl;
           std::cout <<"entrer les calcule a effectuer"<< std ::endl;
           std::cout<<"1:addition"<<std::endl;
           std::cout<<"2:soustration"<<std::endl;
           std::cout<<"3:multiplication"<<std::endl;
           std::cout<<"4:determinant"<<std::endl;
           std::cout<<"5:la transposee"<<std::endl;
           std::cout<<"6:le cofacteur"<<std::endl;
           std::cout<<"7:l'inverse"<<std::endl;
           std::cout<<"8:la trace"<<std::endl;
           std::cin>> calcul ;

      }
       switch(calcul)
       {
        case 1:{
    
              addition_mat_3( mat3, mat4, result3);
              affiche_mat_3(result3);
              std::cout <<"le result:"<<std::endl;
              }
        break;

        case 2:{

              soustration_mat_3(mat3, mat4, result3);
              affiche_mat_3(result3);
              std::cout <<"le result:"<<std::endl;
              }
        break;

        case 3:{
               multiplication_mat_3(mat3, mat4, result3);
               affiche_mat_3 (result3);
               std::cout <<"le result:"<<std::endl;
               }
        break;

        case 4:{
               float det = det_mat_3(mat3);
                std::cout <<"le result:"<< det <<std::endl;
                }
        break;

        case 5:{
               transposee_mat_3( mat3, result3);
                affiche_mat_3 (result3);
                 std::cout <<"le result:"<<std::endl;
                  transposee_mat_3( mat4, result3);
                affiche_mat_3 (result3);
                 std::cout <<"le result:"<<std::endl;
                 
                 }
        break;

        case 6:{
        
                  float c3[3][3];
                  calcule_cofacteur( mat3, c3);
                  affiche_mat_3 (c3);
                  std::cout <<"le result:"<<std::endl;
                  calcule_cofacteur( mat4, c3);
                  affiche_mat_3 (c3);
                  std::cout <<"le result:"<<std::endl;
                  }
        break;

        case 7:{
                   
                   inver_mat_3( mat3, result3);
                   affiche_mat_3 (result3);
                   std::cout <<"le result:"<<std::endl;
                    inver_mat_3( mat4, result3);
                   affiche_mat_3 (result3);
                   std::cout <<"le result:"<<std::endl;
        }
        break;
         case 8:{
                   
                  float T4 = trace_mat_3( mat4);
                   std::cout <<"le result:" << mat4 << std::endl;
                   float T3 = trace_mat_3( mat3);
                   std::cout <<"le result:" << mat3 << std::endl;
        }
        break;
        default:{
            std::cout<<"error"<<std::endl;
        }


       } 


       }
    
       return 0 ;
        
}




       


       
    

   
   
