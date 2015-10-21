TH1F *myhist[10];
char *histname = new char[10];
int nbins=10,nfiles=5;
float xmin=0,xmax=10;
for (int i=0;i<nfiles;i++) {
sprintf(histname,"histo%d",i);
 myhist[i] = new TH1F(histname,"",nbins,xmin,xmax);

 for (int j=0;j<20;j++) {
   myhist[i]->Fill(j/10);
 }

}

//Open
char name[20];
electron->Draw();
for(int j=0;j<5;j++){
   sprintf(name, "%s%d","electron",j);
   TH1F *h = (TH1F*)gDirectory->Get(name); // THIS IS THE MISSING LINE
   if ( h ) h->Draw("same"); // make sure the Get succeeded
 }
