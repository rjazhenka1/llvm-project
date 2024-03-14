add_llvm_component_library(LLVMSUSDesc
  SUSMCTargetDesc.cpp

  LINK_COMPONENTS
  MC
  Support
  SUSInfo

  ADD_TO_COMPONENT
  SUS
)
