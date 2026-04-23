#include <iostream>
using namespace std;

float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

int main() {
    int qnt_alunos;

    cout << "Quantos alunos deseja cadastrar? ";
    cin >> qnt_alunos;

    string nomes[qnt_alunos];
    float notas1[qnt_alunos], notas2[qnt_alunos], notas3[qnt_alunos];
    float medias[qnt_alunos];

    for (int i = 0; i < qnt_alunos; i++) {
        
        cout << "\nDigite o nome do aluno " << i + 1 << ": ";
        cin >> nomes[i];
        
        cout << "Digite as 3 notas de " << nomes[i] << ": ";
        cin >> notas1[i] >> notas2[i] >> notas3[i];
        
         medias[i] = calcularMedia(notas1[i], notas2[i], notas3[i]);
        
    }

    int maior_media = 0;
    for (int i = 1; i < qnt_alunos; i++) {
        
        if (medias[i] > medias[maior_media]) {
            maior_media = i;
        }
        
    }
    
    cout << "\n . . . \n";
    
    cout << "\nALUNO\tN1\tN2\tN3\tMEDIA\tSITUACAO\n";

    for (int i = 0; i < qnt_alunos; i++) {
        
        cout << nomes[i] <<"\t"<< notas1[i] <<"\t"<< notas2[i] <<"\t"<< notas3[i] <<"\t" << medias[i] <<"\t";

        if (medias[i] >= 7){
            cout << "Aprovado\n";
        }else {
            cout << "Reprovado\n";
        }
    }
    
    cout << "\n . . . \n";

    cout << "\nAluno com maior media: " << nomes[maior_media] << " (" << medias[maior_media] << ")\n";

    return 0;
}
