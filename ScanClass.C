#define ScanClass_cxx
#include "ScanClass.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>

void ScanClass::Loop(Long64_t nentries)
{
//   In a ROOT session, you can do:
//      root> .L ScanClass.C
//      root> ScanClass t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
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
   if (fChain == 0) return;

   if (nentries == -1) nentries = fChain->GetEntriesFast();

   TFile *outF = new TFile("ScanOut.root","RECREATE");
   TTree *scanTree = new TTree("T","ScanOut Tree");
   scanTree->Branch("event",&eventNum,"event/D");
   scanTree->Branch("vToF",&vToF);
   scanTree->Branch("En",&En);
   scanTree->Branch("QDC",&QDC);
   scanTree->Branch("cloverE",&cloverE);
   //scanTree->Branch("vToF",&vToF);

   SetParameters(prs);
   Bool_t gEvent=false;
   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
     if (jentry%1000==0) cout<<"\rComputing Entry " << jentry << " of " << nentries << flush;
     Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      gEvent = FillRootStruc(jentry);
      if (!gEvent){ZeroRootStruc(); continue;}
      else {scanTree->Fill(); ZeroRootStruc(); gEvent = false;}
   }
   cout << "\nDone Scanning" << endl;
   scanTree->Write();
   outF->Close();
}
