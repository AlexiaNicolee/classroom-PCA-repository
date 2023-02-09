void exercicios07e08() {
    /* calculadora de notas */

    printf("Exercicios 07 e 08 - Calculadora de notas\n");

    float nota01, nota02, nota03;
    int estudanteCounter = 1;
    char opcao;

    float greaterAverage = 0, nota01Max = 0, nota02Max = 0, nota03Max = 0;

    do {
        opcao = 's';

        printf("\n[Studante %d] Forneca AP1 AP2 AP3 notas:\n", studanteCounter);
        scanf("%f %f %f", &grade01, &grade02, &grade03);

        printf("Voce quer fornecer notas de outro estudante?\n");

        while (opcao != 'n' && opcao != 'y') {
            printf("(s - sim | n - nao) : ");
            opcao = escolha();
        }

        float average = (nota01 + nota02 + nota03) / 3.0;
        if (greaterAverage < average)
            greaterAverage = average;

        if (nota01Max < nota01)
            nota01Max = nota01;
        if (nota02Max < nota02)
            nota02Max = nota02;
        if (nota03Max < nota03)
            nota03Max = nota03;

        studanteCounter++;
    } while(opcao == 's');

    return 0;
}
