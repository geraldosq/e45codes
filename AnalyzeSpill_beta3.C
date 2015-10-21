//Mandado a branch 

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

        TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../../../e45.MINERvA/tool_tb/tb2_data/8GeV_Pos_Pions/TB_00001514_0002_cosmc_v09_1504240120_camac.root");
        f = new TFile("../../../e45.MINERvA/tool_tb/tb2_data/8GeV_Pos_Pions/TB_00001514_0002_cosmc_v09_1504240120_camac.root","UPDATE");
        TTree *tree;
        f->GetObject("CAMACTree",tree);

        //Creando mi propio ROOT File
        TFile f_spill("../../../e45.MINERvA/tool_tb/tb2_data/8GeV_Pos_Pions/result_spill_run1514_sr2_num_spill_0-6.root","recreate");
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

             if (Spill_number == 1 )
               {
                     //Assign values*/

                     Time_spill_1= (Double_t) Time -1429838450 -31;
                     tree_spill->Fill();
              }
              else if (Spill_number == 2 )
              {
                    //Assign values*/

                    Time_spill_2= (Double_t) Time -1429838450 -31*2;
                    tree_spill->Fill();
              }

              else if (Spill_number == 3 )
              {
                    //Assign values*/

                    Time_spill_3= (Double_t) Time -1429838450-31*3;
                    tree_spill->Fill();
             }

             else if (Spill_number == 4 )
             {
                   //Assign values*/

                   Time_spill_4= (Double_t) Time -1429838450-31*4;
                   tree_spill->Fill();
            }

            else if (Spill_number == 5 )
            {
                  //Assign values*/

                  Time_spill_5= (Double_t) Time -1429838450-31*5;
                  tree_spill->Fill();
           }

           else if (Spill_number == 6 )
           {
                 //Assign values*/

                 Time_spill_6= (Double_t) Time -1429838450-31*6;
                 tree_spill->Fill();
          }

          }//end IF spill >0.5

   }//end of FOR()

   // ================================== FOR ends and Wrap-up begins  =========================//

     f_spill.Write();

          // ========================== Ploting the variables =================//

               TCanvas *c1 = new TCanvas("c1","test",10,10,1400,1100);
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


}


void AnalyzeSpill::PlotAll()
{
      //Connect Tree generate by the Loop and show histograms

      TFile *f_spill = TFile::Open("../../../e45.MINERvA/tool_tb/tb2_data/result_spill_run1514_sr2_num_spill_0-6.root");
      TTree *tree_spill=(TTree*)f_spill->Get("tree_spill");

        // ========================== Defining the histograms  =================//

          TH1F *hist_spill = new TH1F("hist_spill","Spill (R:1514 S:2) ",100,0.0,370);
          TH1F *hist_spill_1 = new TH1F("hist_spill_1","Spill #1 (R:1514 S:2)",1000,0.0,40);
          TH1F *hist_spill_2 = new TH1F("hist_spill_2","Spill #2 (R:1514 S:2)",100,0.0,40);
          TH1F *hist_spill_3 = new TH1F("hist_spill_3","Spill #3 (R:1514 S:2)",100,0.0,40);
          TH1F *hist_spill_4 = new TH1F("hist_spill_4","Spill #4 (R:1514 S:2)",100,0.0,40);
          TH1F *hist_spill_5 = new TH1F("hist_spill_5","Spill #5 (R:1514 S:2)",100,0.0,40);
          TH1F *hist_spill_6 = new TH1F("hist_spill_6","Spill #6 (R:1514 S:2)",100,0.0,40);

        // ========================== Ploting the variables =================//

          // Set the X Axis title, value, etc

          Int_t ci;   // for color index setting
          ci = TColor::GetColor("#000099");

          hist_spill->SetLineColor(kBlue);
          hist_spill->SetLineColor(ci);
          hist_spill->GetXaxis()->SetTitle("Time (seconds)");
          hist_spill_1->GetXaxis()->SetTitle("Time (seconds)");
          hist_spill_2->GetXaxis()->SetTitle("Time (seconds)");
          hist_spill_3->GetXaxis()->SetTitle("Time (seconds)");
          hist_spill_4->GetXaxis()->SetTitle("Time (seconds)");
          hist_spill_5->GetXaxis()->SetTitle("Time (seconds)");
          hist_spill_6->GetXaxis()->SetTitle("Time (seconds)");


          // Creating the Canvas

          TCanvas *c1 = new TCanvas("c1","Spill #",10,10,600,400);
          c1->Divide(1);
          c1->cd(1);
          Int_t ci;   // for color index setting
          ci = TColor::GetColor("#000099");
          hist_spill->SetLineColor(kBlue);
          hist_spill->SetLineColor(ci);
          hist_spill->GetXaxis()->SetTitle("Time (seconds)");
          tree_spill->Draw("Time_spill_2");



                    tree_spill->Project("hist_spill","Time_spill_2");
                    hist_spill->Draw();
}


void AnalyzeSpill::Data()
{
   //connect Tree generated by htw
   //read all histograms and plot the RMS of hpx versus the Mean of hprof
   TFile *f_spill = TFile::Open("../../../e45.MINERvA/tool_tb/tb2_data/8GeV_Pos_Pions/result_spill_run2_alpha.root");
   TTree *tree_spill = (TTree*)f_spill->Get("tree_spill");
   cout<<"The RMS is: "<<hist_spill->GetRMS()<<endl;
   cout<<"The Mean is: "<<hist_spill->GetMean()<<endl;
}
