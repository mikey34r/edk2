/*
PLATFORM_NAME           = UEFIDiagTool
PLATFORM_VERSION        = 0.01.0016  **Make Sure to change version in main func, .inf and .dsc**

*/

#include <Uefi.h>
#include <String.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiLib.h>
#include <Library/PrintLib.h>
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/PcdLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library\registerFilterLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/DevicePathLib.h>
#include <Library/UefiRuntimeServicesTableLib.h>

// Prototypes for each test module (only memory test implemented now)
//EFI_STATUS RunMemoryTest();
// Future placeholders
//EFI_STATUS RunCpuTest();
//EFI_STATUS RunGpuTest();
//EFI_STATUS RunStorageTest();



// Prototypes for each test
EFI_STATUS AllOnesTest(EFI_PHYSICAL_ADDRESS Memory, UINTN Pages, IN EFI_SYSTEM_TABLE* SystemTable) {
  UINT8* MemPtr = (UINT8*)Memory;
  UINTN Size = Pages * EFI_PAGE_SIZE;
  UINTN i;
  EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL* ConOut = SystemTable->ConOut;

  // Write all 1's (0xFF)
  gBS->SetMem(MemPtr, Size, 0xFF);

  // Verify all 1's
  /*
  if (!CompareMem(MemPtr, 0xFF, Size)); {
    ConOut->OutputString(ConOut, L"All 0's Test failed at byte %lu\n", i);
    return EFI_ABORTED;
  }
  */
  for (i = 0; i < Size; i++) {
    if (MemPtr[i] != 0xFF) {
      // Buffer to hold the output string
      CHAR16 Buffer[100];

      // Convert the integer `i` to a string
      UnicodeSPrint(Buffer, sizeof(Buffer), L"\rAll 1's Test failed at byte %lu\n", i);

      // Output the string using OutputString
      ConOut->OutputString(ConOut, Buffer);
      return EFI_ABORTED;
    }
  }

  ConOut->OutputString(ConOut, L"\rAll 0's Test passed.\n");
  return EFI_SUCCESS;
}

EFI_STATUS AllZerosTest(EFI_PHYSICAL_ADDRESS Memory, UINTN Pages, IN EFI_SYSTEM_TABLE* SystemTable) {
  UINT8* MemPtr = (UINT8*)Memory;
  UINTN Size = Pages * EFI_PAGE_SIZE;
  UINTN i;
  EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL* ConOut = SystemTable->ConOut;

  // Write all 0's (0x00)
  gBS->SetMem(MemPtr, Size, 0x00);
  

  // Verify all 0's
  /*
  if (!CompareMem (MemPtr, 0x00, Size)); {
    ConOut->OutputString(ConOut, L"All 0's Test failed at byte %lu\n", i);
    return EFI_ABORTED;
  }
  */
  for (i = 0; i < Size; i++) {
    if (MemPtr[i] != 0x00) {
      // Buffer to hold the output string
      CHAR16 Buffer[100];

      // Convert the integer `i` to a string
      UnicodeSPrint(Buffer, sizeof(Buffer), L"\rAll 0's Test failed at byte %lu\n", i);

      // Output the string using OutputString
      ConOut->OutputString(ConOut, Buffer);
      return EFI_ABORTED;
    }
  }

  ConOut->OutputString(ConOut, L"\rAll 0's Test passed.\n");
  return EFI_SUCCESS;
}

EFI_STATUS AlternatingOnesZerosTest(EFI_PHYSICAL_ADDRESS Memory, UINTN Pages, IN EFI_SYSTEM_TABLE* SystemTable) {
  UINT8* MemPtr = (UINT8*)Memory;
  UINTN Size = Pages * EFI_PAGE_SIZE;
  UINTN i;
  EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL* ConOut = SystemTable->ConOut;
/*
  // Write alternating 1's and 0's (0xAA and 0x55)
  for (i = 0; i < Size; i++) {
    MemPtr[i] = (i % 2 == 0) ? 0xAA : 0x55;
  }

  // Verify alternating pattern
  for (i = 0; i < Size; i++) {
    if (MemPtr[i] != ((i % 2 == 0) ? 0xAA : 0x55)) {
      ConOut->OutputString(ConOut, L"Alternating 1's and 0's Test failed at byte %lu\n", i);
      return EFI_ABORTED;
    }
  }

  ConOut->OutputString(ConOut, L"Alternating 1's and 0's Test passed.\n");
  return EFI_SUCCESS;
*/
  // Write alternating 1's and 0's (0xAA)
  gBS->SetMem(MemPtr, Size, 0xAA);


  // Verify alternating pattern
  /*
  if (!CompareMem(MemPtr, 0xAA, Size)); {
    ConOut->OutputString(ConOut, L"All 0's Test failed at byte %lu\n", i);
    return EFI_ABORTED;
  }
  */
  for (i = 0; i < Size; i++) {
    if (MemPtr[i] != 0xAA) {
      // Buffer to hold the output string
      CHAR16 Buffer[100];

      // Convert the integer `i` to a string
      UnicodeSPrint(Buffer, sizeof(Buffer), L"\rAlternating 1's and 0's Test failed at byte %lu\n", i);

      // Output the string using OutputString
      ConOut->OutputString(ConOut, Buffer);
      return EFI_ABORTED;
    }
  }
  //ConOut->OutputString(ConOut, L"Alternating Test not implemented yet.\n");
  ConOut->OutputString(ConOut, L"\rAlternating 1's and 0's Test passed.\n");
  return EFI_SUCCESS;
}

