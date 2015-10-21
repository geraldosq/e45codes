#define AnalyzeSpill_cxx
#include "AnalyzeSpill.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void AnalyzeSpill::Loop()
{
//   In a ROOT session, you can do:
//      Root > .L AnalyzeSpill.C
//      Root > AnalyzeSpill t
//      Root > t.GetEntry(12); // Fill t data members with entry number 12
//      Root > t.Show();       // Show values of entry 12
//      Root > t.Show(16);     // Read and show values of entry 16
//      Root > t.Loop();       // Loop on all entries
//      Root > t.PlotAll();       // Plot the 6 spills on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch

  // ========================== Open and create the roots files =================//

        TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/e45.MINERvA/tool_tb/tb2_data/8GeV_Pos_Pions/TB_00001514_0002_cosmc_v09_1504240120_camac.root");
        f = new TFile("/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/e45.MINERvA/tool_tb/tb2_data/8GeV_Pos_Pions/TB_00001514_0002_cosmc_v09_1504240120_camac.root","UPDATE");
        TTree *tree;
        f->GetObject("CAMACTree",tree);

        //Creando mi propio ROOT File
        TFile f_spill("/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/e45.MINERvA/tool_tb/tb2_data/8GeV_Pos_Pions/result_spill_run1514_sr2_num_spill_0-6.root","recreate");
        TTree *tree_spill     = new TTree("tree_spill","Tree Spill");

    // ========================== Defining the new the variables for the branches =================//

      Double_t Time_spill;
      Double_t Time_spill_1;
      Double_t Time_spill_2;
      Double_t Time_spill_3;
      Double_t Time_spill_4;
      Double_t Time_spill_5;
      Double_t Time_spill_6;


    // ========================== Defining the new branches  =================//

      TBranch *b_Time_spill = tree_spill->Branch("Time_spill", &Time_spill, "Time_spill/D" );
      TBranch *b_Time_spill_1 = tree_spill->Branch("Time_spill_1", &Time_spill_1, "Time_spill_1/D" );
      TBranch *b_Time_spill_2 = tree_spill->Branch("Time_spill_2", &Time_spill_2, "Time_spill_2/D" );
      TBranch *b_Time_spill_3 = tree_spill->Branch("Time_spill_3", &Time_spill_3, "Time_spill_3/D" );
      TBranch *b_Time_spill_4 = tree_spill->Branch("Time_spill_4", &Time_spill_4, "Time_spill_4/D" );
      TBranch *b_Time_spill_5 = tree_spill->Branch("Time_spill_5", &Time_spill_5, "Time_spill_5/D" );
      TBranch *b_Time_spill_6 = tree_spill->Branch("Time_spill_6", &Time_spill_6, "Time_spill_6/D" );

  // ================================== LOOP begins =============================//

  if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntries();

   Long64_t nbytes = 0, nb = 0;
   Float_t interval = 60.0;
   Float_t t_o = 31;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      // The Loop goes here

      Time_spill = -1; Time_spill_1 = -1; Time_spill_2 = -1; Time_spill_3 = -1; Time_spill_4 = -1;
      Time_spill_5 = -1; Time_spill_6 = -1;

         if (In_spill > 0.5  )
          {

            Time_spill= (Double_t) Time -1429838450;

          /*  if(j<100){
              cout<<Time_spill<<" \n"<< endl;


            }*/

             else if (Spill_number == 1 )
               {
                     //Assign values*/

                     Time_spill_1= (Double_t) Time -1429838450 -t_o;
                     tree_spill->Fill();
              }
              else if (Spill_number == 2 )
              {
                    //Assign values*/

                    Time_spill_2= (Double_t) Time -1429838450 -t_o-interval*1;
                    tree_spill->Fill();
              }

              else if (Spill_number == 3 )
              {
                    //Assign values*/

                    Time_spill_3= (Double_t) Time -1429838450-t_o-interval*2;
                    tree_spill->Fill();
             }

             else if (Spill_number == 4 )
             {
                   //Assign values*/

                   Time_spill_4= (Double_t) Time -1429838450-t_o-interval*3;
                   tree_spill->Fill();
            }

            else if (Spill_number == 5 )
            {
                  //Assign values*/

                  Time_spill_5= (Double_t) Time -1429838450-t_o-interval*4;
                  tree_spill->Fill();
           }

           else if (Spill_number == 6 )
           {
                 //Assign values*/

                 Time_spill_6= (Double_t) Time -1429838450-t_o-interval*5;
                 tree_spill->Fill();
          }

          }//end IF spill >0.5

   }//end of FOR()

   // ================================== FOR ends and Wrap-up begins  =========================//

     f_spill.Write();

          // ========================== Ploting the variables =================//

              /* TCanvas *c1 = new TCanvas("c1","test",10,10,1400,1100);
                c1->Divide(3,3);
                c1->cd(1);
                 tree_spill->Draw("Time_spill_1","Time_spill_1 != -1");
                 c1->cd(2);
                 tree_spill->Draw("Time_spill_2","Time_spill_2 != -1");
                 c1->cd(3);
                 tree_spill->Draw("Time_spill_3","Time_spill_3 != -1");
                 c1->cd(4);
                 tree_spill->Draw("Time_spill_4","Time_spill_4 != -1");
                 c1->cd(5);
                 tree_spill->Draw("Time_spill_5","Time_spill_5 != -1");
                 c1->cd(6);
                 tree_spill->Draw("Time_spill_6","Time_spill_6 != -1");
                 c1->cd(7);
                 tree_spill->Draw("Time_spill");

                c1->SaveAs("run1514_sr2_all_spills.gif");*/

}


