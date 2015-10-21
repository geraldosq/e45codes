#include "TTree.h"
#include "TBranch.h"
#include "TFile.h"
#include "TRandom3.h"
#include "TObject.h"
#include "TDirectory.h"
#include "TROOT.h"
#include "TClass.h"
#include <iostream>
#include <fstream>
#include <string>
//#include "Cintex/Cintex.h"


//These are the tuples used for this exercise
const string filename_muons("/minerva/data/users/wospakrk/acceptance/v3/z_5800/ntuples/acceptance_ntuple_z5800_theta10.0_p4.00_v3.root");
const string filename_minos("/minerva/data/users/wospakrk/acceptance/v3/z_5800/nogrid/central_value/minerva/dst/v10r8p6/00/00/00/10/SIM_minerva_00000010_0040_Reco_DST_v10r8p4_v10r8p6.root");

void AddBranch()
{

  //ROOT::Cintex::Cintex::Enable();

  //Load the data and Monte Carlo ntuples
  TFile *infile_minos = new TFile(filename_minos.c_str(),  "READ" );
  TFile *infile_muons = new TFile(filename_muons.c_str(),  "UPDATE" );

  // Load the CCInclusiveReco tree from the input root files
  TTree *tree_minos, *tree_muons;
  infile_minos->GetObject("minerva",tree_minos);
  infile_muons->GetObject("Muons",tree_muons);

  // Our ntuple consists of many branches
  // When we loop over the ntuple, we have to load these branches into variables
  double minos_trk_endx;
  double minos_trk_endy;
  double minos_trk_endz;
  double minos_trk_qp;
  double minos_trk_eqp;
  int minos_trk_idx;
  int minos_trk_minervatrk_idx;
  int minos_trk_quality;
  double minos_trk_pass;
  int minos_trk_con;

  Double_t minos_xf;
  Double_t minos_yf;
  Double_t minos_zf;
  Double_t minos_qp_eqp;
  Int_t minos_idx;
  Int_t minos_minervatrk_idx;
  Int_t minos_quality;
  Double_t minos_pass;
  Int_t minos_con;

  // These are the branches in the minos ntuple tree that need to be added to the muons tree
  TBranch *b_minos_trk_endx;
  TBranch *b_minos_trk_endy;
  TBranch *b_minos_trk_endz;
  TBranch *b_minos_trk_qp;
  TBranch *b_minos_trk_eqp;
  TBranch *b_minos_trk_idx;
  TBranch *b_minos_trk_minervatrk_idx;
  TBranch *b_minos_trk_quality;
  TBranch *b_minos_trk_pass;
  TBranch *b_minos_trk_con;

  // Map the branches in the mc ntuple to the appropriate variables
  tree_minos->SetBranchAddress("minos_trk_endx", &minos_trk_endx, &b_minos_trk_endx);
  tree_minos->SetBranchAddress("minos_trk_endy", &minos_trk_endy, &b_minos_trk_endy);
  tree_minos->SetBranchAddress("minos_trk_endz", &minos_trk_endz, &b_minos_trk_endz);
  tree_minos->SetBranchAddress("minos_trk_qp", &minos_trk_qp, &b_minos_trk_qp);
  tree_minos->SetBranchAddress("minos_trk_eqp", &minos_trk_eqp, &b_minos_trk_eqp);
  tree_minos->SetBranchAddress("minos_trk_idx", &minos_trk_idx, &b_minos_trk_idx);
  tree_minos->SetBranchAddress("minos_trk_minervatrk_idx", &minos_trk_minervatrk_idx, &b_minos_trk_minervatrk_idx);
  tree_minos->SetBranchAddress("minos_trk_quality", &minos_trk_quality, &b_minos_trk_quality);
  tree_minos->SetBranchAddress("minos_trk_pass", &minos_trk_pass, &b_minos_trk_pass);
  tree_minos->SetBranchAddress("minos_trk_con", &minos_trk_con, &b_minos_trk_con);


  //Create new branches to be filled with the value from the minos tree
  TBranch *b_minos_xf = tree_muons->Branch("minos_xf",&minos_xf,"minos_xf/D");
  TBranch *b_minos_yf = tree_muons->Branch("minos_yf",&minos_yf,"minos_yf/D");
  TBranch *b_minos_zf = tree_muons->Branch("minos_zf",&minos_zf,"minos_zf/D");
  TBranch *b_minos_qp_eqp = tree_muons->Branch("minos_qp_eqp",&minos_qp_eqp,"minos_qp_eqp/D");
  TBranch *b_minos_idx = tree_muons->Branch("minos_idx",&minos_idx,"minos_idx/I");
  TBranch *b_minos_minervatrk_idx = tree_muons->Branch("minos_minervatrk_idx",&minos_minervatrk_idx,"minos_minervatrk_idx/I");
  TBranch *b_minos_quality = tree_muons->Branch("minos_quality",&minos_quality,"minos_quality/I");
  TBranch *b_minos_pass = tree_muons->Branch("minos_pass",&minos_pass,"minos_pass/D");
  TBranch *b_minos_con = tree_muons->Branch("minos_con",&minos_con,"minos_con/I");

  // Loop over each entry in our Minos tree
  long nentries_minos = tree_minos->GetEntries();
  long nentries_muons = tree_muons->GetEntries();

  for (long i = 0; i<nentries_minos; i++){

    if(i<0) break;
    tree_minos->GetEntry(i);

    for (long j = 0; j<nentries_muons; j++){

      if(j<0) break;
      if(j != i ) continue;

      tree_muons->GetEntry(j);

      std::cout << "minos_qp = " << minos_trk_qp << std::endl;
      std::cout << "minos_eqp = " << minos_trk_eqp << std::endl;

      //Assign values
      minos_xf = (Double_t)minos_trk_endx;
      std::cout << "minos endx: " << minos_xf << std::endl;
      minos_yf = (Double_t)minos_trk_endy;
      minos_zf = (Double_t)minos_trk_endz;
      minos_qp_eqp = (Double_t)minos_trk_qp/(Double_t)minos_trk_eqp;
      minos_idx = minos_trk_idx;
      minos_minervatrk_idx = minos_trk_minervatrk_idx;
      minos_quality = minos_trk_quality;
      minos_pass = minos_trk_pass;
      minos_con = minos_trk_con;

      //Fill branches
      b_minos_xf->Fill();
      b_minos_yf->Fill();
      b_minos_zf->Fill();
      b_minos_qp_eqp->Fill();
      b_minos_idx->Fill();
      b_minos_minervatrk_idx->Fill();
      b_minos_quality->Fill();
      b_minos_pass->Fill();
      b_minos_con->Fill();

    }
  }

  tree_muons->ResetBranchAddresses();
  tree_minos->ResetBranchAddresses();

  //Write to the output TTree and close it
  tree_muons->Write("",TObject::kOverwrite);
  infile_muons->Close();

  //tree_muons->Write("",TObject::kOverwrite);

}
