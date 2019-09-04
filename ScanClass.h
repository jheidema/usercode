//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Jul  1 11:19:53 2019 by ROOT version 6.14/06
// from TTree PixTree/Pixie Event Tree
// found on file: fullfile_scan0.root
//////////////////////////////////////////////////////////

#ifndef ScanClass_h
#define ScanClass_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TF1.h>

// Header file for the classes stored in the TTree if any.
#include "ProcessorRootStruc.hpp"
#include "TObject.h"

class ScanClass {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxclover_vec_ = 16;
   static constexpr Int_t kMaxdoublebeta_vec_ = 2;
   static constexpr Int_t kMaxgamma_scint_vec_ = 1;
   static constexpr Int_t kMaxlogic_vec_ = 1;
   static constexpr Int_t kMaxpspmt_vec_ = 1;
   static constexpr Int_t kMaxroot_dev_vec_ = 1;
   static constexpr Int_t kMaxvandle_vec_ = 25;

   // Declaration of leaf types
 //PixTreeEvent    *PixTreeEvent;
   UInt_t          fUniqueID;
   UInt_t          fBits;
   ULong64_t       externalTS1;
   ULong64_t       externalTS2;
   Double_t        eventNum;
   string          fileName;
   Int_t           clover_vec__;
   Double_t        clover_vec__energy[kMaxclover_vec_];   //[clover_vec__]
   Double_t        clover_vec__rawEnergy[kMaxclover_vec_];   //[clover_vec__]
   Double_t        clover_vec__time[kMaxclover_vec_];   //[clover_vec__]
   Int_t           clover_vec__detNum[kMaxclover_vec_];   //[clover_vec__]
   Int_t           clover_vec__cloverNum[kMaxclover_vec_];   //[clover_vec__]
   Int_t           doublebeta_vec__;
   Int_t           doublebeta_vec__detNum[kMaxdoublebeta_vec_];   //[doublebeta_vec__]
   Double_t        doublebeta_vec__energy[kMaxdoublebeta_vec_];   //[doublebeta_vec__]
   Double_t        doublebeta_vec__rawEnergy[kMaxdoublebeta_vec_];   //[doublebeta_vec__]
   Double_t        doublebeta_vec__timeAvg[kMaxdoublebeta_vec_];   //[doublebeta_vec__]
   Double_t        doublebeta_vec__timeDiff[kMaxdoublebeta_vec_];   //[doublebeta_vec__]
   Double_t        doublebeta_vec__timeL[kMaxdoublebeta_vec_];   //[doublebeta_vec__]
   Double_t        doublebeta_vec__timeR[kMaxdoublebeta_vec_];   //[doublebeta_vec__]
   Double_t        doublebeta_vec__barQdc[kMaxdoublebeta_vec_];   //[doublebeta_vec__]
   Double_t        doublebeta_vec__tMaxValL[kMaxdoublebeta_vec_];   //[doublebeta_vec__]
   Double_t        doublebeta_vec__tMaxValR[kMaxdoublebeta_vec_];   //[doublebeta_vec__]
   Bool_t          doublebeta_vec__isLowResBeta[kMaxdoublebeta_vec_];   //[doublebeta_vec__]
   Bool_t          doublebeta_vec__isHighResBeta[kMaxdoublebeta_vec_];   //[doublebeta_vec__]
   Int_t           gamma_scint_vec__;
   Double_t        gamma_scint_vec__energy[kMaxgamma_scint_vec_];   //[gamma_scint_vec__]
   Double_t        gamma_scint_vec__rawEnergy[kMaxgamma_scint_vec_];   //[gamma_scint_vec__]
   Bool_t          gamma_scint_vec__isDynodeOut[kMaxgamma_scint_vec_];   //[gamma_scint_vec__]
   Int_t           gamma_scint_vec__detNum[kMaxgamma_scint_vec_];   //[gamma_scint_vec__]
   Double_t        gamma_scint_vec__time[kMaxgamma_scint_vec_];   //[gamma_scint_vec__]
   TString         gamma_scint_vec__group[kMaxgamma_scint_vec_];
   TString         gamma_scint_vec__subtype[kMaxgamma_scint_vec_];
   Int_t           logic_vec__;
   Bool_t          logic_vec__tapeCycleStatus[kMaxlogic_vec_];   //[logic_vec__]
   Bool_t          logic_vec__beamStatus[kMaxlogic_vec_];   //[logic_vec__]
   Bool_t          logic_vec__tapeMoving[kMaxlogic_vec_];   //[logic_vec__]
   Double_t        logic_vec__lastTapeCycleStartTime[kMaxlogic_vec_];   //[logic_vec__]
   Double_t        logic_vec__lastBeamOnTime[kMaxlogic_vec_];   //[logic_vec__]
   Double_t        logic_vec__lastBeamOffTime[kMaxlogic_vec_];   //[logic_vec__]
   Double_t        logic_vec__lastTapeMoveStartTime[kMaxlogic_vec_];   //[logic_vec__]
   Double_t        logic_vec__lastProtonPulseTime[kMaxlogic_vec_];   //[logic_vec__]
   Double_t        logic_vec__lastSuperCycleTime[kMaxlogic_vec_];   //[logic_vec__]
   Int_t           logic_vec__cycleNum[kMaxlogic_vec_];   //[logic_vec__]
   Int_t           pspmt_vec__;
   Double_t        pspmt_vec__energy[kMaxpspmt_vec_];   //[pspmt_vec__]
   Double_t        pspmt_vec__time[kMaxpspmt_vec_];   //[pspmt_vec__]
   TString         pspmt_vec__subtype[kMaxpspmt_vec_];
   TString         pspmt_vec__tag[kMaxpspmt_vec_];
   Double_t        pspmt_vec__traceMaxVal[kMaxpspmt_vec_];   //[pspmt_vec__]
   Int_t           pspmt_vec__traceMaxPos[kMaxpspmt_vec_];   //[pspmt_vec__]
   Double_t        pspmt_vec__preBaseAvg[kMaxpspmt_vec_];   //[pspmt_vec__]
   Double_t        pspmt_vec__postBaseAvg[kMaxpspmt_vec_];   //[pspmt_vec__]
   Bool_t          pspmt_vec__invalidTrace[kMaxpspmt_vec_];   //[pspmt_vec__]
   Int_t           root_dev_vec__;
   Double_t        root_dev_vec__energy[kMaxroot_dev_vec_];   //[root_dev_vec__]
   Double_t        root_dev_vec__rawEnergy[kMaxroot_dev_vec_];   //[root_dev_vec__]
   Double_t        root_dev_vec__timeSansCfd[kMaxroot_dev_vec_];   //[root_dev_vec__]
   Double_t        root_dev_vec__time[kMaxroot_dev_vec_];   //[root_dev_vec__]
   Int_t           root_dev_vec__detNum[kMaxroot_dev_vec_];   //[root_dev_vec__]
   Int_t           root_dev_vec__modNum[kMaxroot_dev_vec_];   //[root_dev_vec__]
   Int_t           root_dev_vec__chanNum[kMaxroot_dev_vec_];   //[root_dev_vec__]
   TString         root_dev_vec__subtype[kMaxroot_dev_vec_];
   TString         root_dev_vec__group[kMaxroot_dev_vec_];
   Bool_t          root_dev_vec__pileup[kMaxroot_dev_vec_];   //[root_dev_vec__]
   Bool_t          root_dev_vec__saturation[kMaxroot_dev_vec_];   //[root_dev_vec__]
   vector<unsigned int> root_dev_vec__trace[kMaxroot_dev_vec_];
   Double_t        root_dev_vec__tqdc[kMaxroot_dev_vec_];   //[root_dev_vec__]
   Int_t           root_dev_vec__maxPos[kMaxroot_dev_vec_];   //[root_dev_vec__]
   Double_t        root_dev_vec__maxVal[kMaxroot_dev_vec_];   //[root_dev_vec__]
   Double_t        root_dev_vec__highResTime[kMaxroot_dev_vec_];   //[root_dev_vec__]
   vector<unsigned int> root_dev_vec__qdcSums[kMaxroot_dev_vec_];
   Int_t           vandle_vec__;
   Double_t        vandle_vec__tof[kMaxvandle_vec_];   //[vandle_vec__]
   Double_t        vandle_vec__corTof[kMaxvandle_vec_];   //[vandle_vec__]
   Double_t        vandle_vec__qdcPos[kMaxvandle_vec_];   //[vandle_vec__]
   Double_t        vandle_vec__qdc[kMaxvandle_vec_];   //[vandle_vec__]
   Int_t           vandle_vec__barNum[kMaxvandle_vec_];   //[vandle_vec__]
   string          vandle_vec__barType[kMaxvandle_vec_];
   Double_t        vandle_vec__tdiff[kMaxvandle_vec_];   //[vandle_vec__]
   UInt_t          vandle_vec__sNum[kMaxvandle_vec_];   //[vandle_vec__]
   Int_t           vandle_vec__vMulti[kMaxvandle_vec_];   //[vandle_vec__]
   Double_t        vandle_vec__sTime[kMaxvandle_vec_];   //[vandle_vec__]
   Double_t        vandle_vec__sQdc[kMaxvandle_vec_];   //[vandle_vec__]

