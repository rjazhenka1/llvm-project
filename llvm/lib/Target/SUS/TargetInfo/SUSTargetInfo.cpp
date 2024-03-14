#include "TargetInfo/SUSTargetInfo.h"
#include "llvm/MC/TargetRegistry.h"
using namespace llvm;

Target &llvm::getTheSUSTarget() {
  static Target TheSUSTarget;
  return TheSUSTarget;
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeSUSTargetInfo() {
  RegisterTarget<Triple::sus> X(getTheSUSTarget(), "sus", "Surprisingly Usable (instruction) Set",
                                   "SUS");
}
