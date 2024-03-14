#ifndef LLVM_LIB_TARGET_SUS_SUSTARGETMACHINE_H
#define LLVM_LIB_TARGET_SUS_SUSTARGETMACHINE_H

#include "llvm/Target/TargetMachine.h"
#include <optional>

namespace llvm {
extern Target TheSUSTarget;

class SUSTargetMachine : public LLVMTargetMachine {
  std::unique_ptr<TargetLoweringObjectFile> TLOF;
public:
  SUSTargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                      StringRef FS, const TargetOptions &Options,
                      std::optional<Reloc::Model> RM,
                      std::optional<CodeModel::Model> CM, CodeGenOptLevel OL,
                      bool JIT, bool isLittle);

  SUSTargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                      StringRef FS, const TargetOptions &Options,
                      std::optional<Reloc::Model> RM,
                      std::optional<CodeModel::Model> CM, CodeGenOptLevel OL,
                      bool JIT);

  TargetPassConfig *createPassConfig(PassManagerBase &PM) override;
  TargetLoweringObjectFile *getObjFileLowering() const override {
    return TLOF.get();
  }
};
} // end namespace llvm

#endif // LLVM_LIB_TARGET_SUS_SUSTARGETMACHINE_H
