#include<stdio.h>

int nst, ncl, nad, nch;     //Global Variables  (nst-station no, ncl-class no, nad-number of adults, nch- number of childs)
float ad, ch, tot;

void stations()
{
    printf("___________   _______________________________________^__                \n");
    printf(" ___   ___ |||  ___   ___   ___    ___ ___  |   __  ,----\\              \n");
    printf("|   | |   |||| |   | |   | |   |  |   |   | |  |  | |_____\\             \n");
    printf("|___| |___|||| |___| |___| |___|  | O | O | |  |  |        \\            \n");
    printf("           |||                    |___|___| |  |__|         )           \n");
    printf("___________|||______________________________|______________/            \n");
    printf("           |||                                        /--------         \n");
    printf("-----------'''---------------------------------------'                  \n\n\n");

    printf("                  ----- Train Ticket Price Calculator -----\n");
    printf("                          COLOMBO(FORT) to BADULLA         \n");
    printf("                            (InterCity Express)            \n");
    printf("                  -----------------------------------------  ");
    printf("\n\n");
    printf(" [1] Ragama                     [2] Gampaha                     [3] Polgahawela\n");
    printf(" [4] Rambukkana                 [5] Peradeniya                  [6] Kandy      \n");
    printf(" [7] Hatton                     [8] Nanu Oya                    [9] Bandarawela\n");
    printf("[10] Badulla\n\n");
}


void select()
{
    printf("Enter End Station No :- ");
    scanf("%d", &nst);
    printf("\n");
    printf(" [1] 1st Class                  [2] 2nd Class                   [3] 3rd Class\n\n");
    printf("Enter Class No       :- ");
    scanf("%d", &ncl);
    printf("\n");
    printf("Number of Adults     :- ");
    scanf("%d", &nad);
    printf("\nNumber of Childs     :- ");
    scanf("%d", &nch);
}


void ragama()
{


    float rag=10;       //Local Variables
    printf("COLOMBO to RAGAMA\n");
    switch(ncl)
    {
    case 1:
        printf("1st Class\n");
        printf("Adult                   \t%d*%.2f/=\n",nad,rag*3);
        printf("Child                   \t%d*%.2f/=\n",nch,rag/2*3);
        ad=rag*3*nad;
        ch=rag/2*3*nch;
        break;

    case 2:
        printf("2nd Class\n");
        printf("Adult                   \t%d*%.2f/=\n",nad,rag*2);
        printf("Child                   \t%d*%.2f/=\n",nch,rag/2*2);
        ad=rag*2*nad;
        ch=rag/2*2*nch;
        break;

    case 3:
        printf("3rd Class\n");
        printf("Adult                   \t%d*%.2f/=\n",nad,rag);
        printf("Child                   \t%d*%.2f/=\n",nch,rag/2);
        ad=rag*nad;
        ch=rag/2*nch;
        break;

    default:
        printf("Invalid Class No\n");
    }
}


void gampaha()
{
    float gam=20;
    printf("COLOMBO to GAMPAHA\n");
    switch(ncl)
    {
    case 1:
        printf("1st Class\n");
        printf("Adult                   \t%d*%.2f/=\n",nad,gam*3);
        printf("Child                   \t%d*%.2f/=\n",nch,gam/2*3);
        ad=gam*3*nad;
        ch=gam/2*3*nch;
        break;

    case 2:
        printf("2nd Class\n");
        printf("Adult                   \t%d*%.2f/=\n",nad,gam*2);
        printf("Child                   \t%d*%.2f/=\n",nch,gam/2*2);
        ad=gam*2*nad;
        ch=gam/2*2*nch;
        break;

    case 3:
        printf("3rd Class\n");
        printf("Adult                   \t%d*%.2f/=\n",nad,gam);
        printf("Child                   \t%d*%.2f/=\n",nch,gam/2);
        ad=gam*nad;
        ch=gam/2*nch;
        break;

    default:
        printf("Invalid Class No\n");
    }
}


