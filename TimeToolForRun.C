#define TimeToolForRun_cxx
#include "TimeToolForRun.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "Riostream.h"
	#include <fstream>


void TimeToolForRun::Loop()
{
//   In a ROOT session, you can do:
//      Root > .L StackSpillsOneSubRun.C
//      Root > StackSpillsOneSubRun t
//      Root > t.GetEntry(12); // Fill t data members with entry number 12
//      Root > t.Show();       // Show values of entry 12
//      Root > t.Show(16);     // Read and show values of entry 16
//      Root > t.Loop();       // Loop on all entries
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


        const char* name_file[100] = {
  //"/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.17_tools/StackSpillsAndIntervalTimesForRun/TB_00001514_0002_cosmc_v09_1504240120_camac.root"

    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0001_cosmc_v09_1504240117_camac.root" /*,
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0002_cosmc_v09_1504240120_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0003_cosmc_v09_1504240126_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0004_cosmc_v09_1504240133_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0005_cosmc_v09_1504240139_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0006_cosmc_v09_1504240146_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0007_cosmc_v09_1504240153_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0008_cosmc_v09_1504240201_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0009_cosmc_v09_1504240208_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0010_cosmc_v09_1504240215_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0011_cosmc_v09_1504240222_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0012_cosmc_v09_1504240237_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0013_cosmc_v09_1504240253_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0014_cosmc_v09_1504240308_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0015_cosmc_v09_1504240317_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0016_cosmc_v09_1504240324_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0017_cosmc_v09_1504240333_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0018_cosmc_v09_1504240339_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0019_cosmc_v09_1504240349_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0020_cosmc_v09_1504240356_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0021_cosmc_v09_1504240403_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0022_cosmc_v09_1504240409_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0023_cosmc_v09_1504240415_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0024_cosmc_v09_1504240422_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0025_cosmc_v09_1504240428_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0026_cosmc_v09_1504240431_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0027_cosmc_v09_1504240438_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0028_cosmc_v09_1504240444_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0029_cosmc_v09_1504240450_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0030_cosmc_v09_1504240456_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0031_cosmc_v09_1504240502_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0032_cosmc_v09_1504240508_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0033_cosmc_v09_1504240515_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0034_cosmc_v09_1504240521_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0035_cosmc_v09_1504240527_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0036_cosmc_v09_1504240533_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0037_cosmc_v09_1504240541_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0038_cosmc_v09_1504240547_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0039_cosmc_v09_1504240554_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0040_cosmc_v09_1504240601_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0041_cosmc_v09_1504240607_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0042_cosmc_v09_1504240613_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0043_cosmc_v09_1504240620_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0044_cosmc_v09_1504240626_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0045_cosmc_v09_1504240632_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0046_cosmc_v09_1504240639_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0047_cosmc_v09_1504240647_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0048_cosmc_v09_1504240656_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0049_cosmc_v09_1504240702_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0050_cosmc_v09_1504240711_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0051_cosmc_v09_1504240719_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0052_cosmc_v09_1504240728_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0053_cosmc_v09_1504240734_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0054_cosmc_v09_1504240741_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0055_cosmc_v09_1504240753_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0056_cosmc_v09_1504240803_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0057_cosmc_v09_1504240810_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0058_cosmc_v09_1504240817_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0059_cosmc_v09_1504240823_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0060_cosmc_v09_1504240830_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0061_cosmc_v09_1504240837_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0062_cosmc_v09_1504240843_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0063_cosmc_v09_1504240849_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0064_cosmc_v09_1504240855_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0065_cosmc_v09_1504240901_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0066_cosmc_v09_1504240907_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0067_cosmc_v09_1504240914_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0068_cosmc_v09_1504240920_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0069_cosmc_v09_1504240926_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0070_cosmc_v09_1504240932_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0071_cosmc_v09_1504240938_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0072_cosmc_v09_1504240944_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0073_cosmc_v09_1504240950_camac.root",
    "/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1/git/root/e45x2.15t/TB_00001514_0074_cosmc_v09_1504240956_camac.root"*/
        };

  //Int_t nfiles_files=74;
	Int_t nfiles_files=1;

  // ROOT files of results only with the spills
  //
  TString dirname="/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1";
  TString energy_folder= "git/root/e45x2.17_tools/StackSpillsAndIntervalTimesForRun";
  TString rootname_results ="RS_TB_00001514_0002_cosmc_v09_1504240120_camac_22Oct_condition.root";
  char * name_results = dirname + "/" + energy_folder + "/" + rootname_results;

  TFile f_spill(name_results,"RECREATE");
  TTree *tree_spill = new TTree("tree_spill","Tree Spill");

  ofstream myfile ("duration_mi_cycle_8GeV_Pos_Pions_22Oct_condition.txt", ios::out | ios::app);
  if (myfile.is_open());


  ofstream myfile2 ("begin_time_8GeV_Pos_Pions_22Oct.txt_condition", ios::out | ios::app);
  if (myfile2.is_open());

  // ========================== Defining the new the variables for the branches =================//

  Double_t Time_spill, Time_spill_1, Time_spill_2, Time_spill_3, Time_spill_4, Time_spill_5, Time_spill_6;
  Double_t Time_spill, Time_spill_1b, Time_spill_2b, Time_spill_3b, Time_spill_4b, Time_spill_5b, Time_spill_6b;
  Int_t energyb, polarityb, Spill_numberb;

  /*jentry_0 , jentry_1 , jentry_2 ,jentry_3, jentry_4;
  Double_t jentry_5; Double_t jentry_6;*/



  // ========================== Defining the new branches  =================//

  //  TBranch *b_Time_spill = tree_spill->Branch("Time_spill", &Time_spill, "Time_spill/D" );
  TBranch *b_Time_spill_1b = tree_spill->Branch("Time_spill_1b", &Time_spill_1b, "Time_spill_1b/D" );
  TBranch *b_Time_spill_2b = tree_spill->Branch("Time_spill_2b", &Time_spill_2b, "Time_spill_2b/D" );
  TBranch *b_Time_spill_3b = tree_spill->Branch("Time_spill_3b", &Time_spill_3b, "Time_spill_3b/D" );
  TBranch *b_Time_spill_4b = tree_spill->Branch("Time_spill_4b", &Time_spill_4b, "Time_spill_4b/D" );
  TBranch *b_Time_spill_5b = tree_spill->Branch("Time_spill_5b", &Time_spill_5b, "Time_spill_5b/D" );
  TBranch *b_Time_spill_6b = tree_spill->Branch("Time_spill_6b", &Time_spill_6b, "Time_spill_6b/D" );

  TBranch *b_Spill_numberb = tree_spill->Branch("Spill_numberb", &Spill_numberb, "Spill_numberb/I" );
  TBranch *b_energyb = tree_spill->Branch("energyb", &energyb, "energyb/I" );
  TBranch *b_polarityb = tree_spill->Branch("polarityb", &polarityb, "polarityb/I" );


/*
  TBranch *b_jentry_0 = tree_spill->Branch("jentry_0", &jentry_0, "jentry_0/D" );
  TBranch *b_jentry_1 = tree_spill->Branch("jentry_1", &jentry_1, "jentry_1/D" );
  TBranch *b_jentry_2 = tree_spill->Branch("jentry_2", &jentry_2, "jentry_2/D" );
  TBranch *b_jentry_3 = tree_spill->Branch("jentry_3", &jentry_3, "jentry_3/D" );
  TBranch *b_jentry_4 = tree_spill->Branch("jentry_4", &jentry_4, "jentry_4/D" );
  TBranch *b_jentry_5 = tree_spill->Branch("jentry_5", &jentry_5, "jentry_5/D" );
  TBranch *b_jentry_6 = tree_spill->Branch("jentry_6", &jentry_6, "jentry_6/D" );*/


  Long64_t nentries_1, nentries_2, nentries_3, nentries_4, nentries_5, nentries_6;
  nentries_1 = fChain->GetEntries("In_spill > 0.5 && Spill_number == 1");
  nentries_2 = fChain->GetEntries("In_spill > 0.5 && Spill_number == 2");
  nentries_3 = fChain->GetEntries("In_spill > 0.5 && Spill_number == 3");
  nentries_4 = fChain->GetEntries("In_spill > 0.5 && Spill_number == 4");
  nentries_5 = fChain->GetEntries("In_spill > 0.5 && Spill_number == 5");
  nentries_6 = fChain->GetEntries("In_spill > 0.5 && Spill_number == 6");

  // === Creating the ROOT file of global results ===
  //
  //

  TString dirname="/minerva/app/users/gsalazar/cmtuser/Minerva_v10r8p1";
  TString energy_folder= "git/root/e45x2.17_tools/StackSpillsAndIntervalTimesForRun";
  TString base ="spill_results_";
  TString energy_value ="8GeV_";
  TString polarity ="Pos_";
  TString type ="Pions.root";
  char * name_file_global = dirname + "/" + energy_folder + "/" + base + energy_value + polarity + type;

  TFile f_global(name_file_global,"RECREATE");
  TTree *spill_global     = new TTree("spill_global","Spill Global");

  Double_t duration_spill, mi_cycle, temp ;
  Int_t value_category ;
  Int_t category ;
  TBranch *b_duration_spill = spill_global->Branch("duration_spill", &duration_spill, "duration_spill/D" );
  TBranch *b_mi_cycle = spill_global->Branch("mi_cycle", &mi_cycle, "mi_cycle/D" );
  TBranch *b_category = spill_global->Branch("category", &category, "category/I" );



 // END OF FOR  FOR THE RUN
 // END OF FOR  FOR THE RUN
 // END OF FOR  FOR THE RUN

    TFile *f[100];
    TTree *tree[100];
    Double_t t_begin[100], porcentage ;
    cout << "Procesing ... "<< endl;
    for(Int_t i=0; i<nfiles_files; i++){ //For() over all the root files
			myfile2 << i << endl;
			myfile << i << endl;

       //Printf("Opening the file: %s", name_file[i]);
       t_begin[i]=0;
        ////////////// Open the array_root_file[i] and the corresponding tree[i]

          f[i] = (TFile*)gROOT->GetListOfFiles()->FindObject(name_file[i]);

          if (!f[i] || !f[i]->IsOpen()) {
             f[i] = new TFile(name_file[i],"READ");
          }

          f[i]->GetObject("CAMACTree",tree[i]);

       Init(tree[i]);      //fChain equal to the tree corresponding to the array_file_root[i]

        cout <<  i  << "..." << endl  ;

          //  =============================== LOOP ================================= //
          //  Input: root file of TB with the most importat variable: Spill_number
          //  Loop 0 will record the begining of the time in the root file in order to remove the unix time and use only seconds
          //  Loop 1-6 will get the begining in time for each spill for future uses
          //  Loop 7 : creates the results root file with the spills but now calibrated to the begining of the spill

          // IMPORTANT Values: int jentry_array,jentry_array2,jentry_array3,jentry_array4,jentry_array5,jentry_array6;
            //
            // | ------- | ----- Spill_number == 1 ----- | ----- Spill_number == 2 ----- | ---
            //
            //
            //  A ------- B ---------------------------- C ----------------------------- D ----
            // Variables:
            // A: Time begining of the root file -> t_begin
            // B: Entry in root file for the time begining of Spill_number == 1 -> jentry_array
            // C: Entry in root file for the end begining of Spill_number == 1 -> jentry_array + nentries_1
            // This code can not know the entry for the end of the spill, but we can
            // get it by knowing the total numbers of entries.
            // D: Entry in root file for the time begining of Spill_number == X -> jentry_array_X


            int jentry_array,jentry_array2,jentry_array3,jentry_array4,jentry_array5,jentry_array6;
            Double_t t_Time_begin_spill_1,Time_begin_spill_2,Time_begin_spill_3,Time_begin_spill_4,Time_begin_spill_5,Time_begin_spill_6;
              Double_t t_o_spill_1, t_o_spill_2, t_o_spill_3, t_o_spill_4, t_o_spill_5, t_o_spill_6;

          // ================= LOOP 0 : Begin of the Variable Time and =================== //

            if (fChain == 0) return; Long64_t nentries = fChain->GetEntries(); Long64_t nbytes = 0, nb = 0;

             for (Long64_t jentry=0; jentry<1;jentry++) {
                Long64_t ientry = LoadTree(jentry); if (ientry < 0) break;
                nb = fChain->GetEntry(jentry);   nbytes += nb; t_begin[i] = (Double_t) Time;
              myfile2 << "t_begin: "<< t_begin[i] << endl;
             }

              // ================= LOOP 1 : Begin Time for the Spill_number == 1 =================== //

            for (Long64_t jentry=0; jentry<nentries;jentry++) {
               Long64_t ientry = LoadTree(jentry);                if (ientry < 0) break;
               nb = fChain->GetEntry(jentry);   nbytes += nb;

               if (In_spill > 0.5 ){if (Spill_number == 1 ){
                 jentry_array= (Double_t) jentry;
                 Time_begin_spill_1 = (Double_t) Time - t_begin[i];
                 t_o_spill_1 = (Double_t) Time;
                 //myfile << "jentry_array: "<< jentry_array << endl;
                myfile2 << "Time_spill_1 "<< Time_begin_spill_1 << endl;
                                          break ;                  }                 }             }

             // ================= LOOP 2 : Begin Time for the Spill_number == 2 =================== //

             for (Long64_t jentry=0; jentry<nentries;jentry++) {
               Long64_t ientry = LoadTree(jentry);                 if (ientry < 0) break;
                nb = fChain->GetEntry(jentry);   nbytes += nb;

                if (In_spill > 0.5 ){ if (Spill_number == 2 ){ jentry_array2= (Double_t) jentry;
                  Time_begin_spill_2 = (Double_t) Time - t_begin[i];
                  t_o_spill_2 = (Double_t) Time;
                  //myfile << "jentry_array2: "<< jentry_array2 << endl;
          				 myfile2 << "Time_spill_2 "<< Time_begin_spill_2 << endl;

                      break ;                    }                  }              }

              // ================= LOOP 3 : Begin Time for the Spill_number == 3 =================== //

              for (Long64_t jentry=0; jentry<nentries;jentry++) {
                 Long64_t ientry = LoadTree(jentry);                 if (ientry < 0) break;
                 nb = fChain->GetEntry(jentry);   nbytes += nb;

                 if (In_spill > 0.5 ){if (Spill_number == 3 ){jentry_array3= (Double_t) jentry;
                  Time_begin_spill_3 = (Double_t) Time - t_begin[i];
                  t_o_spill_3 = (Double_t) Time;
                   //myfile << "jentry_array3: "<< jentry_array3 << endl;
                   myfile2 << "Time_spill_3 "<< Time_begin_spill_3 << endl;
                       break ;                     }                   }               }

              // ================= LOOP 4 : Begin Time for the Spill_number == 4 =================== //
               for (Long64_t jentry=0; jentry<nentries;jentry++) {
                  Long64_t ientry = LoadTree(jentry);
                  if (ientry < 0) break;
                  nb = fChain->GetEntry(jentry);   nbytes += nb;

                  if (In_spill > 0.5 ){if (Spill_number == 4 ){jentry_array4= (Double_t) jentry;
                  Time_begin_spill_4 = (Double_t) Time - t_begin[i];
                  t_o_spill_4 = (Double_t) Time;
                   //myfile << "jentry_array4: "<< jentry_array4 << endl;
                   myfile2 << "Time_spill_4 "<< Time_begin_spill_4 << endl;
                        break ;                      }                    }                }

               // ================= LOOP 5 : Begin Time for the Spill_number == 5 =================== //
                for (Long64_t jentry=0; jentry<nentries;jentry++) {
                   Long64_t ientry = LoadTree(jentry);
                   if (ientry < 0) break;
                   nb = fChain->GetEntry(jentry);   nbytes += nb;

                   if (In_spill > 0.5 ){if (Spill_number == 5 ){jentry_array5= (Double_t) jentry;
                  Time_begin_spill_5 = (Double_t) Time - t_begin[i];
                  t_o_spill_5 = (Double_t) Time;
                   //myfile << "jentry_array5: "<< jentry_array5 << endl;
                   myfile2 << "Time_spill_5 "<< Time_begin_spill_5 << endl;
                         break ;                       }                     }                 }

                // ================= LOOP 6 : Begin Time for the Spill_number == 2 =================== //

                 for (Long64_t jentry=0; jentry<nentries;jentry++) {
                    Long64_t ientry = LoadTree(jentry);
                    if (ientry < 0) break;
                    nb = fChain->GetEntry(jentry);   nbytes += nb;

                    if (In_spill > 0.5 ){if (Spill_number == 6 ){jentry_array6= (Double_t) jentry;
                  Time_begin_spill_6 = (Double_t) Time - t_begin[i];
                  t_o_spill_6 = (Double_t) Time;
                   //myfile << "jentry_array6: "<< jentry_array6 << endl;
                   myfile2 << "Time_spill_6 "<< Time_begin_spill_6 << endl;
                          break ;                        }                      }                  }

        Float_t interval_between_spills = 0.0;

        //cout << " ## For file: " << name_file[i] <<endl;

 if (fChain == 0) return;
  Long64_t nentries = fChain->GetEntries();
  Long64_t nbytes = 0, nb = 0;

  Double_t duration_spill_1, duration_spill_2, duration_spill_3, duration_spill_4, duration_spill_5, duration_spill_6;


  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;

    Time_spill_1b = -1; Time_spill_2b = -1; Time_spill_3b = -1;
    Time_spill_4b = -1; Time_spill_5b = -1; Time_spill_6b = -1;

      if (In_spill > 0.5 )              {
          if (Spill_number == 1 )                 {

                  Time_spill_1 = (Double_t) Time -t_begin[i];
                  duration_spill_1 = Time_spill_1 - Time_begin_spill_1;

                  Time_spill_1b = (Double_t) Time - t_o_spill_1;
                  Spill_numberb = 1;
                  tree_spill->Fill();
            }
            else if (Spill_number == 2 )
            {
                  Time_spill_2= (Double_t) Time -t_begin[i];
                  duration_spill_2 = Time_spill_2 - Time_begin_spill_2;


                  Time_spill_2b = (Double_t) Time - t_o_spill_2;
                  Spill_numberb = 2;
                  tree_spill->Fill();

            }

            else if (Spill_number == 3 )
            {
                  Time_spill_3= (Double_t) Time -t_begin[i];
                  duration_spill_3 = Time_spill_3 - Time_begin_spill_3;


                  Time_spill_3b = (Double_t) Time - t_o_spill_3;
                  Spill_numberb = 3;
                  tree_spill->Fill();

             }

           else if (Spill_number == 4 )
           {
                 Time_spill_4= (Double_t) Time -t_begin[i];
                 duration_spill_4 = Time_spill_4 - Time_begin_spill_4;


                 Time_spill_4b = (Double_t) Time - t_o_spill_4 ;
                 Spill_numberb = 4;
                 tree_spill->Fill();
          }

          else if (Spill_number == 5 )
          {
                Time_spill_5= (Double_t) Time -t_begin[i];
                duration_spill_5 = Time_spill_5 - Time_begin_spill_5;


                Time_spill_5b = (Double_t) Time - t_o_spill_5 ;
                Spill_numberb = 5;
                tree_spill->Fill();
          }

         else if (Spill_number == 6 )
         {
               Time_spill_6= (Double_t) Time -t_begin[i];
               duration_spill_6 = Time_spill_6 - Time_begin_spill_6;


               Time_spill_6b = (Double_t) Time - t_o_spill_6;
               Spill_numberb = 6;
               tree_spill->Fill();
         }

      } // end of:  if (In_spill > 0.5 )



 }//end of: for (Long64_t jentry=0; jentry<nentries;jentry++)

  // ## 1

  duration_spill =  duration_spill_1;
  category = 5;
  mi_cycle = -1;
  spill_global->Fill();

  // ## 2

  duration_spill =  duration_spill_2;
  mi_cycle = t_o_spill_2 - t_o_spill_1;
  category = 5;
  myfile << t_o_spill_2 - t_o_spill_1<< endl;
  spill_global->Fill();

  // ## 3

  duration_spill =  duration_spill_3;
  mi_cycle = t_o_spill_3 - t_o_spill_2;
  category = 5;
  spill_global->Fill();
  myfile << t_o_spill_3 - t_o_spill_2<< endl;


  // ## 4

  duration_spill =  duration_spill_4;
  mi_cycle =  t_o_spill_4 - t_o_spill_3;
  category = 5;
  spill_global->Fill();
  myfile << t_o_spill_4 - t_o_spill_3 << endl;

  // ## 5

  duration_spill =  duration_spill_5;
  mi_cycle = t_o_spill_5 - t_o_spill_4;
  category = 5;
  spill_global->Fill();
  myfile <<  t_o_spill_5 - t_o_spill_4 << endl;

  // ## 6

  duration_spill =  duration_spill_6;
  mi_cycle = t_o_spill_6 - t_o_spill_5;
  category = 5;
  spill_global->Fill();
  myfile << t_o_spill_6 - t_o_spill_5 << endl;





}  // End For the ROOT files

