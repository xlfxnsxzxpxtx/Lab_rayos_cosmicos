void cuatrotarea9part(){

TFile *file  = TFile::Open("hawcsim_protons_M28L2000_nc.root"); //abriendo el archivo
TTree *arbol = (TTree*) file->Get("XCDF");
Int_t entradas = arbol->GetEntries();
Double_t Egy ;
ULong64_t nPE ;

arbol->SetBranchAddress("HAWCSim.Evt.Energy",&Egy);
arbol->SetBranchAddress("HAWCSim.Evt.nPE",&nPE);


TH2F *histo1  = new TH2F("histo1","PEs vs Energia",50,2,6,50,2.5,5);

for (Int_t i=0; i<entradas; i++){
  arbol->GetEntry(i);
  histo1->Fill(log10(Egy),log10(nPE));
    }

TCanvas *cb1 = new TCanvas("cb1","PEs vs energia",400,20,1400,1000);


    histo1->GetXaxis()->SetTitle("Energia primaria por GeV");
    histo1->GetYaxis()->SetTitle("Numero de PEs detectados");
    histo1->Draw("colz");
    cb1->SaveAs("parte4.png");
}
