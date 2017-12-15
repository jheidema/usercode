{
  gROOT->Reset();
   TCanvas *c1 = new TCanvas("c1","A Simple Graph Example",200,10,700,500);
   Double_t x[100], y[100];
   Int_t n = 20;
   for (Int_t i=0;i<n;i++) {
     x[i] = i*0.1;
     y[i] = 10*sin(x[i]);
   }
   gr = new TGraph(n,x,y);
   gr->Draw("AC*");
//   gr->Print("all");
   //search points (may be more than 1)
   Int_t j = 0;
   for (j=0;j<n;j++) {
//      if (TMath::AreEqualRel(0.5,gr->GetX()[j],1e-6)) {
         printf("found point %d with Yget=%g, Yeval=%g\n",j,gr->GetY()[j],gr->Eval(j*0.1));
//      }
   }
   return c1;
}
