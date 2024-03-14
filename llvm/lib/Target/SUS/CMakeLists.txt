add_llvm_component_group(SUS)

add_llvm_target(SUSCodeGen
  SUSTargetMachine.cpp

  LINK_COMPONENTS
  CodeGen
  Core
  Support
  Target
  SUSInfo

  ADD_TO_COMPONENT
  SUS
  )

add_subdirectory(MCTargetDesc)
add_subdirectory(TargetInfo)