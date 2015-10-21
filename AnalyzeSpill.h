//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Sep 21 13:16:55 2015 by ROOT version 5.34/05
// from TTree CAMACTree/CAMAC Data TTree
// found on file: TB_00001514_0002_cosmc_v09_1504240120_camac.root
//////////////////////////////////////////////////////////

#ifndef AnalyzeSpill_h
#define AnalyzeSpill_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class AnalyzeSpill {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Double_t        Time;
   Double_t        Spill_number;
   Double_t        Triggers_in_spill;
   Double_t        Triggers_out_spill;
   Double_t        In_spill;
     /*
     Double_t        TDC_Channel_0[64];
     Double_t        TDC_Channel_1[64];
     Double_t        TDC_Channel_2[64];
     Double_t        TDC_Channel_3[64];
     Double_t        TDC_Channel_4[64];
     Double_t        TDC_Channel_5[64];
     Double_t        TDC_Channel_6[64];
     Double_t        TDC_Channel_7[64];
     Double_t        TDC_Channel_8[64];
     Double_t        TDC_Channel_9[64];
     Double_t        TDC_Channel_10[64];
     Double_t        TDC_Channel_11[64];
     Double_t        TDC_Channel_12[64];
     Double_t        TDC_Channel_13[64];
     Double_t        TDC_Channel_14[64];
     Double_t        TDC_Channel_15[64];
     Double_t        TDC_Channel_16[64];
     Double_t        TDC_Channel_17[64];
     Double_t        TDC_Channel_18[64];
     Double_t        TDC_Channel_19[64];
     Double_t        TDC_Channel_20[64];
     Double_t        TDC_Channel_21[64];
     Double_t        TDC_Channel_22[64];
     Double_t        TDC_Channel_23[64];
     Double_t        TDC_Channel_24[64];
     Double_t        TDC_Channel_25[64];
     Double_t        TDC_Channel_26[64];
     Double_t        TDC_Channel_27[64];
     Double_t        TDC_Channel_28[64];
     Double_t        TDC_Channel_29[64];
     Double_t        TDC_Channel_30[64];
     Double_t        TDC_Channel_31[64];
     Double_t        TDC_Resolution;
     Double_t        MT6SC1;
     Double_t        MT6SC2;
     Double_t        MT6SC3;
     Double_t        MT6SC4;
     Double_t        ToF_Up1;
     Double_t        ToF_Up2;
     Double_t        ToF_Up3;
     Double_t        ToF_Up4;
     Double_t        ToF_DownL;
     Double_t        ToF_DownR;
     Double_t        ToF_Time;
     Double_t        Veto_MonitoringScalar_Channel_1;
     Double_t        Veto_monitoringScalar_Channel_2;
     Double_t        Veto_monitoringScalar_Channel_3;
     Double_t        Veto_monitoringScalar_Channel_4;
     Double_t        Veto_monitoringScalar_Channel_5;
     Double_t        Veto_monitoringScalar_Channel_6;
     Double_t        Veto_monitoringScalar_Channel_7;
     Double_t        Veto_monitoringScalar_Channel_8;
     Double_t        Veto_monitoringScalar_Channel_9;
     Double_t        Veto_monitoringScalar_Channel_10;
     Double_t        Veto_monitoringScalar_Channel_11;
     Double_t        Veto_monitoringScalar_Channel_12;
     Double_t        Veto_monitoringScalar_Channel_13;
     Double_t        Veto_monitoringScalar_Channel_14;
     Double_t        Veto_monitoringScalar_Channel_15;
     Double_t        Veto_monitoringScalar_Channel_16;
     Double_t        Veto_VetoCounter_1;
     Double_t        Veto_VetoCounter_2;
     Double_t        Veto_VetoCounter_3;
     Double_t        Veto_VetoCounter_4;
     Double_t        Veto_VetoCounter_5;
     Double_t        Veto_VetoCounter_6;
     Double_t        Veto_VetoCounter_7;
     Double_t        Veto_VetoCounter_8;
     Double_t        Veto_VetoCounter_9;
     Double_t        Veto_VetoCounter_10;
     Double_t        Veto_VetoCounter_11;
     Double_t        Veto_VetoCounter_12;
     Double_t        Veto_TestCounter_1;
     Double_t        Veto_TestCounter_2;
     Double_t        Empty_0;
     Double_t        Empty_1;
     Double_t        Veto_Veto_Count;
     Double_t        Veto_Trigger_Count;
     Double_t        Cherenkov_Inner_Count;
     Double_t        Cherenkov_Upstream_Count;
     Double_t        Veto_ADC_Monitor_Counter_1;
     Double_t        Veto_ADC_Monitor_Counter_2;
     Double_t        Veto_ADC_Monitor_Counter_3;
     Double_t        Veto_ADC_Monitor_Counter_4;
     Double_t        Veto_ADC_Monitor_Counter_5;
     Double_t        Veto_ADC_Monitor_Counter_6;
     Double_t        Veto_ADC_Monitor_Counter_7;
     Double_t        Veto_ADC_Monitor_Counter_8;
     Double_t        Veto_ADC_Monitor_Counter_9;
     Double_t        Veto_ADC_Monitor_Counter_10;
     Double_t        Veto_ADC_Monitor_Counter_11;
     Double_t        Veto_ADC_Monitor_Counter_12;
     Double_t        MT6SC_123Spill;
     Double_t        Cherenkov_Outer_Count;
     Double_t        ToF_Stop_Count;
     Double_t        $00_Count;
     Double_t        Crims_between;
     Double_t        Readout_duration;
     Double_t        ToF_Hit_Register;
     Double_t        ToF_LAM_Checks;
     Double_t        Good_event;*/

   // List of branches
   TBranch        *b_Time;   //!
   TBranch        *b_Spill_number;   //!
   TBranch        *b_Triggers_in_spill;   //!
   TBranch        *b_Triggers_out_spill;   //!
   TBranch        *b_In_spill;   //!
     /*
     TBranch        *b_TDC_Channel_0;   //!
     TBranch        *b_TDC_Channel_1;   //!
     TBranch        *b_TDC_Channel_2;   //!
     TBranch        *b_TDC_Channel_3;   //!
     TBranch        *b_TDC_Channel_4;   //!
     TBranch        *b_TDC_Channel_5;   //!
     TBranch        *b_TDC_Channel_6;   //!
     TBranch        *b_TDC_Channel_7;   //!
     TBranch        *b_TDC_Channel_8;   //!
     TBranch        *b_TDC_Channel_9;   //!
     TBranch        *b_TDC_Channel_10;   //!
     TBranch        *b_TDC_Channel_11;   //!
     TBranch        *b_TDC_Channel_12;   //!
     TBranch        *b_TDC_Channel_13;   //!
     TBranch        *b_TDC_Channel_14;   //!
     TBranch        *b_TDC_Channel_15;   //!
     TBranch        *b_TDC_Channel_16;   //!
     TBranch        *b_TDC_Channel_17;   //!
     TBranch        *b_TDC_Channel_18;   //!
     TBranch        *b_TDC_Channel_19;   //!
     TBranch        *b_TDC_Channel_20;   //!
     TBranch        *b_TDC_Channel_21;   //!
     TBranch        *b_TDC_Channel_22;   //!
     TBranch        *b_TDC_Channel_23;   //!
     TBranch        *b_TDC_Channel_24;   //!
     TBranch        *b_TDC_Channel_25;   //!
     TBranch        *b_TDC_Channel_26;   //!
     TBranch        *b_TDC_Channel_27;   //!
     TBranch        *b_TDC_Channel_28;   //!
     TBranch        *b_TDC_Channel_29;   //!
     TBranch        *b_TDC_Channel_30;   //!
     TBranch        *b_TDC_Channel_31;   //!
     TBranch        *b_TDC_Resolution;   //!
     TBranch        *b_MT6SC1;   //!
     TBranch        *b_MT6SC2;   //!
     TBranch        *b_MT6SC3;   //!
     TBranch        *b_MT6SC4;   //!
     TBranch        *b_ToF_Up1;   //!
     TBranch        *b_ToF_Up2;   //!
     TBranch        *b_ToF_Up3;   //!
     TBranch        *b_ToF_Up4;   //!
     TBranch        *b_ToF_DownL;   //!
     TBranch        *b_ToF_DownR;   //!
     TBranch        *b_ToF_Time;   //!
     TBranch        *b_Veto_MonitoringScalar_Channel_1;   //!
     TBranch        *b_Veto_monitoringScalar_Channel_2;   //!
     TBranch        *b_Veto_monitoringScalar_Channel_3;   //!
     TBranch        *b_Veto_monitoringScalar_Channel_4;   //!
     TBranch        *b_Veto_monitoringScalar_Channel_5;   //!
     TBranch        *b_Veto_monitoringScalar_Channel_6;   //!
     TBranch        *b_Veto_monitoringScalar_Channel_7;   //!
     TBranch        *b_Veto_monitoringScalar_Channel_8;   //!
     TBranch        *b_Veto_monitoringScalar_Channel_9;   //!
     TBranch        *b_Veto_monitoringScalar_Channel_10;   //!
     TBranch        *b_Veto_monitoringScalar_Channel_11;   //!
     TBranch        *b_Veto_monitoringScalar_Channel_12;   //!
     TBranch        *b_Veto_monitoringScalar_Channel_13;   //!
     TBranch        *b_Veto_monitoringScalar_Channel_14;   //!
     TBranch        *b_Veto_monitoringScalar_Channel_15;   //!
     TBranch        *b_Veto_monitoringScalar_Channel_16;   //!
     TBranch        *b_Veto_VetoCounter_1;   //!
     TBranch        *b_Veto_VetoCounter_2;   //!
     TBranch        *b_Veto_VetoCounter_3;   //!
     TBranch        *b_Veto_VetoCounter_4;   //!
     TBranch        *b_Veto_VetoCounter_5;   //!
     TBranch        *b_Veto_VetoCounter_6;   //!
     TBranch        *b_Veto_VetoCounter_7;   //!
     TBranch        *b_Veto_VetoCounter_8;   //!
     TBranch        *b_Veto_VetoCounter_9;   //!
     TBranch        *b_Veto_VetoCounter_10;   //!
     TBranch        *b_Veto_VetoCounter_11;   //!
     TBranch        *b_Veto_VetoCounter_12;   //!
     TBranch        *b_Veto_TestCounter_1;   //!
     TBranch        *b_Veto_TestCounter_2;   //!
     TBranch        *b_Empty_0;   //!
     TBranch        *b_Empty_1;   //!
     TBranch        *b_Veto_Veto_Count;   //!
     TBranch        *b_Veto_Trigger_Count;   //!
     TBranch        *b_Cherenkov_Inner_Count;   //!
     TBranch        *b_Cherenkov_Upstream_Count;   //!
     TBranch        *b_Veto_ADC_Monitor_Counter_1;   //!
     TBranch        *b_Veto_ADC_Monitor_Counter_2;   //!
     TBranch        *b_Veto_ADC_Monitor_Counter_3;   //!
     TBranch        *b_Veto_ADC_Monitor_Counter_4;   //!
     TBranch        *b_Veto_ADC_Monitor_Counter_5;   //!
     TBranch        *b_Veto_ADC_Monitor_Counter_6;   //!
     TBranch        *b_Veto_ADC_Monitor_Counter_7;   //!
     TBranch        *b_Veto_ADC_Monitor_Counter_8;   //!
     TBranch        *b_Veto_ADC_Monitor_Counter_9;   //!
     TBranch        *b_Veto_ADC_Monitor_Counter_10;   //!
     TBranch        *b_Veto_ADC_Monitor_Counter_11;   //!
     TBranch        *b_Veto_ADC_Monitor_Counter_12;   //!
     TBranch        *b_MT6SC_123Spill;   //!
     TBranch        *b_Cherenkov_Outer_Count;   //!
     TBranch        *b_ToF_Stop_Count;   //!
     TBranch        *b_$00_Count;   //!
     TBranch        *b_Crims_between;   //!
     TBranch        *b_Readout_duration;   //!
     TBranch        *b_ToF_Hit_Register;   //!
     TBranch        *b_ToF_LAM_Checks;   //!
     TBranch        *b_Good_event;   //!*/

   AnalyzeSpill(TTree *tree=0);
   virtual ~AnalyzeSpill();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef AnalyzeSpill_cxx
