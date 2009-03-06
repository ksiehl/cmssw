#include "CondFormats/BTauObjects/interface/BtagCorrectionPerformancePayloadFromTableEtaJetEt.h"
#include "FWCore/Utilities/interface/Exception.h"

BtagCorrectionPerformancePayloadFromTableEtaJetEt::BtagCorrectionPerformancePayloadFromTableEtaJetEt(int s, std::string c,std::vector<float> t): BtagPerformancePayloadFromTable(s, c, t) {
  if (s != 10) {
    throw cms::Exception("Trying to construct a BtagCorrectionPerformancePayloadFromTableEtaJetEt from a wrong payload");
  }
  
}
#include "FWCore/Framework/interface/EventSetup.h"
#include "FWCore/Framework/interface/ESHandle.h"
#include "FWCore/Framework/interface/ModuleFactory.h"

#include "FWCore/Framework/interface/eventsetupdata_registration_macro.h"
EVENTSETUP_DATA_REG(BtagCorrectionPerformancePayloadFromTableEtaJetEt);

