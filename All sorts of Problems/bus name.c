#include<stdio.h>
#include<string.h>
#include<conio.h>


    int a,b,c,d,e,f,g,h,i1,j1,k,l,m,n;
    char arr[5][100] = { "13 No","6 No","6 No 2","7 No","8 No"};
    char A[17][100]={"Achim Paribahan","Agradut-Boishakhi","Airport Bangabandhu Avenue","Akik Paribahan","Al Madina Plus One","Al Makka Transport","Alif Enterprise","Alif Enterprise 2","Alif Enterprise 3","Alike","Anabil","Ark Transport","Ashirbad Paribahan","Ashulia Classic","Asmani Paribahan","Ayat","Azmery Glory"};
    char B[20][100] = {"BRTC","BRTC 1","BRTC 2","BRTC 3","BRTC 4","BRTC 5","BRTC 6","Bahon","Balaka Paribahan","Basumati","Basumati Transport","Best Transport","Bhuiyan Paribahan","Bihanga","Bihanga Paribahan","Bihanga Paribahan 2","Bikalpa Auto Service","Bikalpa City Super Service","Bikash Paribahan","Bondhu Paribahan","Brothers"};
    char C[4][100] = {"Cantonment Bus Service","Cantonment Mini Service","Champion","City Link"};
    char D[9][100] = {"D link","D One Transport","Desh Bangla","Dhaka Chaka","Dhaka Chaka 2","Dhaka Paribahan","Dipon","Dishari Paribahan"};
    char EFG[7][100] = {"ETC Transport","FTCL","First Ten","Gazipur Paribahan","Grameen","Grameen Shubheccha","Green Dhaka"};
    char HIJ[6][100] = {"Haji Transport","Himachol","Itihash Paribahan","J M Super Paribahan","Jabale Nur Paribahan","Janjabil"};
    char KL[5][100] = {"Kanak","Khajababa Paribahan","Kironmala Paribahan","Labbaik","Lams Paribahan"};
    char M[14][100] = {"M M Lovely","MTCL 2","Malancha Transport","Manjil Express","Meghla Transport","Meshkat Transport","Midline","Mirpur Link","Mirpur Metro Service","Mirpur United Service","Modhumoti Paribahan","Mohona","Moitri","Moumita Transport"};
    char NOP[12][100] = {"Nilachol","Nobokoli Paribahan","Nur E Makka Paribahan","Omama International","One Transport","Pallabi Super Service","Paristhan Paribahan","Power Paribahan","Prattay","Pravati Banasree Paribahan","Prochesta","Projapoti Paribahan"};
    char R[8][100] = {"Rabrab Paribahan","Raida","Raja City","Rajanigandha","Rajdhani Super Service","Ramzan","Runway Express","Rupa Paribahan"};
    char S[18][100] = {"Safety Druti","Salsabil","Savar Paribahan","Shadhin","Shadhin Express","Shahria Enterprise","Shahriar Paribahan","Shatabdi Transport","Shikhar Paribahan","Shikor Paribahan","Shubheccha","Shuvojatra","Skyline","Smart Winner","Somota Paribahan","Somoy","Somoy Niyantran","Supravat Special Service"};
    char T[12][100] = {"Talukdar","Tanjil Paribahan","Tetuliya Paribahan","The New Visison","Thikana","Thikana Express","Trans Silva","Trust Transport Services","Trust Transport Services (AC)","Trust Transport Services 2","Trust Transport Services 3","Turag"};
    char VWZ[5][100] = {"VIP 27","Victor Classic","Victor Paribahan","Welcome","Zarif"};

