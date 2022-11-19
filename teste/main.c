sg2#include

#include

int main()
{
    float v1;
    float v2;
    char op;
    float resultado;

    //  inserindo dados//
    printf("Entre com o primeiro valor: ");
    scanf("%f", &v1);

    printf("Entre com o operador desejado");
    scanf(" %c", &op);

    printf("Entre com o segundo valor: ");
    scanf("%f", &v2);

    //printf("%f %c %f", v1, op, v2);//

    // imprimindo resultados//

    switch(op){

        case '+':
            resultado = v1 + v2;

            break;
        case '-':
            resultado = v1 - v2;

            break;
        case '*':
            resultado = v1 * v2;

            break;
        case '/':
            resultado = v1 / v2;
            break;
        default:
            resultado = ("operador inválido")
        return 1;


    }

    int main()
{
    int contador = 0;
    while (contador <10) {
        printf("valor do contador; %d\n"contador);
        contador++;
    }
    return 0;

}