EFI_STATUS AddressLineTest(EFI_PHYSICAL_ADDRESS Memory, UINTN Pages, IN EFI_SYSTEM_TABLE* SystemTable) {
  //UINT64* MemPtr = (UINT64*)Memory;
  //UINTN Size = (Pages * EFI_PAGE_SIZE) / sizeof(UINT64);
  //UINTN i;
  EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL* ConOut = SystemTable->ConOut;
  /*
  // Write the address to each memory location

  SetMem (MemPtr, Size, &MemPtr);

  // Verify the addresses
  if (!CompareMem(MemPtr, &MemPtr, Size)) {
    ConOut->OutputString(ConOut, L"Address Line Test failed at index %lu\n", i);
    return EFI_ABORTED;
  }
  */
  ConOut->OutputString(ConOut, L"\rAddress Line Test not implemented yet.\n");
  //ConOut->OutputString(ConOut, L"Address Line Test passed.\n");
  return EFI_SUCCESS;
}

EFI_STATUS BlockMovementTest(EFI_PHYSICAL_ADDRESS Memory, UINTN Pages, IN EFI_SYSTEM_TABLE* SystemTable) {
  //UINT8* MemPtr = (UINT8*)Memory;
  //UINTN Size = Pages * EFI_PAGE_SIZE;
  //UINT8 Temp[4096];  // Temporary buffer for block movement
  EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL* ConOut = SystemTable->ConOut;
/*
  // Write a pattern to the memory
  for (i = 0; i < Size; i++) {
    MemPtr[i] = (UINT8)(i % 256);
  }

  // Move the first 4096 bytes to the temporary buffer
  for (i = 0; i < 4096; i++) {
    Temp[i] = MemPtr[i];
  }

  for (i = 0; i < 4096; i++) {
    if (MemPtr[i] != Temp[i]) {
      ConOut->OutputString(ConOut, L"Block Movement Test failed at byte %lu\n", i);
      return EFI_ABORTED;
    }
  }

  ConOut->OutputString(ConOut, L"Block Movement Test passed.\n");
  return EFI_SUCCESS;
*/
  ConOut->OutputString(ConOut, L"\rBlock Movement Test not implemented yet.\n");
  return EFI_SUCCESS;
}


// Function to run all tests in succession
EFI_STATUS RunAllTests(EFI_PHYSICAL_ADDRESS Memory, UINTN Pages, IN EFI_SYSTEM_TABLE* SystemTable) {
  EFI_STATUS Status;

  Status = AllOnesTest(Memory, Pages, SystemTable);
  if (EFI_ERROR(Status)) return Status;

  Status = AllZerosTest(Memory, Pages, SystemTable);
  if (EFI_ERROR(Status)) return Status;

  Status = AlternatingOnesZerosTest(Memory, Pages, SystemTable);
  //if (EFI_ERROR(Status))
  return Status;  // Goes on Previous line ^

  //Status = AddressLineTest(Memory, Pages, SystemTable);
  //if (EFI_ERROR(Status)) return Status;

  //Status = BlockMovementTest(Memory, Pages);
  //return Status;
}