void names(){
     printf("#\n");
   for(a=0;a<5;a++){
         printf("  %s\n",arr[a]);

   }

    printf("A\n");
   for(b=0;b<17;b++){
         printf("  %s\n",A[b]);
   }

    printf("B\n");
   for(c=0;c<20;c++){
         printf("  %s\n",B[c]);
   }

    printf("C\n");
   for(d=0;d<4;d++){
         printf("  %s\n",C[d]);
   }

    printf("D\n");
   for(e=0;e<9;e++){
         printf("  %s\n",D[e]);
   }

    printf("E-F-G\n");
   for(f=0;f<7;f++){
         printf("  %s\n",EFG[f]);
   }

    printf("H-I-J\n");
   for(g=0;g<6;g++){
         printf("  %s\n",HIJ[g]);
   }

    printf("K-L\n");
   for(h=0;h<5;h++){
         printf("  %s\n",KL[h]);
   }

    printf("M\n");
   for(i1=0;i1<14;i1++){
         printf("  %s\n",M[i1]);
   }

    printf("N-O-P\n");
   for(j1=0;j1<12;j1++){
         printf("  %s\n",NOP[j1]);
   }

    printf("R\n");
   for(k=0;k<8;k++){
         printf("  %s\n",R[k]);
   }

    printf("S\n");
   for(l=0;l<18;l++){
         printf("  %s\n",S[l]);
   }

    printf("T\n");
   for(m=0;m<12;m++){
         printf("  %s\n",T[m]);
   }

    printf("V-W-Z\n");
   for(n=0;n<5;n++){
         printf("  %s\n",VWZ[n]);
   }

}

int search(){


   char W[100]; int Z = 0;
   gets(W);

   for(a=0;a<5;a++){
        Z++;
        if(strcmp(arr[a],W)== 0){
             printf("  %s\n",arr[a]);

             break;

         }

   }

   for(b=0;b<17;b++){
        Z++;
        if(strcmp(A[b],W)== 0){
             printf("  %s\n",A[b]);

             break;
         }

   }

   for(c=0;c<20;c++){
        Z++;
        if(strcmp(B[c],W)== 0){
             printf("  %s\n",B[c]);

             break;
         }

   }

   for(d=0;d<4;d++){
        Z++;
        if(strcmp(C[d],W)== 0){
             printf("  %s\n",C[d]);

             break;
         }

   }

   for(e=0;e<9;e++){
        Z++;
        if(strcmp(D[e],W)== 0){
             printf("  %s\n",D[e]);

             break;
         }

   }

   for(f=0;f<7;f++){
        Z++;
        if(strcmp(EFG[f],W)== 0){
             printf("  %s\n",EFG[f]);

             break;
         }

   }

   for(g=0;g<6;g++){
        Z++;
        if(strcmp(HIJ[g],W)== 0){
             printf("  %s\n",HIJ[g]);

             break;
         }

   }

   for(h=0;h<5;h++){
        Z++;
        if(strcmp(KL[h],W)== 0){
             printf("  %s\n",KL[h]);

             break;
         }

   }

   for(i1=0;i1<14;i1++){
        Z++;
        if(strcmp(M[i1],W)== 0){
             printf("  %s\n",M[i1]);

             break;
         }

   }

   for(j1=0;j1<12;j1++){
        Z++;
        if(strcmp(NOP[j1],W)== 0){
             printf("  %s\n",NOP[j1]);

             break;
         }

   }

   for(k=0;k<8;k++){
        Z++;
        if(strcmp(R[k],W)== 0){
             printf("  %s\n",R[k]);

             break;
         }

   }

   for(l=0;l<18;l++){
        Z++;
        if(strcmp(S[l],W)== 0){
             printf("  %s\n",S[l]);

             break;
         }

   }

   for(m=0;m<12;m++){
        Z++;
        if(strcmp(T[m],W)== 0){
             printf("  %s\n",T[m]);

             break;
         }

   }

   for(n=0;n<5;n++){
        Z++;
        if(strcmp(VWZ[n],W)== 0){
             printf("  %s\n",VWZ[n]);

             break;
         }

   }

   return Z;

}


int main()
{
   names();
   printf("\n");

  int fu = search();
   printf ("%d\n",fu);
   getch();
   return 0;
}
