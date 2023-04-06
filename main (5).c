#include <stdio.h>

float Receita(float r, float saldo)
{
    float receita;
    receita= saldo + r;
    
    return receita;
    
}

float Despesa(float d, float saldo)
{
    float despesa;
   
   despesa= saldo - d;
    
    return despesa;
    
}

int main()
{
    struct{
        
        int n_projeto;
        float saldo;
        float receita;
        float despesa;
        
    }proj;
    
    printf("Digite o numero do projeto:");
    scanf("%i",&proj.n_projeto);
    printf("Digite o saldo:");
    scanf("%f",&proj.saldo);
    printf("Digite a Receita do projeto:");
    scanf("%f",&proj.receita);
    printf("Digite a Despesa do projeto:");
    scanf("%f",&proj.despesa);
    
    float r;
    float d;
    float cal_receita;
    float cal_despesa;
    float cal_sf;
    
    proj.saldo = Receita(proj.receita,proj.saldo);
    proj.saldo = Despesa(proj.despesa,proj.saldo);
    

    
    printf("Saldo final do projeto:%f",proj.saldo);
    
    return 0;
}