// Main menu for selecting Memory Test(s)
EFI_STATUS RunMemoryTest(IN EFI_HANDLE ImageHandle, IN EFI_SYSTEM_TABLE* SystemTable) {
  EFI_INPUT_KEY Key;
  EFI_STATUS Status;
  EFI_PHYSICAL_ADDRESS Memory = 0;
  UINTN Pages = 256;  // Example: use 256 pages (1MB)
  EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL* ConOut = SystemTable->ConOut;
  EFI_SIMPLE_TEXT_INPUT_PROTOCOL* ConIn = SystemTable->ConIn;

  // Clear the screen for a fresh menu display
  ConOut->ClearScreen(ConOut);
  
  // Check if ConIn (Console Input) is initialized
  if (ConIn == NULL) {
    ConOut->OutputString(ConOut, L"\rConsole Input (ConIn) is not initialized!\n");
    return EFI_UNSUPPORTED;
  }

  // Allocate memory for testing
  Status = gBS->AllocatePages(AllocateAnyPages, EfiRuntimeServicesData, Pages, &Memory);
  if (EFI_ERROR(Status)) {
    ConOut->OutputString(ConOut, L"\rFailed to allocate memory for testing.\n");
    return Status;
  }

  // Main menu loop
  do {
    // Clear the screen for a fresh menu display
    // ConOut->ClearScreen(ConOut);

    // Display menu
    ConOut->OutputString(ConOut, L"\r\nUEFI Memory Diagnostic Tool\n\n");
    ConOut->OutputString(ConOut, L"\rSelect a test to run:\n");
    ConOut->OutputString(ConOut, L"\r0. All 0's Test\n");
    ConOut->OutputString(ConOut, L"\r1. All 1's Test\n");
    ConOut->OutputString(ConOut, L"\r2. Alternating 1's and 0's Test\n");
    ConOut->OutputString(ConOut, L"\r3. Address Line Test\n");
    ConOut->OutputString(ConOut, L"\r4. Block Movement Test\n");
    ConOut->OutputString(ConOut, L"\r5. Run All Tests\n");
    ConOut->OutputString(ConOut, L"\rPress Q to quit.\n\n");
    
    // Wait for a keypress event
    Status = gBS->WaitForEvent(1, &ConIn->WaitForKey, NULL);
    if (EFI_ERROR(Status)) {
      ConOut->OutputString(ConOut, L"\rFailed to wait for key event\n\n");
      return Status;
    }
    // Read the key input
    Status = ConIn->ReadKeyStroke(ConIn, &Key);
    if (EFI_ERROR(Status)) {
      ConOut->OutputString(ConOut, L"\rFailed to read keystroke\n\n");
      return Status;
    }

    switch (Key.UnicodeChar) {
    case '1':
      Status = AllOnesTest(Memory, Pages, SystemTable);
      break;
    case '0':
      Status = AllZerosTest(Memory, Pages, SystemTable);
      break;
    case '2':
      Status = AlternatingOnesZerosTest(Memory, Pages, SystemTable);
      break;
    case '3':
      Status = AddressLineTest(Memory, Pages, SystemTable);
      break;
    case '4':
      Status = BlockMovementTest(Memory, Pages, SystemTable);
      break;
    case '5':
      Status = RunAllTests(Memory, Pages, SystemTable);
      break;
    case 'Q':
    case 'q':
      gBS->FreePages(Memory, Pages);  // Free memory on exit
      return EFI_SUCCESS;
    default:
      ConOut->OutputString(ConOut, L"\rInvalid selection. Please try again.\n");
      break;
    }

    if (EFI_ERROR(Status)) {
      // Buffer to hold the output string
      CHAR16 Buffer[100];

      // Convert the integer `i` to a string
      UnicodeSPrint(Buffer, sizeof(Buffer), L"\rTest failed with status: %r\n", Status);

      // Output the string using OutputString
      ConOut->OutputString(ConOut, Buffer);
    }
    else {
      ConOut->OutputString(ConOut, L"\rTest passed.\n");
    }
  } while (Key.UnicodeChar != 'Q' && Key.UnicodeChar != 'q');

  gBS->FreePages(Memory, Pages);

  return EFI_SUCCESS;
} 



//Placeholder CPU Test
EFI_STATUS RunCpuTest(IN EFI_SYSTEM_TABLE* SystemTable) {
  EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL* ConOut = SystemTable->ConOut;

  ConOut->OutputString(ConOut, L"\rCPU Test not implemented yet.\n");
  return EFI_SUCCESS;
}



//Placeholder GPU Test
EFI_STATUS RunGpuTest(IN EFI_SYSTEM_TABLE* SystemTable) {
  EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL* ConOut = SystemTable->ConOut;

  ConOut->OutputString(ConOut, L"\rGPU Test not implemented yet.\n");
  return EFI_SUCCESS;
}



//Placeholder Storage Test
EFI_STATUS RunStorageTest(IN EFI_SYSTEM_TABLE* SystemTable) {
  EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL* ConOut = SystemTable->ConOut;

  ConOut->OutputString(ConOut, L"\rStorage Test not implemented yet.\n");
  return EFI_SUCCESS;
}