   // List of branches
   TBranch        *b_PixTreeEvent_fUniqueID;   //!
   TBranch        *b_PixTreeEvent_fBits;   //!
   TBranch        *b_PixTreeEvent_externalTS1;   //!
   TBranch        *b_PixTreeEvent_externalTS2;   //!
   TBranch        *b_PixTreeEvent_eventNum;   //!
   TBranch        *b_PixTreeEvent_fileName;   //!
   TBranch        *b_PixTreeEvent_clover_vec__;   //!
   TBranch        *b_clover_vec__energy;   //!
   TBranch        *b_clover_vec__rawEnergy;   //!
   TBranch        *b_clover_vec__time;   //!
   TBranch        *b_clover_vec__detNum;   //!
   TBranch        *b_clover_vec__cloverNum;   //!
   TBranch        *b_PixTreeEvent_doublebeta_vec__;   //!
   TBranch        *b_doublebeta_vec__detNum;   //!
   TBranch        *b_doublebeta_vec__energy;   //!
   TBranch        *b_doublebeta_vec__rawEnergy;   //!
   TBranch        *b_doublebeta_vec__timeAvg;   //!
   TBranch        *b_doublebeta_vec__timeDiff;   //!
   TBranch        *b_doublebeta_vec__timeL;   //!
   TBranch        *b_doublebeta_vec__timeR;   //!
   TBranch        *b_doublebeta_vec__barQdc;   //!
   TBranch        *b_doublebeta_vec__tMaxValL;   //!
   TBranch        *b_doublebeta_vec__tMaxValR;   //!
   TBranch        *b_doublebeta_vec__isLowResBeta;   //!
   TBranch        *b_doublebeta_vec__isHighResBeta;   //!
   TBranch        *b_PixTreeEvent_gamma_scint_vec__;   //!
   TBranch        *b_gamma_scint_vec__energy;   //!
   TBranch        *b_gamma_scint_vec__rawEnergy;   //!
   TBranch        *b_gamma_scint_vec__isDynodeOut;   //!
   TBranch        *b_gamma_scint_vec__detNum;   //!
   TBranch        *b_gamma_scint_vec__time;   //!
   TBranch        *b_gamma_scint_vec__group;   //!
   TBranch        *b_gamma_scint_vec__subtype;   //!
   TBranch        *b_PixTreeEvent_logic_vec__;   //!
   TBranch        *b_logic_vec__tapeCycleStatus;   //!
   TBranch        *b_logic_vec__beamStatus;   //!
   TBranch        *b_logic_vec__tapeMoving;   //!
   TBranch        *b_logic_vec__lastTapeCycleStartTime;   //!
   TBranch        *b_logic_vec__lastBeamOnTime;   //!
   TBranch        *b_logic_vec__lastBeamOffTime;   //!
   TBranch        *b_logic_vec__lastTapeMoveStartTime;   //!
   TBranch        *b_logic_vec__lastProtonPulseTime;   //!
   TBranch        *b_logic_vec__lastSuperCycleTime;   //!
   TBranch        *b_logic_vec__cycleNum;   //!
   TBranch        *b_PixTreeEvent_pspmt_vec__;   //!
   TBranch        *b_pspmt_vec__energy;   //!
   TBranch        *b_pspmt_vec__time;   //!
   TBranch        *b_pspmt_vec__subtype;   //!
   TBranch        *b_pspmt_vec__tag;   //!
   TBranch        *b_pspmt_vec__traceMaxVal;   //!
   TBranch        *b_pspmt_vec__traceMaxPos;   //!
   TBranch        *b_pspmt_vec__preBaseAvg;   //!
   TBranch        *b_pspmt_vec__postBaseAvg;   //!
   TBranch        *b_pspmt_vec__invalidTrace;   //!
   TBranch        *b_PixTreeEvent_root_dev_vec__;   //!
   TBranch        *b_root_dev_vec__energy;   //!
   TBranch        *b_root_dev_vec__rawEnergy;   //!
   TBranch        *b_root_dev_vec__timeSansCfd;   //!
   TBranch        *b_root_dev_vec__time;   //!
   TBranch        *b_root_dev_vec__detNum;   //!
   TBranch        *b_root_dev_vec__modNum;   //!
   TBranch        *b_root_dev_vec__chanNum;   //!
   TBranch        *b_root_dev_vec__subtype;   //!
   TBranch        *b_root_dev_vec__group;   //!
   TBranch        *b_root_dev_vec__pileup;   //!
   TBranch        *b_root_dev_vec__saturation;   //!
   TBranch        *b_root_dev_vec__trace;   //!
   TBranch        *b_root_dev_vec__tqdc;   //!
   TBranch        *b_root_dev_vec__maxPos;   //!
   TBranch        *b_root_dev_vec__maxVal;   //!
   TBranch        *b_root_dev_vec__highResTime;   //!
   TBranch        *b_root_dev_vec__qdcSums;   //!
   TBranch        *b_PixTreeEvent_vandle_vec__;   //!
   TBranch        *b_vandle_vec__tof;   //!
   TBranch        *b_vandle_vec__corTof;   //!
   TBranch        *b_vandle_vec__qdcPos;   //!
   TBranch        *b_vandle_vec__qdc;   //!
   TBranch        *b_vandle_vec__barNum;   //!
   TBranch        *b_vandle_vec__barType;   //!
   TBranch        *b_vandle_vec__tdiff;   //!
   TBranch        *b_vandle_vec__sNum;   //!
   TBranch        *b_vandle_vec__vMulti;   //!
   TBranch        *b_vandle_vec__sTime;   //!
   TBranch        *b_vandle_vec__sQdc;   //!

