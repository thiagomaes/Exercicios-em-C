#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mediaA=0.0, mediaC=0.0, mediaD=0.0, mediaE=0.0, mediaF=0.0, mediaG=0.0, mediaI=0.0, mediaM=0.0, mediaS=0.0, mediaZ=0.0, mediaGeral=0.0;
    int contMed=0;
    float medA=0.0, medC=0.0, medD=0.0, medE=0.0, medF=0.0, medG=0.0, medI=0.0, medM=0.0, medS=0.0, medZ=0.0, medGeral=0.0;
    int contMed2=0;

    printf("escreva a media de cada aluno: \n");
    printf("escreva a media de Alice em PFN: ");
    scanf(" %f", &mediaA);
    mediaGeral=mediaGeral + mediaA;
    printf("escreva a media de Alice em AGT: ");
    scanf(" %f", &medA);
    medGeral=medGeral + medA;
        if(mediaA>=7){
            contMed++;
        }
        if(medA>=7){
            contMed2++;
        }

    printf("escreva a media de Carlo em PFN: ");
    scanf(" %f", &mediaC);
    mediaGeral=mediaGeral + mediaC;
    printf("escreva a media de Carlo em AGT: ");
    scanf(" %f", &medC);
    medGeral=medGeral + medC;
        if(mediaC>=7){
            contMed++;
        }
        if(medC>=7){
            contMed2++;
        }

    printf("escreva a media de Daniel em PFN: ");
    scanf(" %f", &mediaD);
    mediaGeral=mediaGeral + mediaD;
    printf("escreva a media de Daniel em AGT: ");
    scanf(" %f", &medD);
    medGeral=medGeral + medD;
        if(mediaD>=7){
            contMed++;
        }
        if(medD>=7){
            contMed2++;
        }

    printf("escreva a media de Enzo em PFN: ");
    scanf(" %f", &mediaE);
    mediaGeral=mediaGeral + mediaE;
    printf("escreva a media de Enzo em AGT: ");
    scanf(" %f", &medE);
    medGeral=medGeral + medE;
        if(mediaE>=7){
            contMed++;
        }
        if(medE>=7){
            contMed2++;
        }

    printf("escreva a media de Fiona em PFN: ");
    scanf(" %f", &mediaF);
    mediaGeral=mediaGeral + mediaF;
    printf("escreva a media de Fiona em AGT: ");
    scanf(" %f", &medF);
    medGeral=medGeral + medF;
        if(mediaF>=7){
            contMed++;
        }
        if(medF>=7){
            contMed2++;
        }

    printf("escreva a media de Gian em PFN: ");
    scanf(" %f", &mediaG);
    mediaGeral=mediaGeral + mediaG;
    printf("escreva a media de Gian em AGT: ");
    scanf(" %f", &medG);
    medGeral=medGeral + medG;
        if(mediaG>=7){
            contMed++;
        }
        if(medG>=7){
            contMed2++;
        }

    printf("escreva a media de Igor em PFN: ");
    scanf(" %f", &mediaI);
    mediaGeral=mediaGeral + mediaI;
    printf("escreva a media de Igor em AGT: ");
    scanf(" %f", &medI);
    medGeral=medGeral + medI;
        if(mediaI>=7){
            contMed++;
        }
        if(medI>=7){
            contMed2++;
        }

    printf("escreva a media de Mecia em PFN: ");
    scanf(" %f", &mediaM);
    mediaGeral=mediaGeral + mediaM;
    printf("escreva a media de Mecia em AGT: ");
    scanf(" %f", &medM);
    medGeral=medGeral + medM;
        if(mediaM>=7){
            contMed++;
        }
        if(medM>=7){
            contMed2++;
        }

    printf("escreva a media de Sofia em PFN: ");
    scanf(" %f", &mediaS);
    mediaGeral=mediaGeral + mediaS;
    printf("escreva a media de Sofia em AGT: ");
    scanf(" %f", &medS);
    medGeral=medGeral + medS;
        if(mediaS>=7){
            contMed++;
        }
        if(medS>=7){
            contMed2++;
        }

    printf("escreva a media de Zula em PFN: ");
    scanf(" %f", &mediaZ);
    mediaGeral=mediaGeral + mediaZ;
    printf("escreva a media de Zula em AGT: ");
    scanf(" %f", &medZ);
    medGeral=medGeral + medZ;
        if(mediaZ>=7){
            contMed++;
        }
        if(medZ>=7){
            contMed2++;
        }
    
    mediaGeral=mediaGeral/10;
    printf("\n");
    printf("medias maiores que 7 em PFN: %i", contMed);
    printf("\nmedia geral de PFN: %f", mediaGeral);

    medGeral=medGeral/10;
    printf("\n");
    printf("medias maiores que 7 em AGT: %i", contMed2);
    printf("\nmedia geral de AGT: %f", medGeral);

    if (mediaGeral > medGeral){
        printf("\nA disciplina que teve a maior media geral foi PFN");
    }
    if (mediaGeral < medGeral){
        printf("\nA disciplina que teve a maior media geral foi AGT");
    }
    if (mediaGeral == medGeral){
        printf("\nTiveram a mesma media geral");
    }


    return 0;
}
//#include <stdio.h>
#include <stdlib.h>

int main(){

    float pfn[10];
    float agt[10];
    int pos1=0, pos2=0;
    float maior=0.0, maior1=0.0, agtIgual=0.0, pfnIgual=0.0;
    int i=0, x=0;

    printf("\nEscreva as medias de pfn: ");
    for(x=0; x<10; x++){
        scanf(" %f", &pfn[x]);
        if(maior<pfn[x]){
            maior=pfn[x];
            pos1 = x;
        }
    }
    printf("\nEscreva as medias de agt: ");
    for(i=0; i<10; i++){
        scanf(" %f", &agt[i]);
        if(maior1<agt[i]){
            maior1=agt[i];
            pos2 = i;
        }
    }
    agtIgual=agt[pos1];
    pfnIgual=pfn[pos2];



printf("\nmaior nota pfn: %f, agt: %f", maior, agtIgual);
printf("\nmaior nota agt: %f, pfn: %f", maior1, pfnIgual);
    return 0;
}