void AnalyzeSpill::PlotAll(int nbins=100)
{
      //Connect Tree generate by the Loop and show histograms

      TFile *f_spill = TFile::Open("/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/e45.MINERvA/tool_tb/tb2_data/8GeV_Pos_Pions/result_spill_run1514_sr2_num_spill_0-6.root");
      TTree *tree_spill=(TTree*)f_spill->Get("tree_spill");
      f_spill->cd();

        // ========================== Defining the histograms  =================//

        TCanvas *canvas_spill = new TCanvas("canvas_spill","Run 1514 SR 2",10,10,1000,800);
        c1->Divide(2,3);

        // ========================== Some features variables =================//

          // Set the X Axis title, value, etc
          Int_t ci;   // for color index setting
          ci = TColor::GetColor("#000099");


        TH1F *hist_spill = new TH1F("hist_spill","Spill (R:1514 S:2) ",100,0.0,370);
        TH1F *hist_spill_[10];

        char *histname = new char[15];
        char *histname_label = new char[20];
        char *histname_projecting = new char[12];
        char *histname_condition = new char[16];
        char *file_name = new char[45]
        sprintf(file_name,"run1514_sr2_all_spills_loop_bin_%d.gif",nbins);

        //number of the bins
        int nfiles=6;
        //Limits of the histogram
        float xmin=0.0,xmax=8.0;

        for (int i=0;i<nfiles;i++) {

          //definition
          sprintf(histname,"hist_spill_%d",i+1);
          sprintf(histname_label,"R:1514 S:2 Spill #%d",i+1);
          sprintf(histname_projecting,"Time_spill_%d",i+1);
          sprintf(histname_condition,"Time_spill_%d!=-1",i+1);

          // Here the Loop for Defining

          hist_spill_[i+1] = new TH1F(histname,histname_label,nbins,xmin,xmax);

          //Axis name
          hist_spill_[i+1]->GetXaxis()->SetTitle("Time (seconds)");

          //projecting the variables
          tree_spill->Project(histname,histname_projecting, histname_condition);

          //Plot
          canvas_spill->cd(i+1);
          hist_spill_[i+1]->Draw();

        }

        c1->SaveAs(file_name);



          //Printing the min and max values of the histograms

        /*  cout << "\n Min value of Spill 1" <<  hist_spill_1->GetXaxis()->GetXmin() << endl;
          cout << "\n Max value of Spill 1 \n" <<  hist_spill_1->GetXaxis()->GetXmax() << endl;

          TAxis *xaxis = hist_spill_1->GetXaxis();
          Double_t binCenter_0 = xaxis->GetBinCenter(0);
          Double_t binCenter_1 = xaxis->GetBinCenter(1);

          cout << "\n Get Bin Center bin underflow  " <<  binCenter_0 << endl;
          cout << "\n Get Bin Center bin first bin with low edge  " <<  binCenter_2 << endl;*/

}



