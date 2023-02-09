void exercicio02() {
    float peso = 0, semanasDaGestacao = 0;

    printf("[02] digite o peso e semana da gestacao\n");
    scanPesoESemanaDaGestacao(&Peso, &SemanaDaGestacao);
    verificarPesoGestacao(Peso, SemanaDagestacao);
}

void scanPesoESemanaDaGestacao(float *Peso, float *SemanaDaGestacao) {
    scanf("%f %f", Peso, SemanaDaGestacao);
}

void verificarPesoEGestacao(float Peso, int SemanaDaGestacao) {
    if (Peso < 100.0 || SemanaDaGestacao < 28) {
        printf("Parto nao pode ser feito,consulte um medico. \n");
        return;
    }

    int mesQtd = (int) SemanaDaGestacao / 4;

    if (Peso > 2500.0 && mesQtd > 7) printf("Parto Normal. \n");
    else if (Peso > 2500.0 && mesQtd <= 7) printf("Parto cesaria. \n");
    else if (Peso <= 2000.0 && Peso >= 1500.0 && mesQtd >= 9) printf("parto Normal. \n");
    else printf("parto cesaria. \n");
}
return 0;
    }
