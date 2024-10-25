[Defines]
  PLATFORM_NAME           = UEFIDiagTool
  PLATFORM_GUID           = 31706e56-a8e4-4d06-aae4-b4ca78a44c58
  PLATFORM_VERSION        = 0.01.0016
  DSC_SPECIFICATION       = 0x00010005
  OUTPUT_DIRECTORY        = Build/UEFIDiagTool/v0.1.16
  SUPPORTED_ARCHITECTURES = X64
  BUILD_TARGETS           = DEBUG | RELEASE

[LibraryClasses]
  UefiBootServicesTableLib|MdePkg/Library/UefiBootServicesTableLib/UefiBootServicesTableLib.inf
  UefiLib|MdePkg/Library/UefiLib/UefiLib.inf
  BaseLib|MdePkg/Library/BaseLib/BaseLib.inf
  PrintLib|MdePkg/Library/BasePrintLib/BasePrintLib.inf 
  DebugLib|MdePkg/Library/BaseDebugLibNull/BaseDebugLibNull.inf
  PcdLib|MdePkg/Library/DxePcdLib/DxePcdLib.inf
  BaseMemoryLib|MdePkg/Library/BaseMemoryLib/BaseMemoryLib.inf
  RegisterFilterLib|MdePkg/Library/RegisterFilterLibNull/RegisterFilterLibNull.inf
  MemoryAllocationLib|MdePkg/Library/UefiMemoryAllocationLib/UefiMemoryAllocationLib.inf
  DevicePathLib|MdePkg/Library/UefiDevicePathLib/UefiDevicePathLib.inf
  UefiRuntimeServicesTableLib|MdePkg/Library/UefiRuntimeServicesTableLib/UefiRuntimeServicesTableLib.inf
  ShellCEntryLib|ShellPkg/Library/UefiShellCEntryLib/UefiShellCEntryLib.inf  # Added for argument handling

[Components]
  UEFIDiagToolPkg/UEFIDiagTool/UEFIDiagTool.inf