   TF1 *fCorr;
   Double_t *pars;
   Double_t prs[6] = {5.69884e+03,2.69818e+00,7.10562e-01,-7.64014e-04,-7.59803e-06,2.01583e-09};


   //New Root Structure
   std::vector<Double_t> vToF;
   std::vector<Double_t> En;
   std::vector<Double_t> QDC;
   std::vector<Double_t> cloverE;
   
   ScanClass(TTree *tree=0);
   virtual ~ScanClass();
   virtual Int_t      Cut(Long64_t entry);
   virtual Int_t      GetEntry(Long64_t entry);
   virtual Long64_t   LoadTree(Long64_t entry);
   virtual void       Init(TTree *tree);
   virtual void       Loop(Long64_t nentries = -1);
   virtual Bool_t     Notify();
   virtual void       Show(Long64_t entry = -1);
   virtual Bool_t     FillRootStruc(Long64_t entry);
   virtual void       ZeroRootStruc();
   virtual void       SetParameters(Double_t *p); 
   virtual Double_t   WCorrToF(Double_t iToF, Double_t qdc);
};

#endif

#ifdef ScanClass_cxx
ScanClass::ScanClass(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("fullfile_scan0.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("fullfile_scan0.root");
      }
      f->GetObject("PixTree",tree);

   }
   Init(tree);
}

