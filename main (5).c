#include <stdio.h>

float Receita(float r, float s)
{
    float receita;
    receita= s + r;
    
    return receita;
    
}

float Despesa(float d, float s)
{
    float despesa;
   
   despesa= s - d;
    
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
    float saldo;
    float cal_receita;
    float cal_despesa;
    float cal_sf;
    
    cal_receita = Receita(r,s);
    cal_despesa = Despesa(d,s);
    
    cal_sf = Receita - Despesa;
    printf("Saldo final do projeto:%f",&cal_sf);
    
    
    return 0;
}


