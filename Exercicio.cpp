#include <iostream>
using namespace std;

int main (){
    int qnt_alunos;
    string alunos[5];
    float nota_aluno1[3], nota_aluno2[3], nota_aluno3[3], nota_aluno4[3], nota_aluno5[3];
    float n1, n2, n3;
    
    cout << "Quantos alunos serão cadastrados?: ";     
    cin >> qnt_alunos;   
    
    for (int i = 0; i < qnt_alunos; i++){ 
        cout << "Digite o nome do aluno " << i + 1 << ": ";
        cin >> alunos[i];
        
        cout << "Digite as três notas do aluno " << alunos[i] << ": ";
        cin >> n1 >> n2 >> n3;
        
        if (i==0){
            nota_aluno1[0] = n1;
            nota_aluno1[1] = n2;
            nota_aluno1[2] = n3;
        }else if (i==1){
            nota_aluno2[0] = n1;
            nota_aluno2[1] = n2;
            nota_aluno2[2] = n3;
        }else if (i==2){
            nota_aluno3[0] = n1;
            nota_aluno3[1] = n2;
            nota_aluno3[2] = n3;
        }else if (i==3){
            nota_aluno4[0] = n1;
            nota_aluno4[1] = n2;
            nota_aluno4[2] = n3;
        }else{
            nota_aluno5[0] = n1;
            nota_aluno5[1] = n2;
            nota_aluno5[2] = n3;
        }
    }
    
    float media_aluno1, media_aluno2, media_aluno3, media_aluno4, media_aluno5;
    
    media_aluno1 = (nota_aluno1[0] + nota_aluno1[1] + nota_aluno1[2]) / 3;
    media_aluno2 = (nota_aluno2[0] + nota_aluno2[1] + nota_aluno2[2]) / 3;
    media_aluno3 = (nota_aluno3[0] + nota_aluno3[1] + nota_aluno3[2]) / 3;
    media_aluno4 = (nota_aluno4[0] + nota_aluno4[1] + nota_aluno4[2]) / 3;
    media_aluno5 = (nota_aluno5[0] + nota_aluno5[1] + nota_aluno5[2]) / 3;
    
    string re_1, re_2, re_3, re_4, re_5;
    
    if(media_aluno1>=6){
        re_1 = "Aprovado";
    }else {
        re_1 = "Reprovado";
    }
    if(media_aluno2>=6){
        re_2 = "Aprovado";
    }else {
        re_2 = "Reprovado";
    }
    if(media_aluno3>=6){
        re_3 = "Aprovado";
    }else {
        re_3 = "Reprovado";
    }
    if(media_aluno4>=6){
        re_4 = "Aprovado";
    }else {
        re_4 = "Reprovado";
    }
    if(media_aluno5>=6){
        re_5 = "Aprovado";
    }else {
        re_5 = "Reprovado";
    }
    
    cout << endl << " . . . " << endl;
    cout << "ALUNO" << "\tN1" << "\tN2" << "\tN3" << "\tMÉDIA" << "\tSITUAÇÃO" << endl;
    
    if (media_aluno1>=0){
    cout << alunos[0] <<"\t"<< nota_aluno1[0] <<"\t"<< nota_aluno1[1] <<"\t"<< nota_aluno1[2] <<"\t"<< media_aluno1 <<"\t"<< re_1 << endl;
    }
    if (media_aluno2>=0){
    cout << alunos[1] <<"\t"<< nota_aluno2[0] <<"\t"<< nota_aluno2[1] <<"\t"<< nota_aluno2[2] <<"\t"<< media_aluno2 <<"\t"<< re_2 << endl;
    
    if (media_aluno3>=0){
    cout << alunos[2] <<"\t"<< nota_aluno3[0] <<"\t"<< nota_aluno3[1] <<"\t"<< nota_aluno3[2] <<"\t"<< media_aluno3 <<"\t"<< re_3 << endl;
    }
    if (media_aluno4>=0){
    cout << alunos[3] <<"\t"<< nota_aluno4[0] <<"\t"<< nota_aluno4[1] <<"\t"<< nota_aluno4[2] <<"\t"<< media_aluno4 <<"\t"<< re_4 << endl;
    }
    if (media_aluno5>=0){
    cout << alunos[4] <<"\t"<< nota_aluno5[0] <<"\t"<< nota_aluno5[1] <<"\t"<< nota_aluno5[2] <<"\t"<< media_aluno5 <<"\t"<< re_5 << endl;
    }
    cout << endl << " . . . ";
    
    return 0;
}