ScanClass::~ScanClass()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
   fCorr->Delete();
}

Int_t ScanClass::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t ScanClass::LoadTree(Long64_t entry)
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

void ScanClass::Init(TTree *tree)
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

   fChain->SetBranchAddress("fUniqueID", &fUniqueID, &b_PixTreeEvent_fUniqueID);
   fChain->SetBranchAddress("fBits", &fBits, &b_PixTreeEvent_fBits);
   fChain->SetBranchAddress("externalTS1", &externalTS1, &b_PixTreeEvent_externalTS1);
   fChain->SetBranchAddress("externalTS2", &externalTS2, &b_PixTreeEvent_externalTS2);
   fChain->SetBranchAddress("eventNum", &eventNum, &b_PixTreeEvent_eventNum);
   fChain->SetBranchAddress("fileName", &fileName, &b_PixTreeEvent_fileName);
   fChain->SetBranchAddress("clover_vec_", &clover_vec__, &b_PixTreeEvent_clover_vec__);
   fChain->SetBranchAddress("clover_vec_.energy", clover_vec__energy, &b_clover_vec__energy);
   fChain->SetBranchAddress("clover_vec_.rawEnergy", clover_vec__rawEnergy, &b_clover_vec__rawEnergy);
   fChain->SetBranchAddress("clover_vec_.time", clover_vec__time, &b_clover_vec__time);
   fChain->SetBranchAddress("clover_vec_.detNum", clover_vec__detNum, &b_clover_vec__detNum);
   fChain->SetBranchAddress("clover_vec_.cloverNum", clover_vec__cloverNum, &b_clover_vec__cloverNum);
   fChain->SetBranchAddress("doublebeta_vec_", &doublebeta_vec__, &b_PixTreeEvent_doublebeta_vec__);
   fChain->SetBranchAddress("doublebeta_vec_.detNum", doublebeta_vec__detNum, &b_doublebeta_vec__detNum);
   fChain->SetBranchAddress("doublebeta_vec_.energy", doublebeta_vec__energy, &b_doublebeta_vec__energy);
   fChain->SetBranchAddress("doublebeta_vec_.rawEnergy", doublebeta_vec__rawEnergy, &b_doublebeta_vec__rawEnergy);
   fChain->SetBranchAddress("doublebeta_vec_.timeAvg", doublebeta_vec__timeAvg, &b_doublebeta_vec__timeAvg);
   fChain->SetBranchAddress("doublebeta_vec_.timeDiff", doublebeta_vec__timeDiff, &b_doublebeta_vec__timeDiff);
   fChain->SetBranchAddress("doublebeta_vec_.timeL", doublebeta_vec__timeL, &b_doublebeta_vec__timeL);
   fChain->SetBranchAddress("doublebeta_vec_.timeR", doublebeta_vec__timeR, &b_doublebeta_vec__timeR);
   fChain->SetBranchAddress("doublebeta_vec_.barQdc", doublebeta_vec__barQdc, &b_doublebeta_vec__barQdc);
   fChain->SetBranchAddress("doublebeta_vec_.tMaxValL", doublebeta_vec__tMaxValL, &b_doublebeta_vec__tMaxValL);
   fChain->SetBranchAddress("doublebeta_vec_.tMaxValR", doublebeta_vec__tMaxValR, &b_doublebeta_vec__tMaxValR);
   fChain->SetBranchAddress("doublebeta_vec_.isLowResBeta", doublebeta_vec__isLowResBeta, &b_doublebeta_vec__isLowResBeta);
   fChain->SetBranchAddress("doublebeta_vec_.isHighResBeta", doublebeta_vec__isHighResBeta, &b_doublebeta_vec__isHighResBeta);
   fChain->SetBranchAddress("gamma_scint_vec_", &gamma_scint_vec__, &b_PixTreeEvent_gamma_scint_vec__);
   fChain->SetBranchAddress("gamma_scint_vec_.energy", &gamma_scint_vec__energy, &b_gamma_scint_vec__energy);
   fChain->SetBranchAddress("gamma_scint_vec_.rawEnergy", &gamma_scint_vec__rawEnergy, &b_gamma_scint_vec__rawEnergy);
   fChain->SetBranchAddress("gamma_scint_vec_.isDynodeOut", &gamma_scint_vec__isDynodeOut, &b_gamma_scint_vec__isDynodeOut);
   fChain->SetBranchAddress("gamma_scint_vec_.detNum", &gamma_scint_vec__detNum, &b_gamma_scint_vec__detNum);
   fChain->SetBranchAddress("gamma_scint_vec_.time", &gamma_scint_vec__time, &b_gamma_scint_vec__time);
   fChain->SetBranchAddress("gamma_scint_vec_.group", &gamma_scint_vec__group, &b_gamma_scint_vec__group);
   fChain->SetBranchAddress("gamma_scint_vec_.subtype", &gamma_scint_vec__subtype, &b_gamma_scint_vec__subtype);
   fChain->SetBranchAddress("logic_vec_", &logic_vec__, &b_PixTreeEvent_logic_vec__);
   fChain->SetBranchAddress("logic_vec_.tapeCycleStatus", logic_vec__tapeCycleStatus, &b_logic_vec__tapeCycleStatus);
   fChain->SetBranchAddress("logic_vec_.beamStatus", logic_vec__beamStatus, &b_logic_vec__beamStatus);
   fChain->SetBranchAddress("logic_vec_.tapeMoving", logic_vec__tapeMoving, &b_logic_vec__tapeMoving);
   fChain->SetBranchAddress("logic_vec_.lastTapeCycleStartTime", logic_vec__lastTapeCycleStartTime, &b_logic_vec__lastTapeCycleStartTime);
   fChain->SetBranchAddress("logic_vec_.lastBeamOnTime", logic_vec__lastBeamOnTime, &b_logic_vec__lastBeamOnTime);
   fChain->SetBranchAddress("logic_vec_.lastBeamOffTime", logic_vec__lastBeamOffTime, &b_logic_vec__lastBeamOffTime);
   fChain->SetBranchAddress("logic_vec_.lastTapeMoveStartTime", logic_vec__lastTapeMoveStartTime, &b_logic_vec__lastTapeMoveStartTime);
   fChain->SetBranchAddress("logic_vec_.lastProtonPulseTime", logic_vec__lastProtonPulseTime, &b_logic_vec__lastProtonPulseTime);
   fChain->SetBranchAddress("logic_vec_.lastSuperCycleTime", logic_vec__lastSuperCycleTime, &b_logic_vec__lastSuperCycleTime);
   fChain->SetBranchAddress("logic_vec_.cycleNum", logic_vec__cycleNum, &b_logic_vec__cycleNum);
   fChain->SetBranchAddress("pspmt_vec_", &pspmt_vec__, &b_PixTreeEvent_pspmt_vec__);
   fChain->SetBranchAddress("pspmt_vec_.energy", &pspmt_vec__energy, &b_pspmt_vec__energy);
   fChain->SetBranchAddress("pspmt_vec_.time", &pspmt_vec__time, &b_pspmt_vec__time);
   fChain->SetBranchAddress("pspmt_vec_.subtype", &pspmt_vec__subtype, &b_pspmt_vec__subtype);
   fChain->SetBranchAddress("pspmt_vec_.tag", &pspmt_vec__tag, &b_pspmt_vec__tag);
   fChain->SetBranchAddress("pspmt_vec_.traceMaxVal", &pspmt_vec__traceMaxVal, &b_pspmt_vec__traceMaxVal);
   fChain->SetBranchAddress("pspmt_vec_.traceMaxPos", &pspmt_vec__traceMaxPos, &b_pspmt_vec__traceMaxPos);
   fChain->SetBranchAddress("pspmt_vec_.preBaseAvg", &pspmt_vec__preBaseAvg, &b_pspmt_vec__preBaseAvg);
   fChain->SetBranchAddress("pspmt_vec_.postBaseAvg", &pspmt_vec__postBaseAvg, &b_pspmt_vec__postBaseAvg);
   fChain->SetBranchAddress("pspmt_vec_.invalidTrace", &pspmt_vec__invalidTrace, &b_pspmt_vec__invalidTrace);
   fChain->SetBranchAddress("root_dev_vec_", &root_dev_vec__, &b_PixTreeEvent_root_dev_vec__);
   fChain->SetBranchAddress("root_dev_vec_.energy", &root_dev_vec__energy, &b_root_dev_vec__energy);
   fChain->SetBranchAddress("root_dev_vec_.rawEnergy", &root_dev_vec__rawEnergy, &b_root_dev_vec__rawEnergy);
   fChain->SetBranchAddress("root_dev_vec_.timeSansCfd", &root_dev_vec__timeSansCfd, &b_root_dev_vec__timeSansCfd);
   fChain->SetBranchAddress("root_dev_vec_.time", &root_dev_vec__time, &b_root_dev_vec__time);
   fChain->SetBranchAddress("root_dev_vec_.detNum", &root_dev_vec__detNum, &b_root_dev_vec__detNum);
   fChain->SetBranchAddress("root_dev_vec_.modNum", &root_dev_vec__modNum, &b_root_dev_vec__modNum);
   fChain->SetBranchAddress("root_dev_vec_.chanNum", &root_dev_vec__chanNum, &b_root_dev_vec__chanNum);
   fChain->SetBranchAddress("root_dev_vec_.subtype", &root_dev_vec__subtype, &b_root_dev_vec__subtype);
   fChain->SetBranchAddress("root_dev_vec_.group", &root_dev_vec__group, &b_root_dev_vec__group);
   fChain->SetBranchAddress("root_dev_vec_.pileup", &root_dev_vec__pileup, &b_root_dev_vec__pileup);
   fChain->SetBranchAddress("root_dev_vec_.saturation", &root_dev_vec__saturation, &b_root_dev_vec__saturation);
   fChain->SetBranchAddress("root_dev_vec_.trace", &root_dev_vec__trace, &b_root_dev_vec__trace);
   fChain->SetBranchAddress("root_dev_vec_.tqdc", &root_dev_vec__tqdc, &b_root_dev_vec__tqdc);
   fChain->SetBranchAddress("root_dev_vec_.maxPos", &root_dev_vec__maxPos, &b_root_dev_vec__maxPos);
   fChain->SetBranchAddress("root_dev_vec_.maxVal", &root_dev_vec__maxVal, &b_root_dev_vec__maxVal);
   fChain->SetBranchAddress("root_dev_vec_.highResTime", &root_dev_vec__highResTime, &b_root_dev_vec__highResTime);
   fChain->SetBranchAddress("root_dev_vec_.qdcSums", &root_dev_vec__qdcSums, &b_root_dev_vec__qdcSums);
   fChain->SetBranchAddress("vandle_vec_", &vandle_vec__, &b_PixTreeEvent_vandle_vec__);
   fChain->SetBranchAddress("vandle_vec_.tof", vandle_vec__tof, &b_vandle_vec__tof);
   fChain->SetBranchAddress("vandle_vec_.corTof", vandle_vec__corTof, &b_vandle_vec__corTof);
   fChain->SetBranchAddress("vandle_vec_.qdcPos", vandle_vec__qdcPos, &b_vandle_vec__qdcPos);
   fChain->SetBranchAddress("vandle_vec_.qdc", vandle_vec__qdc, &b_vandle_vec__qdc);
   fChain->SetBranchAddress("vandle_vec_.barNum", vandle_vec__barNum, &b_vandle_vec__barNum);
   fChain->SetBranchAddress("vandle_vec_.barType", vandle_vec__barType, &b_vandle_vec__barType);
   fChain->SetBranchAddress("vandle_vec_.tdiff", vandle_vec__tdiff, &b_vandle_vec__tdiff);
   fChain->SetBranchAddress("vandle_vec_.sNum", vandle_vec__sNum, &b_vandle_vec__sNum);
   fChain->SetBranchAddress("vandle_vec_.vMulti", vandle_vec__vMulti, &b_vandle_vec__vMulti);
   fChain->SetBranchAddress("vandle_vec_.sTime", vandle_vec__sTime, &b_vandle_vec__sTime);
   fChain->SetBranchAddress("vandle_vec_.sQdc", vandle_vec__sQdc, &b_vandle_vec__sQdc);
   Notify();

   //Init Functions, Graphs, etc...

   fCorr = new TF1("fCorr","[1]+(x<=[0])*([2]*exp([3]*x))+(x>[0])*([4]*x+[5]*x*x)-3.34",0,30000);
   
}

