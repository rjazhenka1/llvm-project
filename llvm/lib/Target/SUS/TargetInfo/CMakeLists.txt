add_llvm_component_library(LLVMSUSInfo
  SUSTargetInfo.cpp

  LINK_COMPONENTS
  MC
  Support

  ADD_TO_COMPONENT
  SUS
  )