AnalyzeSpill::AnalyzeSpill(TTree *tree) : fChain(0)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("TB_00001514_0002_cosmc_v09_1504240120_camac.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("TB_00001514_0002_cosmc_v09_1504240120_camac.root");
      }
      f->GetObject("CAMACTree",tree);

   }
   Init(tree);
}

AnalyzeSpill::~AnalyzeSpill()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t AnalyzeSpill::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t AnalyzeSpill::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void AnalyzeSpill::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Time", &Time, &b_Time);
   fChain->SetBranchAddress("Spill_number", &Spill_number, &b_Spill_number);
   fChain->SetBranchAddress("Triggers_in_spill", &Triggers_in_spill, &b_Triggers_in_spill);
   fChain->SetBranchAddress("Triggers_out_spill", &Triggers_out_spill, &b_Triggers_out_spill);
   fChain->SetBranchAddress("In_spill", &In_spill, &b_In_spill);
     /*
     fChain->SetBranchAddress("TDC_Channel_0", TDC_Channel_0, &b_TDC_Channel_0);
     fChain->SetBranchAddress("TDC_Channel_1", TDC_Channel_1, &b_TDC_Channel_1);
     fChain->SetBranchAddress("TDC_Channel_2", TDC_Channel_2, &b_TDC_Channel_2);
     fChain->SetBranchAddress("TDC_Channel_3", TDC_Channel_3, &b_TDC_Channel_3);
     fChain->SetBranchAddress("TDC_Channel_4", TDC_Channel_4, &b_TDC_Channel_4);
     fChain->SetBranchAddress("TDC_Channel_5", TDC_Channel_5, &b_TDC_Channel_5);
     fChain->SetBranchAddress("TDC_Channel_6", TDC_Channel_6, &b_TDC_Channel_6);
     fChain->SetBranchAddress("TDC_Channel_7", TDC_Channel_7, &b_TDC_Channel_7);
     fChain->SetBranchAddress("TDC_Channel_8", TDC_Channel_8, &b_TDC_Channel_8);
     fChain->SetBranchAddress("TDC_Channel_9", TDC_Channel_9, &b_TDC_Channel_9);
     fChain->SetBranchAddress("TDC_Channel_10", TDC_Channel_10, &b_TDC_Channel_10);
     fChain->SetBranchAddress("TDC_Channel_11", TDC_Channel_11, &b_TDC_Channel_11);
     fChain->SetBranchAddress("TDC_Channel_12", TDC_Channel_12, &b_TDC_Channel_12);
     fChain->SetBranchAddress("TDC_Channel_13", TDC_Channel_13, &b_TDC_Channel_13);
     fChain->SetBranchAddress("TDC_Channel_14", TDC_Channel_14, &b_TDC_Channel_14);
     fChain->SetBranchAddress("TDC_Channel_15", TDC_Channel_15, &b_TDC_Channel_15);
     fChain->SetBranchAddress("TDC_Channel_16", TDC_Channel_16, &b_TDC_Channel_16);
     fChain->SetBranchAddress("TDC_Channel_17", TDC_Channel_17, &b_TDC_Channel_17);
     fChain->SetBranchAddress("TDC_Channel_18", TDC_Channel_18, &b_TDC_Channel_18);
     fChain->SetBranchAddress("TDC_Channel_19", TDC_Channel_19, &b_TDC_Channel_19);
     fChain->SetBranchAddress("TDC_Channel_20", TDC_Channel_20, &b_TDC_Channel_20);
     fChain->SetBranchAddress("TDC_Channel_21", TDC_Channel_21, &b_TDC_Channel_21);
     fChain->SetBranchAddress("TDC_Channel_22", TDC_Channel_22, &b_TDC_Channel_22);
     fChain->SetBranchAddress("TDC_Channel_23", TDC_Channel_23, &b_TDC_Channel_23);
     fChain->SetBranchAddress("TDC_Channel_24", TDC_Channel_24, &b_TDC_Channel_24);
     fChain->SetBranchAddress("TDC_Channel_25", TDC_Channel_25, &b_TDC_Channel_25);
     fChain->SetBranchAddress("TDC_Channel_26", TDC_Channel_26, &b_TDC_Channel_26);
     fChain->SetBranchAddress("TDC_Channel_27", TDC_Channel_27, &b_TDC_Channel_27);
     fChain->SetBranchAddress("TDC_Channel_28", TDC_Channel_28, &b_TDC_Channel_28);
     fChain->SetBranchAddress("TDC_Channel_29", TDC_Channel_29, &b_TDC_Channel_29);
     fChain->SetBranchAddress("TDC_Channel_30", TDC_Channel_30, &b_TDC_Channel_30);
     fChain->SetBranchAddress("TDC_Channel_31", TDC_Channel_31, &b_TDC_Channel_31);
     fChain->SetBranchAddress("TDC_Resolution", &TDC_Resolution, &b_TDC_Resolution);
     fChain->SetBranchAddress("MT6SC1", &MT6SC1, &b_MT6SC1);
     fChain->SetBranchAddress("MT6SC2", &MT6SC2, &b_MT6SC2);
     fChain->SetBranchAddress("MT6SC3", &MT6SC3, &b_MT6SC3);
     fChain->SetBranchAddress("MT6SC4", &MT6SC4, &b_MT6SC4);
     fChain->SetBranchAddress("ToF_Up1", &ToF_Up1, &b_ToF_Up1);
     fChain->SetBranchAddress("ToF_Up2", &ToF_Up2, &b_ToF_Up2);
     fChain->SetBranchAddress("ToF_Up3", &ToF_Up3, &b_ToF_Up3);
     fChain->SetBranchAddress("ToF_Up4", &ToF_Up4, &b_ToF_Up4);
     fChain->SetBranchAddress("ToF_DownL", &ToF_DownL, &b_ToF_DownL);
     fChain->SetBranchAddress("ToF_DownR", &ToF_DownR, &b_ToF_DownR);
     fChain->SetBranchAddress("ToF_Time", &ToF_Time, &b_ToF_Time);
     fChain->SetBranchAddress("Veto_MonitoringScalar_Channel_1", &Veto_MonitoringScalar_Channel_1, &b_Veto_MonitoringScalar_Channel_1);
     fChain->SetBranchAddress("Veto_monitoringScalar_Channel_2", &Veto_monitoringScalar_Channel_2, &b_Veto_monitoringScalar_Channel_2);
     fChain->SetBranchAddress("Veto_monitoringScalar_Channel_3", &Veto_monitoringScalar_Channel_3, &b_Veto_monitoringScalar_Channel_3);
     fChain->SetBranchAddress("Veto_monitoringScalar_Channel_4", &Veto_monitoringScalar_Channel_4, &b_Veto_monitoringScalar_Channel_4);
     fChain->SetBranchAddress("Veto_monitoringScalar_Channel_5", &Veto_monitoringScalar_Channel_5, &b_Veto_monitoringScalar_Channel_5);
     fChain->SetBranchAddress("Veto_monitoringScalar_Channel_6", &Veto_monitoringScalar_Channel_6, &b_Veto_monitoringScalar_Channel_6);
     fChain->SetBranchAddress("Veto_monitoringScalar_Channel_7", &Veto_monitoringScalar_Channel_7, &b_Veto_monitoringScalar_Channel_7);
     fChain->SetBranchAddress("Veto_monitoringScalar_Channel_8", &Veto_monitoringScalar_Channel_8, &b_Veto_monitoringScalar_Channel_8);
     fChain->SetBranchAddress("Veto_monitoringScalar_Channel_9", &Veto_monitoringScalar_Channel_9, &b_Veto_monitoringScalar_Channel_9);
     fChain->SetBranchAddress("Veto_monitoringScalar_Channel_10", &Veto_monitoringScalar_Channel_10, &b_Veto_monitoringScalar_Channel_10);
     fChain->SetBranchAddress("Veto_monitoringScalar_Channel_11", &Veto_monitoringScalar_Channel_11, &b_Veto_monitoringScalar_Channel_11);
     fChain->SetBranchAddress("Veto_monitoringScalar_Channel_12", &Veto_monitoringScalar_Channel_12, &b_Veto_monitoringScalar_Channel_12);
     fChain->SetBranchAddress("Veto_monitoringScalar_Channel_13", &Veto_monitoringScalar_Channel_13, &b_Veto_monitoringScalar_Channel_13);
     fChain->SetBranchAddress("Veto_monitoringScalar_Channel_14", &Veto_monitoringScalar_Channel_14, &b_Veto_monitoringScalar_Channel_14);
     fChain->SetBranchAddress("Veto_monitoringScalar_Channel_15", &Veto_monitoringScalar_Channel_15, &b_Veto_monitoringScalar_Channel_15);
     fChain->SetBranchAddress("Veto_monitoringScalar_Channel_16", &Veto_monitoringScalar_Channel_16, &b_Veto_monitoringScalar_Channel_16);
     fChain->SetBranchAddress("Veto_VetoCounter_1", &Veto_VetoCounter_1, &b_Veto_VetoCounter_1);
     fChain->SetBranchAddress("Veto_VetoCounter_2", &Veto_VetoCounter_2, &b_Veto_VetoCounter_2);
     fChain->SetBranchAddress("Veto_VetoCounter_3", &Veto_VetoCounter_3, &b_Veto_VetoCounter_3);
     fChain->SetBranchAddress("Veto_VetoCounter_4", &Veto_VetoCounter_4, &b_Veto_VetoCounter_4);
     fChain->SetBranchAddress("Veto_VetoCounter_5", &Veto_VetoCounter_5, &b_Veto_VetoCounter_5);
     fChain->SetBranchAddress("Veto_VetoCounter_6", &Veto_VetoCounter_6, &b_Veto_VetoCounter_6);
     fChain->SetBranchAddress("Veto_VetoCounter_7", &Veto_VetoCounter_7, &b_Veto_VetoCounter_7);
     fChain->SetBranchAddress("Veto_VetoCounter_8", &Veto_VetoCounter_8, &b_Veto_VetoCounter_8);
     fChain->SetBranchAddress("Veto_VetoCounter_9", &Veto_VetoCounter_9, &b_Veto_VetoCounter_9);
     fChain->SetBranchAddress("Veto_VetoCounter_10", &Veto_VetoCounter_10, &b_Veto_VetoCounter_10);
     fChain->SetBranchAddress("Veto_VetoCounter_11", &Veto_VetoCounter_11, &b_Veto_VetoCounter_11);
     fChain->SetBranchAddress("Veto_VetoCounter_12", &Veto_VetoCounter_12, &b_Veto_VetoCounter_12);
     fChain->SetBranchAddress("Veto_TestCounter_1", &Veto_TestCounter_1, &b_Veto_TestCounter_1);
     fChain->SetBranchAddress("Veto_TestCounter_2", &Veto_TestCounter_2, &b_Veto_TestCounter_2);
     fChain->SetBranchAddress("Empty_0", &Empty_0, &b_Empty_0);
     fChain->SetBranchAddress("Empty_1", &Empty_1, &b_Empty_1);
     fChain->SetBranchAddress("Veto_Veto_Count", &Veto_Veto_Count, &b_Veto_Veto_Count);
     fChain->SetBranchAddress("Veto_Trigger_Count", &Veto_Trigger_Count, &b_Veto_Trigger_Count);
     fChain->SetBranchAddress("Cherenkov_Inner_Count", &Cherenkov_Inner_Count, &b_Cherenkov_Inner_Count);
     fChain->SetBranchAddress("Cherenkov_Upstream_Count", &Cherenkov_Upstream_Count, &b_Cherenkov_Upstream_Count);
     fChain->SetBranchAddress("Veto_ADC_Monitor_Counter_1", &Veto_ADC_Monitor_Counter_1, &b_Veto_ADC_Monitor_Counter_1);
     fChain->SetBranchAddress("Veto_ADC_Monitor_Counter_2", &Veto_ADC_Monitor_Counter_2, &b_Veto_ADC_Monitor_Counter_2);
     fChain->SetBranchAddress("Veto_ADC_Monitor_Counter_3", &Veto_ADC_Monitor_Counter_3, &b_Veto_ADC_Monitor_Counter_3);
     fChain->SetBranchAddress("Veto_ADC_Monitor_Counter_4", &Veto_ADC_Monitor_Counter_4, &b_Veto_ADC_Monitor_Counter_4);
     fChain->SetBranchAddress("Veto_ADC_Monitor_Counter_5", &Veto_ADC_Monitor_Counter_5, &b_Veto_ADC_Monitor_Counter_5);
     fChain->SetBranchAddress("Veto_ADC_Monitor_Counter_6", &Veto_ADC_Monitor_Counter_6, &b_Veto_ADC_Monitor_Counter_6);
     fChain->SetBranchAddress("Veto_ADC_Monitor_Counter_7", &Veto_ADC_Monitor_Counter_7, &b_Veto_ADC_Monitor_Counter_7);
     fChain->SetBranchAddress("Veto_ADC_Monitor_Counter_8", &Veto_ADC_Monitor_Counter_8, &b_Veto_ADC_Monitor_Counter_8);
     fChain->SetBranchAddress("Veto_ADC_Monitor_Counter_9", &Veto_ADC_Monitor_Counter_9, &b_Veto_ADC_Monitor_Counter_9);
     fChain->SetBranchAddress("Veto_ADC_Monitor_Counter_10", &Veto_ADC_Monitor_Counter_10, &b_Veto_ADC_Monitor_Counter_10);
     fChain->SetBranchAddress("Veto_ADC_Monitor_Counter_11", &Veto_ADC_Monitor_Counter_11, &b_Veto_ADC_Monitor_Counter_11);
     fChain->SetBranchAddress("Veto_ADC_Monitor_Counter_12", &Veto_ADC_Monitor_Counter_12, &b_Veto_ADC_Monitor_Counter_12);
     fChain->SetBranchAddress("MT6SC_123Spill", &MT6SC_123Spill, &b_MT6SC_123Spill);
     fChain->SetBranchAddress("Cherenkov_Outer_Count", &Cherenkov_Outer_Count, &b_Cherenkov_Outer_Count);
     fChain->SetBranchAddress("ToF_Stop_Count", &ToF_Stop_Count, &b_ToF_Stop_Count);
     fChain->SetBranchAddress("$00_Count", &$00_Count, &b_$00_Count);
     fChain->SetBranchAddress("Crims_between", &Crims_between, &b_Crims_between);
     fChain->SetBranchAddress("Readout_duration", &Readout_duration, &b_Readout_duration);
     fChain->SetBranchAddress("ToF_Hit_Register", &ToF_Hit_Register, &b_ToF_Hit_Register);
     fChain->SetBranchAddress("ToF_LAM_Checks", &ToF_LAM_Checks, &b_ToF_LAM_Checks);
     fChain->SetBranchAddress("Good_event", &Good_event, &b_Good_event);*/
   Notify();
}

Bool_t AnalyzeSpill::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void AnalyzeSpill::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t AnalyzeSpill::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef AnalyzeSpill_cxx