Bool_t ScanClass::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void ScanClass::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t ScanClass::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}

void ScanClass::ZeroRootStruc(){
  vToF.clear();
  En.clear();
  QDC.clear();
  cloverE.clear();
}

Bool_t ScanClass::FillRootStruc(Long64_t entry){
  Bool_t goodEvent = false;
  GetEntry(entry);
  //  fCorr->SetParameters(pars);
  if(vandle_vec__>0){goodEvent = true;
    for (int iV=0; iV<vandle_vec__; iV++){
      vToF.push_back(WCorrToF(vandle_vec__corTof[iV],vandle_vec__qdc[iV]));
      QDC.push_back(vandle_vec__qdc[iV]);
      En.push_back(-9999);
    }

    for (int iC=0; iC<clover_vec__; iC++){
      cloverE.push_back(clover_vec__energy[iC]);
    }
  }
  return goodEvent;
}

void ScanClass::SetParameters(Double_t *p){
  fCorr->SetParameters(p);
}

Double_t ScanClass::WCorrToF(Double_t iToF, Double_t qdc){
  if(iToF<0) return -9999;
  double corr = fCorr->Eval(qdc);
  double newToF = iToF-corr;
  if (newToF<-200&&newToF>600) return -9999;
  else return newToF;
}

#endif // #ifdef ScanClass_cxx