// Main function for the UEFI Diagnostic Tool
EFI_STATUS EFIAPI UefiMain(IN EFI_HANDLE ImageHandle, IN EFI_SYSTEM_TABLE *SystemTable) {
  EFI_INPUT_KEY Key;
  UINTN Option = 0;
  UINTN EventIndex;
  EFI_STATUS Status;
  EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL* ConOut = SystemTable->ConOut;
  EFI_SIMPLE_TEXT_INPUT_PROTOCOL* ConIn = SystemTable->ConIn;

  // Clear the screen for a fresh menu display
  ConOut->ClearScreen(ConOut);

  // Check if ConIn (Console Input) is initialized
  if (ConIn == NULL) {
    ConOut->OutputString(ConOut, L"\rConsole Input (ConIn) is not initialized!\n\n");
    return EFI_UNSUPPORTED;
  }

  ConOut->OutputString(ConOut, L"\rConsole Input (ConIn) is initialized and working!\n\n");

  do {
    // Clear the screen for a fresh menu display
    // ConOut->ClearScreen(ConOut);

    // Display menu
    ConOut->OutputString(ConOut, L"\rUEFI Diagnostic Tool\n\n");
    ConOut->OutputString(ConOut, L"\rSelect an option below:\n");
    ConOut->OutputString(ConOut, L"\rM. Memory Test\n");
    ConOut->OutputString(ConOut, L"\rC. CPU Test (Not Implemented)\n");
    ConOut->OutputString(ConOut, L"\rG. GPU Test (Not Implemented)\n");
    ConOut->OutputString(ConOut, L"\rS. Storage Test (Not Implemented)\n");
    ConOut->OutputString(ConOut, L"\rV. View Application Version\n");
    ConOut->OutputString(ConOut, L"\rPress Q to quit.\n\n");

    // Reset the input device (e.g., keyboard)
    ConOut->OutputString(ConOut, L"\rResetting Input device...(PRE)\n"); //DEBUG
    Status = ConIn->Reset(ConIn, TRUE);
    ConOut->OutputString(ConOut, L"\rResetting Input device...(POST)\n"); //DEBUG
    if (EFI_ERROR(Status)) {
      ConOut->OutputString(ConOut, L"\rFailed to reset input device.\n\n");
      return Status;
    }

    ConOut->OutputString(ConOut, L"\rInput device reset successfully.\n\n");
    
    // Wait for a keypress event
    ConOut->OutputString(ConOut, L"\rWaiting for key event...(PRE)\n"); //DEBUG
    Status = gBS->WaitForEvent(1, &ConIn->WaitForKey, &EventIndex);
    ConOut->OutputString(ConOut, L"\rWaiting for key event...(POST)\n"); //DEBUG
    if (EFI_ERROR(Status)) {
      ConOut->OutputString(ConOut, L"\rFailed to wait for key event\n\n");
      return Status;
    }

    ConOut->OutputString(ConOut, L"\rWaiting for key event successfully.\n\n");

    // Read the key input
    Status = ConIn->ReadKeyStroke(ConIn, &Key);
    if (EFI_ERROR(Status)) {
      ConOut->OutputString(ConOut, L"\rFailed to read keystroke\n");
      return Status;
    } else {
      ConOut->OutputString(ConOut, L"\rKey Pressed: ");

      CHAR16 Buffer[2] = { Key.UnicodeChar, L'\0' };
      ConOut->OutputString(ConOut, Buffer);
      ConOut->OutputString(ConOut, L"\n");
    }

    switch (Key.UnicodeChar) {
    case 'M':
    case 'm':
      RunMemoryTest(ImageHandle, SystemTable);  // Calls the memory diagnostic tool
      break;
    case 'C':
    case 'c':
      RunCpuTest(SystemTable);  // Placeholder for CPU test
      break;
    case 'G':
    case 'g':
      RunGpuTest(SystemTable);  // Placeholder for GPU test
      break;
    case 'S':
    case 's':
      RunStorageTest(SystemTable);  // Placeholder for storage test
      break;
    case 'V':
    case 'v':
      ConOut->OutputString(ConOut, L"\rThe version of UEFI Diagnostic Tool is 0.01.0016\n");
      break;
    case 'Q':
    case 'q':
      return EFI_SUCCESS;  // Exit the tool
    default:
      ConOut->OutputString(ConOut, L"\rInvalid selection.\n");
      break;
    }
  } while (Key.UnicodeChar != 'Q' && Key.UnicodeChar != 'q');

  return EFI_SUCCESS;
}

