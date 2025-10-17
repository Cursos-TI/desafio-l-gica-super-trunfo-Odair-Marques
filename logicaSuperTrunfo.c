#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
        
        //Declarar e iniciar as variáveis para colher os dados da primeira carta
        char Estado_1 = 'x';
        char CodigoDaCarta_1 [4] = "xxx";
        char NomeDaCidade_1 [50] = "xxx";
        unsigned int Populacao_1 = 0;
        float Area_1 = 0;
        float PIB_1 = 0.0;
        int NumeroDePontosTuristicos_1 = 0;
        float DensidadePopulacional_1 = 0.0;
        float PIB_Percapta_1 = 0.0;
        
        //Variaveis para comparar com a carta 2 (0 não pontua, 1 pontua)
        int Ponto_Populacao_1 = 0;  
        int Ponto_Area_1 = 0;
        int Ponto_PIB_1 = 0;
        int Ponto_DensidadePopulacional_1 = 0;
        int Ponto_PIB_Percapta_1 = 0;
        int Ponto_NumeroDePontosTuristicos_1 = 0;
        int Total_Pontos_1 = 0; //Armazenará o resultado da soma dos pontos (Super Poder).


         //Declarar e iniciar as variáveis para colher os dados da segunda carta.
        char Estado_2 = 'x';
        char CodigoDaCarta_2 [4] = "xxx";
        char NomeDaCidade_2 [50] = "xxx";
        unsigned int Populacao_2 = 0;
        float Area_2 = 0;
        float PIB_2 = 0.0;
        int NumeroDePontosTuristicos_2 = 0;
        float DensidadePopulacional_2 = 0.0;
        float PIB_Percapta_2 = 0.0;
        

        //Variaveis para comparar com a carta 1 (0 não pontua, 1 pontua).
        int Ponto_Populacao_2 = 0;  
        int Ponto_Area_2 = 0;
        int Ponto_PIB_2 = 0;
        int Ponto_DensidadePopulacional_2 = 0;
        int Ponto_PIB_Percapta_2 = 0;
        int Ponto_NumeroDePontosTuristicos_2 = 0;
        int Total_Pontos_2 = 0; //Armazenará o resultado da soma dos pontos (Super Poder).

        //Varivel com intuito de esperar, 
        char Esparerar = 'x';

    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)   

    //Criar cabeçalho/logo para o jogo
    printf("================================= \n");
    printf(" **** S U P E R  T R U N F O **** \n");
    printf("================================= \n");
        
    printf(" \n");//Pular uma linha
       
    // Cadastro das Cartas:
    printf("================================= \n");
    printf(">>>>> Cadastro - Carta - 01 <<<<<  \n");
    printf("================================= \n");

    //Receber a letra do estado.
    printf("Estado (uma letra de A a H).....: \n");
    scanf(" %c", &Estado_1);

    //Receber o codigo da carta.
    printf("Código da carta (Letra do Estado \n");
    printf ("e um número de 0 a 4, ex.: A01).: \n");
    scanf(" %s", CodigoDaCarta_1);

    //Receber o nome da caidade.
    printf("Nome da cidade..................: \n");
    scanf(" %s", NomeDaCidade_1);

    //Receber a população (Total de Habitantes);
    printf("População (Tot. de habitantes)..: \n");
    scanf(" %i", &Populacao_1);

    //Receber a área (KM²).
    printf("Área (km²)......................: \n");
    scanf(" %f", &Area_1);

    //Receber o PIB.
    printf("PIB ............................: \n");
    scanf(" %f", &PIB_1);

    //Receber o número de pontos turísticos.
    printf("Número de pontos turísticos.....: \n");
    scanf(" %i", &NumeroDePontosTuristicos_1);

    //Calcular a densidade populacional.
    DensidadePopulacional_1 = (float) Populacao_1 / Area_1;

    //Calcular o PIB percapta.
    PIB_Percapta_1 = PIB_1 / (float) Populacao_1;

    printf(" \n");//Pular uma linha

    //Cadastrar a Carta - 2.
    //Criar um cabeçalho
    printf("================================= \n");
    printf(">>>>> Cadastro - Carta - 02 <<<<<  \n");
    printf("================================= \n");

    //Receber a letra do estado.
    printf("Estado (uma letra de A a H).....: \n");
    scanf(" %c", &Estado_2);

    //Receber o codigo da carta.
    printf("Código da carta (Letra do Estado \n");
    printf ("e um número de 0 a 4, ex.: A01).: \n");
    scanf(" %s", CodigoDaCarta_2);

    //Receber o nome da caidade.
    printf("Nome da cidade..................: \n");
    scanf(" %s", NomeDaCidade_2);

    //Receber a população (Total de Habitantes);
    printf("População (Tot. de habitantes)..: \n");
    scanf(" %i", &Populacao_2);

    //Receber a área (KM²).
    printf("Área (km²)......................: \n");
    scanf(" %f", &Area_2);

    //Receber o PIB.
    printf("PIB ............................: \n");
    scanf(" %f", &PIB_2);

    //Receber o número de pontos turísticos.
    printf("Número de pontos turísticos.....: \n");
    scanf(" %i", &NumeroDePontosTuristicos_2);

    //Calcular a densidade populacional.
    DensidadePopulacional_2 = (float) Populacao_2 / Area_2;

    //Calcular o PIB percapta.
    PIB_Percapta_2 = PIB_2 / (float) Populacao_2;

    //Exibir as Fichas Cadastrais
    printf("_________________________________________\n");
    printf("Carta - 01 ////////////////////////////// \n");
    printf("========================================= \n");
    printf("Estado.....................: %c \n", Estado_1);
    printf("Código da carta............: %s \n", CodigoDaCarta_1);
    printf("Cidade ....................: %s \n", NomeDaCidade_1);
    printf("População (Número de Hab.).: %i \n", Populacao_1);
    printf("Área (km²).................: %.2f \n", Area_1);
    printf("PIB .......................: %.2f \n", PIB_1);
    printf("Número de pontos turísticos: %i \n", NumeroDePontosTuristicos_1);
    printf("Densidade pop. (hab./km²)..: %.2f \n", DensidadePopulacional_1);
    printf("PIB percapta (R$/Habitante): R$ %.2f \n", PIB_Percapta_1);
    printf("========================================== \n");

    printf(" \n");//Pular uma linha

    //Exibir a ficha cadastral da carta 2.
    printf("_________________________________________\n");
    printf("Carta - 02 ////////////////////////////// \n");
    printf("========================================= \n");
    printf("Estado.....................: %c \n", Estado_2);
    printf("Código da carta............: %s \n", CodigoDaCarta_2);
    printf("Cidade ....................: %s \n", NomeDaCidade_2);
    printf("População (Número de Hab.).: %i \n", Populacao_2);
    printf("Área (km²).................: %.2f \n", Area_2);
    printf("PIB .......................: %.2f \n", PIB_2);
    printf("Número de pontos turísticos: %i \n", NumeroDePontosTuristicos_2);
    printf("Densidade pop. (hab./km²)..: %.2f \n", DensidadePopulacional_2);
    printf("PIB percapta (R$/Habitante): R$ %.2f \n", PIB_Percapta_2);
    printf("========================================= \n");

    printf(" \n");//Pular uma linha

    //Uma parada para visualizar as cartas.
    printf("Insira qualquer carceterere e pressione ** \n");
    printf(" ENTER para continuar. ************ \n");
    scanf(" %c", &Esparerar);
    
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    //Verificar a pontuação.

    //Quesito população.
    if(Populacao_1 > Populacao_2){

        Ponto_Populacao_1 = 1;
        Ponto_Populacao_2 = 0;

    }else if(Populacao_1 < Populacao_2){

        Ponto_Populacao_1 = 0;
        Ponto_Populacao_2 =1;

    } else{

        Ponto_Populacao_1 = 0;
        Ponto_Populacao_2 = 0;
    }

    //Quesito Área.
    if(Area_1 > Area_2){
        
        Ponto_Area_1 = 1;
        Ponto_Area_2 = 0;

    }else if(Area_1 < Area_2) {
        
        Ponto_Area_1 = 0;
        Ponto_Area_2 = 1;

    }else{

        Ponto_Area_1 = 0;
        Ponto_Area_2 = 0;
    }

    //Quesito PIB.
    if(PIB_1 > PIB_2){

        Ponto_PIB_1 = 1;
        Ponto_PIB_2 = 0;

    }else if(PIB_1 < PIB_2) {

        Ponto_PIB_1 = 0;
        Ponto_PIB_2 = 1;

    }else{
        
        Ponto_PIB_1 = 0;
        Ponto_PIB_2 = 0;

    }
    

        //Quesito Pontos Turisticos.
    if(NumeroDePontosTuristicos_1 > NumeroDePontosTuristicos_2){

        Ponto_NumeroDePontosTuristicos_1 = 1;
        Ponto_NumeroDePontosTuristicos_2 = 0;
    }
    else if(NumeroDePontosTuristicos_1 < NumeroDePontosTuristicos_2) {

        Ponto_NumeroDePontosTuristicos_1 = 0;
        Ponto_NumeroDePontosTuristicos_2 = 1;

    } else{

        Ponto_NumeroDePontosTuristicos_1 = 0;
        Ponto_NumeroDePontosTuristicos_2 = 0;

    }


    //Quesito Densidade Populacional (Pontua quem tiver a menor densidade).
    if(DensidadePopulacional_1 < DensidadePopulacional_2){
        
        Ponto_DensidadePopulacional_1 = 1;
        Ponto_DensidadePopulacional_2 = 0;

    }else if (DensidadePopulacional_1 > DensidadePopulacional_2){

        Ponto_DensidadePopulacional_1 = 0;
        Ponto_DensidadePopulacional_2 = 1;

    }else{

        Ponto_DensidadePopulacional_1 = 0;
        Ponto_DensidadePopulacional_2 = 0;
    }


    //Quesito PIB_Percapta.
    if(PIB_Percapta_1 > PIB_Percapta_2){

        Ponto_PIB_Percapta_1 = 1;
        Ponto_PIB_Percapta_2 = 0;

    }else  if(PIB_Percapta_1 < PIB_Percapta_2){

        Ponto_PIB_Percapta_1 = 0;
        Ponto_PIB_Percapta_2 = 1;

    }else{

        Ponto_PIB_Percapta_1 = 0;
        Ponto_PIB_Percapta_2 = 0; 
    }

    //Somar os pontos da Carta - 1.
    Total_Pontos_1 = Ponto_Populacao_1 + Ponto_Area_1 + Ponto_PIB_1 + 
    Ponto_NumeroDePontosTuristicos_1 + Ponto_DensidadePopulacional_1 + Ponto_PIB_Percapta_1;
    //Somara os pontos da Carta - 2.
    Total_Pontos_2 = Ponto_Populacao_2 + Ponto_Area_2 + Ponto_PIB_2 + 
    Ponto_NumeroDePontosTuristicos_2 + Ponto_DensidadePopulacional_2 + Ponto_PIB_Percapta_2;


    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    //Criar um cabeçalho...
    printf("========================================== \n");
    printf(">>>>>>>>>> APURAÇÃO DOS PONTOS <<<<<<<<<<< \n");
    printf("========================================== \n");

    printf(" \n");//Pular uma linha.

    printf("No quesito População:");
    if(Ponto_Populacao_1 == 1){
        printf(" %s. \n", NomeDaCidade_1);}
    else if(Ponto_Populacao_2 == 1) {
        printf(" %s. \n", NomeDaCidade_2);
    }else{
        printf(" Empate. \n");
    }
    
    printf("------------------------------------------ \n");//Traçar uma linha divisória.


    printf("No quesito Área:");
    if(Ponto_Area_1 == 1){
        printf(" %s. \n", NomeDaCidade_1);}
    else if(Ponto_Area_2 == 1){
        printf(" %s. \n", NomeDaCidade_2);
    }else{
        printf(" Empate. \n");
    }
   printf("------------------------------------------ \n");//Traçar uma linha divisória.

    printf("No quesito PIB:");
    if(Ponto_PIB_1 == 1){
        printf(" %s. \n", NomeDaCidade_1);}
    else if(Ponto_PIB_2 == 1){
        printf(" %s. \n", NomeDaCidade_2);
    }else{
        printf(" Empate. \n");        
    }

   printf("------------------------------------------ \n");//Traçar uma linha divisória.

    printf("No quesito Pontos Turisticos:");
    if(Ponto_NumeroDePontosTuristicos_1 == 1){
        printf(" %s. \n", NomeDaCidade_1);}
    else if(Ponto_NumeroDePontosTuristicos_2 == 1){
        printf(" %s. \n", NomeDaCidade_2);
    }else{
        printf(" Empate. \n");   
    }
   
    printf("------------------------------------------ \n");//Traçar uma linha divisória.

    printf("No quesito Densidade Populacional:");
    if(Ponto_DensidadePopulacional_1 == 1){
        printf(" %s. \n", NomeDaCidade_1);}
    else if(Ponto_DensidadePopulacional_2 == 1){
        printf(" %s. \n", NomeDaCidade_2);
    }else{
       printf(" Empate. \n");   
    }


   printf("------------------------------------------ \n");//Traçar uma linha divisória.

    printf("No quesito PIB percapta:");
    if(Ponto_PIB_Percapta_1 == 1){
        printf(" %s. \n", NomeDaCidade_1);}
    else if(Ponto_PIB_Percapta_2 == 1){
        printf(" %s. \n", NomeDaCidade_2);
    }else{
        printf(" Empate. \n");
    }


   printf("\n"); //Pular uma linha.

   printf(">>>>>>>>>> C I D A D E  V E N C E D O R A <<<<<<<<<<\n");//Traçar uma linha divisória.

    //Exibir o Vencedor

 

    if(Total_Pontos_1 > Total_Pontos_2){
        printf("A cidade vencedora por %i pontos a %i é: %s.\n", Total_Pontos_1,Total_Pontos_2, NomeDaCidade_1);
    }   

    if (Total_Pontos_1 < Total_Pontos_2){
        printf("A cidade vencedora por %i pontos a %i é: %s.\n",Total_Pontos_2, Total_Pontos_1, NomeDaCidade_2);
    }

        if (Total_Pontos_1 == Total_Pontos_2){
        printf("Por %i pontos a %i, houve um empate. \n",Total_Pontos_1, Total_Pontos_2);
    }
    
printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||\n"); //criar uma barra de rodapé
printf(" \n");//Pular uma linha.

    return 0;
}