void polgahawela()
{
    float pol=70;
    printf("COLOMBO to POLGAHAWELA\n");
    switch(ncl)
    {
    case 1:
        printf("1st Class\n");
        printf("Adult                   \t%d*%.2f/=\n",nad,pol*3);
        printf("Child                   \t%d*%.2f/=\n",nch,pol/2*3);
        ad=pol*3*nad;
        ch=pol/2*3*nch;
        break;

    case 2:
        printf("2nd Class\n");
        printf("Adult                   \t%d*%.2f/=\n",nad,pol*2);
        printf("Child                   \t%d*%.2f/=\n",nch,pol/2*2);
        ad=pol*2*nad;
        ch=pol/2*2*nch;
        break;

    case 3:
        printf("3rd Class\n");
        printf("Adult                   \t%d*%.2f/=\n",nad,pol);
        printf("Child                   \t%d*%.2f/=\n",nch,pol/2);
        ad=pol*nad;
        ch=pol/2*nch;
        break;

    default:
        printf("Invalid Class No\n");
    }
}


void rambukkana()
{
    float ram=80;
    printf("COLOMBO to RAMBUKKANA\n");
    switch(ncl)
    {
    case 1:
        printf("1st Class\n");
        printf("Adult                   \t%d*%.2f/=\n",nad,ram*3);
        printf("Child                   \t%d*%.2f/=\n",nch,ram/2*3);
        ad=ram*3*nad;
        ch=ram/2*3*nch;
        break;

    case 2:
        printf("2nd Class\n");
        printf("Adult                   \t%d*%.2f/=\n",nad,ram*2);
        printf("Child                   \t%d*%.2f/=\n",nch,ram/2*2);
        ad=ram*2*nad;
        ch=ram/2*2*nch;
        break;

    case 3:
        printf("3rd Class\n");
        printf("Adult                   \t%d*%.2f/=\n",nad,ram);
        printf("Child                   \t%d*%.2f/=\n",nch,ram/2);
        ad=ram*nad;
        ch=ram/2*nch;
        break;

    default:
        printf("Invalid Class No\n");
    }
}


void peradeniya()
{
   float pera = 100;
   printf("COLOMBO TO PERADENIYA\n");
   switch (ncl)
{
     case 1:
        printf("1st Class\n");
        printf("Adults                   \t%d*%.2f/=\n",nad,pera*3);
        printf("Childs                   \t%d*%.2f/=\n",nch,pera/2*3);
        ad = pera*3*nad;
        ch = pera/2*3*ncl;
        break;
     case 2:
        printf("2nd Class\n");
        printf("Adults                   \t%d*%.2f/=\n",nad,pera*2);
        printf("Childs                   \t%d*%.2f/=\n",nch,pera);
        ad = pera*2*nad;
        ch = pera*nch;
        break;

     case 3:
        printf("3rd Class\n");
        printf("Adults                   \t%d*%.2f/=\n",nad,pera);
        printf("Childs                   \t%d*%.2f/=\n",nch,pera/2);
        ad = pera*nad;
        ch = pera/2*nch;
        break;
     default:
        printf("Invalid Class No\n");
    }
}


void kandy()
{
   float kan = 110;
   printf("COLOMBO TO KANDY\n");
   switch (ncl)
{
     case 1:
        printf("1st Class\n");
        printf("Adults                   \t%d*%.2f/=\n",nad,kan*3);
        printf("Childs                   \t%d*%.2f/=\n",nch,kan/2*3);
        ad = kan*3*nad;
        ch = kan/2*3*ncl;
        break;
     case 2:
        printf("2nd Class\n");
        printf("Adults                   \t%d*%.2f/=\n",nad,kan*2);
        printf("Childs                   \t%d*%.2f/=\n",nch,kan);
        ad = kan*2*nad;
        ch = kan*nch;
        break;

     case 3:
        printf("3rd Class\n");
        printf("Adults                   \t%d*%.2f/=\n",nad,kan);
        printf("Childs                   \t%d*%.2f/=\n",nch,kan/2);
        ad = kan*nad;
        ch = kan/2*nch;
        break;
     default:
        printf("Invalid Class No\n");
    }
}


void hatton()
{
    float hat=140;
    printf("COLOMBO to HATTON\n");
    switch(ncl)
    {
        case 1:
        printf("1st Class\n");
        printf("Adults                   \t%d*%.2f/=\n",nad,hat*3);
        printf("Childs                   \t%d*%.2f/=\n",nch,hat/2*3);
        ad=hat*3*nad;
        ch=hat/2*3*ncl;
        break;

        case 2:
     printf("2nd Class\n");
        printf("Adults                   \t%d*%.2f/=\n",nad,hat*2);
        printf("Childs                   \t%d*%.2f/=\n",nch,hat);
        ad=hat*2*nad;
        ch=hat*ncl;
        break;

        case 3:
 printf("3nd Class\n");
        printf("Adults                   \t%d*%.2f/=\n",nad,hat);
        printf("Childs                   \t%d*%.2f/=\n",nch,hat/2);
        ad=hat*nad;
        ch=hat/2*ncl;
        break;

        default:
        printf("Invalid Class No\n");
        }
}


