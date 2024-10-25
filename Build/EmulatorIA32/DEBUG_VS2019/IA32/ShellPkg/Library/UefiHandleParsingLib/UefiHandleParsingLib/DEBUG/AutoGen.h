/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_3CDC7177_CC2A_4678_BA8F_1A936A093FA4
#define _AUTOGENH_3CDC7177_CC2A_4678_BA8F_1A936A093FA4

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0x6CE3DE22

// Guids
extern EFI_GUID gEfiFileInfoGuid;
extern EFI_GUID gEfiShellEnvironment2ExtGuid;
extern EFI_GUID gEfiPcAnsiGuid;
extern EFI_GUID gEfiVT100Guid;
extern EFI_GUID gEfiVT100PlusGuid;
extern EFI_GUID gEfiVTUTF8Guid;
extern EFI_GUID gEfiStandardErrorDeviceGuid;
extern EFI_GUID gEfiConsoleInDeviceGuid;
extern EFI_GUID gEfiConsoleOutDeviceGuid;
extern EFI_GUID gEfiFileSystemInfoGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiPartTypeSystemPartGuid;
extern EFI_GUID gEfiPartTypeLegacyMbrGuid;
extern EFI_GUID gHandleParsingHiiGuid;
extern EFI_GUID gEfiAdapterInfoMediaStateGuid;
extern EFI_GUID gEfiAdapterInfoNetworkBootGuid;
extern EFI_GUID gEfiAdapterInfoSanMacAddressGuid;
extern EFI_GUID gEfiAdapterInfoUndiIpv6SupportGuid;
extern EFI_GUID gEfiShellPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiShellProtocolGuid;
extern EFI_GUID gEfiShellParametersProtocolGuid;
extern EFI_GUID gEfiShellEnvironment2Guid;
extern EFI_GUID gEfiShellInterfaceGuid;
extern EFI_GUID gEfiUnicodeCollation2ProtocolGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEfiBusSpecificDriverOverrideProtocolGuid;
extern EFI_GUID gEfiDevicePathUtilitiesProtocolGuid;
extern EFI_GUID gEfiDevicePathFromTextProtocolGuid;
extern EFI_GUID gEfiPlatformDriverOverrideProtocolGuid;
extern EFI_GUID gEfiSimpleTextInProtocolGuid;
extern EFI_GUID gEfiPlatformToDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverSupportedEfiVersionProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiLoadedImageDevicePathProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiSimplePointerProtocolGuid;
extern EFI_GUID gEfiAbsolutePointerProtocolGuid;
extern EFI_GUID gEfiSerialIoProtocolGuid;
extern EFI_GUID gEfiEdidDiscoveredProtocolGuid;
extern EFI_GUID gEfiEdidActiveProtocolGuid;
extern EFI_GUID gEfiEdidOverrideProtocolGuid;
extern EFI_GUID gEfiLoadFileProtocolGuid;
extern EFI_GUID gEfiLoadFile2ProtocolGuid;
extern EFI_GUID gEfiTapeIoProtocolGuid;
extern EFI_GUID gEfiDiskIoProtocolGuid;
extern EFI_GUID gEfiBlockIoProtocolGuid;
extern EFI_GUID gEfiUnicodeCollationProtocolGuid;
extern EFI_GUID gEfiPciRootBridgeIoProtocolGuid;
extern EFI_GUID gEfiPciIoProtocolGuid;
extern EFI_GUID gEfiScsiPassThruProtocolGuid;
extern EFI_GUID gEfiScsiIoProtocolGuid;
extern EFI_GUID gEfiExtScsiPassThruProtocolGuid;
extern EFI_GUID gEfiIScsiInitiatorNameProtocolGuid;
extern EFI_GUID gEfiUsbIoProtocolGuid;
extern EFI_GUID gEfiUsbHcProtocolGuid;
extern EFI_GUID gEfiUsb2HcProtocolGuid;
extern EFI_GUID gEfiDebugSupportProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiDecompressProtocolGuid;
extern EFI_GUID gEfiAcpiTableProtocolGuid;
extern EFI_GUID gEfiEbcProtocolGuid;
extern EFI_GUID gEfiSimpleNetworkProtocolGuid;
extern EFI_GUID gEfiNetworkInterfaceIdentifierProtocolGuid;
extern EFI_GUID gEfiNetworkInterfaceIdentifierProtocolGuid_31;
extern EFI_GUID gEfiPxeBaseCodeProtocolGuid;
extern EFI_GUID gEfiPxeBaseCodeCallbackProtocolGuid;
extern EFI_GUID gEfiBisProtocolGuid;
extern EFI_GUID gEfiManagedNetworkServiceBindingProtocolGuid;
extern EFI_GUID gEfiManagedNetworkProtocolGuid;
extern EFI_GUID gEfiArpServiceBindingProtocolGuid;
extern EFI_GUID gEfiArpProtocolGuid;
extern EFI_GUID gEfiDhcp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiDhcp4ProtocolGuid;
extern EFI_GUID gEfiTcp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiTcp4ProtocolGuid;
extern EFI_GUID gEfiIp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiIp4ProtocolGuid;
extern EFI_GUID gEfiIp4ConfigProtocolGuid;
extern EFI_GUID gEfiIp4Config2ProtocolGuid;
extern EFI_GUID gEfiUdp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiUdp4ProtocolGuid;
extern EFI_GUID gEfiMtftp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiMtftp4ProtocolGuid;
extern EFI_GUID gEfiAuthenticationInfoProtocolGuid;
extern EFI_GUID gEfiHashServiceBindingProtocolGuid;
extern EFI_GUID gEfiHashProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiHiiStringProtocolGuid;
extern EFI_GUID gEfiHiiImageProtocolGuid;
extern EFI_GUID gEfiHiiConfigRoutingProtocolGuid;
extern EFI_GUID gEfiHiiConfigAccessProtocolGuid;
extern EFI_GUID gEfiFormBrowser2ProtocolGuid;
extern EFI_GUID gEfiDeviceIoProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiUgaIoProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiSimpleTextInputExProtocolGuid;
extern EFI_GUID gEfiIp6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiIp6ProtocolGuid;
extern EFI_GUID gEfiIp6ConfigProtocolGuid;
extern EFI_GUID gEfiMtftp6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiMtftp6ProtocolGuid;
extern EFI_GUID gEfiDhcp6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiDhcp6ProtocolGuid;
extern EFI_GUID gEfiUdp6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiUdp6ProtocolGuid;
extern EFI_GUID gEfiTcp6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiTcp6ProtocolGuid;
extern EFI_GUID gEfiVlanConfigProtocolGuid;
extern EFI_GUID gEfiEapProtocolGuid;
extern EFI_GUID gEfiEapManagementProtocolGuid;
extern EFI_GUID gEfiFtp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiFtp4ProtocolGuid;
extern EFI_GUID gEfiIpSecConfigProtocolGuid;
extern EFI_GUID gEfiDriverHealthProtocolGuid;
extern EFI_GUID gEfiDeferredImageLoadProtocolGuid;
extern EFI_GUID gEfiUserCredentialProtocolGuid;
extern EFI_GUID gEfiUserManagerProtocolGuid;
extern EFI_GUID gEfiAtaPassThruProtocolGuid;
extern EFI_GUID gEfiFirmwareManagementProtocolGuid;
extern EFI_GUID gEfiIpSecProtocolGuid;
extern EFI_GUID gEfiIpSec2ProtocolGuid;
extern EFI_GUID gEfiKmsProtocolGuid;
extern EFI_GUID gEfiBlockIo2ProtocolGuid;
extern EFI_GUID gEfiStorageSecurityCommandProtocolGuid;
extern EFI_GUID gEfiUserCredential2ProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiTcgProtocolGuid;
extern EFI_GUID gEfiHiiPackageListProtocolGuid;
extern EFI_GUID gEfiDriverFamilyOverrideProtocolGuid;
extern EFI_GUID gEfiIdeControllerInitProtocolGuid;
extern EFI_GUID gEfiDiskIo2ProtocolGuid;
extern EFI_GUID gEfiAdapterInformationProtocolGuid;
extern EFI_GUID gEfiShellDynamicCommandProtocolGuid;
extern EFI_GUID gEfiDiskInfoProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiBdsArchProtocolGuid;
extern EFI_GUID gEfiCpuArchProtocolGuid;
extern EFI_GUID gEfiMetronomeArchProtocolGuid;
extern EFI_GUID gEfiMonotonicCounterArchProtocolGuid;
extern EFI_GUID gEfiRealTimeClockArchProtocolGuid;
extern EFI_GUID gEfiResetArchProtocolGuid;
extern EFI_GUID gEfiRuntimeArchProtocolGuid;
extern EFI_GUID gEfiSecurityArchProtocolGuid;
extern EFI_GUID gEfiTimerArchProtocolGuid;
extern EFI_GUID gEfiVariableWriteArchProtocolGuid;
extern EFI_GUID gEfiVariableArchProtocolGuid;
extern EFI_GUID gEfiSecurityPolicyProtocolGuid;
extern EFI_GUID gEfiWatchdogTimerArchProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gEfiSmbusHcProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiFirmwareVolumeBlockProtocolGuid;
extern EFI_GUID gEfiCapsuleArchProtocolGuid;
extern EFI_GUID gEfiMpServiceProtocolGuid;
extern EFI_GUID gEfiPciHostBridgeResourceAllocationProtocolGuid;
extern EFI_GUID gEfiPciPlatformProtocolGuid;
extern EFI_GUID gEfiPciOverrideProtocolGuid;
extern EFI_GUID gEfiPciEnumerationCompleteProtocolGuid;
extern EFI_GUID gEfiIncompatiblePciDeviceSupportProtocolGuid;
extern EFI_GUID gEfiPciHotPlugInitProtocolGuid;
extern EFI_GUID gEfiPciHotPlugRequestProtocolGuid;
extern EFI_GUID gEfiSmbiosProtocolGuid;
extern EFI_GUID gEfiS3SaveStateProtocolGuid;
extern EFI_GUID gEfiS3SmmSaveStateProtocolGuid;
extern EFI_GUID gEfiRscHandlerProtocolGuid;
extern EFI_GUID gEfiSmmRscHandlerProtocolGuid;
extern EFI_GUID gEfiAcpiSdtProtocolGuid;
extern EFI_GUID gEfiSioProtocolGuid;
extern EFI_GUID gEfiSmmCpuIo2ProtocolGuid;
extern EFI_GUID gEfiSmmBase2ProtocolGuid;
extern EFI_GUID gEfiSmmAccess2ProtocolGuid;
extern EFI_GUID gEfiSmmControl2ProtocolGuid;
extern EFI_GUID gEfiSmmConfigurationProtocolGuid;
extern EFI_GUID gEfiSmmReadyToLockProtocolGuid;
extern EFI_GUID gEfiDxeSmmReadyToLockProtocolGuid;
extern EFI_GUID gEfiSmmCommunicationProtocolGuid;
extern EFI_GUID gEfiSmmStatusCodeProtocolGuid;
extern EFI_GUID gEfiSmmCpuProtocolGuid;
extern EFI_GUID gEfiSmmPciRootBridgeIoProtocolGuid;
extern EFI_GUID gEfiSmmSwDispatch2ProtocolGuid;
extern EFI_GUID gEfiSmmSxDispatch2ProtocolGuid;
extern EFI_GUID gEfiSmmPeriodicTimerDispatch2ProtocolGuid;
extern EFI_GUID gEfiSmmUsbDispatch2ProtocolGuid;
extern EFI_GUID gEfiSmmGpiDispatch2ProtocolGuid;
extern EFI_GUID gEfiSmmStandbyButtonDispatch2ProtocolGuid;
extern EFI_GUID gEfiSmmPowerButtonDispatch2ProtocolGuid;
extern EFI_GUID gEfiSmmIoTrapDispatch2ProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gEfiFirmwareVolumeBlock2ProtocolGuid;
extern EFI_GUID gEfiCpuIo2ProtocolGuid;
extern EFI_GUID gEfiLegacyRegion2ProtocolGuid;
extern EFI_GUID gEfiSecurity2ArchProtocolGuid;
extern EFI_GUID gEfiSmmEndOfDxeProtocolGuid;
extern EFI_GUID gEfiIsaHcProtocolGuid;
extern EFI_GUID gEfiIsaHcServiceBindingProtocolGuid;
extern EFI_GUID gEfiSioControlProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiI2cMasterProtocolGuid;
extern EFI_GUID gEfiI2cIoProtocolGuid;
extern EFI_GUID gEfiI2cEnumerateProtocolGuid;
extern EFI_GUID gEfiI2cHostProtocolGuid;
extern EFI_GUID gEfiI2cBusConfigurationManagementProtocolGuid;
extern EFI_GUID gEfiTcg2ProtocolGuid;
extern EFI_GUID gEfiTimestampProtocolGuid;
extern EFI_GUID gEfiRngProtocolGuid;
extern EFI_GUID gEfiNvmExpressPassThruProtocolGuid;
extern EFI_GUID gEfiHash2ServiceBindingProtocolGuid;
extern EFI_GUID gEfiHash2ProtocolGuid;
extern EFI_GUID gEfiBlockIoCryptoProtocolGuid;
extern EFI_GUID gEfiSmartCardReaderProtocolGuid;
extern EFI_GUID gEfiSmartCardEdgeProtocolGuid;
extern EFI_GUID gEfiUsbFunctionIoProtocolGuid;
extern EFI_GUID gEfiBluetoothHcProtocolGuid;
extern EFI_GUID gEfiBluetoothIoServiceBindingProtocolGuid;
extern EFI_GUID gEfiBluetoothIoProtocolGuid;
extern EFI_GUID gEfiBluetoothConfigProtocolGuid;
extern EFI_GUID gEfiRegularExpressionProtocolGuid;
extern EFI_GUID gEfiBootManagerPolicyProtocolGuid;
extern EFI_GUID gEfiConfigKeywordHandlerProtocolGuid;
extern EFI_GUID gEfiWiFiProtocolGuid;
extern EFI_GUID gEfiEapManagement2ProtocolGuid;
extern EFI_GUID gEfiEapConfigurationProtocolGuid;
extern EFI_GUID gEfiPkcs7VerifyProtocolGuid;
extern EFI_GUID gEfiDns4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiDns4ProtocolGuid;
extern EFI_GUID gEfiDns6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiDns6ProtocolGuid;
extern EFI_GUID gEfiHttpServiceBindingProtocolGuid;
extern EFI_GUID gEfiHttpProtocolGuid;
extern EFI_GUID gEfiHttpUtilitiesProtocolGuid;
extern EFI_GUID gEfiRestProtocolGuid;
extern EFI_GUID gEfiRestExProtocolGuid;
extern EFI_GUID gEfiRedfishDiscoverProtocolGuid;
extern EFI_GUID gEfiMmEndOfDxeProtocolGuid;
extern EFI_GUID gEfiMmIoTrapDispatchProtocolGuid;
extern EFI_GUID gEfiMmPowerButtonDispatchProtocolGuid;
extern EFI_GUID gEfiMmStandbyButtonDispatchProtocolGuid;
extern EFI_GUID gEfiMmGpiDispatchProtocolGuid;
extern EFI_GUID gEfiMmUsbDispatchProtocolGuid;
extern EFI_GUID gEfiMmPeriodicTimerDispatchProtocolGuid;
extern EFI_GUID gEfiMmSxDispatchProtocolGuid;
extern EFI_GUID gEfiMmSwDispatchProtocolGuid;
extern EFI_GUID gEfiMmPciRootBridgeIoProtocolGuid;
extern EFI_GUID gEfiMmCpuProtocolGuid;
extern EFI_GUID gEfiMmStatusCodeProtocolGuid;
extern EFI_GUID gEfiDxeMmReadyToLockProtocolGuid;
extern EFI_GUID gEfiMmConfigurationProtocolGuid;
extern EFI_GUID gEfiMmReadyToLockProtocolGuid;
extern EFI_GUID gEfiMmControlProtocolGuid;
extern EFI_GUID gEfiMmAccessProtocolGuid;
extern EFI_GUID gEfiMmBaseProtocolGuid;
extern EFI_GUID gEfiMmCpuIoProtocolGuid;
extern EFI_GUID gEfiMmRscHandlerProtocolGuid;
extern EFI_GUID gEfiMmCommunicationProtocolGuid;
extern EFI_GUID gEfiTlsServiceBindingProtocolGuid;
extern EFI_GUID gEfiTlsProtocolGuid;
extern EFI_GUID gEfiTlsConfigurationProtocolGuid;
extern EFI_GUID gEfiSupplicantServiceBindingProtocolGuid;
extern EFI_GUID gEfiSupplicantProtocolGuid;
extern EFI_GUID gEfiWiFi2ProtocolGuid;
extern EFI_GUID gEfiRamDiskProtocolGuid;
extern EFI_GUID gEfiHiiImageDecoderProtocolGuid;
extern EFI_GUID gEfiHiiImageExProtocolGuid;
extern EFI_GUID gEfiSdMmcPassThruProtocolGuid;
extern EFI_GUID gEfiEraseBlockProtocolGuid;
extern EFI_GUID gEfiBluetoothAttributeProtocolGuid;
extern EFI_GUID gEfiBluetoothAttributeServiceBindingProtocolGuid;
extern EFI_GUID gEfiBluetoothLeConfigProtocolGuid;
extern EFI_GUID gEfiUfsDeviceConfigProtocolGuid;
extern EFI_GUID gEfiHttpBootCallbackProtocolGuid;
extern EFI_GUID gEfiResetNotificationProtocolGuid;
extern EFI_GUID gEfiPartitionInfoProtocolGuid;
extern EFI_GUID gEfiHiiPopupProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdShellIncludeNtGuids  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdShellIncludeNtGuids;
#define _PCD_GET_MODE_BOOL_PcdShellIncludeNtGuids  _gPcd_FixedAtBuild_PcdShellIncludeNtGuids
//#define _PCD_SET_MODE_BOOL_PcdShellIncludeNtGuids  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

EFI_STATUS
EFIAPI
HandleParsingLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
HandleParsingLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );
#include "UefiHandleParsingLibStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