f_global.Write();
f_spill.Write();

myfile2 << "## end ##" << endl;
myfile << "## end ##" << endl;

// END OF FOR  FOR THE RUN
// END OF FOR  FOR THE RUN
// END OF FOR  FOR THE RUN

/*
 TCanvas *c1 = new TCanvas("c1","test",10,10,1400,1100);
 c1->Divide(3,2);
 c1->cd(1);
 tree_spill->Draw("Time_spill_1b","Time_spill_1b != -1");
 c1->cd(2);
 tree_spill->Draw("Time_spill_2b ","Time_spill_2b != -1");
 c1->cd(3);
 tree_spill->Draw("Time_spill_3b","Time_spill_3b != -1");
 c1->cd(4);
 tree_spill->Draw("Time_spill_4b","Time_spill_4b != -1");
 c1->cd(5);
 tree_spill->Draw("Time_spill_5b","Time_spill_5b != -1");
 c1->cd(6);
 tree_spill->Draw("Time_spill_6b","Time_spill_6b != -1");

 c1->SaveAs("RS_TB_00001514_0002_cosmc_v09_1504240120_camac.gif");*/



      // ========================== Defining the histograms  =================//
      //%s - Take the next argument and print it as a string
      //%d - Take the next argument and print it as an int
/*
    int nbins = 100;
    int nfiles=6; //number of the bins
    float xmin=-1.0,xmax=4.5; //Limits of the histogram

    TH1F *hist_spill_1 = new TH1F("hist_spill_1","Spill #1 (R:1514 S:2)",nbins,xmin,xmax);
    TH1F *hist_spill_2 = new TH1F("hist_spill_2","Spill #2 (R:1514 S:2)",nbins,xmin,xmax);
    TH1F *hist_spill_3 = new TH1F("hist_spill_3","Spill #3 (R:1514 S:2)",nbins,xmin,xmax);
    TH1F *hist_spill_4 = new TH1F("hist_spill_4","Spill #4 (R:1514 S:2)",nbins,xmin,xmax);
    TH1F *hist_spill_5 = new TH1F("hist_spill_5","Spill #5 (R:1514 S:2)",nbins,xmin,xmax);
    TH1F *hist_spill_6 = new TH1F("hist_spill_6","Spill #6 (R:1514 S:2)",nbins,xmin,xmax);

    TH1F *hist_stacked = new TH1F("hist","Spill Time for 8Gev Pos Pions",100, -1,5 );
    THStack *hs_spill_stack = new THStack("hs_spill_stack",""); //  Defining the THStack histogram


      // ========================== Ploting the variables =================  //

      Double_t xl1=.05, yl1=0.75, xl2=xl1+.3, yl2=yl1+.125; // Set the X Axis title, value, etc
      TLegend *leg = new TLegend(xl1,yl1,xl2,yl2); // Legend

       // ========= Defining the histograms and attaching them into THStack  =========//
       //1
       tree_spill->Project("hist_spill_1","Time_spill_1b", "Time_spill_1b!= -1");
       hist_spill_1->SetFillColor(kRed);
       leg->AddEntry(hs_spill_stack,"Texto 2","Var");
       hs_spill_stack->Add(hist_spill_1);
       //2
       tree_spill->Project("hist_spill_2","Time_spill_2b", "Time_spill_2b!= -1");
       hist_spill_2->SetFillColor(kBlue);
       hs_spill_stack->Add(hist_spill_2);
       //3
       tree_spill->Project("hist_spill_3","Time_spill_3b", "Time_spill_3b!= -1");
       hist_spill_3->SetFillColor(kYellow);
       hs_spill_stack->Add(hist_spill_3);
       //4
       tree_spill->Project("hist_spill_4","Time_spill_4b", "Time_spill_4b!= -1");
       hist_spill_4->SetFillColor(kGreen);
       hs_spill_stack->Add(hist_spill_4);
       //5
       tree_spill->Project("hist_spill_5","Time_spill_5b", "Time_spill_5b!= -1");
       hist_spill_5->SetFillColor(kOrange);
       hs_spill_stack->Add(hist_spill_5);
       //6
       tree_spill->Project("hist_spill_6","Time_spill_6b", "Time_spill_6b!= -1");
       hist_spill_6->SetFillColor(kBlack);
       hs_spill_stack->Add(hist_spill_6);

       // ========= Defining the histograms and attaching them into THStack  =========//

       TCanvas *cs_stacked = new TCanvas("cs_stacked","cs_stacked",10,10,600,400);
       TText T; T.SetTextFont(42); T.SetTextAlign(21);
       cs_stacked->Divide(1);
       cs_stacked->cd(1);


       //hs_spill_stacked->GetXaxis()->SetTitle("Time (seconds)");
       hs_spill_stack->Draw();

       T.DrawTextNDC(.5,.95,"Spill Time for 8Gev Pos Pions");
       cs_stacked->SaveAs("run1514_sr2_all_spills_loop_bin_500_stacked.gif");



*/



 //myfile << "## fin  ##" <<endl;
/*
  TString dir = gSystem->UnixPathName(__FILE__);
  //---> CAmbiar aca
  dir.ReplaceAll("TimeToolForRun.C","");
  // -->
  dir.ReplaceAll("/./","/");
  ifstream in;
  in.open(Form("%sduration_mi_cycle_8GeV_Pos_Pions_22Oct.txt", dir.Data()));


  Int_t nlines = nfiles_files;
  //TFile *f_global;
  //TBranch *spill_results = new TNtuple("spill_results","Data from spill","spill_interval");

  while(1){

    //in >> x >> y >> z; //format of the data
    in >> mi_cycle; //format of the data
    if (!in.good()) break;
    if(nlines<74) //printf("x=%8f \n", spill_interval);
    spill_global->Fill(mi_cycle);
    nlines++;

  }

  printf("found %d points \n", nlines);

  in.close();
  f->Write();*/

}