void nanuoya()
{
     float nanu=160;
    printf("COLOMBO to NANUOYA\n");
    switch(ncl)
    {
        case 1:
        printf("1st Class\n");
        printf("Adults                   \t%d*%.2f/=\n",nad,nanu*3);
        printf("Childs                   \t%d*%.2f/=\n",nch,nanu/2*3);
        ad=nanu*3*nad;
        ch=nanu/2*3*ncl;
        break;

        case 2:
     printf("2nd Class\n");
        printf("Adults                   \t%d*%.2f/=\n",nad,nanu*2);
        printf("Childs                   \t%d*%.2f/=\n",nch,nanu);
        ad=nanu*2*nad;
        ch=nanu*ncl;
        break;

        case 3:
 printf("3nd Class\n");
        printf("Adults                   \t%d*%.2f/=\n",nad,nanu);
        printf("Childs                   \t%d*%.2f/=\n",nch,nanu/2);
        ad=nanu*nad;
        ch=nanu/2*ncl;
        break;

        default:
        printf("Invalid Class No\n");
        }
}


void bandarawela()
{
    float band=180;
    printf("COLOMBO to BANDARAWELA\n");
    switch(ncl)
    {
        case 1:
            printf("1st Class\n");
            printf("Adults                   \t%d*%.2f/=\n",nad,band*3);
            printf("Childs                   \t%d*%.2f/=\n",nch,band/2*3);
            ad=band*3*nad;
            ch=band/2*3*nch;
            break;


        case 2:
            printf("2nd Class\n");
            printf("Adults                   \t%d*%.2f/=\n",nad,band*2);
            printf("Childs                   \t%d*%.2f/=\n",nch,band);
            ad=band*2*nad;
            ch=band*nch;
            break;


        case 3:
            printf("3rd Class\n");
            printf("Adults                   \t%d*%.2f/=\n",nad,band);
            printf("Childs                   \t%d*%.2f/=\n",nch,band/2);
            ad=band*nad;
            ch=band/2*nch;
            break;
        default:
            printf("Invalid Class No\n");
    }
}


void badulla()
{
    float badu=200;
    printf("COLOMBO to BADULLA\n");
    switch(ncl)
    {
        case 1:
            printf("1st Class\n");
            printf("Adults                   \t%d*%.2f/=\n",nad,badu*3);
            printf("Childs                   \t%d*%.2f/=\n",nch,badu/2*3);
            ad=badu*3*nad;
            ch=badu/2*3*nch;
            break;


        case 2:
            printf("2nd Class\n");
            printf("Adults                   \t%d*%.2f/=\n",nad,badu*2);
            printf("Childs                   \t%d*%.2f/=\n",nch,badu);
            ad=badu*2*nad;
            ch=badu*nch;
            break;


        case 3:
            printf("3rd Class\n");
            printf("Adults                   \t%d*%.2f/=\n",nad,badu);
            printf("Childs                   \t%d*%.2f/=\n",nch,badu/2);
            ad=badu*nad;
            ch=badu/2*nch;
            break;

        default:
            printf("Invalid Class No\n");
    }
}


void main()
{
    stations();
    select();

    printf("\n\n---------------------------------------------------------------------------------\n\n");

    if(nst<1 ^ nst>10)
    {
        printf("Invalid Station No\n");
    }
    else if(nst==1)
    {
        ragama();
    }
    else if(nst==2)
    {
        gampaha();
    }
    else if(nst==3)
    {
        polgahawela();
    }
    else if(nst==4)
    {
        rambukkana();
    }
    else if(nst==5)
    {
        peradeniya();
    }
    else if(nst==6)
    {
        kandy();
    }
    else if(nst==7)
    {
        hatton();
    }
    else if(nst==8)
    {
        nanuoya();
    }
    else if(nst==9)
    {
        bandarawela();
    }
    else if(nst==10)
    {
        badulla();
    }


    tot = ad + ch;
    printf("===========================================\n");
    printf("Total Ticket Price(Rs.) \t%.2f/=\n", tot);
    printf("===========================================");

    printf("\n\n---------------------------------------------------------------------------------\n\n");

    getch();

}
