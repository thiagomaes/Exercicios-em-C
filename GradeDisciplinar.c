#include <stdio.h>

int main()
{

    char sigla, fase, valida, Vagt, Vtgs, Vgan, Vicd, Vali, Vcdi, Vecc;
    int cred = 0, disc = 0;
    fase = '0';
    valida = 'N';
    Vagt = 'N';
    Vtgs = 'N';
    Vgan = 'N';
    Vicd = 'N';
    Vali = 'N';
    Vcdi = 'N';
    Vecc = 'N';

    const int creditosALI = 4;
    const int creditosCDI = 6;
    const int creditosECC = 4;

    printf("\nDigite seu curso:\n");
    scanf(" %c", &sigla);

    if (sigla == 'C' || sigla == 'c')
    {

        printf("\nDigite a fase:\n");
        scanf(" %c", &fase);

        switch (fase)
        {

        case '1':
            printf("\n1A FASE      cred.t    cred.p    pre");
            printf("\nAGT0001       2         2          -");
            printf("\nGAN0001       4         -          -");
            printf("\nICD0001       4         -          -");
            printf("\nLMA0001       2         2          -");
            printf("\nPFN0001       -         -          -");
            printf("\nTGS0001       2         2          -");

            cred = 20;
            disc = 6;

            printf("\nVai tentar validar? S/N\n");
            scanf(" %c", &valida);

            if (valida == 'S')
            {
                printf("\nVai validar AGT? S/N\n");
                scanf(" %c", &Vagt);

                printf("\nVai validar TGS? S/N\n");
                scanf(" %c", &Vtgs);
            }
            break;

        case '2':
    printf("\n2A FASE      cred.t    cred.p    pre");
    printf("\nALI0001       4         -          -");
    printf("\nCDI0001       6         -          -");
    printf("\nECC0001       2         2          -");

    printf("\nVai tentar validar? S/N\n");
    scanf(" %c", &valida);

    if (valida == 'S')
    {
                printf("\nVai validar ALI? S/N\n");
                scanf(" %c", &Vali);

                if (Vali == 'S')
                {
                    printf("\nJa fez GAN? S/N\n");
                    scanf(" %c", &Vgan);

                    if (Vgan == 'N')
                    {
                        Vali = 'N';
                    }
        }
        printf("\nVai fazer CDI? S/N\n");
        scanf(" %c", &Vcdi);

        if (Vcdi == 'N')
        {
            printf("\nVai validar CDI? S/N\n");
            scanf(" %c", &Vcdi);
        }
        printf("\nVai validar ECC? S/N\n");
        scanf(" %c", &Vecc);

        if (Vali == 'N' && Vcdi == 'N' && Vecc == 'N')
        {
            printf("\nSua matricula vai constar como trancada. E preciso escolher ao menos uma disciplina.\n");
            return 0;
        }
    }
    if (Vali == 'S')
    {
        cred += creditosALI;
        disc++;
    }
    if (Vcdi == 'S')
    {
        cred += creditosCDI;
        disc++;
    }
    if (Vecc == 'S')
    {
        cred += creditosECC;
        disc++;
    }

    break;
        default:
    printf("Fase invalida!");
    return 0;
        }
    }
    // Verifica se há disciplinas validadas e exibe a mensagem correspondente
    if (Vali == 'S' || Vcdi == 'S' || Vecc == 'S' || Vagt == 'S' || Vtgs == 'S')
    {
        printf("\nPedidos de validacao: ");
        if (Vali == 'S')
        {
            printf("ALI ");
        }
        if (Vcdi == 'S')
        {
            printf("CDI ");
        }
        if (Vecc == 'S')
        {
            printf("ECC ");
        }
        if (Vagt == 'S')
        {
            printf("AGT ");
        }
        if (Vtgs == 'S')
        {
            printf("TGS ");
        }
        printf("\n");
    }
printf("\nTotal de disciplinas: %d\n", disc);
printf("\nTotal de creditos: %d\n", cred);
return 0;
}
