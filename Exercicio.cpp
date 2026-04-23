/********************************************* Relatorio de Notas *********************************************
*************** * Criadores: Gabriel Alves Jacques * Igor Temmerman * Isaac Dos Santos Roberto ****************
**************************************************************************************************************/

#include <iostream>
using namespace std;

int main() {

    /*Cria a variavel para saber a quantidade de alunos.*/
    int qnt_alunos;

    /*Recebe o resuldado da quantidade de alunos.*/
    cout<<"Quantos alunos deseja cadastrar? ";
    cin>> qnt_alunos;

    /*Cria as variaveis juntamente com os vetores, refente aos nomes, notas e medias dos alunos.*/
    string nomes[qnt_alunos];
    float notas1[qnt_alunos], notas2[qnt_alunos], notas3[qnt_alunos];
    float medias[qnt_alunos];

    /*Laço de repetição para calcular a media de cada aluno.*/
    for (int i=0; i<qnt_alunos; i++) {
        
        cout<<"\nDigite o nome do aluno "<< i + 1 <<": ";
        cin>> nomes[i];
        
        cout<<"Digite as 3 notas de "<< nomes[i] <<": ";
        cin>> notas1[i] >> notas2[i] >> notas3[i];
        
        medias[i] = (notas1[i] + notas2[i] + notas3[i]) / 3;
        
    }

    /*Cria a variavel maior media para descobrir o vetor referente ao aluno com a maior media 
    (como os vetores sao inteiros a variavel deve ser em valor inteiro).*/
    int maior_media=0;

    /*Laço de repetição para encontrar o aluno com a maior media.*/
    for (int i=1; i<qnt_alunos; i++) {
        
        if (medias[i]>medias[maior_media]) {
            maior_media = i;
        }
        
    }

    /*Saida estrutural.*/
    cout <<"\n...\n";
    cout <<"\nALUNO\tN1\tN2\tN3\tMEDIA\tSITUACAO\n";

    /*Laço de repetição para sabem os alunos aprovados ou não, e saida estrutural.*/
    for (int i=0; i<qnt_alunos; i++) {
        
        cout<< nomes[i] <<"\t"<< notas1[i] <<"\t"<< notas2[i] <<"\t"<< notas3[i] <<"\t" << medias[i] <<"\t";

        if (medias[i]>=7){
            cout<<"Aprovado\n";
        } else {
            cout<<"Reprovado\n";
        }
        
    }

    /*Saida estrutural e resuldado do aluno com a maior media.*/
    cout<<"\n...\n";
    cout<<"\nAluno com maior média: "<< nomes[maior_media] <<" ("<< medias[maior_media] <<")\n";

    return 0;
    
}