void AnalyzeSpill::StackAll(int nbins)
{
  //Connect Tree generate by the Loop and show histograms

  TFile *f_spill = TFile::Open("/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/e45.MINERvA/tool_tb/tb2_data/8GeV_Pos_Pions/result_spill_run1514_sr2_num_spill_0-6.root");
  TTree *tree_spill=(TTree*)f_spill->Get("tree_spill");
  f_spill->cd();

    // ========================== Defining the histograms  =================//
    //%s - Take the next argument and print it as a string
    //%d - Take the next argument and print it as an int


      TH1F *hist_spill_[1];

      char *histname = hist_spill;
      //number of the bins
      int nfiles=6;
      //Limits of the histogram
      float xmin=0.0,xmax=8.0;

      for (int i=0;i<nfiles;i++) {
        sprintf(histname,"_%d",i);
        hist_spill_[i] = new TH1F(histname,"owowow",nbins,xmin,xmax);
      }
/*

      TH1F *hist_spill_1 = new TH1F("hist_spill_1","Spill #1 (R:1514 S:2)",100,0.0,8);

      TH1F *hist_spill_2 = new TH1F("hist_spill_2","Spill #2 (R:1514 S:2)",100,0.0,8);
      TH1F *hist_spill_3 = new TH1F("hist_spill_3","Spill #3 (R:1514 S:2)",100,0.0,8);
      TH1F *hist_spill_4 = new TH1F("hist_spill_4","Spill #4 (R:1514 S:2)",100,0.0,8);
      TH1F *hist_spill_5 = new TH1F("hist_spill_5","Spill #5 (R:1514 S:2)",100,0.0,8);
      TH1F *hist_spill_6 = new TH1F("hist_spill_6","Spill #6 (R:1514 S:2)",100,0.0,8);*/

      TH1F *hist_stacked = new TH1F("hist","Spill Time of R:1514 S:2 ",100, 0,8 );

   // ========================== Defining the THStack histogram  =================//

   THStack *hs_spill_stack = new THStack("hs_spill_stack","");

   // ========================== Ploting the variables =================//

     // Set the X Axis title, value, etc

    // hs_spill_stack->GetXaxis()->SetTitle("Time (seconds)");

    // Legeng

    Double_t xl1=.05, yl1=0.75, xl2=xl1+.3, yl2=yl1+.125;
    TLegend *leg = new TLegend(xl1,yl1,xl2,yl2);
    //leg->AddEntry(h1,"No Ecal","p");   // h1 and h2 are histogram pointers
  //  leg->AddEntry(h2,"Ecal included","p");
  //  leg->Draw();

   // ========= Defining the histograms and attaching them into THStack  =========//

   //1

   tree_spill->Project("hist_spill_1","Time_spill_1", "Time_spill_1!= -1");
   hist_spill_1->SetFillColor(kRed);
   leg->AddEntry(hs_spill_stack,"Texto 2","Var");

   hs_spill_stack->Add(hist_spill_1);

   //2

   tree_spill->Project("hist_spill_2","Time_spill_2", "Time_spill_2!= -1");
   hist_spill_2->SetFillColor(kBlue);
   hs_spill_stack->Add(hist_spill_2);

   //3

   tree_spill->Project("hist_spill_3","Time_spill_3", "Time_spill_3!= -1");
   hist_spill_3->SetFillColor(kYellow);
   hs_spill_stack->Add(hist_spill_3);

   //4

   tree_spill->Project("hist_spill_4","Time_spill_4", "Time_spill_4!= -1");
   hist_spill_4->SetFillColor(kGreen);
   hs_spill_stack->Add(hist_spill_4);

   //5

   tree_spill->Project("hist_spill_5","Time_spill_5", "Time_spill_5!= -1");
   hist_spill_5->SetFillColor(kOrange);
   hs_spill_stack->Add(hist_spill_5);

   //6

   tree_spill->Project("hist_spill_6","Time_spill_6", "Time_spill_6!= -1");
   hist_spill_6->SetFillColor(kBlack);
   hs_spill_stack->Add(hist_spill_6);

   // ========= Defining the histograms and attaching them into THStack  =========//



   TCanvas *cs_stacked = new TCanvas("cs_stacked","cs_stacked",10,10,600,400);
   TText T; T.SetTextFont(42); T.SetTextAlign(21);
   cs_stacked->Divide(1);
   cs_stacked->cd(1);

   hs_spill_stack->Draw();
   T.DrawTextNDC(.5,.95,"All spills stacked - R1514 S2");
   cs_stacked->SaveAs("run1514_sr2_all_spills_loop_bin_100_stacked.gif");

   return cs_stacked;

}


void AnalyzeSpill::Data()
{
   //connect Tree generated by htw
   //read all histograms and plot the RMS of hpx versus the Mean of hprof
   TFile *f_spill = TFile::Open("/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/e45.MINERvA/tool_tb/tb2_data/8GeV_Pos_Pions/result_spill_run2_alpha.root");
   TTree *tree_spill = (TTree*)f_spill->Get("tree_spill");
   cout<<"The RMS is: "<<hist_spill->GetRMS()<<endl;
   cout<<"The Mean is: "<<hist_spill->GetMean()<<endl;
}
