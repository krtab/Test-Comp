extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "parport.i.cil-2.c", 3, "reach_error");
}

extern void abort(void);
void assume_abort_if_not(int cond)
{
  if (!cond)
  {
    abort();
  }

}

extern short __VERIFIER_nondet_short(char *);
extern char __VERIFIER_nondet_char(char *);
extern int __VERIFIER_nondet_int(char *);
extern long __VERIFIER_nondet_long(char *);
extern unsigned long __VERIFIER_nondet_ulong(char *);
extern void abort(void);
void memcpy_guard(void *p1, void *p2, unsigned int n)
{
  if (__logor((((unsigned long) p1) + n) <= ((unsigned long) p2), (((unsigned long) p2) + n) <= ((unsigned long) p1)))
    return;

  abort();
}

#pragma pack(push,8)
#pragma pack(pop)
typedef unsigned short wchar_t;
typedef unsigned long ULONG_PTR;
typedef unsigned long *PULONG_PTR;
typedef ULONG_PTR SIZE_T;
typedef void *PVOID;
typedef char CHAR;
typedef short SHORT;
typedef long LONG;
typedef wchar_t WCHAR;
typedef WCHAR *PWSTR;
typedef const WCHAR *PCWSTR;
typedef CHAR *PCHAR;
typedef const CHAR *PCSTR;
typedef LONG *PLONG;
typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned long ULONG;
typedef UCHAR *PUCHAR;
typedef ULONG *PULONG;
typedef void *HANDLE;
typedef HANDLE *PHANDLE;
typedef char CCHAR;
typedef short CSHORT;
typedef ULONG LCID;
typedef LONG NTSTATUS;
typedef long long LONGLONG;
struct __anonstruct____missing_field_name_1
{
  ULONG LowPart;
  LONG HighPart;
};
struct __anonstruct_u_2
{
  ULONG LowPart;
  LONG HighPart;
};
union _LARGE_INTEGER
{
  struct __anonstruct____missing_field_name_1 __annonCompField1;
  struct __anonstruct_u_2 u;
  LONGLONG QuadPart;
};
typedef union _LARGE_INTEGER LARGE_INTEGER;
typedef LARGE_INTEGER *PLARGE_INTEGER;
struct _LUID
{
  ULONG LowPart;
  LONG HighPart;
};
typedef struct _LUID LUID;
typedef LARGE_INTEGER PHYSICAL_ADDRESS;
enum _EVENT_TYPE
{
  NotificationEvent = 0,
  SynchronizationEvent = 1
};
typedef enum _EVENT_TYPE EVENT_TYPE;
typedef const char *PCSZ;
struct _STRING
{
  USHORT Length;
  USHORT MaximumLength;
  PCHAR Buffer;
};
typedef struct _STRING STRING;
typedef STRING *PSTRING;
typedef PSTRING PANSI_STRING;
struct _UNICODE_STRING
{
  USHORT Length;
  USHORT MaximumLength;
  PWSTR Buffer;
};
typedef struct _UNICODE_STRING UNICODE_STRING;
typedef UNICODE_STRING *PUNICODE_STRING;
typedef UCHAR BOOLEAN;
typedef BOOLEAN *PBOOLEAN;
struct _LIST_ENTRY
{
  struct _LIST_ENTRY *Flink;
  struct _LIST_ENTRY *Blink;
};
typedef struct _LIST_ENTRY LIST_ENTRY;
typedef struct _LIST_ENTRY *PLIST_ENTRY;
struct _OBJECT_ATTRIBUTES
{
  ULONG Length;
  HANDLE RootDirectory;
  PUNICODE_STRING ObjectName;
  ULONG Attributes;
  PVOID SecurityDescriptor;
  PVOID SecurityQualityOfService;
};
typedef struct _OBJECT_ATTRIBUTES OBJECT_ATTRIBUTES;
typedef OBJECT_ATTRIBUTES *POBJECT_ATTRIBUTES;
struct _GUID
{
  unsigned long Data1;
  unsigned short Data2;
  unsigned short Data3;
  unsigned char Data4[8];
};
typedef struct _GUID GUID;
typedef const GUID *LPCGUID;
typedef unsigned int size_t;
typedef UCHAR KIRQL;
typedef KIRQL *PKIRQL;
enum _NT_PRODUCT_TYPE
{
  NtProductWinNt = 1,
  NtProductLanManNt = 2,
  NtProductServer = 3
};
typedef enum _NT_PRODUCT_TYPE NT_PRODUCT_TYPE;
struct _KTHREAD;
typedef struct _KTHREAD *PKTHREAD;
struct _ETHREAD;
typedef struct _ETHREAD *PETHREAD;
struct _EPROCESS;
typedef struct _EPROCESS *PEPROCESS;
struct _KINTERRUPT;
typedef struct _KINTERRUPT *PKINTERRUPT;
struct _IO_TIMER;
typedef struct _IO_TIMER *PIO_TIMER;
struct _OBJECT_TYPE;
typedef struct _OBJECT_TYPE *POBJECT_TYPE;
typedef CCHAR KPROCESSOR_MODE;
struct _KAPC;
struct _KAPC;
typedef void (*PKNORMAL_ROUTINE)(PVOID NormalContext, PVOID SystemArgument1, PVOID SystemArgument2);
struct _KAPC
{
  CSHORT Type;
  CSHORT Size;
  ULONG Spare0;
  struct _KTHREAD *Thread;
  LIST_ENTRY ApcListEntry;
  void (*KernelRoutine)(struct _KAPC *Apc, PKNORMAL_ROUTINE *NormalRoutine, PVOID *NormalContext, PVOID *SystemArgument1, PVOID *SystemArgument2);
  void (*RundownRoutine)(struct _KAPC *Apc);
  void (*NormalRoutine)(PVOID NormalContext, PVOID SystemArgument1, PVOID SystemArgument2);
  PVOID NormalContext;
  PVOID SystemArgument1;
  PVOID SystemArgument2;
  CCHAR ApcStateIndex;
  KPROCESSOR_MODE ApcMode;
  BOOLEAN Inserted;
};
typedef struct _KAPC KAPC;
struct _KDPC;
struct _KDPC;
struct _KDPC
{
  CSHORT Type;
  UCHAR Number;
  UCHAR Importance;
  LIST_ENTRY DpcListEntry;
  void (*DeferredRoutine)(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2);
  PVOID DeferredContext;
  PVOID SystemArgument1;
  PVOID SystemArgument2;
  PULONG_PTR Lock;
};
typedef struct _KDPC KDPC;
typedef struct _KDPC *PKDPC;
typedef struct _KDPC *PRKDPC;
struct _MDL
{
  struct _MDL *Next;
  CSHORT Size;
  CSHORT MdlFlags;
  struct _EPROCESS *Process;
  PVOID MappedSystemVa;
  PVOID StartVa;
  ULONG ByteCount;
  ULONG ByteOffset;
};
typedef struct _MDL MDL;
typedef struct _MDL *PMDL;
typedef PVOID PACCESS_TOKEN;
typedef PVOID PSECURITY_DESCRIPTOR;
typedef ULONG ACCESS_MASK;
#pragma pack(push,4)
struct _LUID_AND_ATTRIBUTES
{
  LUID Luid;
  ULONG Attributes;
};
typedef struct _LUID_AND_ATTRIBUTES LUID_AND_ATTRIBUTES;
#pragma pack(pop)
struct _PRIVILEGE_SET
{
  ULONG PrivilegeCount;
  ULONG Control;
  LUID_AND_ATTRIBUTES Privilege[1];
};
typedef struct _PRIVILEGE_SET PRIVILEGE_SET;
enum _SECURITY_IMPERSONATION_LEVEL
{
  SecurityAnonymous = 0,
  SecurityIdentification = 1,
  SecurityImpersonation = 2,
  SecurityDelegation = 3
};
typedef enum _SECURITY_IMPERSONATION_LEVEL SECURITY_IMPERSONATION_LEVEL;
typedef BOOLEAN SECURITY_CONTEXT_TRACKING_MODE;
struct _SECURITY_QUALITY_OF_SERVICE
{
  ULONG Length;
  SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  SECURITY_CONTEXT_TRACKING_MODE ContextTrackingMode;
  BOOLEAN EffectiveOnly;
};
typedef struct _SECURITY_QUALITY_OF_SERVICE *PSECURITY_QUALITY_OF_SERVICE;
typedef ULONG SECURITY_INFORMATION;
typedef ULONG KAFFINITY;
typedef LONG KPRIORITY;
typedef ULONG_PTR KSPIN_LOCK;
typedef KSPIN_LOCK *PKSPIN_LOCK;
struct _RTL_QUERY_REGISTRY_TABLE
{
  NTSTATUS (*QueryRoutine)(PWSTR ValueName, ULONG ValueType, PVOID ValueData, ULONG ValueLength, PVOID Context, PVOID EntryContext);
  ULONG Flags;
  PWSTR Name;
  PVOID EntryContext;
  ULONG DefaultType;
  PVOID DefaultData;
  ULONG DefaultLength;
};
typedef struct _RTL_QUERY_REGISTRY_TABLE RTL_QUERY_REGISTRY_TABLE;
typedef struct _RTL_QUERY_REGISTRY_TABLE *PRTL_QUERY_REGISTRY_TABLE;
union __anonunion____missing_field_name_6
{
  NTSTATUS Status;
  PVOID Pointer;
};
struct _IO_STATUS_BLOCK
{
  union __anonunion____missing_field_name_6 __annonCompField4;
  ULONG_PTR Information;
};
typedef struct _IO_STATUS_BLOCK IO_STATUS_BLOCK;
typedef struct _IO_STATUS_BLOCK *PIO_STATUS_BLOCK;
enum _FILE_INFORMATION_CLASS
{
  FileDirectoryInformation = 1,
  FileFullDirectoryInformation = 2,
  FileBothDirectoryInformation = 3,
  FileBasicInformation = 4,
  FileStandardInformation = 5,
  FileInternalInformation = 6,
  FileEaInformation = 7,
  FileAccessInformation = 8,
  FileNameInformation = 9,
  FileRenameInformation = 10,
  FileLinkInformation = 11,
  FileNamesInformation = 12,
  FileDispositionInformation = 13,
  FilePositionInformation = 14,
  FileFullEaInformation = 15,
  FileModeInformation = 16,
  FileAlignmentInformation = 17,
  FileAllInformation = 18,
  FileAllocationInformation = 19,
  FileEndOfFileInformation = 20,
  FileAlternateNameInformation = 21,
  FileStreamInformation = 22,
  FilePipeInformation = 23,
  FilePipeLocalInformation = 24,
  FilePipeRemoteInformation = 25,
  FileMailslotQueryInformation = 26,
  FileMailslotSetInformation = 27,
  FileCompressionInformation = 28,
  FileObjectIdInformation = 29,
  FileCompletionInformation = 30,
  FileMoveClusterInformation = 31,
  FileQuotaInformation = 32,
  FileReparsePointInformation = 33,
  FileNetworkOpenInformation = 34,
  FileAttributeTagInformation = 35,
  FileTrackingInformation = 36,
  FileMaximumInformation = 37
};
typedef enum _FILE_INFORMATION_CLASS FILE_INFORMATION_CLASS;
struct _FILE_BASIC_INFORMATION
{
  LARGE_INTEGER CreationTime;
  LARGE_INTEGER LastAccessTime;
  LARGE_INTEGER LastWriteTime;
  LARGE_INTEGER ChangeTime;
  ULONG FileAttributes;
};
typedef struct _FILE_BASIC_INFORMATION *PFILE_BASIC_INFORMATION;
struct _FILE_STANDARD_INFORMATION
{
  LARGE_INTEGER AllocationSize;
  LARGE_INTEGER EndOfFile;
  ULONG NumberOfLinks;
  BOOLEAN DeletePending;
  BOOLEAN Directory;
};
typedef struct _FILE_STANDARD_INFORMATION *PFILE_STANDARD_INFORMATION;
struct _FILE_NETWORK_OPEN_INFORMATION
{
  LARGE_INTEGER CreationTime;
  LARGE_INTEGER LastAccessTime;
  LARGE_INTEGER LastWriteTime;
  LARGE_INTEGER ChangeTime;
  LARGE_INTEGER AllocationSize;
  LARGE_INTEGER EndOfFile;
  ULONG FileAttributes;
};
typedef struct _FILE_NETWORK_OPEN_INFORMATION *PFILE_NETWORK_OPEN_INFORMATION;
enum _FSINFOCLASS
{
  FileFsVolumeInformation = 1,
  FileFsLabelInformation = 2,
  FileFsSizeInformation = 3,
  FileFsDeviceInformation = 4,
  FileFsAttributeInformation = 5,
  FileFsControlInformation = 6,
  FileFsFullSizeInformation = 7,
  FileFsObjectIdInformation = 8,
  FileFsMaximumInformation = 9
};
typedef enum _FSINFOCLASS FS_INFORMATION_CLASS;
enum _INTERFACE_TYPE
{
  InterfaceTypeUndefined = -1,
  Internal = 0,
  Isa = 1,
  Eisa = 2,
  MicroChannel = 3,
  TurboChannel = 4,
  PCIBus = 5,
  VMEBus = 6,
  NuBus = 7,
  PCMCIABus = 8,
  CBus = 9,
  MPIBus = 10,
  MPSABus = 11,
  ProcessorInternal = 12,
  InternalPowerBus = 13,
  PNPISABus = 14,
  PNPBus = 15,
  MaximumInterfaceType = 16
};
typedef enum _INTERFACE_TYPE INTERFACE_TYPE;
typedef enum _INTERFACE_TYPE *PINTERFACE_TYPE;
struct _IO_ERROR_LOG_PACKET
{
  UCHAR MajorFunctionCode;
  UCHAR RetryCount;
  USHORT DumpDataSize;
  USHORT NumberOfStrings;
  USHORT StringOffset;
  USHORT EventCategory;
  NTSTATUS ErrorCode;
  ULONG UniqueErrorValue;
  NTSTATUS FinalStatus;
  ULONG SequenceNumber;
  ULONG IoControlCode;
  LARGE_INTEGER DeviceOffset;
  ULONG DumpData[1];
};
typedef struct _IO_ERROR_LOG_PACKET IO_ERROR_LOG_PACKET;
typedef struct _IO_ERROR_LOG_PACKET *PIO_ERROR_LOG_PACKET;
struct _KEY_VALUE_FULL_INFORMATION
{
  ULONG TitleIndex;
  ULONG Type;
  ULONG DataOffset;
  ULONG DataLength;
  ULONG NameLength;
  WCHAR Name[1];
};
typedef struct _KEY_VALUE_FULL_INFORMATION *PKEY_VALUE_FULL_INFORMATION;
enum _KEY_VALUE_INFORMATION_CLASS
{
  KeyValueBasicInformation = 0,
  KeyValueFullInformation = 1,
  KeyValuePartialInformation = 2,
  KeyValueFullInformationAlign64 = 3,
  KeyValuePartialInformationAlign64 = 4
};
typedef enum _KEY_VALUE_INFORMATION_CLASS KEY_VALUE_INFORMATION_CLASS;
struct _CLIENT_ID
{
  HANDLE UniqueProcess;
  HANDLE UniqueThread;
};
typedef struct _CLIENT_ID CLIENT_ID;
typedef CLIENT_ID *PCLIENT_ID;
enum _SYSTEM_POWER_STATE
{
  PowerSystemUnspecified = 0,
  PowerSystemWorking = 1,
  PowerSystemSleeping1 = 2,
  PowerSystemSleeping2 = 3,
  PowerSystemSleeping3 = 4,
  PowerSystemHibernate = 5,
  PowerSystemShutdown = 6,
  PowerSystemMaximum = 7
};
typedef enum _SYSTEM_POWER_STATE SYSTEM_POWER_STATE;
enum __anonenum_POWER_ACTION_11
{
  PowerActionNone = 0,
  PowerActionReserved = 1,
  PowerActionSleep = 2,
  PowerActionHibernate = 3,
  PowerActionShutdown = 4,
  PowerActionShutdownReset = 5,
  PowerActionShutdownOff = 6,
  PowerActionWarmEject = 7
};
typedef enum __anonenum_POWER_ACTION_11 POWER_ACTION;
enum _DEVICE_POWER_STATE
{
  PowerDeviceUnspecified = 0,
  PowerDeviceD0 = 1,
  PowerDeviceD1 = 2,
  PowerDeviceD2 = 3,
  PowerDeviceD3 = 4,
  PowerDeviceMaximum = 5
};
typedef enum _DEVICE_POWER_STATE DEVICE_POWER_STATE;
union _POWER_STATE
{
  SYSTEM_POWER_STATE SystemState;
  DEVICE_POWER_STATE DeviceState;
};
typedef union _POWER_STATE POWER_STATE;
enum _POWER_STATE_TYPE
{
  SystemPowerState = 0,
  DevicePowerState = 1
};
typedef enum _POWER_STATE_TYPE POWER_STATE_TYPE;
struct _KSYSTEM_TIME
{
  ULONG LowPart;
  LONG High1Time;
  LONG High2Time;
};
typedef struct _KSYSTEM_TIME KSYSTEM_TIME;
enum _ALTERNATIVE_ARCHITECTURE_TYPE
{
  StandardDesign = 0,
  NEC98x86 = 1,
  EndAlternatives = 2
};
typedef enum _ALTERNATIVE_ARCHITECTURE_TYPE ALTERNATIVE_ARCHITECTURE_TYPE;
struct _KUSER_SHARED_DATA
{
  volatile ULONG TickCountLow;
  ULONG TickCountMultiplier;
  volatile KSYSTEM_TIME InterruptTime;
  volatile KSYSTEM_TIME SystemTime;
  volatile KSYSTEM_TIME TimeZoneBias;
  USHORT ImageNumberLow;
  USHORT ImageNumberHigh;
  WCHAR NtSystemRoot[260];
  ULONG MaxStackTraceDepth;
  ULONG CryptoExponent;
  ULONG TimeZoneId;
  ULONG Reserved2[8];
  NT_PRODUCT_TYPE NtProductType;
  BOOLEAN ProductTypeIsValid;
  ULONG NtMajorVersion;
  ULONG NtMinorVersion;
  BOOLEAN ProcessorFeatures[64];
  ULONG Reserved1;
  ULONG Reserved3;
  volatile ULONG TimeSlip;
  ALTERNATIVE_ARCHITECTURE_TYPE AlternativeArchitecture;
  LARGE_INTEGER SystemExpirationDate;
  ULONG SuiteMask;
  BOOLEAN KdDebuggerEnabled;
};
typedef struct _KUSER_SHARED_DATA KUSER_SHARED_DATA;
typedef PVOID PASSIGNED_RESOURCE;
#pragma pack(push,4)
struct __anonstruct_Generic_16
{
  PHYSICAL_ADDRESS Start;
  ULONG Length;
};
struct __anonstruct_Port_17
{
  PHYSICAL_ADDRESS Start;
  ULONG Length;
};
struct __anonstruct_Interrupt_18
{
  ULONG Level;
  ULONG Vector;
  ULONG Affinity;
};
struct __anonstruct_Memory_19
{
  PHYSICAL_ADDRESS Start;
  ULONG Length;
};
struct __anonstruct_Dma_20
{
  ULONG Channel;
  ULONG Port;
  ULONG Reserved1;
};
struct __anonstruct_DevicePrivate_21
{
  ULONG Data[3];
};
struct __anonstruct_BusNumber_22
{
  ULONG Start;
  ULONG Length;
  ULONG Reserved;
};
struct __anonstruct_DeviceSpecificData_23
{
  ULONG DataSize;
  ULONG Reserved1;
  ULONG Reserved2;
};
union __anonunion_u_15
{
  struct __anonstruct_Generic_16 Generic;
  struct __anonstruct_Port_17 Port;
  struct __anonstruct_Interrupt_18 Interrupt;
  struct __anonstruct_Memory_19 Memory;
  struct __anonstruct_Dma_20 Dma;
  struct __anonstruct_DevicePrivate_21 DevicePrivate;
  struct __anonstruct_BusNumber_22 BusNumber;
  struct __anonstruct_DeviceSpecificData_23 DeviceSpecificData;
};
struct _CM_PARTIAL_RESOURCE_DESCRIPTOR
{
  UCHAR Type;
  UCHAR ShareDisposition;
  USHORT Flags;
  union __anonunion_u_15 u;
};
typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR CM_PARTIAL_RESOURCE_DESCRIPTOR;
typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *PCM_PARTIAL_RESOURCE_DESCRIPTOR;
#pragma pack(pop)
struct _CM_PARTIAL_RESOURCE_LIST
{
  USHORT Version;
  USHORT Revision;
  ULONG Count;
  CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];
};
typedef struct _CM_PARTIAL_RESOURCE_LIST CM_PARTIAL_RESOURCE_LIST;
typedef struct _CM_PARTIAL_RESOURCE_LIST *PCM_PARTIAL_RESOURCE_LIST;
struct _CM_FULL_RESOURCE_DESCRIPTOR
{
  INTERFACE_TYPE InterfaceType;
  ULONG BusNumber;
  CM_PARTIAL_RESOURCE_LIST PartialResourceList;
};
typedef struct _CM_FULL_RESOURCE_DESCRIPTOR CM_FULL_RESOURCE_DESCRIPTOR;
typedef struct _CM_FULL_RESOURCE_DESCRIPTOR *PCM_FULL_RESOURCE_DESCRIPTOR;
struct _CM_RESOURCE_LIST
{
  ULONG Count;
  CM_FULL_RESOURCE_DESCRIPTOR List[1];
};
typedef struct _CM_RESOURCE_LIST CM_RESOURCE_LIST;
typedef struct _CM_RESOURCE_LIST *PCM_RESOURCE_LIST;
#pragma pack(push,1)
#pragma pack(pop)
struct __anonstruct_Port_25
{
  ULONG Length;
  ULONG Alignment;
  PHYSICAL_ADDRESS MinimumAddress;
  PHYSICAL_ADDRESS MaximumAddress;
};
struct __anonstruct_Memory_26
{
  ULONG Length;
  ULONG Alignment;
  PHYSICAL_ADDRESS MinimumAddress;
  PHYSICAL_ADDRESS MaximumAddress;
};
struct __anonstruct_Interrupt_27
{
  ULONG MinimumVector;
  ULONG MaximumVector;
};
struct __anonstruct_Dma_28
{
  ULONG MinimumChannel;
  ULONG MaximumChannel;
};
struct __anonstruct_Generic_29
{
  ULONG Length;
  ULONG Alignment;
  PHYSICAL_ADDRESS MinimumAddress;
  PHYSICAL_ADDRESS MaximumAddress;
};
struct __anonstruct_DevicePrivate_30
{
  ULONG Data[3];
};
struct __anonstruct_BusNumber_31
{
  ULONG Length;
  ULONG MinBusNumber;
  ULONG MaxBusNumber;
  ULONG Reserved;
};
struct __anonstruct_AssignedResource_32
{
  PASSIGNED_RESOURCE AssignedResource;
};
struct __anonstruct_SubAllocateFrom_33
{
  UCHAR Type;
  UCHAR Reserved[3];
  PASSIGNED_RESOURCE AssignedResource;
  PHYSICAL_ADDRESS Transformation;
};
struct __anonstruct_ConfigData_34
{
  ULONG Priority;
  ULONG Reserved1;
  ULONG Reserved2;
};
union __anonunion_u_24
{
  struct __anonstruct_Port_25 Port;
  struct __anonstruct_Memory_26 Memory;
  struct __anonstruct_Interrupt_27 Interrupt;
  struct __anonstruct_Dma_28 Dma;
  struct __anonstruct_Generic_29 Generic;
  struct __anonstruct_DevicePrivate_30 DevicePrivate;
  struct __anonstruct_BusNumber_31 BusNumber;
  struct __anonstruct_AssignedResource_32 AssignedResource;
  struct __anonstruct_SubAllocateFrom_33 SubAllocateFrom;
  struct __anonstruct_ConfigData_34 ConfigData;
};
struct _IO_RESOURCE_DESCRIPTOR
{
  UCHAR Option;
  UCHAR Type;
  UCHAR ShareDisposition;
  UCHAR Spare1;
  USHORT Flags;
  USHORT Spare2;
  union __anonunion_u_24 u;
};
typedef struct _IO_RESOURCE_DESCRIPTOR IO_RESOURCE_DESCRIPTOR;
typedef struct _IO_RESOURCE_DESCRIPTOR *PIO_RESOURCE_DESCRIPTOR;
struct _IO_RESOURCE_LIST
{
  USHORT Version;
  USHORT Revision;
  ULONG Count;
  IO_RESOURCE_DESCRIPTOR Descriptors[1];
};
typedef struct _IO_RESOURCE_LIST IO_RESOURCE_LIST;
typedef struct _IO_RESOURCE_LIST *PIO_RESOURCE_LIST;
struct _IO_RESOURCE_REQUIREMENTS_LIST
{
  ULONG ListSize;
  INTERFACE_TYPE InterfaceType;
  ULONG BusNumber;
  ULONG SlotNumber;
  ULONG Reserved[3];
  ULONG AlternativeLists;
  IO_RESOURCE_LIST List[1];
};
typedef struct _IO_RESOURCE_REQUIREMENTS_LIST *PIO_RESOURCE_REQUIREMENTS_LIST;
enum _CONFIGURATION_TYPE
{
  ArcSystem = 0,
  CentralProcessor = 1,
  FloatingPointProcessor = 2,
  PrimaryIcache = 3,
  PrimaryDcache = 4,
  SecondaryIcache = 5,
  SecondaryDcache = 6,
  SecondaryCache = 7,
  EisaAdapter = 8,
  TcAdapter = 9,
  ScsiAdapter = 10,
  DtiAdapter = 11,
  MultiFunctionAdapter = 12,
  DiskController = 13,
  TapeController = 14,
  CdromController = 15,
  WormController = 16,
  SerialController = 17,
  NetworkController = 18,
  DisplayController = 19,
  ParallelController = 20,
  PointerController = 21,
  KeyboardController = 22,
  AudioController = 23,
  OtherController = 24,
  DiskPeripheral = 25,
  FloppyDiskPeripheral = 26,
  TapePeripheral = 27,
  ModemPeripheral = 28,
  MonitorPeripheral = 29,
  PrinterPeripheral = 30,
  PointerPeripheral = 31,
  KeyboardPeripheral = 32,
  TerminalPeripheral = 33,
  OtherPeripheral = 34,
  LinePeripheral = 35,
  NetworkPeripheral = 36,
  SystemMemory = 37,
  DockingInformation = 38,
  RealModeIrqRoutingTable = 39,
  MaximumType = 40
};
typedef enum _CONFIGURATION_TYPE CONFIGURATION_TYPE;
typedef enum _CONFIGURATION_TYPE *PCONFIGURATION_TYPE;
enum _KINTERRUPT_MODE
{
  LevelSensitive = 0,
  Latched = 1
};
typedef enum _KINTERRUPT_MODE KINTERRUPT_MODE;
enum _KWAIT_REASON
{
  Executive = 0,
  FreePage = 1,
  PageIn = 2,
  PoolAllocation = 3,
  DelayExecution = 4,
  Suspended = 5,
  UserRequest = 6,
  WrExecutive = 7,
  WrFreePage = 8,
  WrPageIn = 9,
  WrPoolAllocation = 10,
  WrDelayExecution = 11,
  WrSuspended = 12,
  WrUserRequest = 13,
  WrEventPair = 14,
  WrQueue = 15,
  WrLpcReceive = 16,
  WrLpcReply = 17,
  WrVirtualMemory = 18,
  WrPageOut = 19,
  WrRendezvous = 20,
  Spare2 = 21,
  Spare3 = 22,
  Spare4 = 23,
  Spare5 = 24,
  Spare6 = 25,
  WrKernel = 26,
  MaximumWaitReason = 27
};
typedef enum _KWAIT_REASON KWAIT_REASON;
struct _DISPATCHER_HEADER
{
  UCHAR Type;
  UCHAR Absolute;
  UCHAR Size;
  UCHAR Inserted;
  LONG SignalState;
  LIST_ENTRY WaitListHead;
};
typedef struct _DISPATCHER_HEADER DISPATCHER_HEADER;
struct _KDEVICE_QUEUE
{
  CSHORT Type;
  CSHORT Size;
  LIST_ENTRY DeviceListHead;
  KSPIN_LOCK Lock;
  BOOLEAN Busy;
};
typedef struct _KDEVICE_QUEUE KDEVICE_QUEUE;
struct _KDEVICE_QUEUE_ENTRY
{
  LIST_ENTRY DeviceListEntry;
  ULONG SortKey;
  BOOLEAN Inserted;
};
typedef struct _KDEVICE_QUEUE_ENTRY KDEVICE_QUEUE_ENTRY;
struct _KEVENT
{
  DISPATCHER_HEADER Header;
};
typedef struct _KEVENT KEVENT;
typedef struct _KEVENT *PKEVENT;
typedef struct _KEVENT *PRKEVENT;
struct _KSEMAPHORE
{
  DISPATCHER_HEADER Header;
  LONG Limit;
};
typedef struct _KSEMAPHORE *PKSEMAPHORE;
typedef struct _KSEMAPHORE *PRKSEMAPHORE;
enum _MEMORY_CACHING_TYPE
{
  MmNonCached = 0,
  MmCached = 1,
  MmWriteCombined = 2,
  MmHardwareCoherentCached = 3,
  MmNonCachedUnordered = 4,
  MmUSWCCached = 5,
  MmMaximumCacheType = 6
};
typedef enum _MEMORY_CACHING_TYPE MEMORY_CACHING_TYPE;
enum _POOL_TYPE
{
  NonPagedPool = 0,
  PagedPool = 1,
  NonPagedPoolMustSucceed = 2,
  DontUseThisType = 3,
  NonPagedPoolCacheAligned = 4,
  PagedPoolCacheAligned = 5,
  NonPagedPoolCacheAlignedMustS = 6,
  MaxPoolType = 7,
  NonPagedPoolSession = 32,
  PagedPoolSession = 33,
  NonPagedPoolMustSucceedSession = 34,
  DontUseThisTypeSession = 35,
  NonPagedPoolCacheAlignedSession = 36,
  PagedPoolCacheAlignedSession = 37,
  NonPagedPoolCacheAlignedMustSSession = 38
};
typedef enum _POOL_TYPE POOL_TYPE;
struct _FAST_MUTEX
{
  LONG Count;
  PKTHREAD Owner;
  ULONG Contention;
  KEVENT Event;
  ULONG OldIrql;
};
typedef struct _FAST_MUTEX FAST_MUTEX;
typedef struct _FAST_MUTEX *PFAST_MUTEX;
typedef ULONG_PTR ERESOURCE_THREAD;
union __anonunion____missing_field_name_38
{
  LONG OwnerCount;
  ULONG TableSize;
};
struct _OWNER_ENTRY
{
  ERESOURCE_THREAD OwnerThread;
  union __anonunion____missing_field_name_38 __annonCompField10;
};
typedef struct _OWNER_ENTRY OWNER_ENTRY;
typedef struct _OWNER_ENTRY *POWNER_ENTRY;
union __anonunion____missing_field_name_39
{
  PVOID Address;
  ULONG_PTR CreatorBackTraceIndex;
};
struct _ERESOURCE
{
  LIST_ENTRY SystemResourcesList;
  POWNER_ENTRY OwnerTable;
  SHORT ActiveCount;
  USHORT Flag;
  PKSEMAPHORE SharedWaiters;
  PKEVENT ExclusiveWaiters;
  OWNER_ENTRY OwnerThreads[2];
  ULONG ContentionCount;
  USHORT NumberOfSharedWaiters;
  USHORT NumberOfExclusiveWaiters;
  union __anonunion____missing_field_name_39 __annonCompField11;
  KSPIN_LOCK SpinLock;
};
enum _MM_PAGE_PRIORITY
{
  LowPagePriority = 0,
  NormalPagePriority = 16,
  HighPagePriority = 32
};
typedef enum _MM_PAGE_PRIORITY MM_PAGE_PRIORITY;
struct _DRIVER_OBJECT;
struct _DRIVER_OBJECT;
struct _SECURITY_SUBJECT_CONTEXT
{
  PACCESS_TOKEN ClientToken;
  SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  PACCESS_TOKEN PrimaryToken;
  PVOID ProcessAuditId;
};
typedef struct _SECURITY_SUBJECT_CONTEXT SECURITY_SUBJECT_CONTEXT;
struct _INITIAL_PRIVILEGE_SET
{
  ULONG PrivilegeCount;
  ULONG Control;
  LUID_AND_ATTRIBUTES Privilege[3];
};
typedef struct _INITIAL_PRIVILEGE_SET INITIAL_PRIVILEGE_SET;
union __anonunion_Privileges_40
{
  INITIAL_PRIVILEGE_SET InitialPrivilegeSet;
  PRIVILEGE_SET PrivilegeSet;
};
struct _ACCESS_STATE
{
  LUID OperationID;
  BOOLEAN SecurityEvaluated;
  BOOLEAN GenerateAudit;
  BOOLEAN GenerateOnClose;
  BOOLEAN PrivilegesAllocated;
  ULONG Flags;
  ACCESS_MASK RemainingDesiredAccess;
  ACCESS_MASK PreviouslyGrantedAccess;
  ACCESS_MASK OriginalDesiredAccess;
  SECURITY_SUBJECT_CONTEXT SubjectSecurityContext;
  PSECURITY_DESCRIPTOR SecurityDescriptor;
  PVOID AuxData;
  union __anonunion_Privileges_40 Privileges;
  BOOLEAN AuditPrivileges;
  UNICODE_STRING ObjectName;
  UNICODE_STRING ObjectTypeName;
};
typedef struct _ACCESS_STATE *PACCESS_STATE;
struct _DEVICE_OBJECT;
struct _DEVICE_OBJECT;
struct _DRIVER_OBJECT;
struct _FILE_OBJECT;
struct _FILE_OBJECT;
struct _IRP;
struct _IRP;
struct _SCSI_REQUEST_BLOCK;
struct _SCSI_REQUEST_BLOCK;
typedef NTSTATUS (*PDRIVER_DISPATCH)(struct _DEVICE_OBJECT *DeviceObject, struct _IRP *Irp);
struct _COMPRESSED_DATA_INFO;
struct _FAST_IO_DISPATCH
{
  ULONG SizeOfFastIoDispatch;
  BOOLEAN (*FastIoCheckIfPossible)(struct _FILE_OBJECT *FileObject, PLARGE_INTEGER FileOffset, ULONG Length, BOOLEAN Wait, ULONG LockKey, BOOLEAN CheckForReadOperation, PIO_STATUS_BLOCK IoStatus, struct _DEVICE_OBJECT *DeviceObject);
  BOOLEAN (*FastIoRead)(struct _FILE_OBJECT *FileObject, PLARGE_INTEGER FileOffset, ULONG Length, BOOLEAN Wait, ULONG LockKey, PVOID Buffer, PIO_STATUS_BLOCK IoStatus, struct _DEVICE_OBJECT *DeviceObject);
  BOOLEAN (*FastIoWrite)(struct _FILE_OBJECT *FileObject, PLARGE_INTEGER FileOffset, ULONG Length, BOOLEAN Wait, ULONG LockKey, PVOID Buffer, PIO_STATUS_BLOCK IoStatus, struct _DEVICE_OBJECT *DeviceObject);
  BOOLEAN (*FastIoQueryBasicInfo)(struct _FILE_OBJECT *FileObject, BOOLEAN Wait, PFILE_BASIC_INFORMATION Buffer, PIO_STATUS_BLOCK IoStatus, struct _DEVICE_OBJECT *DeviceObject);
  BOOLEAN (*FastIoQueryStandardInfo)(struct _FILE_OBJECT *FileObject, BOOLEAN Wait, PFILE_STANDARD_INFORMATION Buffer, PIO_STATUS_BLOCK IoStatus, struct _DEVICE_OBJECT *DeviceObject);
  BOOLEAN (*FastIoLock)(struct _FILE_OBJECT *FileObject, PLARGE_INTEGER FileOffset, PLARGE_INTEGER Length, PEPROCESS ProcessId, ULONG Key, BOOLEAN FailImmediately, BOOLEAN ExclusiveLock, PIO_STATUS_BLOCK IoStatus, struct _DEVICE_OBJECT *DeviceObject);
  BOOLEAN (*FastIoUnlockSingle)(struct _FILE_OBJECT *FileObject, PLARGE_INTEGER FileOffset, PLARGE_INTEGER Length, PEPROCESS ProcessId, ULONG Key, PIO_STATUS_BLOCK IoStatus, struct _DEVICE_OBJECT *DeviceObject);
  BOOLEAN (*FastIoUnlockAll)(struct _FILE_OBJECT *FileObject, PEPROCESS ProcessId, PIO_STATUS_BLOCK IoStatus, struct _DEVICE_OBJECT *DeviceObject);
  BOOLEAN (*FastIoUnlockAllByKey)(struct _FILE_OBJECT *FileObject, PVOID ProcessId, ULONG Key, PIO_STATUS_BLOCK IoStatus, struct _DEVICE_OBJECT *DeviceObject);
  BOOLEAN (*FastIoDeviceControl)(struct _FILE_OBJECT *FileObject, BOOLEAN Wait, PVOID InputBuffer, ULONG InputBufferLength, PVOID OutputBuffer, ULONG OutputBufferLength, ULONG IoControlCode, PIO_STATUS_BLOCK IoStatus, struct _DEVICE_OBJECT *DeviceObject);
  void (*AcquireFileForNtCreateSection)(struct _FILE_OBJECT *FileObject);
  void (*ReleaseFileForNtCreateSection)(struct _FILE_OBJECT *FileObject);
  void (*FastIoDetachDevice)(struct _DEVICE_OBJECT *SourceDevice, struct _DEVICE_OBJECT *TargetDevice);
  BOOLEAN (*FastIoQueryNetworkOpenInfo)(struct _FILE_OBJECT *FileObject, BOOLEAN Wait, struct _FILE_NETWORK_OPEN_INFORMATION *Buffer, struct _IO_STATUS_BLOCK *IoStatus, struct _DEVICE_OBJECT *DeviceObject);
  NTSTATUS (*AcquireForModWrite)(struct _FILE_OBJECT *FileObject, PLARGE_INTEGER EndingOffset, struct _ERESOURCE **ResourceToRelease, struct _DEVICE_OBJECT *DeviceObject);
  BOOLEAN (*MdlRead)(struct _FILE_OBJECT *FileObject, PLARGE_INTEGER FileOffset, ULONG Length, ULONG LockKey, PMDL *MdlChain, PIO_STATUS_BLOCK IoStatus, struct _DEVICE_OBJECT *DeviceObject);
  BOOLEAN (*MdlReadComplete)(struct _FILE_OBJECT *FileObject, PMDL MdlChain, struct _DEVICE_OBJECT *DeviceObject);
  BOOLEAN (*PrepareMdlWrite)(struct _FILE_OBJECT *FileObject, PLARGE_INTEGER FileOffset, ULONG Length, ULONG LockKey, PMDL *MdlChain, PIO_STATUS_BLOCK IoStatus, struct _DEVICE_OBJECT *DeviceObject);
  BOOLEAN (*MdlWriteComplete)(struct _FILE_OBJECT *FileObject, PLARGE_INTEGER FileOffset, PMDL MdlChain, struct _DEVICE_OBJECT *DeviceObject);
  BOOLEAN (*FastIoReadCompressed)(struct _FILE_OBJECT *FileObject, PLARGE_INTEGER FileOffset, ULONG Length, ULONG LockKey, PVOID Buffer, PMDL *MdlChain, PIO_STATUS_BLOCK IoStatus, struct _COMPRESSED_DATA_INFO *CompressedDataInfo, ULONG CompressedDataInfoLength, struct _DEVICE_OBJECT *DeviceObject);
  BOOLEAN (*FastIoWriteCompressed)(struct _FILE_OBJECT *FileObject, PLARGE_INTEGER FileOffset, ULONG Length, ULONG LockKey, PVOID Buffer, PMDL *MdlChain, PIO_STATUS_BLOCK IoStatus, struct _COMPRESSED_DATA_INFO *CompressedDataInfo, ULONG CompressedDataInfoLength, struct _DEVICE_OBJECT *DeviceObject);
  BOOLEAN (*MdlReadCompleteCompressed)(struct _FILE_OBJECT *FileObject, PMDL MdlChain, struct _DEVICE_OBJECT *DeviceObject);
  BOOLEAN (*MdlWriteCompleteCompressed)(struct _FILE_OBJECT *FileObject, PLARGE_INTEGER FileOffset, PMDL MdlChain, struct _DEVICE_OBJECT *DeviceObject);
  BOOLEAN (*FastIoQueryOpen)(struct _IRP *Irp, PFILE_NETWORK_OPEN_INFORMATION NetworkInformation, struct _DEVICE_OBJECT *DeviceObject);
  NTSTATUS (*ReleaseForModWrite)(struct _FILE_OBJECT *FileObject, struct _ERESOURCE *ResourceToRelease, struct _DEVICE_OBJECT *DeviceObject);
  NTSTATUS (*AcquireForCcFlush)(struct _FILE_OBJECT *FileObject, struct _DEVICE_OBJECT *DeviceObject);
  NTSTATUS (*ReleaseForCcFlush)(struct _FILE_OBJECT *FileObject, struct _DEVICE_OBJECT *DeviceObject);
};
typedef struct _FAST_IO_DISPATCH *PFAST_IO_DISPATCH;
enum _IO_ALLOCATION_ACTION
{
  KeepObject = 1,
  DeallocateObject = 2,
  DeallocateObjectKeepRegisters = 3
};
typedef enum _IO_ALLOCATION_ACTION IO_ALLOCATION_ACTION;
struct _IO_SECURITY_CONTEXT
{
  PSECURITY_QUALITY_OF_SERVICE SecurityQos;
  PACCESS_STATE AccessState;
  ACCESS_MASK DesiredAccess;
  ULONG FullCreateOptions;
};
typedef struct _IO_SECURITY_CONTEXT *PIO_SECURITY_CONTEXT;
struct _VPB
{
  CSHORT Type;
  CSHORT Size;
  USHORT Flags;
  USHORT VolumeLabelLength;
  struct _DEVICE_OBJECT *DeviceObject;
  struct _DEVICE_OBJECT *RealDevice;
  ULONG SerialNumber;
  ULONG ReferenceCount;
  WCHAR VolumeLabel[(32U * (sizeof(WCHAR))) / (sizeof(WCHAR))];
};
typedef struct _VPB *PVPB;
struct _WAIT_CONTEXT_BLOCK
{
  KDEVICE_QUEUE_ENTRY WaitQueueEntry;
  IO_ALLOCATION_ACTION (*DeviceRoutine)(struct _DEVICE_OBJECT *DeviceObject, struct _IRP *Irp, PVOID MapRegisterBase, PVOID Context);
  PVOID DeviceContext;
  ULONG NumberOfMapRegisters;
  PVOID DeviceObject;
  PVOID CurrentIrp;
  PKDPC BufferChainingDpc;
};
typedef struct _WAIT_CONTEXT_BLOCK WAIT_CONTEXT_BLOCK;
union __anonunion_Queue_43
{
  LIST_ENTRY ListEntry;
  WAIT_CONTEXT_BLOCK Wcb;
};
struct _DEVOBJ_EXTENSION;
struct _DEVICE_OBJECT
{
  CSHORT Type;
  USHORT Size;
  LONG ReferenceCount;
  struct _DRIVER_OBJECT *DriverObject;
  struct _DEVICE_OBJECT *NextDevice;
  struct _DEVICE_OBJECT *AttachedDevice;
  struct _IRP *CurrentIrp;
  PIO_TIMER Timer;
  ULONG Flags;
  ULONG Characteristics;
  PVPB Vpb;
  PVOID DeviceExtension;
  ULONG DeviceType;
  CCHAR StackSize;
  union __anonunion_Queue_43 Queue;
  ULONG AlignmentRequirement;
  KDEVICE_QUEUE DeviceQueue;
  KDPC Dpc;
  ULONG ActiveThreadCount;
  PSECURITY_DESCRIPTOR SecurityDescriptor;
  KEVENT DeviceLock;
  USHORT SectorSize;
  USHORT Spare1;
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension;
  PVOID Reserved;
};
typedef struct _DEVICE_OBJECT DEVICE_OBJECT;
typedef struct _DEVICE_OBJECT *PDEVICE_OBJECT;
struct _DEVOBJ_EXTENSION
{
  CSHORT Type;
  USHORT Size;
  PDEVICE_OBJECT DeviceObject;
};
struct _DRIVER_EXTENSION
{
  struct _DRIVER_OBJECT *DriverObject;
  NTSTATUS (*AddDevice)(struct _DRIVER_OBJECT *DriverObject, struct _DEVICE_OBJECT *PhysicalDeviceObject);
  ULONG Count;
  UNICODE_STRING ServiceKeyName;
};
typedef struct _DRIVER_EXTENSION *PDRIVER_EXTENSION;
struct _DRIVER_OBJECT
{
  CSHORT Type;
  CSHORT Size;
  PDEVICE_OBJECT DeviceObject;
  ULONG Flags;
  PVOID DriverStart;
  ULONG DriverSize;
  PVOID DriverSection;
  PDRIVER_EXTENSION DriverExtension;
  UNICODE_STRING DriverName;
  PUNICODE_STRING HardwareDatabase;
  PFAST_IO_DISPATCH FastIoDispatch;
  NTSTATUS (*DriverInit)(struct _DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath);
  void (*DriverStartIo)(struct _DEVICE_OBJECT *DeviceObject, struct _IRP *Irp);
  void (*DriverUnload)(struct _DRIVER_OBJECT *DriverObject);
  PDRIVER_DISPATCH MajorFunction[28];
};
typedef struct _DRIVER_OBJECT DRIVER_OBJECT;
typedef struct _DRIVER_OBJECT *PDRIVER_OBJECT;
struct _SECTION_OBJECT_POINTERS
{
  PVOID DataSectionObject;
  PVOID SharedCacheMap;
  PVOID ImageSectionObject;
};
typedef struct _SECTION_OBJECT_POINTERS SECTION_OBJECT_POINTERS;
typedef SECTION_OBJECT_POINTERS *PSECTION_OBJECT_POINTERS;
struct _IO_COMPLETION_CONTEXT
{
  PVOID Port;
  PVOID Key;
};
typedef struct _IO_COMPLETION_CONTEXT *PIO_COMPLETION_CONTEXT;
struct _FILE_OBJECT
{
  CSHORT Type;
  CSHORT Size;
  PDEVICE_OBJECT DeviceObject;
  PVPB Vpb;
  PVOID FsContext;
  PVOID FsContext2;
  PSECTION_OBJECT_POINTERS SectionObjectPointer;
  PVOID PrivateCacheMap;
  NTSTATUS FinalStatus;
  struct _FILE_OBJECT *RelatedFileObject;
  BOOLEAN LockOperation;
  BOOLEAN DeletePending;
  BOOLEAN ReadAccess;
  BOOLEAN WriteAccess;
  BOOLEAN DeleteAccess;
  BOOLEAN SharedRead;
  BOOLEAN SharedWrite;
  BOOLEAN SharedDelete;
  ULONG Flags;
  UNICODE_STRING FileName;
  LARGE_INTEGER CurrentByteOffset;
  ULONG Waiters;
  ULONG Busy;
  PVOID LastLock;
  KEVENT Lock;
  KEVENT Event;
  PIO_COMPLETION_CONTEXT CompletionContext;
};
typedef struct _FILE_OBJECT *PFILE_OBJECT;
union __anonunion_AssociatedIrp_44
{
  struct _IRP *MasterIrp;
  LONG IrpCount;
  PVOID SystemBuffer;
};
struct __anonstruct_AsynchronousParameters_46
{
  void (*UserApcRoutine)(PVOID ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved);
  PVOID UserApcContext;
};
union __anonunion_Overlay_45
{
  struct __anonstruct_AsynchronousParameters_46 AsynchronousParameters;
  LARGE_INTEGER AllocationSize;
};
struct __anonstruct____missing_field_name_50
{
  PVOID DriverContext[4];
};
union __anonunion____missing_field_name_49
{
  KDEVICE_QUEUE_ENTRY DeviceQueueEntry;
  struct __anonstruct____missing_field_name_50 __annonCompField14;
};
struct _IO_STACK_LOCATION;
union __anonunion____missing_field_name_52
{
  struct _IO_STACK_LOCATION *CurrentStackLocation;
  ULONG PacketType;
};
struct __anonstruct____missing_field_name_51
{
  LIST_ENTRY ListEntry;
  union __anonunion____missing_field_name_52 __annonCompField16;
};
struct __anonstruct_Overlay_48
{
  union __anonunion____missing_field_name_49 __annonCompField15;
  PETHREAD Thread;
  PCHAR AuxiliaryBuffer;
  struct __anonstruct____missing_field_name_51 __annonCompField17;
  PFILE_OBJECT OriginalFileObject;
};
union __anonunion_Tail_47
{
  struct __anonstruct_Overlay_48 Overlay;
  KAPC Apc;
  PVOID CompletionKey;
};
struct _IRP
{
  CSHORT Type;
  USHORT Size;
  PMDL MdlAddress;
  ULONG Flags;
  union __anonunion_AssociatedIrp_44 AssociatedIrp;
  LIST_ENTRY ThreadListEntry;
  IO_STATUS_BLOCK IoStatus;
  KPROCESSOR_MODE RequestorMode;
  BOOLEAN PendingReturned;
  CHAR StackCount;
  CHAR CurrentLocation;
  BOOLEAN Cancel;
  KIRQL CancelIrql;
  CCHAR ApcEnvironment;
  UCHAR AllocationFlags;
  PIO_STATUS_BLOCK UserIosb;
  PKEVENT UserEvent;
  union __anonunion_Overlay_45 Overlay;
  void (*CancelRoutine)(struct _DEVICE_OBJECT *DeviceObject, struct _IRP *Irp);
  PVOID UserBuffer;
  union __anonunion_Tail_47 Tail;
};
typedef struct _IRP IRP;
typedef struct _IRP *PIRP;
enum _DEVICE_RELATION_TYPE
{
  BusRelations = 0,
  EjectionRelations = 1,
  PowerRelations = 2,
  RemovalRelations = 3,
  TargetDeviceRelation = 4
};
typedef enum _DEVICE_RELATION_TYPE DEVICE_RELATION_TYPE;
struct _DEVICE_RELATIONS
{
  ULONG Count;
  PDEVICE_OBJECT Objects[1];
};
typedef struct _DEVICE_RELATIONS DEVICE_RELATIONS;
typedef struct _DEVICE_RELATIONS *PDEVICE_RELATIONS;
enum _DEVICE_USAGE_NOTIFICATION_TYPE
{
  DeviceUsageTypeUndefined = 0,
  DeviceUsageTypePaging = 1,
  DeviceUsageTypeHibernation = 2,
  DeviceUsageTypeDumpFile = 3
};
typedef enum _DEVICE_USAGE_NOTIFICATION_TYPE DEVICE_USAGE_NOTIFICATION_TYPE;
struct _INTERFACE
{
  USHORT Size;
  USHORT Version;
  PVOID Context;
  void (*InterfaceReference)(PVOID Context);
  void (*InterfaceDereference)(PVOID Context);
};
typedef struct _INTERFACE *PINTERFACE;
struct _DEVICE_CAPABILITIES
{
  USHORT Size;
  USHORT Version;
  ULONG DeviceD1 : 1;
  ULONG DeviceD2 : 1;
  ULONG LockSupported : 1;
  ULONG EjectSupported : 1;
  ULONG Removable : 1;
  ULONG DockDevice : 1;
  ULONG UniqueID : 1;
  ULONG SilentInstall : 1;
  ULONG RawDeviceOK : 1;
  ULONG SurpriseRemovalOK : 1;
  ULONG WakeFromD0 : 1;
  ULONG WakeFromD1 : 1;
  ULONG WakeFromD2 : 1;
  ULONG WakeFromD3 : 1;
  ULONG HardwareDisabled : 1;
  ULONG NonDynamic : 1;
  ULONG WarmEjectSupported : 1;
  ULONG Reserved : 15;
  ULONG Address;
  ULONG UINumber;
  DEVICE_POWER_STATE DeviceState[7];
  SYSTEM_POWER_STATE SystemWake;
  DEVICE_POWER_STATE DeviceWake;
  ULONG D1Latency;
  ULONG D2Latency;
  ULONG D3Latency;
};
typedef struct _DEVICE_CAPABILITIES *PDEVICE_CAPABILITIES;
struct _POWER_SEQUENCE
{
  ULONG SequenceD1;
  ULONG SequenceD2;
  ULONG SequenceD3;
};
typedef struct _POWER_SEQUENCE *PPOWER_SEQUENCE;
enum __anonenum_BUS_QUERY_ID_TYPE_53
{
  BusQueryDeviceID = 0,
  BusQueryHardwareIDs = 1,
  BusQueryCompatibleIDs = 2,
  BusQueryInstanceID = 3,
  BusQueryDeviceSerialNumber = 4
};
typedef enum __anonenum_BUS_QUERY_ID_TYPE_53 BUS_QUERY_ID_TYPE;
enum __anonenum_DEVICE_TEXT_TYPE_54
{
  DeviceTextDescription = 0,
  DeviceTextLocationInformation = 1
};
typedef enum __anonenum_DEVICE_TEXT_TYPE_54 DEVICE_TEXT_TYPE;
#pragma pack(push,4)
struct __anonstruct_Create_56
{
  PIO_SECURITY_CONTEXT SecurityContext;
  ULONG Options;
  USHORT FileAttributes;
  USHORT ShareAccess;
  ULONG EaLength;
};
struct __anonstruct_Read_57
{
  ULONG Length;
  ULONG Key;
  LARGE_INTEGER ByteOffset;
};
struct __anonstruct_Write_58
{
  ULONG Length;
  ULONG Key;
  LARGE_INTEGER ByteOffset;
};
struct __anonstruct_QueryFile_59
{
  ULONG Length;
  FILE_INFORMATION_CLASS FileInformationClass;
};
struct __anonstruct____missing_field_name_62
{
  BOOLEAN ReplaceIfExists;
  BOOLEAN AdvanceOnly;
};
union __anonunion____missing_field_name_61
{
  struct __anonstruct____missing_field_name_62 __annonCompField18;
  ULONG ClusterCount;
  HANDLE DeleteHandle;
};
struct __anonstruct_SetFile_60
{
  ULONG Length;
  FILE_INFORMATION_CLASS FileInformationClass;
  PFILE_OBJECT FileObject;
  union __anonunion____missing_field_name_61 __annonCompField19;
};
struct __anonstruct_QueryVolume_63
{
  ULONG Length;
  FS_INFORMATION_CLASS FsInformationClass;
};
struct __anonstruct_DeviceIoControl_64
{
  ULONG OutputBufferLength;
  ULONG InputBufferLength;
  ULONG IoControlCode;
  PVOID Type3InputBuffer;
};
struct __anonstruct_QuerySecurity_65
{
  SECURITY_INFORMATION SecurityInformation;
  ULONG Length;
};
struct __anonstruct_SetSecurity_66
{
  SECURITY_INFORMATION SecurityInformation;
  PSECURITY_DESCRIPTOR SecurityDescriptor;
};
struct __anonstruct_MountVolume_67
{
  PVPB Vpb;
  PDEVICE_OBJECT DeviceObject;
};
struct __anonstruct_VerifyVolume_68
{
  PVPB Vpb;
  PDEVICE_OBJECT DeviceObject;
};
struct __anonstruct_Scsi_69
{
  struct _SCSI_REQUEST_BLOCK *Srb;
};
struct __anonstruct_QueryDeviceRelations_70
{
  DEVICE_RELATION_TYPE Type;
};
struct __anonstruct_QueryInterface_71
{
  const GUID *InterfaceType;
  USHORT Size;
  USHORT Version;
  PINTERFACE Interface;
  PVOID InterfaceSpecificData;
};
struct __anonstruct_DeviceCapabilities_72
{
  PDEVICE_CAPABILITIES Capabilities;
};
struct __anonstruct_FilterResourceRequirements_73
{
  PIO_RESOURCE_REQUIREMENTS_LIST IoResourceRequirementList;
};
struct __anonstruct_ReadWriteConfig_74
{
  ULONG WhichSpace;
  PVOID Buffer;
  ULONG Offset;
  ULONG Length;
};
struct __anonstruct_SetLock_75
{
  BOOLEAN Lock;
};
struct __anonstruct_QueryId_76
{
  BUS_QUERY_ID_TYPE IdType;
};
struct __anonstruct_QueryDeviceText_77
{
  DEVICE_TEXT_TYPE DeviceTextType;
  LCID LocaleId;
};
struct __anonstruct_UsageNotification_78
{
  BOOLEAN InPath;
  BOOLEAN Reserved[3];
  DEVICE_USAGE_NOTIFICATION_TYPE Type;
};
struct __anonstruct_WaitWake_79
{
  SYSTEM_POWER_STATE PowerState;
};
struct __anonstruct_PowerSequence_80
{
  PPOWER_SEQUENCE PowerSequence;
};
struct __anonstruct_Power_81
{
  ULONG SystemContext;
  POWER_STATE_TYPE Type;
  POWER_STATE State;
  POWER_ACTION ShutdownType;
};
struct __anonstruct_StartDevice_82
{
  PCM_RESOURCE_LIST AllocatedResources;
  PCM_RESOURCE_LIST AllocatedResourcesTranslated;
};
struct __anonstruct_WMI_83
{
  ULONG_PTR ProviderId;
  PVOID DataPath;
  ULONG BufferSize;
  PVOID Buffer;
};
struct __anonstruct_Others_84
{
  PVOID Argument1;
  PVOID Argument2;
  PVOID Argument3;
  PVOID Argument4;
};
union __anonunion_Parameters_55
{
  struct __anonstruct_Create_56 Create;
  struct __anonstruct_Read_57 Read;
  struct __anonstruct_Write_58 Write;
  struct __anonstruct_QueryFile_59 QueryFile;
  struct __anonstruct_SetFile_60 SetFile;
  struct __anonstruct_QueryVolume_63 QueryVolume;
  struct __anonstruct_DeviceIoControl_64 DeviceIoControl;
  struct __anonstruct_QuerySecurity_65 QuerySecurity;
  struct __anonstruct_SetSecurity_66 SetSecurity;
  struct __anonstruct_MountVolume_67 MountVolume;
  struct __anonstruct_VerifyVolume_68 VerifyVolume;
  struct __anonstruct_Scsi_69 Scsi;
  struct __anonstruct_QueryDeviceRelations_70 QueryDeviceRelations;
  struct __anonstruct_QueryInterface_71 QueryInterface;
  struct __anonstruct_DeviceCapabilities_72 DeviceCapabilities;
  struct __anonstruct_FilterResourceRequirements_73 FilterResourceRequirements;
  struct __anonstruct_ReadWriteConfig_74 ReadWriteConfig;
  struct __anonstruct_SetLock_75 SetLock;
  struct __anonstruct_QueryId_76 QueryId;
  struct __anonstruct_QueryDeviceText_77 QueryDeviceText;
  struct __anonstruct_UsageNotification_78 UsageNotification;
  struct __anonstruct_WaitWake_79 WaitWake;
  struct __anonstruct_PowerSequence_80 PowerSequence;
  struct __anonstruct_Power_81 Power;
  struct __anonstruct_StartDevice_82 StartDevice;
  struct __anonstruct_WMI_83 WMI;
  struct __anonstruct_Others_84 Others;
};
struct _IO_STACK_LOCATION
{
  UCHAR MajorFunction;
  UCHAR MinorFunction;
  UCHAR Flags;
  UCHAR Control;
  union __anonunion_Parameters_55 Parameters;
  PDEVICE_OBJECT DeviceObject;
  PFILE_OBJECT FileObject;
  NTSTATUS (*CompletionRoutine)(PDEVICE_OBJECT DeviceObject, PIRP Irp, PVOID Context);
  PVOID Context;
};
typedef struct _IO_STACK_LOCATION IO_STACK_LOCATION;
typedef struct _IO_STACK_LOCATION *PIO_STACK_LOCATION;
#pragma pack(pop)
struct _CONFIGURATION_INFORMATION
{
  ULONG DiskCount;
  ULONG FloppyCount;
  ULONG CdRomCount;
  ULONG TapeCount;
  ULONG ScsiPortCount;
  ULONG SerialCount;
  ULONG ParallelCount;
  BOOLEAN AtDiskPrimaryAddressClaimed;
  BOOLEAN AtDiskSecondaryAddressClaimed;
  ULONG Version;
  ULONG MediumChangerCount;
};
typedef struct _CONFIGURATION_INFORMATION CONFIGURATION_INFORMATION;
typedef struct _CONFIGURATION_INFORMATION *PCONFIGURATION_INFORMATION;
struct _IO_REMOVE_LOCK_COMMON_BLOCK
{
  BOOLEAN Removed;
  BOOLEAN Reserved[3];
  LONG IoCount;
  KEVENT RemoveEvent;
};
typedef struct _IO_REMOVE_LOCK_COMMON_BLOCK IO_REMOVE_LOCK_COMMON_BLOCK;
struct _IO_REMOVE_LOCK
{
  IO_REMOVE_LOCK_COMMON_BLOCK Common;
};
typedef struct _IO_REMOVE_LOCK IO_REMOVE_LOCK;
typedef struct _IO_REMOVE_LOCK *PIO_REMOVE_LOCK;
struct _OBJECT_HANDLE_INFORMATION
{
  ULONG HandleAttributes;
  ACCESS_MASK GrantedAccess;
};
typedef struct _OBJECT_HANDLE_INFORMATION *POBJECT_HANDLE_INFORMATION;
struct _PARPORT_REMOVAL_RELATIONS
{
  PDEVICE_OBJECT DeviceObject;
  ULONG Flags;
  PUNICODE_STRING DeviceName;
};
typedef struct _PARPORT_REMOVAL_RELATIONS PARPORT_REMOVAL_RELATIONS;
typedef struct _PARPORT_REMOVAL_RELATIONS *PPARPORT_REMOVAL_RELATIONS;
struct _PARALLEL_PARCHIP_INFO
{
  PUCHAR Controller;
  PUCHAR EcrController;
  ULONG HardwareModes;
  NTSTATUS (*ParChipSetMode)(PVOID SetChipContext, UCHAR ChipMode);
  NTSTATUS (*ParChipClearMode)(PVOID ClearChipContext, UCHAR ChipMode);
  PVOID Context;
  BOOLEAN success;
};
typedef struct _PARALLEL_PARCHIP_INFO PARALLEL_PARCHIP_INFO;
struct _PARALLEL_PORT_INFORMATION
{
  PHYSICAL_ADDRESS OriginalController;
  PUCHAR Controller;
  ULONG SpanOfController;
  BOOLEAN (*TryAllocatePort)(PVOID TryAllocateContext);
  void (*FreePort)(PVOID FreeContext);
  ULONG (*QueryNumWaiters)(PVOID QueryAllocsContext);
  PVOID Context;
};
typedef struct _PARALLEL_PORT_INFORMATION PARALLEL_PORT_INFORMATION;
typedef struct _PARALLEL_PORT_INFORMATION *PPARALLEL_PORT_INFORMATION;
struct _PARALLEL_PNP_INFORMATION
{
  PHYSICAL_ADDRESS OriginalEcpController;
  PUCHAR EcpController;
  ULONG SpanOfEcpController;
  ULONG PortNumber;
  ULONG HardwareCapabilities;
  NTSTATUS (*TrySetChipMode)(PVOID SetChipContext, UCHAR ChipMode);
  NTSTATUS (*ClearChipMode)(PVOID ClearChipContext, UCHAR ChipMode);
  ULONG FifoDepth;
  ULONG FifoWidth;
  PHYSICAL_ADDRESS EppControllerPhysicalAddress;
  ULONG SpanOfEppController;
  ULONG Ieee1284_3DeviceCount;
  NTSTATUS (*TrySelectDevice)(PVOID TrySelectContext, PVOID TrySelectCommand);
  NTSTATUS (*DeselectDevice)(PVOID DeselectContext, PVOID DeselectCommand);
  PVOID Context;
  ULONG CurrentMode;
  PWSTR PortName;
};
typedef struct _PARALLEL_PNP_INFORMATION PARALLEL_PNP_INFORMATION;
typedef struct _PARALLEL_PNP_INFORMATION *PPARALLEL_PNP_INFORMATION;
struct _PARALLEL_1284_COMMAND
{
  UCHAR ID;
  UCHAR Port;
  ULONG CommandFlags;
};
typedef struct _PARALLEL_1284_COMMAND PARALLEL_1284_COMMAND;
typedef struct _PARALLEL_1284_COMMAND *PPARALLEL_1284_COMMAND;
struct _PARALLEL_CHIP_MODE
{
  UCHAR ModeFlags;
  BOOLEAN success;
};
typedef struct _PARALLEL_CHIP_MODE PARALLEL_CHIP_MODE;
struct _PARALLEL_INTERRUPT_SERVICE_ROUTINE
{
  BOOLEAN (*InterruptServiceRoutine)(struct _KINTERRUPT *Interrupt, PVOID ServiceContext);
  PVOID InterruptServiceContext;
  void (*DeferredPortCheckRoutine)(PVOID DeferredContext);
  PVOID DeferredPortCheckContext;
};
typedef struct _PARALLEL_INTERRUPT_SERVICE_ROUTINE PARALLEL_INTERRUPT_SERVICE_ROUTINE;
typedef struct _PARALLEL_INTERRUPT_SERVICE_ROUTINE *PPARALLEL_INTERRUPT_SERVICE_ROUTINE;
struct _PARALLEL_INTERRUPT_INFORMATION
{
  PKINTERRUPT InterruptObject;
  BOOLEAN (*TryAllocatePortAtInterruptLevel)(PVOID TryAllocateContext);
  void (*FreePortFromInterruptLevel)(PVOID FreeContext);
  PVOID Context;
};
typedef struct _PARALLEL_INTERRUPT_INFORMATION PARALLEL_INTERRUPT_INFORMATION;
typedef struct _PARALLEL_INTERRUPT_INFORMATION *PPARALLEL_INTERRUPT_INFORMATION;
struct _MORE_PARALLEL_PORT_INFORMATION
{
  INTERFACE_TYPE InterfaceType;
  ULONG BusNumber;
  ULONG InterruptLevel;
  ULONG InterruptVector;
  KAFFINITY InterruptAffinity;
  KINTERRUPT_MODE InterruptMode;
};
typedef struct _MORE_PARALLEL_PORT_INFORMATION MORE_PARALLEL_PORT_INFORMATION;
typedef struct _MORE_PARALLEL_PORT_INFORMATION *PMORE_PARALLEL_PORT_INFORMATION;
struct __anonstruct_WMIGUIDREGINFO_114
{
  LPCGUID Guid;
  ULONG InstanceCount;
  ULONG Flags;
};
typedef struct __anonstruct_WMIGUIDREGINFO_114 WMIGUIDREGINFO;
typedef struct __anonstruct_WMIGUIDREGINFO_114 *PWMIGUIDREGINFO;
enum __anonenum_WMIENABLEDISABLECONTROL_115
{
  WmiEventControl = 0,
  WmiDataBlockControl = 1
};
typedef enum __anonenum_WMIENABLEDISABLECONTROL_115 WMIENABLEDISABLECONTROL;
struct _WMILIB_CONTEXT
{
  ULONG GuidCount;
  PWMIGUIDREGINFO GuidList;
  NTSTATUS (*QueryWmiRegInfo)(PDEVICE_OBJECT DeviceObject, PULONG RegFlags, PUNICODE_STRING InstanceName, PUNICODE_STRING *RegistryPath, PUNICODE_STRING MofResourceName, PDEVICE_OBJECT *Pdo);
  NTSTATUS (*QueryWmiDataBlock)(PDEVICE_OBJECT DeviceObject, PIRP Irp, ULONG GuidIndex, ULONG InstanceIndex, ULONG InstanceCount, PULONG InstanceLengthArray, ULONG BufferAvail, PUCHAR Buffer);
  NTSTATUS (*SetWmiDataBlock)(PDEVICE_OBJECT DeviceObject, PIRP Irp, ULONG GuidIndex, ULONG InstanceIndex, ULONG BufferSize, PUCHAR Buffer);
  NTSTATUS (*SetWmiDataItem)(PDEVICE_OBJECT DeviceObject, PIRP Irp, ULONG GuidIndex, ULONG InstanceIndex, ULONG DataItemId, ULONG BufferSize, PUCHAR Buffer);
  NTSTATUS (*ExecuteWmiMethod)(PDEVICE_OBJECT DeviceObject, PIRP Irp, ULONG GuidIndex, ULONG InstanceIndex, ULONG MethodId, ULONG InBufferSize, ULONG OutBufferSize, PUCHAR Buffer);
  NTSTATUS (*WmiFunctionControl)(PDEVICE_OBJECT DeviceObject, PIRP Irp, ULONG GuidIndex, WMIENABLEDISABLECONTROL Function, BOOLEAN Enable);
};
typedef struct _WMILIB_CONTEXT WMILIB_CONTEXT;
typedef struct _WMILIB_CONTEXT *PWMILIB_CONTEXT;
enum __anonenum_SYSCTL_IRP_DISPOSITION_116
{
  IrpProcessed = 0,
  IrpNotCompleted = 1,
  IrpNotWmi = 2,
  IrpForward = 3
};
typedef enum __anonenum_SYSCTL_IRP_DISPOSITION_116 SYSCTL_IRP_DISPOSITION;
typedef enum __anonenum_SYSCTL_IRP_DISPOSITION_116 *PSYSCTL_IRP_DISPOSITION;
struct _PARPORT_WMI_ALLOC_FREE_COUNTS
{
  ULONG PortAllocates;
  ULONG PortFrees;
};
typedef struct _PARPORT_WMI_ALLOC_FREE_COUNTS PARPORT_WMI_ALLOC_FREE_COUNTS;
struct _DEVICE_EXTENSION
{
  ULONG ExtensionSignatureBegin;
  ULONG DeviceStateFlags;
  PDEVICE_OBJECT DeviceObject;
  PDRIVER_OBJECT DriverObject;
  PDEVICE_OBJECT PhysicalDeviceObject;
  PDEVICE_OBJECT ParentDeviceObject;
  LONG OpenCloseRefCount;
  LIST_ENTRY RemovalRelationsList;
  LIST_ENTRY WorkQueue;
  LONG WorkQueueCount;
  PARALLEL_PORT_INFORMATION PortInfo;
  PARALLEL_PNP_INFORMATION PnpInfo;
  ULONG AddressSpace;
  ULONG EcpAddressSpace;
  INTERFACE_TYPE InterfaceType;
  ULONG BusNumber;
  BOOLEAN FoundInterrupt;
  KIRQL InterruptLevel;
  ULONG InterruptVector;
  KAFFINITY InterruptAffinity;
  KINTERRUPT_MODE InterruptMode;
  ULONG DmaChannel;
  ULONG DmaPort;
  USHORT DmaWidth;
  LIST_ENTRY IsrList;
  PKINTERRUPT InterruptObject;
  ULONG InterruptRefCount;
  KDPC FreePortDpc;
  BOOLEAN UnMapRegisters;
  BOOLEAN NationalChecked;
  BOOLEAN NationalChipFound;
  BOOLEAN FilterMode;
  UCHAR EcrPortData;
  PARALLEL_PARCHIP_INFO ChipInfo;
  UNICODE_STRING DeviceName;
  UNICODE_STRING SymbolicLinkName;
  DEVICE_POWER_STATE DeviceState;
  SYSTEM_POWER_STATE SystemState;
  IO_REMOVE_LOCK RemoveLock;
  FAST_MUTEX ExtensionFastMutex;
  FAST_MUTEX OpenCloseMutex;
  WMILIB_CONTEXT WmiLibContext;
  PARPORT_WMI_ALLOC_FREE_COUNTS WmiPortAllocFreeCounts;
  BOOLEAN CheckedForGenericEpp;
  BOOLEAN spare[3];
  ULONG ExtensionSignatureEnd;
};
typedef struct _DEVICE_EXTENSION DEVICE_EXTENSION;
typedef struct _DEVICE_EXTENSION *PDEVICE_EXTENSION;
struct _SYNCHRONIZED_COUNT_CONTEXT
{
  PLONG Count;
  LONG NewCount;
};
typedef struct _SYNCHRONIZED_COUNT_CONTEXT SYNCHRONIZED_COUNT_CONTEXT;
struct _SYNCHRONIZED_LIST_CONTEXT
{
  PLIST_ENTRY List;
  PLIST_ENTRY NewEntry;
};
typedef struct _SYNCHRONIZED_LIST_CONTEXT SYNCHRONIZED_LIST_CONTEXT;
typedef struct _SYNCHRONIZED_LIST_CONTEXT *PSYNCHRONIZED_LIST_CONTEXT;
struct _SYNCHRONIZED_DISCONNECT_CONTEXT
{
  PDEVICE_EXTENSION Extension;
  PPARALLEL_INTERRUPT_SERVICE_ROUTINE IsrInfo;
};
typedef struct _SYNCHRONIZED_DISCONNECT_CONTEXT SYNCHRONIZED_DISCONNECT_CONTEXT;
typedef struct _SYNCHRONIZED_DISCONNECT_CONTEXT *PSYNCHRONIZED_DISCONNECT_CONTEXT;
struct _ISR_LIST_ENTRY
{
  LIST_ENTRY ListEntry;
  BOOLEAN (*ServiceRoutine)(struct _KINTERRUPT *Interrupt, PVOID ServiceContext);
  PVOID ServiceContext;
  void (*DeferredPortCheckRoutine)(PVOID DeferredContext);
  PVOID CheckContext;
};
typedef struct _ISR_LIST_ENTRY ISR_LIST_ENTRY;
typedef struct _ISR_LIST_ENTRY *PISR_LIST_ENTRY;
struct _REMOVAL_RELATIONS_LIST_ENTRY
{
  LIST_ENTRY ListEntry;
  PDEVICE_OBJECT DeviceObject;
  ULONG Flags;
  UNICODE_STRING DeviceName;
};
typedef struct _REMOVAL_RELATIONS_LIST_ENTRY REMOVAL_RELATIONS_LIST_ENTRY;
typedef struct _REMOVAL_RELATIONS_LIST_ENTRY *PREMOVAL_RELATIONS_LIST_ENTRY;
#pragma pack(push,8)
#pragma pack(pop)
struct _KAPC;
struct _KDPC;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,1)
#pragma pack(pop)
struct _DRIVER_OBJECT;
struct _DEVICE_OBJECT;
struct _DRIVER_OBJECT;
struct _FILE_OBJECT;
struct _IRP;
struct _SCSI_REQUEST_BLOCK;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,8)
#pragma pack(pop)
struct _KAPC;
struct _KDPC;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,1)
#pragma pack(pop)
struct _DRIVER_OBJECT;
struct _DEVICE_OBJECT;
struct _DRIVER_OBJECT;
struct _FILE_OBJECT;
struct _IRP;
struct _SCSI_REQUEST_BLOCK;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,8)
#pragma pack(pop)
struct _KAPC;
struct _KDPC;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,1)
#pragma pack(pop)
struct _DRIVER_OBJECT;
struct _DEVICE_OBJECT;
struct _DRIVER_OBJECT;
struct _FILE_OBJECT;
struct _IRP;
struct _SCSI_REQUEST_BLOCK;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,8)
#pragma pack(pop)
struct _KAPC;
struct _KDPC;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,1)
#pragma pack(pop)
struct _DRIVER_OBJECT;
struct _DEVICE_OBJECT;
struct _DRIVER_OBJECT;
struct _FILE_OBJECT;
struct _IRP;
struct _SCSI_REQUEST_BLOCK;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,8)
#pragma pack(pop)
struct _KAPC;
struct _KDPC;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,1)
#pragma pack(pop)
struct _DRIVER_OBJECT;
struct _DEVICE_OBJECT;
struct _DRIVER_OBJECT;
struct _FILE_OBJECT;
struct _IRP;
struct _SCSI_REQUEST_BLOCK;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,8)
#pragma pack(pop)
struct _KAPC;
struct _KDPC;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,1)
#pragma pack(pop)
struct _DRIVER_OBJECT;
struct _DEVICE_OBJECT;
struct _DRIVER_OBJECT;
struct _FILE_OBJECT;
struct _IRP;
struct _SCSI_REQUEST_BLOCK;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,8)
#pragma pack(pop)
struct _KAPC;
struct _KDPC;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,1)
#pragma pack(pop)
struct _DRIVER_OBJECT;
struct _DEVICE_OBJECT;
struct _DRIVER_OBJECT;
struct _FILE_OBJECT;
struct _IRP;
struct _SCSI_REQUEST_BLOCK;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,8)
#pragma pack(pop)
struct _KAPC;
struct _KDPC;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,1)
#pragma pack(pop)
struct _DRIVER_OBJECT;
struct _DEVICE_OBJECT;
struct _DRIVER_OBJECT;
struct _FILE_OBJECT;
struct _IRP;
struct _SCSI_REQUEST_BLOCK;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,8)
#pragma pack(pop)
struct _KAPC;
struct _KDPC;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,1)
#pragma pack(pop)
struct _DRIVER_OBJECT;
struct _DEVICE_OBJECT;
struct _DRIVER_OBJECT;
struct _FILE_OBJECT;
struct _IRP;
struct _SCSI_REQUEST_BLOCK;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,8)
#pragma pack(pop)
struct _KAPC;
struct _KDPC;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,1)
#pragma pack(pop)
struct _DRIVER_OBJECT;
struct _DEVICE_OBJECT;
struct _DRIVER_OBJECT;
struct _FILE_OBJECT;
struct _IRP;
struct _SCSI_REQUEST_BLOCK;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,8)
#pragma pack(pop)
struct _KAPC;
struct _KDPC;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,1)
#pragma pack(pop)
struct _DRIVER_OBJECT;
struct _DEVICE_OBJECT;
struct _DRIVER_OBJECT;
struct _FILE_OBJECT;
struct _IRP;
struct _SCSI_REQUEST_BLOCK;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,8)
#pragma pack(pop)
struct _KAPC;
struct _KDPC;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,1)
#pragma pack(pop)
struct _DRIVER_OBJECT;
struct _DEVICE_OBJECT;
struct _DRIVER_OBJECT;
struct _FILE_OBJECT;
struct _IRP;
struct _SCSI_REQUEST_BLOCK;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,8)
#pragma pack(pop)
struct _KAPC;
struct _KDPC;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,1)
#pragma pack(pop)
struct _DRIVER_OBJECT;
struct _DEVICE_OBJECT;
struct _DRIVER_OBJECT;
struct _FILE_OBJECT;
struct _IRP;
struct _SCSI_REQUEST_BLOCK;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,8)
#pragma pack(pop)
struct _KAPC;
struct _KDPC;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,1)
#pragma pack(pop)
struct _DRIVER_OBJECT;
struct _DEVICE_OBJECT;
struct _DRIVER_OBJECT;
struct _FILE_OBJECT;
struct _IRP;
struct _SCSI_REQUEST_BLOCK;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,8)
#pragma pack(pop)
struct _KAPC;
struct _KDPC;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,1)
#pragma pack(pop)
struct _DRIVER_OBJECT;
struct _DEVICE_OBJECT;
struct _DRIVER_OBJECT;
struct _FILE_OBJECT;
struct _IRP;
struct _SCSI_REQUEST_BLOCK;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,8)
#pragma pack(pop)
struct _KAPC;
struct _KDPC;
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,4)
#pragma pack(pop)
#pragma pack(push,1)
#pragma pack(pop)
struct _DRIVER_OBJECT;
struct _DEVICE_OBJECT;
struct _DRIVER_OBJECT;
struct _FILE_OBJECT;
struct _IRP;
struct _SCSI_REQUEST_BLOCK;
#pragma pack(push,4)
#pragma pack(pop)
#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
extern void *malloc(unsigned int sz);
extern void *memcpy(void *, const void *, size_t);
extern void *memset(void *, int, size_t);
extern void *memmove(void *, const void *, size_t);
#pragma warning(disable:4103)
#pragma warning(disable:4103)
NTSTATUS RtlQueryRegistryValues(ULONG RelativeTo, PCWSTR Path, PRTL_QUERY_REGISTRY_TABLE QueryTable, PVOID Context, PVOID Environment);
NTSTATUS RtlDeleteRegistryValue(ULONG RelativeTo, PCWSTR Path, PCWSTR ValueName);
NTSTATUS RtlIntegerToUnicodeString(ULONG Value, ULONG Base, PUNICODE_STRING String)
{
  if (__VERIFIER_nondet_int("if_1"))
  {
    return (long) 0xC000000D;
  }
  else
    if (String->MaximumLength > 0)
  {
    return 0L;
  }
  else
  {
    return (long) 0x80000005;
  }


}

NTSTATUS RtlUnicodeStringToInteger(PUNICODE_STRING String, ULONG Base, PULONG Value)
{
  if (__VERIFIER_nondet_int("if_2"))
  {
    *Value = __VERIFIER_nondet_ulong("Value");
    return 0L;
  }
  else
  {
    return (long) 0xC000000D;
  }

}

void RtlInitString(PSTRING DestinationString, PCSZ SourceString);
void RtlInitUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString);
NTSTATUS RtlAnsiStringToUnicodeString(PUNICODE_STRING DestinationString, PANSI_STRING SourceString, BOOLEAN AllocateDestinationString);
LONG RtlCompareUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  if (String1 == String2)
  {
    return 0L;
  }

  return __VERIFIER_nondet_long("return_1");
}

void RtlCopyUnicodeString(PUNICODE_STRING DestinationString, PUNICODE_STRING SourceString);
NTSTATUS RtlAppendUnicodeStringToString(PUNICODE_STRING Destination, PUNICODE_STRING Source)
{
  if (__VERIFIER_nondet_int("if_3"))
  {
    return 0L;
  }
  else
  {
    return (long) 0xC0000023;
  }

}

void RtlFreeUnicodeString(PUNICODE_STRING UnicodeString);
SIZE_T RtlCompareMemory(const void *Source1, const void *Source2, SIZE_T Length);
#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
UCHAR READ_PORT_UCHAR(PUCHAR Port);
UCHAR READ_PORT_UCHAR(PUCHAR Port)
{
  return __VERIFIER_nondet_char("return_2");
}

void WRITE_PORT_UCHAR(PUCHAR Port, UCHAR Value);
void WRITE_PORT_UCHAR(PUCHAR Port, UCHAR Value)
{
  return;
}

LONG InterlockedIncrement(PLONG Addend)
{
  return ++(*Addend);
}

LONG InterlockedDecrement(PLONG Addend)
{
  return --(*Addend);
}

LONG InterlockedExchange(PLONG Target, LONG Value)
{
  LONG previous = *Target;
  *Target = Value;
  return previous;
}

#pragma warning(disable:4035)
#pragma warning(push)
#pragma warning(disable:4164)
#pragma function(_enable)
#pragma function(_disable)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
void KeInitializeDpc(PRKDPC Dpc, void (*DeferredRoutine)(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2), PVOID DeferredContext);
BOOLEAN KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2);
void KeInitializeDpc(PRKDPC Dpc, void (*DeferredRoutine)(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2), PVOID DeferredContext)
{
  Dpc->Type = __VERIFIER_nondet_short("Type");
  Dpc->Number = __VERIFIER_nondet_char("Number");
  Dpc->Importance = __VERIFIER_nondet_char("Importance");
  Dpc->DeferredRoutine = DeferredRoutine;
  Dpc->DeferredContext = DeferredContext;
}

BOOLEAN KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  return __VERIFIER_nondet_int("return_3");
}

BOOLEAN KeSynchronizeExecution(PKINTERRUPT Interrupt, BOOLEAN (*SynchronizeRoutine)(PVOID SynchronizeContext), PVOID SynchronizeContext);
BOOLEAN KeSynchronizeExecution(PKINTERRUPT Interrupt, BOOLEAN (*SynchronizeRoutine)(PVOID SynchronizeContext), PVOID SynchronizeContext)
{
  return __VERIFIER_nondet_int("return_4");
}

void KeInitializeEvent(PRKEVENT Event, EVENT_TYPE Type, BOOLEAN State);
LONG KeSetEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait);
void KeInitializeSemaphore(PRKSEMAPHORE Semaphore, LONG Count, LONG Limit);
LONG KeReleaseSemaphore(PRKSEMAPHORE Semaphore, KPRIORITY Increment, LONG Adjustment, BOOLEAN Wait);
NTSTATUS KeDelayExecutionThread(KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Interval);
NTSTATUS KeWaitForSingleObject(PVOID Object, KWAIT_REASON WaitReason, KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Timeout);
void KeInitializeSpinLock(PKSPIN_LOCK SpinLock);
void KfReleaseSpinLock(PKSPIN_LOCK SpinLock, KIRQL NewIrql);
ULONG KeQueryTimeIncrement(void);
ULONG KeQueryTimeIncrement(void)
{
  return __VERIFIER_nondet_ulong("return_5");
}

PVOID ExAllocatePoolWithTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag);
void ExFreePool(PVOID P);
void ExAcquireFastMutex(PFAST_MUTEX FastMutex);
void ExReleaseFastMutex(PFAST_MUTEX FastMutex);
PLIST_ENTRY ExfInterlockedInsertHeadList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock);
PLIST_ENTRY ExfInterlockedInsertTailList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock);
PLIST_ENTRY ExfInterlockedRemoveHeadList(PLIST_ENTRY ListHead, PKSPIN_LOCK Lock);
void MmUnlockPages(PMDL MemoryDescriptorList);
PVOID MmMapLockedPagesSpecifyCache(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, MEMORY_CACHING_TYPE CacheType, PVOID BaseAddress, ULONG BugCheckOnFailure, MM_PAGE_PRIORITY Priority);
PVOID MmAllocateContiguousMemory(SIZE_T NumberOfBytes, PHYSICAL_ADDRESS HighestAcceptableAddress);
void MmFreeContiguousMemory(PVOID BaseAddress);
void MmResetDriverPaging(PVOID AddressWithinSection);
PVOID MmPageEntireDriver(PVOID AddressWithinSection);
NTSTATUS PsCreateSystemThread(PHANDLE ThreadHandle, ULONG DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes, HANDLE ProcessHandle, PCLIENT_ID ClientId, void (*StartRoutine)(PVOID StartContext), PVOID StartContext);
NTSTATUS PsTerminateSystemThread(NTSTATUS ExitStatus);
#pragma warning(disable:4103)
#pragma warning(disable:4103)
void IoAcquireCancelSpinLock(PKIRQL Irql);
void IoAcquireCancelSpinLock(PKIRQL Irql)
{
  return;
}

PVOID IoAllocateErrorLogEntry(PVOID IoObject, UCHAR EntrySize)
{
  if (__VERIFIER_nondet_int("if_4"))
  {
    return (void *) malloc(EntrySize);
  }

  return (void *) ((char *) 0);
}

PMDL IoAllocateMdl(PVOID VirtualAddress, ULONG Length, BOOLEAN SecondaryBuffer, BOOLEAN ChargeQuota, PIRP Irp);
PDEVICE_OBJECT IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice);
PIRP IoBuildAsynchronousFsdRequest(ULONG MajorFunction, PDEVICE_OBJECT DeviceObject, PVOID Buffer, ULONG Length, PLARGE_INTEGER StartingOffset, PIO_STATUS_BLOCK IoStatusBlock);
PIRP IoBuildDeviceIoControlRequest(ULONG IoControlCode, PDEVICE_OBJECT DeviceObject, PVOID InputBuffer, ULONG InputBufferLength, PVOID OutputBuffer, ULONG OutputBufferLength, BOOLEAN InternalDeviceIoControl, PKEVENT Event, PIO_STATUS_BLOCK IoStatusBlock);
NTSTATUS IofCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp);
void IofCompleteRequest(PIRP Irp, CCHAR PriorityBoost);
NTSTATUS IoConnectInterrupt(PKINTERRUPT *InterruptObject, BOOLEAN (*ServiceRoutine)(struct _KINTERRUPT *Interrupt, PVOID ServiceContext), PVOID ServiceContext, PKSPIN_LOCK SpinLock, ULONG Vector, KIRQL Irql, KIRQL SynchronizeIrql, KINTERRUPT_MODE InterruptMode, BOOLEAN ShareVector, KAFFINITY ProcessorEnableMask, BOOLEAN FloatingSave)
{
  if (__VERIFIER_nondet_int("if_5"))
  {
    (*ServiceRoutine)(*InterruptObject, ServiceContext);
    return 0L;
  }
  else
    if (__VERIFIER_nondet_int("if_6"))
  {
    return (long) 0x00000127;
  }
  else
  {
    return (long) 0xC000016E;
  }


}

NTSTATUS IoCreateDevice(PDRIVER_OBJECT DriverObject, ULONG DeviceExtensionSize, PUNICODE_STRING DeviceName, ULONG DeviceType, ULONG DeviceCharacteristics, BOOLEAN Exclusive, PDEVICE_OBJECT *DeviceObject);
NTSTATUS IoCreateSymbolicLink(PUNICODE_STRING SymbolicLinkName, PUNICODE_STRING DeviceName);
void IoDeleteDevice(PDEVICE_OBJECT DeviceObject);
NTSTATUS IoDeleteSymbolicLink(PUNICODE_STRING SymbolicLinkName);
void IoDetachDevice(PDEVICE_OBJECT TargetDevice);
void IoFreeIrp(PIRP Irp);
void IoFreeMdl(PMDL Mdl);
PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void);
NTSTATUS IoQueryDeviceDescription(PINTERFACE_TYPE BusType, PULONG BusNumber, PCONFIGURATION_TYPE ControllerType, PULONG ControllerNumber, PCONFIGURATION_TYPE PeripheralType, PULONG PeripheralNumber, NTSTATUS (*CalloutRoutine)(PVOID Context, PUNICODE_STRING PathName, INTERFACE_TYPE BusType, ULONG BusNumber, PKEY_VALUE_FULL_INFORMATION *BusInformation, CONFIGURATION_TYPE ControllerType, ULONG ControllerNumber, PKEY_VALUE_FULL_INFORMATION *ControllerInformation, CONFIGURATION_TYPE PeripheralType, ULONG PeripheralNumber, PKEY_VALUE_FULL_INFORMATION *PeripheralInformation), PVOID Context);
void IoReleaseCancelSpinLock(KIRQL Irql);
NTSTATUS IoReportResourceUsage(PUNICODE_STRING DriverClassName, PDRIVER_OBJECT DriverObject, PCM_RESOURCE_LIST DriverList, ULONG DriverListSize, PDEVICE_OBJECT DeviceObject, PCM_RESOURCE_LIST DeviceList, ULONG DeviceListSize, BOOLEAN OverrideConflict, PBOOLEAN ConflictDetected)
{
  if (__VERIFIER_nondet_int("if_7"))
  {
    return 0L;
  }
  else
    if (__VERIFIER_nondet_int("if_8"))
  {
    return (long) 0xC000000D;
  }
  else
    if (__VERIFIER_nondet_int("if_9"))
  {
    return (long) 0xC000000E;
  }
  else
    if (__VERIFIER_nondet_int("if_10"))
  {
    return (long) 0xC0000296;
  }
  else
    if (__VERIFIER_nondet_int("if_11"))
  {
    return (long) 0xC0000297;
  }
  else
    if (__VERIFIER_nondet_int("if_12"))
  {
    return (long) 0xC0000298;
  }
  else
    if (__VERIFIER_nondet_int("if_13"))
  {
    return (long) 0xC00002DD;
  }
  else
  {
    return (long) 0xC0000302;
  }







}

void IoSetHardErrorOrVerifyDevice(PIRP Irp, PDEVICE_OBJECT DeviceObject);
void IoInitializeRemoveLockEx(PIO_REMOVE_LOCK Lock, ULONG AllocateTag, ULONG MaxLockedMinutes, ULONG HighWatermark, ULONG RemlockSize)
{
}

NTSTATUS IoAcquireRemoveLockEx(PIO_REMOVE_LOCK RemoveLock, PVOID Tag, PCSTR File, ULONG Line, ULONG RemlockSize);
void IoReleaseRemoveLockEx(PIO_REMOVE_LOCK RemoveLock, PVOID Tag, ULONG RemlockSize)
{
}

void IoReleaseRemoveLockAndWaitEx(PIO_REMOVE_LOCK RemoveLock, PVOID Tag, ULONG RemlockSize)
{
}

void IoWriteErrorLogEntry(PVOID ElEntry)
{
}

NTSTATUS IoWMIRegistrationControl(PDEVICE_OBJECT DeviceObject, ULONG Action)
{
  if (__VERIFIER_nondet_int("if_14"))
  {
    return 0L;
  }
  else
    if (__VERIFIER_nondet_int("if_15"))
  {
    return (long) 0xC000000D;
  }
  else
    if (__VERIFIER_nondet_int("if_16"))
  {
    return (long) 0xC000000E;
  }
  else
    if (__VERIFIER_nondet_int("if_17"))
  {
    return (long) 0xC0000296;
  }
  else
    if (__VERIFIER_nondet_int("if_18"))
  {
    return (long) 0xC0000297;
  }
  else
    if (__VERIFIER_nondet_int("if_19"))
  {
    return (long) 0xC0000298;
  }
  else
    if (__VERIFIER_nondet_int("if_20"))
  {
    return (long) 0xC00002DD;
  }
  else
  {
    return (long) 0xC0000302;
  }







}

NTSTATUS IoOpenDeviceRegistryKey(PDEVICE_OBJECT DeviceObject, ULONG DevInstKeyType, ACCESS_MASK DesiredAccess, PHANDLE DevInstRegKey)
{
  if (__VERIFIER_nondet_int("if_21"))
  {
    return (long) 0x00000000;
  }
  else
    if (__VERIFIER_nondet_int("if_22"))
  {
    return (long) 0xC000000D;
  }
  else
  {
    return (long) 0xC0000010;
  }


}

NTSTATUS IoRegisterDeviceInterface(PDEVICE_OBJECT PhysicalDeviceObject, const GUID *InterfaceClassGuid, PUNICODE_STRING ReferenceString, PUNICODE_STRING SymbolicLinkName);
NTSTATUS IoSetDeviceInterfaceState(PUNICODE_STRING SymbolicLinkName, BOOLEAN Enable);
void KeStallExecutionProcessor(ULONG MicroSeconds)
{
}

#pragma warning(disable:4200)
#pragma warning(default:4200)
NTSTATUS PoRequestPowerIrp(PDEVICE_OBJECT DeviceObject, UCHAR MinorFunction, POWER_STATE PowerState, void (*CompletionFunction)(PDEVICE_OBJECT DeviceObject, UCHAR MinorFunction, POWER_STATE PowerState, PVOID Context, PIO_STATUS_BLOCK IoStatus), PVOID Context, PIRP *Irp);
NTSTATUS PoRequestPowerIrp(PDEVICE_OBJECT DeviceObject, UCHAR MinorFunction, POWER_STATE PowerState, void (*CompletionFunction)(PDEVICE_OBJECT DeviceObject, UCHAR MinorFunction, POWER_STATE PowerState, PVOID Context, PIO_STATUS_BLOCK IoStatus), PVOID Context, PIRP *Irp)
{
  NTSTATUS rtr = __VERIFIER_nondet_long("rtr");
  assume_abort_if_not(__logor(__logor(rtr == 0x00000103, rtr == 0xC000009A), rtr == 0xC00000F0));
  return rtr;
}

POWER_STATE PoSetPowerState(PDEVICE_OBJECT DeviceObject, POWER_STATE_TYPE Type, POWER_STATE State);
POWER_STATE PoSetPowerState(PDEVICE_OBJECT DeviceObject, POWER_STATE_TYPE Type, POWER_STATE State)
{
  static int isFixed = 0;
  static int isWin98 = 0;
  if (isFixed == 0)
  {
    isWin98 = __VERIFIER_nondet_int("isWin98");
    isFixed = 1;
  }

  if (isWin98)
  {
    return State;
  }

  int value = __VERIFIER_nondet_int("value");
  assume_abort_if_not(__logand(value >= 0, value <= 7));
  POWER_STATE pwr;
  pwr.SystemState = value;
  return pwr;
}

NTSTATUS PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp);
void PoStartNextPowerIrp(PIRP Irp);
NTSTATUS ObReferenceObjectByHandle(HANDLE Handle, ACCESS_MASK DesiredAccess, POBJECT_TYPE ObjectType, KPROCESSOR_MODE AccessMode, PVOID *Object, POBJECT_HANDLE_INFORMATION HandleInformation);
void ObfReferenceObject(PVOID Object);
void ObfReferenceObject(PVOID Object)
{
  return;
}

void ObfDereferenceObject(PVOID Object);
NTSTATUS ZwClose(HANDLE Handle);
NTSTATUS ZwQueryValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName, KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass, PVOID KeyValueInformation, ULONG Length, PULONG ResultLength)
{
  if (__VERIFIER_nondet_int("if_23"))
  {
    *ResultLength = Length;
    return 0L;
  }
  else
    if (__VERIFIER_nondet_int("if_24"))
  {
    *ResultLength = 0L;
    return (long) 0xC0000034;
  }
  else
    if (__VERIFIER_nondet_int("if_25"))
  {
    *ResultLength = __VERIFIER_nondet_ulong("ResultLength");
    return (long) 0x80000005;
  }
  else
    if (__VERIFIER_nondet_int("if_26"))
  {
    *ResultLength = __VERIFIER_nondet_ulong("ResultLength");
    return (long) 0xC0000023;
  }
  else
  {
    *ResultLength = 0L;
    return (long) 0xC000000D;
  }




}

NTSTATUS ZwSetValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName, ULONG TitleIndex, ULONG Type, PVOID Data, ULONG DataSize)
{
  if (__VERIFIER_nondet_int("if_27"))
  {
    return 0L;
  }
  else
  {
    return (long) 0xC0000034;
  }

}

const struct _GUID GUID_PARALLEL_DEVICE;
const struct _GUID GUID_PARCLASS_DEVICE;
NTSTATUS WmiCompleteRequest(PDEVICE_OBJECT DeviceObject, PIRP Irp, NTSTATUS Status, ULONG BufferUsed, CCHAR PriorityBoost)
{
  if (Status == ((long) 0xC0000023))
  {
    return 0L;
  }

  return Status;
}

NTSTATUS WmiSystemControl(PWMILIB_CONTEXT WmiLibInfo, PDEVICE_OBJECT DeviceObject, PIRP Irp, PSYSCTL_IRP_DISPOSITION IrpDisposition);
void PptCompleteRequest(PIRP Irp, CCHAR PriorityBoost);
ULONG PptDebugLevel;
ULONG PptBreakOn;
UNICODE_STRING RegistryPath;
UCHAR PptDot3Retries;
const union _LARGE_INTEGER PhysicalZero;
LONG PortInfoReferenceCount;
PFAST_MUTEX PortInfoMutex;
int s;
int UNLOADED;
int NP;
int DC;
int SKIP1;
int SKIP2;
int MPR1;
int MPR3;
int IPC;
int pended;
NTSTATUS (*compFptr)(PDEVICE_OBJECT DeviceObject, PIRP Irp, PVOID Context);
int compRegistered;
int lowerDriverReturn;
int setEventCalled;
int customIrp;
int myStatus;
int routine;
void errorFn(void)
{
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }
}

NTSTATUS PptWmiInitWmi(PDEVICE_OBJECT DeviceObject);
NTSTATUS PptDispatchSystemControl(PDEVICE_OBJECT DeviceObject, PIRP Irp);
void PptPnpInitDispatchFunctionTable(void);
NTSTATUS PptPnpAddDevice(PDRIVER_OBJECT pDriverObject, PDEVICE_OBJECT pPhysicalDeviceObject);
NTSTATUS PptDispatchPnp(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS PptFailRequest(PIRP Irp, NTSTATUS Status);
NTSTATUS PptDispatchPreProcessIrp(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS PptDispatchPostProcessIrp(void);
NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING pRegistryPath);
void PptUnload(PDRIVER_OBJECT DriverObject);
NTSTATUS PptSynchCompletionRoutine(PDEVICE_OBJECT DeviceObject, PIRP Irp, PKEVENT Event);
void PptLogError(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT DeviceObject, PHYSICAL_ADDRESS P1, PHYSICAL_ADDRESS P2, ULONG SequenceNumber, UCHAR MajorFunctionCode, UCHAR RetryCount, ULONG UniqueErrorValue, NTSTATUS FinalStatus, NTSTATUS SpecificIOStatus);
NTSTATUS PptConnectInterrupt(PDEVICE_EXTENSION Extension);
void PptDisconnectInterrupt(PDEVICE_EXTENSION Extension);
NTSTATUS PptDispatchCreate(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS PptDispatchClose(PDEVICE_OBJECT DeviceObject, PIRP Irp);
BOOLEAN PptSynchronizedIncrement(PVOID SyncContext);
BOOLEAN PptSynchronizedDecrement(PVOID SyncContext);
BOOLEAN PptSynchronizedRead(PVOID SyncContext);
BOOLEAN PptSynchronizedQueue(PVOID Context);
BOOLEAN PptSynchronizedDisconnect(PVOID Context);
void PptCancelRoutine(PDEVICE_OBJECT DeviceObject, PIRP Irp);
void PptFreePortDpc(PKDPC Dpc, PVOID Extension, PVOID SystemArgument1, PVOID SystemArgument2);
BOOLEAN PptTryAllocatePortAtInterruptLevel(PVOID Context);
void PptFreePortFromInterruptLevel(PVOID Context);
BOOLEAN PptInterruptService(PKINTERRUPT Interrupt, PVOID Extension);
BOOLEAN PptTryAllocatePort(PVOID Extension);
BOOLEAN PptTraversePortCheckList(PVOID Extension);
void PptFreePort(PVOID Extension);
ULONG PptQueryNumWaiters(PVOID Extension);
NTSTATUS PptDispatchInternalDeviceControl(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS PptDispatchCleanup(PDEVICE_OBJECT DeviceObject, PIRP Irp);
BOOLEAN PptIsNecR98Machine(void);
NTSTATUS PptDispatchPower(PDEVICE_OBJECT pDeviceObject, PIRP pIrp);
void PptRegInitDriverSettings(PUNICODE_STRING RegistryPath___0);
PWSTR PptGetPortNameFromPhysicalDeviceObject(PDEVICE_OBJECT PhysicalDeviceObject);
PVOID PptSetCancelRoutine(PIRP Irp, void (*CancelRoutine)(struct _DEVICE_OBJECT *DeviceObject, struct _IRP *Irp));
NTSTATUS PptAcquireRemoveLockOrFailIrp(PDEVICE_OBJECT DeviceObject, PIRP Irp);
void PptDebugDumpPnpIrpInfo(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS PptAcquireRemoveLock(PIO_REMOVE_LOCK RemoveLock, PVOID Tag);
void PptReleaseRemoveLock(PIO_REMOVE_LOCK RemoveLock, PVOID Tag);
void PptReleaseRemoveLockAndWait(PIO_REMOVE_LOCK RemoveLock, PVOID Tag);
void PptDebugDumpResourceList(PIO_RESOURCE_LIST ResourceList);
void PptDebugDumpResourceRequirementsList(PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirementsList);
NTSTATUS PptDetectChipFilter(PDEVICE_EXTENSION Extension);
NTSTATUS PptDetectPortType(PDEVICE_EXTENSION Extension);
NTSTATUS PptSetChipMode(PDEVICE_EXTENSION Extension, UCHAR ChipMode);
NTSTATUS PptClearChipMode(PDEVICE_EXTENSION Extension, UCHAR ChipMode);
ULONG PptInitiate1284_3(PVOID Extension);
NTSTATUS PptTrySelectDevice(PVOID Context, PVOID TrySelectCommand);
NTSTATUS PptDeselectDevice(PVOID Context, PVOID DeselectCommand);
ULONG Ppt1284_3AssignAddress(PDEVICE_EXTENSION DeviceExtension);
BOOLEAN PptSend1284_3Command(PDEVICE_EXTENSION DeviceExtension, UCHAR Command);
NTSTATUS PptTrySelectLegacyZip(PVOID Context, PVOID TrySelectCommand);
NTSTATUS PptDeselectLegacyZip(PVOID Context, PVOID DeselectCommand);
void PptDumpRemovalRelationsList(PDEVICE_EXTENSION Extension);
NTSTATUS PptRegGetDeviceParameterDword(PDEVICE_OBJECT Pdo, PWSTR ParameterName, PULONG ParameterValue);
NTSTATUS PptRegSetDeviceParameterDword(PDEVICE_OBJECT Pdo, PWSTR ParameterName, PULONG ParameterValue);
NTSTATUS PptBuildParallelPortDeviceName(ULONG Number, PUNICODE_STRING DeviceName);
NTSTATUS PptInitializeDeviceExtension(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT PhysicalDeviceObject, PDEVICE_OBJECT DeviceObject, PUNICODE_STRING UniNameString, PWSTR PortName, ULONG PortNumber);
NTSTATUS PptGetPortNumberFromLptName(PWSTR PortName, PULONG PortNumber);
PDEVICE_OBJECT PptBuildDeviceObject(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT PhysicalDeviceObject);
void PptDetectEppPort(PDEVICE_EXTENSION Extension);
void PptCleanRemovalRelationsList(PDEVICE_EXTENSION Extension);
BOOLEAN CheckPort(PUCHAR wPortAddr, UCHAR bMask, UCHAR bValue, USHORT usTimeDelay);
NTSTATUS PptDispatchCleanup(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PDEVICE_EXTENSION extension;
  KIRQL cancelIrql;
  {
    extension = DeviceObject->DeviceExtension;
    {
    }
    if (extension->DeviceStateFlags & 4096UL)
    {
      goto targetExit;
    }
    else
    {
    }

    {
    }
    targetExit:
    {
      myStatus = 0L;
      Irp->IoStatus.__annonCompField4.Status = 0L;
      Irp->IoStatus.Information = 0;
      PptCompleteRequest(Irp, 0);
    }

    return 0L;
  }
}

#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4035)
#pragma warning(push)
#pragma warning(disable:4164)
#pragma function(_enable)
#pragma function(_disable)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4200)
#pragma warning(default:4200)
PCHAR PnpIrpName[25] = {"IRP_MN_START_DEVICE                 0x00", "IRP_MN_QUERY_REMOVE_DEVICE          0x01", "IRP_MN_REMOVE_DEVICE                0x02", "IRP_MN_CANCEL_REMOVE_DEVICE         0x03", "IRP_MN_STOP_DEVICE                  0x04", "IRP_MN_QUERY_STOP_DEVICE            0x05", "IRP_MN_CANCEL_STOP_DEVICE           0x06", "IRP_MN_QUERY_DEVICE_RELATIONS       0x07", "IRP_MN_QUERY_INTERFACE              0x08", "IRP_MN_QUERY_CAPABILITIES           0x09", "IRP_MN_QUERY_RESOURCES              0x0A", "IRP_MN_QUERY_RESOURCE_REQUIREMENTS  0x0B", "IRP_MN_QUERY_DEVICE_TEXT            0x0C", "IRP_MN_FILTER_RESOURCE_REQUIREMENTS 0x0D", " unused MinorFunction               0x0E", "IRP_MN_READ_CONFIG                  0x0F", "IRP_MN_WRITE_CONFIG                 0x10", "IRP_MN_EJECT                        0x11", "IRP_MN_SET_LOCK                     0x12", "IRP_MN_QUERY_ID                     0x13", "IRP_MN_QUERY_PNP_DEVICE_STATE       0x14", "IRP_MN_QUERY_BUS_INFORMATION        0x15", "IRP_MN_DEVICE_USAGE_NOTIFICATION    0x16", "IRP_MN_SURPRISE_REMOVAL             0x17", "IRP_MN_QUERY_LEGACY_BUS_INFORMATION 0x18"};
void PptDebugDumpPnpIrpInfo(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PDEVICE_EXTENSION extension;
  PIO_STACK_LOCATION irpStack;
  PCHAR irpName;
  {
    extension = DeviceObject->DeviceExtension;
    irpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
    if (((int) irpStack->MinorFunction) <= 24)
    {
      irpName = PnpIrpName[irpStack->MinorFunction];
    }
    else
    {
      {
      }
      irpName = " - MinorFunction > 0x18 - don\'t handle  ";
    }

    {
    }
    return;
  }
}

NTSTATUS PptAcquireRemoveLock(PIO_REMOVE_LOCK RemoveLock, PVOID Tag)
{
  NTSTATUS status;
  {
    {
      status = IoAcquireRemoveLockEx(RemoveLock, Tag, "debug.c", 69, sizeof(IO_REMOVE_LOCK));
    }
    return status;
  }
}

void PptReleaseRemoveLock(PIO_REMOVE_LOCK RemoveLock, PVOID Tag)
{
  {
    {
      IoReleaseRemoveLockEx(RemoveLock, Tag, sizeof(IO_REMOVE_LOCK));
    }
    return;
  }
}

void PptReleaseRemoveLockAndWait(PIO_REMOVE_LOCK RemoveLock, PVOID Tag)
{
  {
    {
      IoReleaseRemoveLockAndWaitEx(RemoveLock, Tag, sizeof(IO_REMOVE_LOCK));
    }
    return;
  }
}

void PptDebugDumpResourceList(PIO_RESOURCE_LIST ResourceList)
{
  ULONG count;
  ULONG i;
  PIO_RESOURCE_DESCRIPTOR curDesc;
  {
    count = ResourceList->Count;
    {
    }
    i = 0;
    curDesc = ResourceList->Descriptors;
    {
      while (1)
      {
        while_4_continue:
        ;

        if (i < count)
        {
        }
        else
        {
          goto while_4_break;
        }

        if (curDesc->Type == 2)
        {
          goto switch_5_2;
        }
        else
        {
          if (curDesc->Type == 4)
          {
            goto switch_5_4;
          }
          else
          {
            if (curDesc->Type == 1)
            {
              goto switch_5_1;
            }
            else
            {
              if (curDesc->Type == 0)
              {
                goto switch_5_0;
              }
              else
              {
                {
                  goto switch_5_default;
                  if (0)
                  {
                    switch_5_2:
                    ;

                    {
                    }
                    goto switch_5_break;
                    switch_5_4:
                    ;

                    {
                    }
                    goto switch_5_break;
                    switch_5_1:
                    ;

                    {
                    }
                    goto switch_5_break;
                    switch_5_0:
                    ;

                    {
                    }
                    goto switch_5_break;
                    switch_5_default:
                    ;

                    {
                    }
                  }
                  else
                  {
                    switch_5_break:
                    ;

                  }

                }
              }

            }

          }

        }

        i += 1UL;
        curDesc += 1;
      }

      while_4_break:
      ;

    }
    return;
  }
}

void PptDebugDumpResourceRequirementsList(PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirementsList)
{
  ULONG listCount;
  PIO_RESOURCE_LIST curList;
  ULONG i;
  {
    listCount = ResourceRequirementsList->AlternativeLists;
    {
    }
    i = 0;
    curList = ResourceRequirementsList->List;
    {
      while (1)
      {
        while_12_continue:
        ;

        if (i < listCount)
        {
        }
        else
        {
          goto while_12_break;
        }

        {
        }
        {
          PptDebugDumpResourceList(curList);
          curList = (struct _IO_RESOURCE_LIST *) (curList->Descriptors + curList->Count);
          i += 1UL;
        }
      }

      while_12_break:
      ;

    }
    return;
  }
}

#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4035)
#pragma warning(push)
#pragma warning(disable:4164)
#pragma function(_enable)
#pragma function(_disable)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4200)
#pragma warning(default:4200)
void PptLogError(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT DeviceObject, PHYSICAL_ADDRESS P1, PHYSICAL_ADDRESS P2, ULONG SequenceNumber, UCHAR MajorFunctionCode, UCHAR RetryCount, ULONG UniqueErrorValue, NTSTATUS FinalStatus, NTSTATUS SpecificIOStatus)
{
  PIO_ERROR_LOG_PACKET ErrorLogEntry;
  PVOID ObjectToUse;
  SHORT DumpToAllocate;
  PVOID tmp;
  {
    {
    }
    if (((unsigned int) ((CHAR *) DeviceObject)) != ((unsigned int) ((CHAR *) ((void *) 0))))
    {
      ObjectToUse = DeviceObject;
    }
    else
    {
      ObjectToUse = DriverObject;
    }

    DumpToAllocate = 0;
    if (P1.__annonCompField1.LowPart != 0UL)
    {
      DumpToAllocate = (short) (sizeof(PHYSICAL_ADDRESS));
    }
    else
    {
      if (P1.__annonCompField1.HighPart != 0L)
      {
        DumpToAllocate = (short) (sizeof(PHYSICAL_ADDRESS));
      }
      else
      {
      }

    }

    if (P2.__annonCompField1.LowPart != 0UL)
    {
      DumpToAllocate = ((int) DumpToAllocate) + ((int) ((short) (sizeof(PHYSICAL_ADDRESS))));
    }
    else
    {
      if (P2.__annonCompField1.HighPart != 0L)
      {
        DumpToAllocate = ((int) DumpToAllocate) + ((int) ((short) (sizeof(PHYSICAL_ADDRESS))));
      }
      else
      {
      }

    }

    {
      tmp = IoAllocateErrorLogEntry(ObjectToUse, (unsigned char) ((sizeof(IO_ERROR_LOG_PACKET)) + ((unsigned int) DumpToAllocate)));
      ErrorLogEntry = tmp;
    }
    if (!ErrorLogEntry)
    {
      return;
    }
    else
    {
    }

    ErrorLogEntry->ErrorCode = SpecificIOStatus;
    ErrorLogEntry->SequenceNumber = SequenceNumber;
    ErrorLogEntry->MajorFunctionCode = MajorFunctionCode;
    ErrorLogEntry->RetryCount = RetryCount;
    ErrorLogEntry->UniqueErrorValue = UniqueErrorValue;
    ErrorLogEntry->FinalStatus = FinalStatus;
    ErrorLogEntry->DumpDataSize = DumpToAllocate;
    if (DumpToAllocate)
    {
      {
        memcpy_guard(ErrorLogEntry->DumpData, &P1, sizeof(PHYSICAL_ADDRESS));
        memmove(ErrorLogEntry->DumpData, &P1, sizeof(PHYSICAL_ADDRESS));
      }
      if (((unsigned int) DumpToAllocate) > (sizeof(PHYSICAL_ADDRESS)))
      {
        {
          memcpy_guard(((UCHAR *) ErrorLogEntry->DumpData) + (sizeof(PHYSICAL_ADDRESS)), &P2, sizeof(PHYSICAL_ADDRESS));
          memcpy(((UCHAR *) ErrorLogEntry->DumpData) + (sizeof(PHYSICAL_ADDRESS)), &P2, sizeof(PHYSICAL_ADDRESS));
        }
      }
      else
      {
      }

    }
    else
    {
    }

    {
      IoWriteErrorLogEntry(ErrorLogEntry);
    }
    return;
  }
}

#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4035)
#pragma warning(push)
#pragma warning(disable:4164)
#pragma function(_enable)
#pragma function(_disable)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4200)
#pragma warning(default:4200)
NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING pRegistryPath)
{
  void *Buffer;
  {
    {
      PptRegInitDriverSettings(pRegistryPath);
      Buffer = ExAllocatePoolWithTag(1, pRegistryPath->MaximumLength, 1349673296UL);
    }
    if (((unsigned int) ((void *) 0)) == ((unsigned int) Buffer))
    {
      {
      }
      return -1073741670L;
    }
    else
    {
      {
        memset(RegistryPath.Buffer, 0, pRegistryPath->MaximumLength);
        RegistryPath.Length = pRegistryPath->Length;
        RegistryPath.MaximumLength = pRegistryPath->MaximumLength;
        memmove(RegistryPath.Buffer, pRegistryPath->Buffer, pRegistryPath->Length);
      }
    }

    {
      PptPnpInitDispatchFunctionTable();
      DriverObject->MajorFunction[0] = &PptDispatchCreate;
      DriverObject->MajorFunction[2] = &PptDispatchClose;
      DriverObject->MajorFunction[15] = &PptDispatchInternalDeviceControl;
      DriverObject->MajorFunction[18] = &PptDispatchCleanup;
      DriverObject->MajorFunction[27] = &PptDispatchPnp;
      DriverObject->MajorFunction[22] = &PptDispatchPower;
      DriverObject->MajorFunction[23] = &PptDispatchSystemControl;
      DriverObject->DriverExtension->AddDevice = &PptPnpAddDevice;
      DriverObject->DriverUnload = &PptUnload;
    }
    return 0L;
  }
}

void PptUnload(PDRIVER_OBJECT DriverObject)
{
  PDEVICE_OBJECT CurrentDevice;
  PDEVICE_EXTENSION Extension;
  PLIST_ENTRY Head;
  PISR_LIST_ENTRY Entry;
  PLIST_ENTRY _EX_Blink;
  PLIST_ENTRY _EX_Flink;
  PCONFIGURATION_INFORMATION tmp;
  {
    {
    }
    CurrentDevice = DriverObject->DeviceObject;
    {
      while (1)
      {
        while_17_continue:
        ;

        if (CurrentDevice)
        {
        }
        else
        {
          goto while_17_break;
        }

        Extension = CurrentDevice->DeviceExtension;
        if (Extension->InterruptRefCount)
        {
          {
            PptDisconnectInterrupt(Extension);
          }
        }
        else
        {
        }

        {
          while (1)
          {
            while_18_continue:
            ;

            if (!(((unsigned int) Extension->IsrList.Flink) == ((unsigned int) (&Extension->IsrList))))
            {
            }
            else
            {
              goto while_18_break;
            }

            {
              Head = Extension->IsrList.Flink;
              _EX_Flink = Extension->IsrList.Flink->Flink;
              _EX_Blink = Extension->IsrList.Flink->Blink;
              _EX_Blink->Flink = _EX_Flink;
              _EX_Flink->Blink = _EX_Blink;
              Entry = (ISR_LIST_ENTRY *) (((CHAR *) Head) - ((unsigned long) (&((ISR_LIST_ENTRY *) 0)->ListEntry)));
            }
          }

          while_18_break:
          ;

        }
        {
          tmp = IoGetConfigurationInformation();
          tmp->ParallelCount -= 1UL;
          CurrentDevice = DriverObject->DeviceObject;
        }
      }

      while_17_break:
      ;

    }
    if (PortInfoMutex)
    {
      {
        PortInfoMutex = (void *) 0;
      }
    }
    else
    {
    }

    {
    }
    return;
  }
}

#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4035)
#pragma warning(push)
#pragma warning(disable:4164)
#pragma function(_enable)
#pragma function(_disable)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4200)
#pragma warning(default:4200)
void PptCleanRemovalRelationsList(PDEVICE_EXTENSION Extension)
{
  PLIST_ENTRY listHead;
  PLIST_ENTRY thisListEntry;
  PREMOVAL_RELATIONS_LIST_ENTRY node;
  PLIST_ENTRY _EX_Blink;
  PLIST_ENTRY _EX_Flink;
  {
    {
      listHead = &Extension->RemovalRelationsList;
      thisListEntry = (void *) 0;
      node = (void *) 0;
    }
    {
      while (1)
      {
        while_19_continue:
        ;

        if (!(((unsigned int) listHead->Flink) == ((unsigned int) listHead)))
        {
        }
        else
        {
          goto while_19_break;
        }

        thisListEntry = listHead->Flink;
        _EX_Flink = listHead->Flink->Flink;
        _EX_Blink = listHead->Flink->Blink;
        _EX_Blink->Flink = _EX_Flink;
        _EX_Flink->Blink = _EX_Blink;
        node = (REMOVAL_RELATIONS_LIST_ENTRY *) (((CHAR *) thisListEntry) - ((unsigned long) (&((REMOVAL_RELATIONS_LIST_ENTRY *) 0)->ListEntry)));
        {
        }
        {
        }
      }

      while_19_break:
      ;

    }
    {
    }
    return;
  }
}

NTSTATUS PptAddPptRemovalRelation(PDEVICE_EXTENSION Extension, PPARPORT_REMOVAL_RELATIONS PptRemovalRelations)
{
  PREMOVAL_RELATIONS_LIST_ENTRY node;
  PVOID tmp;
  PVOID tmp___0;
  PLIST_ENTRY _EX_Blink;
  PLIST_ENTRY _EX_ListHead;
  {
    {
      tmp = ExAllocatePoolWithTag(1, sizeof(REMOVAL_RELATIONS_LIST_ENTRY), 1349673296UL);
      node = tmp;
    }
    {
    }
    if (!node)
    {
      {
      }
      return -1073741670L;
    }
    else
    {
    }

    {
      node->DeviceObject = PptRemovalRelations->DeviceObject;
      node->Flags = PptRemovalRelations->Flags;
      memset(&node->DeviceName, 0, sizeof(UNICODE_STRING));
      tmp___0 = ExAllocatePoolWithTag(1, PptRemovalRelations->DeviceName->MaximumLength, 1349673296UL);
      node->DeviceName.Buffer = tmp___0;
    }
    if (!node->DeviceName.Buffer)
    {
      {
      }
      {
      }
      return -1073741670L;
    }
    else
    {
    }

    {
      node->DeviceName.MaximumLength = PptRemovalRelations->DeviceName->MaximumLength;
      _EX_ListHead = &Extension->RemovalRelationsList;
      _EX_Blink = _EX_ListHead->Blink;
      node->ListEntry.Flink = _EX_ListHead;
      node->ListEntry.Blink = _EX_Blink;
      _EX_Blink->Flink = &node->ListEntry;
      _EX_ListHead->Blink = &node->ListEntry;
    }
    return 0L;
  }
}

NTSTATUS PptRemovePptRemovalRelation(PDEVICE_EXTENSION Extension, PPARPORT_REMOVAL_RELATIONS PptRemovalRelations)
{
  PDEVICE_OBJECT callerDevObj;
  PLIST_ENTRY listHead;
  PDEVICE_OBJECT listDevObj;
  PLIST_ENTRY thisListEntry;
  PLIST_ENTRY firstListEntry;
  BOOLEAN found;
  BOOLEAN done;
  PREMOVAL_RELATIONS_LIST_ENTRY node;
  PLIST_ENTRY _EX_Blink;
  PLIST_ENTRY _EX_Flink;
  PLIST_ENTRY _EX_Blink___0;
  PLIST_ENTRY _EX_ListHead;
  {
    callerDevObj = PptRemovalRelations->DeviceObject;
    listHead = &Extension->RemovalRelationsList;
    listDevObj = (void *) 0;
    thisListEntry = (void *) 0;
    firstListEntry = (void *) 0;
    found = 0;
    done = 0;
    node = (void *) 0;
    {
    }
    {
    }
    if (((unsigned int) listHead->Flink) == ((unsigned int) listHead))
    {
      {
      }
      {
      }
      return 0L;
    }
    else
    {
      {
      }
      {
      }
    }

    {
    }
    {
      while (1)
      {
        while_27_continue:
        ;

        if (!done)
        {
        }
        else
        {
          goto while_27_break;
        }

        thisListEntry = listHead->Flink;
        _EX_Flink = listHead->Flink->Flink;
        _EX_Blink = listHead->Flink->Blink;
        _EX_Blink->Flink = _EX_Flink;
        _EX_Flink->Blink = _EX_Blink;
        node = (REMOVAL_RELATIONS_LIST_ENTRY *) (((CHAR *) thisListEntry) - ((unsigned long) (&((REMOVAL_RELATIONS_LIST_ENTRY *) 0)->ListEntry)));
        if (((unsigned int) node->DeviceObject) == ((unsigned int) callerDevObj))
        {
          {
          }
          found = 1;
          done = 1;
        }
        else
        {
          if (((unsigned int) firstListEntry) == ((unsigned int) thisListEntry))
          {
            {
            }
            done = 1;
          }
          else
          {
            if (!firstListEntry)
            {
              {
              }
              firstListEntry = thisListEntry;
            }
            else
            {
            }

          }

        }

        if (!found)
        {
          _EX_ListHead = listHead;
          _EX_Blink___0 = _EX_ListHead->Blink;
          node->ListEntry.Flink = _EX_ListHead;
          node->ListEntry.Blink = _EX_Blink___0;
          _EX_Blink___0->Flink = &node->ListEntry;
          _EX_ListHead->Blink = &node->ListEntry;
        }
        else
        {
        }

      }

      while_27_break:
      ;

    }
    {
    }
    if (found)
    {
      {
      }
    }
    else
    {
    }

    {
    }
    return 0L;
  }
}

void PptDumpRemovalRelationsList(PDEVICE_EXTENSION Extension)
{
  PLIST_ENTRY listHead;
  PLIST_ENTRY thisListEntry;
  PLIST_ENTRY firstListEntry;
  BOOLEAN done;
  PREMOVAL_RELATIONS_LIST_ENTRY node;
  PLIST_ENTRY _EX_Blink;
  PLIST_ENTRY _EX_Flink;
  PLIST_ENTRY _EX_Flink___0;
  PLIST_ENTRY _EX_ListHead;
  PLIST_ENTRY _EX_Blink___0;
  PLIST_ENTRY _EX_ListHead___0;
  {
    listHead = &Extension->RemovalRelationsList;
    thisListEntry = (void *) 0;
    firstListEntry = (void *) 0;
    done = 0;
    node = (void *) 0;
    {
    }
    {
    }
    if (((unsigned int) listHead->Flink) == ((unsigned int) listHead))
    {
      {
      }
      {
      }
      return;
    }
    else
    {
      {
      }
    }

    {
      while (1)
      {
        while_35_continue:
        ;

        if (!done)
        {
        }
        else
        {
          goto while_35_break;
        }

        thisListEntry = listHead->Flink;
        _EX_Flink = listHead->Flink->Flink;
        _EX_Blink = listHead->Flink->Blink;
        _EX_Blink->Flink = _EX_Flink;
        _EX_Flink->Blink = _EX_Blink;
        node = (REMOVAL_RELATIONS_LIST_ENTRY *) (((CHAR *) thisListEntry) - ((unsigned long) (&((REMOVAL_RELATIONS_LIST_ENTRY *) 0)->ListEntry)));
        if (((unsigned int) firstListEntry) == ((unsigned int) thisListEntry))
        {
          _EX_ListHead = listHead;
          _EX_Flink___0 = _EX_ListHead->Flink;
          node->ListEntry.Flink = _EX_Flink___0;
          node->ListEntry.Blink = _EX_ListHead;
          _EX_Flink___0->Blink = &node->ListEntry;
          _EX_ListHead->Flink = &node->ListEntry;
          done = 1;
          {
          }
        }
        else
        {
          {
          }
          _EX_ListHead___0 = listHead;
          _EX_Blink___0 = _EX_ListHead___0->Blink;
          node->ListEntry.Flink = _EX_ListHead___0;
          node->ListEntry.Blink = _EX_Blink___0;
          _EX_Blink___0->Flink = &node->ListEntry;
          _EX_ListHead___0->Blink = &node->ListEntry;
        }

        if (!firstListEntry)
        {
          firstListEntry = thisListEntry;
        }
        else
        {
        }

      }

      while_35_break:
      ;

    }
    {
    }
    return;
  }
}

void PptDumpPptRemovalRelationsStruct(PPARPORT_REMOVAL_RELATIONS PptRemovalRelations)
{
  {
    return;
  }
}

NTSTATUS PptDispatchInternalDeviceControl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PIO_STACK_LOCATION IrpSp;
  PDEVICE_EXTENSION Extension;
  NTSTATUS Status;
  PPARALLEL_PORT_INFORMATION PortInfo;
  PPARALLEL_PNP_INFORMATION PnpInfo;
  PMORE_PARALLEL_PORT_INFORMATION MorePortInfo;
  KIRQL CancelIrql;
  SYNCHRONIZED_COUNT_CONTEXT SyncContext;
  PPARALLEL_INTERRUPT_SERVICE_ROUTINE IsrInfo;
  PPARALLEL_INTERRUPT_INFORMATION InterruptInfo;
  PISR_LIST_ENTRY IsrListEntry;
  SYNCHRONIZED_LIST_CONTEXT ListContext;
  SYNCHRONIZED_DISCONNECT_CONTEXT DisconnectContext;
  BOOLEAN DisconnectInterrupt;
  NTSTATUS tmp;
  PPARPORT_REMOVAL_RELATIONS removalRelations;
  PPARPORT_REMOVAL_RELATIONS removalRelations___0;
  PLIST_ENTRY _EX_Blink;
  PLIST_ENTRY _EX_ListHead;
  ULONG EnableConnectInterruptIoctl;
  PVOID tmp___0;
  BOOLEAN tmp___1;
  PLIST_ENTRY _EX_Blink___0;
  PLIST_ENTRY _EX_ListHead___0;
  {
    Extension = DeviceObject->DeviceExtension;
    {
    }
    if (Irp->UserEvent)
    {
    }
    else
    {
    }

    if (Extension->DeviceStateFlags & 4096UL)
    {
      {
      }
      {
        tmp = PptFailRequest(Irp, -1073741738L);
      }
      return tmp;
    }
    else
    {
    }

    {
      Status = PptAcquireRemoveLockOrFailIrp(DeviceObject, Irp);
    }
    if (!(Status >= 0L))
    {
      {
      }
      return Status;
    }
    else
    {
    }

    IrpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
    Irp->IoStatus.Information = 0;
    if (IrpSp->Parameters.DeviceIoControl.IoControlCode == ((22 << 16) | (50 << 2)))
    {
      goto switch_41_exp_0;
    }
    else
    {
      if (IrpSp->Parameters.DeviceIoControl.IoControlCode == ((22 << 16) | (51 << 2)))
      {
        goto switch_41_exp_1;
      }
      else
      {
        if (IrpSp->Parameters.DeviceIoControl.IoControlCode == ((22 << 16) | (40 << 2)))
        {
          goto switch_41_exp_2;
        }
        else
        {
          if (IrpSp->Parameters.DeviceIoControl.IoControlCode == ((22 << 16) | (11 << 2)))
          {
            goto switch_41_exp_3;
          }
          else
          {
            if (IrpSp->Parameters.DeviceIoControl.IoControlCode == ((22 << 16) | (12 << 2)))
            {
              goto switch_41_exp_4;
            }
            else
            {
              if (IrpSp->Parameters.DeviceIoControl.IoControlCode == ((22 << 16) | (15 << 2)))
              {
                goto switch_41_exp_5;
              }
              else
              {
                if (IrpSp->Parameters.DeviceIoControl.IoControlCode == ((22 << 16) | (21 << 2)))
                {
                  goto switch_41_exp_6;
                }
                else
                {
                  if (IrpSp->Parameters.DeviceIoControl.IoControlCode == ((22 << 16) | (17 << 2)))
                  {
                    goto switch_41_exp_7;
                  }
                  else
                  {
                    if (IrpSp->Parameters.DeviceIoControl.IoControlCode == ((22 << 16) | (13 << 2)))
                    {
                      goto switch_41_exp_8;
                    }
                    else
                    {
                      if (IrpSp->Parameters.DeviceIoControl.IoControlCode == ((22 << 16) | (14 << 2)))
                      {
                        goto switch_41_exp_9;
                      }
                      else
                      {
                        if (IrpSp->Parameters.DeviceIoControl.IoControlCode == ((22 << 16) | (19 << 2)))
                        {
                          goto switch_41_exp_10;
                        }
                        else
                        {
                          if (IrpSp->Parameters.DeviceIoControl.IoControlCode == ((22 << 16) | (20 << 2)))
                          {
                            goto switch_41_exp_11;
                          }
                          else
                          {
                            if (IrpSp->Parameters.DeviceIoControl.IoControlCode == ((22 << 16) | (22 << 2)))
                            {
                              goto switch_41_exp_12;
                            }
                            else
                            {
                              if (IrpSp->Parameters.DeviceIoControl.IoControlCode == ((22 << 16) | (23 << 2)))
                              {
                                goto switch_41_exp_13;
                              }
                              else
                              {
                                if (IrpSp->Parameters.DeviceIoControl.IoControlCode == ((22 << 16) | (24 << 2)))
                                {
                                  goto switch_41_exp_14;
                                }
                                else
                                {
                                  {
                                    goto switch_41_default;
                                    if (0)
                                    {
                                      switch_41_exp_0:
                                      ;

                                      {
                                      }
                                      if (IrpSp->Parameters.DeviceIoControl.InputBufferLength < ((ULONG) (sizeof(PARPORT_REMOVAL_RELATIONS))))
                                      {
                                        {
                                        }
                                        Status = -1073741789L;
                                      }
                                      else
                                      {
                                        {
                                          UNICODE_STRING s;
                                          PARPORT_REMOVAL_RELATIONS cmd;
                                          cmd.DeviceName = &s;
                                          Irp->AssociatedIrp.SystemBuffer = &cmd;
                                          removalRelations = Irp->AssociatedIrp.SystemBuffer;
                                          PptDumpRemovalRelationsList(Extension);
                                          PptAddPptRemovalRelation(Extension, removalRelations);
                                          PptDumpRemovalRelationsList(Extension);
                                        }
                                        {
                                        }
                                        Status = 0L;
                                      }

                                      {
                                        Irp->IoStatus.__annonCompField4.Status = Status;
                                        myStatus = Status;
                                        PptReleaseRemoveLock(&Extension->RemoveLock, Irp);
                                        PptCompleteRequest(Irp, 0);
                                      }
                                      return Status;
                                      switch_41_exp_1:
                                      ;

                                      {
                                      }
                                      if (IrpSp->Parameters.DeviceIoControl.InputBufferLength < ((ULONG) (sizeof(PARPORT_REMOVAL_RELATIONS))))
                                      {
                                        {
                                        }
                                        Status = -1073741789L;
                                      }
                                      else
                                      {
                                        {
                                          PARPORT_REMOVAL_RELATIONS cmd;
                                          Irp->AssociatedIrp.SystemBuffer = &cmd;
                                          removalRelations___0 = Irp->AssociatedIrp.SystemBuffer;
                                          PptDumpRemovalRelationsList(Extension);
                                          PptRemovePptRemovalRelation(Extension, removalRelations___0);
                                          PptDumpRemovalRelationsList(Extension);
                                        }
                                        {
                                        }
                                        Status = 0L;
                                      }

                                      {
                                        Irp->IoStatus.__annonCompField4.Status = Status;
                                        myStatus = Status;
                                        PptReleaseRemoveLock(&Extension->RemoveLock, Irp);
                                        PptCompleteRequest(Irp, 0);
                                      }
                                      return Status;
                                      switch_41_exp_2:
                                      {
                                        PptFreePort(Extension);
                                        Irp->IoStatus.__annonCompField4.Status = 0L;
                                        myStatus = 0L;
                                        PptReleaseRemoveLock(&Extension->RemoveLock, Irp);
                                        PptCompleteRequest(Irp, 0);
                                      }

                                      return 0L;
                                      switch_41_exp_3:
                                      {
                                      }

                                      if (Irp->Cancel)
                                      {
                                        Status = -1073741536L;
                                      }
                                      else
                                      {
                                        SyncContext.Count = &Extension->WorkQueueCount;
                                        if (Extension->InterruptRefCount)
                                        {
                                          {
                                            KeSynchronizeExecution(Extension->InterruptObject, &PptSynchronizedIncrement, &SyncContext);
                                          }
                                        }
                                        else
                                        {
                                          {
                                            PptSynchronizedIncrement(&SyncContext);
                                          }
                                        }

                                        if (SyncContext.NewCount)
                                        {
                                          {
                                            PptSetCancelRoutine(Irp, &PptCancelRoutine);
                                          }
                                          if (pended == 0)
                                          {
                                            pended = 1;
                                          }
                                          else
                                          {
                                            {
                                              errorFn();
                                            }
                                          }

                                          Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation->Control = ((int) Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation->Control) | 1;
                                          _EX_ListHead = &Extension->WorkQueue;
                                          _EX_Blink = _EX_ListHead->Blink;
                                          Irp->Tail.Overlay.__annonCompField17.ListEntry.Flink = _EX_ListHead;
                                          Irp->Tail.Overlay.__annonCompField17.ListEntry.Blink = _EX_Blink;
                                          _EX_Blink->Flink = &Irp->Tail.Overlay.__annonCompField17.ListEntry;
                                          _EX_ListHead->Blink = &Irp->Tail.Overlay.__annonCompField17.ListEntry;
                                          Status = 259L;
                                        }
                                        else
                                        {
                                          Extension->WmiPortAllocFreeCounts.PortAllocates += 1UL;
                                          Status = 0L;
                                        }

                                      }

                                      {
                                      }
                                      goto switch_41_break;
                                      switch_41_exp_4:
                                      ;

                                      {
                                      }
                                      if (IrpSp->Parameters.DeviceIoControl.OutputBufferLength < ((ULONG) (sizeof(PARALLEL_PORT_INFORMATION))))
                                      {
                                        Status = -1073741789L;
                                      }
                                      else
                                      {
                                        PARALLEL_PORT_INFORMATION cmd;
                                        Irp->AssociatedIrp.SystemBuffer = &cmd;
                                        Irp->IoStatus.Information = sizeof(PARALLEL_PORT_INFORMATION);
                                        PortInfo = Irp->AssociatedIrp.SystemBuffer;
                                        *PortInfo = Extension->PortInfo;
                                        Status = 0L;
                                      }

                                      goto switch_41_break;
                                      switch_41_exp_5:
                                      ;

                                      {
                                      }
                                      Status = 0L;
                                      goto switch_41_break;
                                      switch_41_exp_6:
                                      ;

                                      {
                                      }
                                      if (IrpSp->Parameters.DeviceIoControl.OutputBufferLength < ((ULONG) (sizeof(PARALLEL_PNP_INFORMATION))))
                                      {
                                        Status = -1073741789L;
                                      }
                                      else
                                      {
                                        PARALLEL_PNP_INFORMATION cmd;
                                        Irp->AssociatedIrp.SystemBuffer = &cmd;
                                        Irp->IoStatus.Information = sizeof(PARALLEL_PNP_INFORMATION);
                                        PnpInfo = Irp->AssociatedIrp.SystemBuffer;
                                        *PnpInfo = Extension->PnpInfo;
                                        Status = 0L;
                                      }

                                      goto switch_41_break;
                                      switch_41_exp_7:
                                      ;

                                      {
                                      }
                                      if (IrpSp->Parameters.DeviceIoControl.OutputBufferLength < ((ULONG) (sizeof(MORE_PARALLEL_PORT_INFORMATION))))
                                      {
                                        Status = -1073741789L;
                                      }
                                      else
                                      {
                                        MORE_PARALLEL_PORT_INFORMATION cmd;
                                        Irp->AssociatedIrp.SystemBuffer = &cmd;
                                        Irp->IoStatus.Information = sizeof(MORE_PARALLEL_PORT_INFORMATION);
                                        MorePortInfo = Irp->AssociatedIrp.SystemBuffer;
                                        MorePortInfo->InterfaceType = Extension->InterfaceType;
                                        MorePortInfo->BusNumber = Extension->BusNumber;
                                        MorePortInfo->InterruptLevel = Extension->InterruptLevel;
                                        MorePortInfo->InterruptVector = Extension->InterruptVector;
                                        MorePortInfo->InterruptAffinity = Extension->InterruptAffinity;
                                        MorePortInfo->InterruptMode = Extension->InterruptMode;
                                        Status = 0L;
                                      }

                                      goto switch_41_break;
                                      switch_41_exp_8:
                                      ;

                                      {
                                      }
                                      EnableConnectInterruptIoctl = 0;
                                      {
                                      }
                                      if (0UL == EnableConnectInterruptIoctl)
                                      {
                                        {
                                        }
                                        Status = -1073741823L;
                                        goto targetExit;
                                      }
                                      else
                                      {
                                        {
                                        }
                                      }

                                      if (IrpSp->Parameters.DeviceIoControl.InputBufferLength < ((ULONG) (sizeof(PARALLEL_INTERRUPT_SERVICE_ROUTINE))))
                                      {
                                        Status = -1073741789L;
                                      }
                                      else
                                      {
                                        if (IrpSp->Parameters.DeviceIoControl.OutputBufferLength < ((ULONG) (sizeof(PARALLEL_INTERRUPT_INFORMATION))))
                                        {
                                          Status = -1073741789L;
                                        }
                                        else
                                        {
                                          {
                                            IsrInfo = Irp->AssociatedIrp.SystemBuffer;
                                            InterruptInfo = Irp->AssociatedIrp.SystemBuffer;
                                          }
                                          if (Extension->InterruptRefCount)
                                          {
                                            {
                                              Extension->InterruptRefCount += 1UL;
                                              Status = 0L;
                                            }
                                          }
                                          else
                                          {
                                            {
                                              Status = PptConnectInterrupt(Extension);
                                            }
                                            if (Status >= 0L)
                                            {
                                              {
                                                Extension->InterruptRefCount += 1UL;
                                              }
                                            }
                                            else
                                            {
                                            }

                                          }

                                          if (Status >= 0L)
                                          {
                                            {
                                              tmp___0 = ExAllocatePoolWithTag(0, sizeof(ISR_LIST_ENTRY), 1349673296UL);
                                              IsrListEntry = tmp___0;
                                            }
                                            if (IsrListEntry)
                                            {
                                              {
                                                IsrListEntry->ServiceRoutine = IsrInfo->InterruptServiceRoutine;
                                                IsrListEntry->ServiceContext = IsrInfo->InterruptServiceContext;
                                                IsrListEntry->DeferredPortCheckRoutine = IsrInfo->DeferredPortCheckRoutine;
                                                IsrListEntry->CheckContext = IsrInfo->DeferredPortCheckContext;
                                                ListContext.List = &Extension->IsrList;
                                                ListContext.NewEntry = &IsrListEntry->ListEntry;
                                                KeSynchronizeExecution(Extension->InterruptObject, &PptSynchronizedQueue, &ListContext);
                                                InterruptInfo->InterruptObject = Extension->InterruptObject;
                                                InterruptInfo->TryAllocatePortAtInterruptLevel = &PptTryAllocatePortAtInterruptLevel;
                                                InterruptInfo->FreePortFromInterruptLevel = &PptFreePortFromInterruptLevel;
                                                InterruptInfo->Context = Extension;
                                                Irp->IoStatus.Information = sizeof(PARALLEL_INTERRUPT_INFORMATION);
                                                Status = 0L;
                                              }
                                            }
                                            else
                                            {
                                              Status = -1073741670L;
                                            }

                                          }
                                          else
                                          {
                                          }

                                        }

                                      }

                                      goto switch_41_break;
                                      switch_41_exp_9:
                                      ;

                                      {
                                      }
                                      if (IrpSp->Parameters.DeviceIoControl.InputBufferLength < ((ULONG) (sizeof(PARALLEL_INTERRUPT_SERVICE_ROUTINE))))
                                      {
                                        Status = -1073741789L;
                                      }
                                      else
                                      {
                                        {
                                          IsrInfo = Irp->AssociatedIrp.SystemBuffer;
                                        }
                                        if (Extension->InterruptRefCount)
                                        {
                                          {
                                            DisconnectContext.Extension = Extension;
                                            DisconnectContext.IsrInfo = IsrInfo;
                                            tmp___1 = KeSynchronizeExecution(Extension->InterruptObject, &PptSynchronizedDisconnect, &DisconnectContext);
                                          }
                                          if (tmp___1)
                                          {
                                            {
                                              Status = 0L;
                                              Extension->InterruptRefCount -= 1UL;
                                            }
                                            if (Extension->InterruptRefCount == 0UL)
                                            {
                                              DisconnectInterrupt = 1;
                                            }
                                            else
                                            {
                                              DisconnectInterrupt = 0;
                                            }

                                            {
                                            }
                                          }
                                          else
                                          {
                                            Status = -1073741811L;
                                            DisconnectInterrupt = 0;
                                          }

                                        }
                                        else
                                        {
                                          {
                                            DisconnectInterrupt = 0;
                                            Status = -1073741811L;
                                          }
                                        }

                                        if (DisconnectInterrupt)
                                        {
                                          {
                                            PptDisconnectInterrupt(Extension);
                                          }
                                        }
                                        else
                                        {
                                        }

                                      }

                                      goto switch_41_break;
                                      switch_41_exp_10:
                                      ;

                                      {
                                      }
                                      if (IrpSp->Parameters.DeviceIoControl.InputBufferLength < ((ULONG) (sizeof(PARALLEL_CHIP_MODE))))
                                      {
                                        Status = -1073741789L;
                                      }
                                      else
                                      {
                                        {
                                        }
                                        {
                                          struct _PARALLEL_CHIP_MODE cmd;
                                          Irp->AssociatedIrp.SystemBuffer = &cmd;
                                          Status = PptSetChipMode(Extension, ((struct _PARALLEL_CHIP_MODE *) Irp->AssociatedIrp.SystemBuffer)->ModeFlags);
                                        }
                                      }

                                      goto switch_41_break;
                                      switch_41_exp_11:
                                      ;

                                      {
                                      }
                                      if (IrpSp->Parameters.DeviceIoControl.InputBufferLength < ((ULONG) (sizeof(PARALLEL_CHIP_MODE))))
                                      {
                                        Status = -1073741789L;
                                      }
                                      else
                                      {
                                        {
                                        }
                                        {
                                          struct _PARALLEL_CHIP_MODE cmd;
                                          Irp->AssociatedIrp.SystemBuffer = &cmd;
                                          Status = PptClearChipMode(Extension, ((struct _PARALLEL_CHIP_MODE *) Irp->AssociatedIrp.SystemBuffer)->ModeFlags);
                                        }
                                      }

                                      goto switch_41_break;
                                      switch_41_exp_12:
                                      ;

                                      {
                                      }
                                      {
                                        Extension->PnpInfo.Ieee1284_3DeviceCount = PptInitiate1284_3(Extension);
                                        Status = 0L;
                                      }
                                      goto switch_41_break;
                                      switch_41_exp_13:
                                      ;

                                      {
                                      }
                                      if (IrpSp->Parameters.DeviceIoControl.InputBufferLength < ((ULONG) (sizeof(PARALLEL_1284_COMMAND))))
                                      {
                                        {
                                        }
                                        Status = -1073741789L;
                                      }
                                      else
                                      {
                                        if (Irp->Cancel)
                                        {
                                          Status = -1073741536L;
                                        }
                                        else
                                        {
                                          {
                                            PARALLEL_1284_COMMAND cmd;
                                            Irp->AssociatedIrp.SystemBuffer = &cmd;
                                            Status = PptTrySelectDevice(Extension, Irp->AssociatedIrp.SystemBuffer);
                                          }
                                          if (Status == 259L)
                                          {
                                            {
                                              PptSetCancelRoutine(Irp, &PptCancelRoutine);
                                            }
                                            if (pended == 0)
                                            {
                                              pended = 1;
                                            }
                                            else
                                            {
                                              {
                                                errorFn();
                                              }
                                            }

                                            Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation->Control = ((int) Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation->Control) | 1;
                                            _EX_ListHead___0 = &Extension->WorkQueue;
                                            _EX_Blink___0 = _EX_ListHead___0->Blink;
                                            Irp->Tail.Overlay.__annonCompField17.ListEntry.Flink = _EX_ListHead___0;
                                            Irp->Tail.Overlay.__annonCompField17.ListEntry.Blink = _EX_Blink___0;
                                            _EX_Blink___0->Flink = &Irp->Tail.Overlay.__annonCompField17.ListEntry;
                                            _EX_ListHead___0->Blink = &Irp->Tail.Overlay.__annonCompField17.ListEntry;
                                            {
                                            }
                                          }
                                          else
                                          {
                                          }

                                          {
                                          }
                                        }

                                      }

                                      goto switch_41_break;
                                      switch_41_exp_14:
                                      ;

                                      {
                                      }
                                      if (IrpSp->Parameters.DeviceIoControl.InputBufferLength < ((ULONG) (sizeof(PARALLEL_1284_COMMAND))))
                                      {
                                        {
                                        }
                                        Status = -1073741789L;
                                      }
                                      else
                                      {
                                        {
                                          PARALLEL_1284_COMMAND cmd;
                                          Irp->AssociatedIrp.SystemBuffer = &cmd;
                                          Status = PptDeselectDevice(Extension, Irp->AssociatedIrp.SystemBuffer);
                                        }
                                      }

                                      goto switch_41_break;
                                      switch_41_default:
                                      ;

                                      {
                                      }
                                      Status = -1073741811L;
                                      goto switch_41_break;
                                    }
                                    else
                                    {
                                      switch_41_break:
                                      ;

                                    }

                                  }
                                }

                              }

                            }

                          }

                        }

                      }

                    }

                  }

                }

              }

            }

          }

        }

      }

    }

    targetExit:
    if (Status != 259L)
    {
      {
        Irp->IoStatus.__annonCompField4.Status = Status;
        myStatus = Status;
        PptReleaseRemoveLock(&Extension->RemoveLock, Irp);
        PptCompleteRequest(Irp, 0);
      }
    }
    else
    {
    }


    return Status;
  }
}

#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4035)
#pragma warning(push)
#pragma warning(disable:4164)
#pragma function(_enable)
#pragma function(_disable)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4200)
#pragma warning(default:4200)
BOOLEAN PptIsNecR98Machine(void)
{
  UNICODE_STRING Path;
  RTL_QUERY_REGISTRY_TABLE ParamTable[2];
  NTSTATUS Status;
  UNICODE_STRING identifierString;
  UNICODE_STRING necR98Identifier;
  UNICODE_STRING necR98JIdentifier;
  PVOID tmp;
  LONG tmp___0;
  LONG tmp___1;
  {
    {
      identifierString.Length = 0;
      identifierString.MaximumLength = 32;
      tmp = ExAllocatePoolWithTag(1, identifierString.MaximumLength, 1349673296UL);
      identifierString.Buffer = tmp;
    }
    if (!identifierString.Buffer)
    {
      return 0;
    }
    else
    {
    }

    {
      memset(ParamTable, 0, sizeof(ParamTable));
      ParamTable[0].Flags = 36;
      ParamTable[0].EntryContext = &identifierString;
      ParamTable[0].DefaultType = 1;
      ParamTable[0].DefaultData = &Path;
      ParamTable[0].DefaultLength = 0;
      Status = RtlQueryRegistryValues(0, Path.Buffer, ParamTable, (void *) 0, (void *) 0);
    }
    if (Status >= 0L)
    {
      {
        tmp___0 = RtlCompareUnicodeString(&identifierString, &necR98Identifier, 0);
      }
      if (tmp___0 == 0L)
      {
        goto _L;
      }
      else
      {
        {
          tmp___1 = RtlCompareUnicodeString(&identifierString, &necR98JIdentifier, 0);
        }
        if (tmp___1 == 0L)
        {
          _L:
          {
          }

          {
          }
          return 1;
        }
        else
        {
        }

      }

    }
    else
    {
      {
      }
      {
      }
      return 0;
    }

    {
    }
    {
    }
    return 0;
  }
}

#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4035)
#pragma warning(push)
#pragma warning(disable:4164)
#pragma function(_enable)
#pragma function(_disable)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4200)
#pragma warning(default:4200)
NTSTATUS PptDispatchCreate(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PDEVICE_EXTENSION extension;
  NTSTATUS status;
  NTSTATUS tmp;
  {
    extension = DeviceObject->DeviceExtension;
    status = 0L;
    if (extension->DeviceStateFlags & 4096UL)
    {
      {
      }
      {
        tmp = PptFailRequest(Irp, -1073741738L);
      }
      return tmp;
    }
    else
    {
    }

    {
      status = PptAcquireRemoveLockOrFailIrp(DeviceObject, Irp);
    }
    if (!(status >= 0L))
    {
      {
      }
      return status;
    }
    else
    {
    }

    {
      InterlockedIncrement(&extension->OpenCloseRefCount);
    }
    {
    }
    {
      PptReleaseRemoveLock(&extension->RemoveLock, Irp);
      Irp->IoStatus.__annonCompField4.Status = status;
      myStatus = status;
      Irp->IoStatus.Information = 0;
      PptCompleteRequest(Irp, 0);
    }
    return status;
  }
}

NTSTATUS PptDispatchClose(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PDEVICE_EXTENSION extension;
  NTSTATUS status;
  LONG tmp;
  {
    extension = DeviceObject->DeviceExtension;
    if (extension->DeviceStateFlags & 4096UL)
    {
      {
        Irp->IoStatus.__annonCompField4.Status = 0L;
        myStatus = 0L;
        Irp->IoStatus.Information = 0;
        PptCompleteRequest(Irp, 0);
      }
      return 0L;
    }
    else
    {
    }

    {
      status = PptAcquireRemoveLock(&extension->RemoveLock, Irp);
    }
    if (!(status >= 0L))
    {
      {
        Irp->IoStatus.__annonCompField4.Status = 0L;
        myStatus = 0L;
        Irp->IoStatus.Information = 0;
        PptCompleteRequest(Irp, 0);
      }
      return 0L;
    }
    else
    {
    }

    {
    }
    if (extension->OpenCloseRefCount > 0L)
    {
      {
        tmp = InterlockedDecrement(&extension->OpenCloseRefCount);
      }
      if (tmp < 0L)
      {
        {
          InterlockedIncrement(&extension->OpenCloseRefCount);
        }
      }
      else
      {
      }

      {
      }
      {
      }
    }
    else
    {
      {
      }
      {
      }
    }

    {
      Irp->IoStatus.__annonCompField4.Status = 0L;
      myStatus = 0L;
      Irp->IoStatus.Information = 0;
      PptCompleteRequest(Irp, 0);
      PptReleaseRemoveLock(&extension->RemoveLock, Irp);
    }
    return 0L;
  }
}

#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4035)
#pragma warning(push)
#pragma warning(disable:4164)
#pragma function(_enable)
#pragma function(_disable)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4200)
#pragma warning(default:4200)
static UCHAR ModeQualifier___6[7] = {170, 85, 0, 255, 135, 120, 255};
BOOLEAN PptCheckIfStl1284_3(PDEVICE_EXTENSION DeviceExtension, ULONG ulDaisyIndex, BOOLEAN bNoStrobe);
BOOLEAN PptCheckIfNon1284_3Present(PDEVICE_EXTENSION Extension);
BOOLEAN PptCheckIfStlProductId(PDEVICE_EXTENSION DeviceExtension, ULONG ulDaisyIndex);
ULONG PptInitiate1284_3(PVOID Extension)
{
  ULONG deviceCount1;
  ULONG deviceCount2;
  ULONG loopCount;
  ULONG maxTries;
  {
    deviceCount1 = 0;
    deviceCount2 = 0;
    loopCount = 0;
    maxTries = 3;
    {
      while (1)
      {
        while_76_continue:
        ;

        {
          KeStallExecutionProcessor(5);
          deviceCount1 = Ppt1284_3AssignAddress(Extension);
          KeStallExecutionProcessor(5);
          deviceCount2 = Ppt1284_3AssignAddress(Extension);
        }
        if (deviceCount1 != deviceCount2)
        {
          loopCount += 1UL;
          if (loopCount < maxTries)
          {
          }
          else
          {
            goto while_76_break;
          }

        }
        else
        {
          goto while_76_break;
        }

      }

      while_76_break:
      ;

    }
    return deviceCount2;
  }
}

NTSTATUS PptTrySelectDevice(PVOID Context, PVOID TrySelectCommand)
{
  NTSTATUS Status;
  PDEVICE_EXTENSION Extension;
  PPARALLEL_1284_COMMAND Command;
  BOOLEAN success;
  SYNCHRONIZED_COUNT_CONTEXT SyncContext;
  KIRQL CancelIrql;
  UCHAR i;
  UCHAR DeviceID;
  NTSTATUS tmp;
  {
    Status = 0L;
    Extension = Context;
    Command = TrySelectCommand;
    success = 0;
    {
    }
    if (Command->CommandFlags & 4UL)
    {
      {
        tmp = PptTrySelectLegacyZip(Context, TrySelectCommand);
      }
      return tmp;
    }
    else
    {
      if (((int) Command->ID) == 5)
      {
        {
          tmp = PptTrySelectLegacyZip(Context, TrySelectCommand);
        }
        return tmp;
      }
      else
      {
      }

    }

    DeviceID = Command->ID;
    if (!(Command->CommandFlags & 1UL))
    {
      if (((ULONG) DeviceID) > Extension->PnpInfo.Ieee1284_3DeviceCount)
      {
        {
        }
        Status = -1073741811L;
      }
      else
      {
        goto _L___1;
      }

    }
    else
    {
      _L___1:
      if (Command->CommandFlags & 2UL)
      {
        if (!(Command->CommandFlags & 1UL))
        {
          if (((ULONG) DeviceID) < Extension->PnpInfo.Ieee1284_3DeviceCount)
          {
            i = 0;
            {
              while (1)
              {
                while_79_continue:
                ;

                if (((int) i) < ((int) PptDot3Retries))
                {
                  if (!success)
                  {
                  }
                  else
                  {
                    goto while_79_break;
                  }

                }
                else
                {
                  goto while_79_break;
                }

                {
                  success = PptSend1284_3Command(Extension, (unsigned char) (224 | ((int) DeviceID)));
                  KeStallExecutionProcessor(5);
                  i = (UCHAR) (((int) i) + 1);
                }
              }

              while_79_break:
              ;

            }
            if (success)
            {
              {
              }
              Status = 0L;
            }
            else
            {
              {
              }
              Status = -1073741823L;
            }

          }
          else
          {
            goto _L;
          }

        }
        else
        {
          _L:
          {
          }

          Status = 0L;
        }

      }
      else
      {
        {
        }
        {
          SyncContext.Count = &Extension->WorkQueueCount;
        }
        if (Extension->InterruptRefCount)
        {
          {
            KeSynchronizeExecution(Extension->InterruptObject, &PptSynchronizedIncrement, &SyncContext);
          }
        }
        else
        {
          {
            PptSynchronizedIncrement(&SyncContext);
          }
        }

        if (SyncContext.NewCount)
        {
          {
            Status = 259L;
          }
        }
        else
        {
          {
          }
          {
          }
          Extension->WmiPortAllocFreeCounts.PortAllocates += 1UL;
          if (!(Command->CommandFlags & 1UL))
          {
            if (((ULONG) DeviceID) < Extension->PnpInfo.Ieee1284_3DeviceCount)
            {
              i = 0;
              {
                while (1)
                {
                  while_85_continue:
                  ;

                  if (((int) i) < ((int) PptDot3Retries))
                  {
                    if (!success)
                    {
                    }
                    else
                    {
                      goto while_85_break;
                    }

                  }
                  else
                  {
                    goto while_85_break;
                  }

                  {
                    success = PptSend1284_3Command(Extension, (unsigned char) (224 | ((int) DeviceID)));
                    KeStallExecutionProcessor(5);
                    i = (UCHAR) (((int) i) + 1);
                  }
                }

                while_85_break:
                ;

              }
              if (success)
              {
                {
                }
                Status = 0L;
              }
              else
              {
                {
                }
                Status = -1073741823L;
              }

            }
            else
            {
              goto _L___0;
            }

          }
          else
          {
            _L___0:
            {
            }

            Status = 0L;
          }

        }

      }


    }

    return Status;
  }
}

NTSTATUS PptDeselectDevice(PVOID Context, PVOID DeselectCommand)
{
  NTSTATUS Status;
  PDEVICE_EXTENSION Extension;
  PPARALLEL_1284_COMMAND Command;
  BOOLEAN success;
  UCHAR i;
  UCHAR DeviceID;
  NTSTATUS tmp;
  {
    Status = 0L;
    Extension = Context;
    Command = DeselectCommand;
    success = 0;
    {
    }
    if (Command->CommandFlags & 4UL)
    {
      {
        tmp = PptDeselectLegacyZip(Context, DeselectCommand);
      }
      return tmp;
    }
    else
    {
      if (((int) Command->ID) == 5)
      {
        {
          tmp = PptDeselectLegacyZip(Context, DeselectCommand);
        }
        return tmp;
      }
      else
      {
      }

    }

    DeviceID = Command->ID;
    if (!(Command->CommandFlags & 1UL))
    {
      if (((ULONG) DeviceID) > Extension->PnpInfo.Ieee1284_3DeviceCount)
      {
        {
        }
        Status = -1073741811L;
      }
      else
      {
        goto _L___0;
      }

    }
    else
    {
      _L___0:
      if (!(Command->CommandFlags & 1UL))
      {
        if (((ULONG) DeviceID) < Extension->PnpInfo.Ieee1284_3DeviceCount)
        {
          i = 0;
          {
            while (1)
            {
              while_91_continue:
              ;

              if (((int) i) < ((int) PptDot3Retries))
              {
                if (!success)
                {
                }
                else
                {
                  goto while_91_break;
                }

              }
              else
              {
                goto while_91_break;
              }

              {
                success = PptSend1284_3Command(Extension, (unsigned char) 48);
                KeStallExecutionProcessor(5);
                i = (UCHAR) (((int) i) + 1);
              }
            }

            while_91_break:
            ;

          }
          if (success)
          {
            {
            }
            if (!(Command->CommandFlags & 2UL))
            {
              {
                PptFreePort(Extension);
              }
            }
            else
            {
            }

            Status = 0L;
          }
          else
          {
            {
            }
            Status = -1073741823L;
          }

        }
        else
        {
          goto _L;
        }

      }
      else
      {
        _L:
        {
        }

        if (!(Command->CommandFlags & 2UL))
        {
          {
            PptFreePort(Extension);
          }
        }
        else
        {
        }

        Status = 0L;
      }


    }

    return Status;
  }
}

ULONG Ppt1284_3AssignAddress(PDEVICE_EXTENSION DeviceExtension)
{
  UCHAR i = __VERIFIER_nondet_char("i");
  assume_abort_if_not(i < 7);
  UCHAR value;
  UCHAR newvalue;
  UCHAR status;
  PUCHAR CurrentPort;
  PUCHAR CurrentStatus;
  PUCHAR CurrentControl;
  ULONG Delay;
  UCHAR number;
  BOOLEAN lastdevice;
  UCHAR idx;
  UCHAR tmp;
  BOOLEAN bStlNon1284_3Found;
  BOOLEAN bStlNon1284_3Valid;
  BOOLEAN tmp___0;
  BOOLEAN tmp___1;
  {
    {
      Delay = 5;
      number = 0;
      lastdevice = 0;
      CurrentPort = DeviceExtension->PortInfo.Controller;
      CurrentStatus = CurrentPort + 1;
      CurrentControl = CurrentPort + 2;
      value = READ_PORT_UCHAR(CurrentControl);
      newvalue = (unsigned char) ((((int) value) & (-9)) | 4);
      newvalue = (unsigned char) (((int) newvalue) & (-33));
      WRITE_PORT_UCHAR(CurrentControl, newvalue);
      WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) & (-2)));
      WRITE_PORT_UCHAR(CurrentPort, ModeQualifier___6[i]);
      KeStallExecutionProcessor(Delay);
      status = READ_PORT_UCHAR(CurrentStatus);
    }
    if ((((int) status) & 184) == 184)
    {
      {
        WRITE_PORT_UCHAR(CurrentPort, ModeQualifier___6[4]);
        KeStallExecutionProcessor(Delay);
        status = READ_PORT_UCHAR(CurrentStatus);
      }
      if ((((int) status) & 184) == 24)
      {
        {
          WRITE_PORT_UCHAR(CurrentPort, ModeQualifier___6[5]);
          KeStallExecutionProcessor(Delay);
          status = READ_PORT_UCHAR(CurrentStatus);
        }
        if ((((int) status) & 48) == 48)
        {
          {
            KeStallExecutionProcessor(Delay);
          }
          {
            while (1)
            {
              while_95_continue:
              ;

              if (((int) number) < 4)
              {
                if (!lastdevice)
                {
                }
                else
                {
                  goto while_95_break;
                }

              }
              else
              {
                goto while_95_break;
              }

              {
                WRITE_PORT_UCHAR(CurrentPort, number);
                number = (unsigned char) (((int) number) + 1);
                KeStallExecutionProcessor(Delay);
                tmp = READ_PORT_UCHAR(CurrentStatus);
              }
              if ((((int) tmp) & 128) == 0)
              {
                lastdevice = 1;
              }
              else
              {
              }

              {
                WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) & (-2)));
                WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) | 1));
                KeStallExecutionProcessor(Delay);
                WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) & (-2)));
                KeStallExecutionProcessor(Delay);
              }
            }

            while_95_break:
            ;

          }
          {
            WRITE_PORT_UCHAR(CurrentPort, ModeQualifier___6[6]);
          }
          if (number)
          {
            {
              bStlNon1284_3Found = PptCheckIfNon1284_3Present(DeviceExtension);
              bStlNon1284_3Valid = 0;
              idx = 0;
            }
            {
              while (1)
              {
                while_96_continue:
                ;

                if (((int) idx) < ((int) number))
                {
                }
                else
                {
                  goto while_96_break;
                }

                {
                  tmp___0 = PptCheckIfStl1284_3(DeviceExtension, idx, bStlNon1284_3Found);
                }
                if (1 == ((int) tmp___0))
                {
                  goto __Cont;
                }
                else
                {
                }

                if (1 == ((int) bStlNon1284_3Found))
                {
                  {
                    tmp___1 = PptCheckIfStlProductId(DeviceExtension, idx);
                  }
                  if (1 == ((int) tmp___1))
                  {
                    bStlNon1284_3Valid = 1;
                    goto __Cont;
                  }
                  else
                  {
                  }

                }
                else
                {
                }

                goto while_96_break;
                __Cont:
                idx = (UCHAR) (((int) idx) + 1);

              }

              while_96_break:
              ;

            }
            if (1 == ((int) bStlNon1284_3Valid))
            {
              number = idx;
            }
            else
            {
            }

          }
          else
          {
          }

        }
        else
        {
        }

      }
      else
      {
      }

    }
    else
    {
    }

    {
      WRITE_PORT_UCHAR(CurrentControl, value);
    }
    return (unsigned long) number;
  }
}

BOOLEAN PptCheckIfNon1284_3Present(PDEVICE_EXTENSION Extension)
{
  BOOLEAN bReturnValue;
  UCHAR i = __VERIFIER_nondet_char("i");
  assume_abort_if_not(i < 7);
  UCHAR value;
  UCHAR newvalue;
  UCHAR status;
  ULONG Delay;
  PUCHAR CurrentPort;
  PUCHAR CurrentStatus;
  PUCHAR CurrentControl;
  UCHAR ucAckStatus;
  {
    {
      bReturnValue = 0;
      Delay = 3;
      CurrentPort = Extension->PortInfo.Controller;
      CurrentStatus = CurrentPort + 1;
      CurrentControl = CurrentPort + 2;
      value = READ_PORT_UCHAR(CurrentControl);
      newvalue = (unsigned char) ((((int) value) & (-9)) | 4);
      newvalue = (unsigned char) (((int) newvalue) & (-33));
      WRITE_PORT_UCHAR(CurrentControl, newvalue);
      WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) & (-2)));
      WRITE_PORT_UCHAR(CurrentPort, ModeQualifier___6[i]);
      KeStallExecutionProcessor(Delay);
      status = READ_PORT_UCHAR(CurrentStatus);
    }
    if ((((int) status) & 184) == 184)
    {
      {
        ucAckStatus = ((int) status) & 64;
        WRITE_PORT_UCHAR(CurrentPort, ModeQualifier___6[4]);
        KeStallExecutionProcessor(Delay);
        status = READ_PORT_UCHAR(CurrentStatus);
      }
      if ((((int) status) & 184) == 24)
      {
        if (((int) ucAckStatus) != (((int) status) & 64))
        {
          {
            ucAckStatus = ((int) status) & 64;
            WRITE_PORT_UCHAR(CurrentPort, ModeQualifier___6[5]);
            KeStallExecutionProcessor(Delay);
            status = READ_PORT_UCHAR(CurrentStatus);
          }
          if ((((int) status) & 48) == 48)
          {
            bReturnValue = 1;
          }
          else
          {
          }

        }
        else
        {
        }

        {
          WRITE_PORT_UCHAR(CurrentPort, ModeQualifier___6[6]);
        }
      }
      else
      {
      }

    }
    else
    {
    }

    {
      WRITE_PORT_UCHAR(CurrentControl, value);
    }
    return bReturnValue;
  }
}

BOOLEAN PptCheckIfStl1284_3(PDEVICE_EXTENSION DeviceExtension, ULONG ulDaisyIndex, BOOLEAN bNoStrobe)
{
  BOOLEAN bReturnValue;
  UCHAR i = __VERIFIER_nondet_char("i");
  assume_abort_if_not(i < 7);
  UCHAR value;
  UCHAR newvalue;
  UCHAR status;
  ULONG Delay;
  UCHAR ucExpectedPattern;
  UCHAR ucReadValue;
  UCHAR ucReadPattern;
  PUCHAR CurrentPort;
  PUCHAR CurrentStatus;
  PUCHAR CurrentControl;
  {
    {
      bReturnValue = 0;
      Delay = 3;
      CurrentPort = DeviceExtension->PortInfo.Controller;
      CurrentStatus = CurrentPort + 1;
      CurrentControl = CurrentPort + 2;
      value = READ_PORT_UCHAR(CurrentControl);
      newvalue = (unsigned char) ((((int) value) & (-9)) | 4);
      newvalue = (unsigned char) (((int) newvalue) & (-33));
      WRITE_PORT_UCHAR(CurrentControl, newvalue);
      WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) & (-2)));
      WRITE_PORT_UCHAR(CurrentPort, ModeQualifier___6[i]);
      KeStallExecutionProcessor(Delay);
      status = READ_PORT_UCHAR(CurrentStatus);
    }
    if ((((int) status) & 184) == 184)
    {
      {
        WRITE_PORT_UCHAR(CurrentPort, ModeQualifier___6[4]);
        KeStallExecutionProcessor(Delay);
        status = READ_PORT_UCHAR(CurrentStatus);
      }
      if ((((int) status) & 184) == 24)
      {
        {
          WRITE_PORT_UCHAR(CurrentPort, ModeQualifier___6[5]);
          KeStallExecutionProcessor(Delay);
          status = READ_PORT_UCHAR(CurrentStatus);
        }
        if ((((int) status) & 48) == 48)
        {
          {
            KeStallExecutionProcessor(Delay);
            WRITE_PORT_UCHAR(CurrentPort, (unsigned char) (136UL | ulDaisyIndex));
            KeStallExecutionProcessor(Delay);
          }
          if (ulDaisyIndex)
          {
            if (((int) bNoStrobe) == 0)
            {
              {
                WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) & (-2)));
                WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) | 1));
                KeStallExecutionProcessor(Delay);
                WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) & (-2)));
                KeStallExecutionProcessor(Delay);
              }
            }
            else
            {
            }

          }
          else
          {
          }

          ucExpectedPattern = 240;
          bReturnValue = 1;
          {
            while (1)
            {
              while_97_continue:
              ;

              if (ucExpectedPattern)
              {
              }
              else
              {
                goto while_97_break;
              }

              {
                KeStallExecutionProcessor(Delay);
                WRITE_PORT_UCHAR(CurrentPort, (unsigned char) (128UL | ulDaisyIndex));
                KeStallExecutionProcessor(Delay);
                WRITE_PORT_UCHAR(CurrentPort, (unsigned char) (136UL | ulDaisyIndex));
                KeStallExecutionProcessor(Delay);
                ucReadValue = READ_PORT_UCHAR(CurrentStatus);
                ucReadPattern = (((int) ucReadValue) << 1) & 112;
                ucReadPattern = ((int) ucReadPattern) | (((int) ucReadValue) & 128);
              }
              if (((int) ucReadPattern) != ((int) ucExpectedPattern))
              {
                bReturnValue = 0;
                goto while_97_break;
              }
              else
              {
              }

              ucExpectedPattern = ((int) ucExpectedPattern) - 16;
            }

            while_97_break:
            ;

          }
          {
            WRITE_PORT_UCHAR(CurrentPort, ModeQualifier___6[6]);
          }
        }
        else
        {
        }

      }
      else
      {
      }

    }
    else
    {
    }

    {
      WRITE_PORT_UCHAR(CurrentControl, value);
    }
    return bReturnValue;
  }
}

BOOLEAN PptCheckIfStlProductId(PDEVICE_EXTENSION DeviceExtension, ULONG ulDaisyIndex)
{
  BOOLEAN bReturnValue;
  UCHAR i = __VERIFIER_nondet_char("i");
  assume_abort_if_not(i < 7);
  UCHAR value;
  UCHAR newvalue;
  UCHAR status;
  ULONG Delay;
  UCHAR ucProdIdHiByteHiNibble;
  UCHAR ucProdIdHiByteLoNibble;
  UCHAR ucProdIdLoByteHiNibble;
  UCHAR ucProdIdLoByteLoNibble;
  UCHAR ucProdIdHiByte;
  UCHAR ucProdIdLoByte;
  USHORT usProdId;
  PUCHAR CurrentPort;
  PUCHAR CurrentStatus;
  PUCHAR CurrentControl;
  {
    {
      bReturnValue = 0;
      Delay = 3;
      CurrentPort = DeviceExtension->PortInfo.Controller;
      CurrentStatus = CurrentPort + 1;
      CurrentControl = CurrentPort + 2;
      value = READ_PORT_UCHAR(CurrentControl);
      newvalue = (unsigned char) ((((int) value) & (-9)) | 4);
      newvalue = (unsigned char) (((int) newvalue) & (-33));
      WRITE_PORT_UCHAR(CurrentControl, newvalue);
      WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) & (-2)));
      WRITE_PORT_UCHAR(CurrentPort, ModeQualifier___6[i]);
      KeStallExecutionProcessor(Delay);
      status = READ_PORT_UCHAR(CurrentStatus);
    }
    if ((((int) status) & 184) == 184)
    {
      {
        WRITE_PORT_UCHAR(CurrentPort, ModeQualifier___6[4]);
        KeStallExecutionProcessor(Delay);
        status = READ_PORT_UCHAR(CurrentStatus);
      }
      if ((((int) status) & 184) == 24)
      {
        {
          WRITE_PORT_UCHAR(CurrentPort, ModeQualifier___6[5]);
          KeStallExecutionProcessor(Delay);
          status = READ_PORT_UCHAR(CurrentStatus);
        }
        if ((((int) status) & 48) == 48)
        {
          {
            WRITE_PORT_UCHAR(CurrentPort, (unsigned char) (16UL | ulDaisyIndex));
            KeStallExecutionProcessor(Delay);
            KeStallExecutionProcessor(Delay);
            ucProdIdLoByteHiNibble = READ_PORT_UCHAR(CurrentStatus);
            ucProdIdLoByteHiNibble = ((int) ucProdIdLoByteHiNibble) & 240;
            KeStallExecutionProcessor(Delay);
            WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) & (-2)));
            WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) | 1));
            KeStallExecutionProcessor(Delay);
            WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) & (-2)));
            KeStallExecutionProcessor(Delay);
            ucProdIdLoByteLoNibble = READ_PORT_UCHAR(CurrentStatus);
            ucProdIdLoByteLoNibble = ((int) ucProdIdLoByteLoNibble) >> 4;
            ucProdIdLoByte = ((int) ucProdIdLoByteHiNibble) | ((int) ucProdIdLoByteLoNibble);
            KeStallExecutionProcessor(Delay);
            WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) & (-2)));
            WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) | 1));
            KeStallExecutionProcessor(Delay);
            WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) & (-2)));
            KeStallExecutionProcessor(Delay);
            ucProdIdHiByteHiNibble = READ_PORT_UCHAR(CurrentStatus);
            ucProdIdHiByteHiNibble = ((int) ucProdIdHiByteHiNibble) & 240;
            KeStallExecutionProcessor(Delay);
            WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) & (-2)));
            WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) | 1));
            KeStallExecutionProcessor(Delay);
            WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) & (-2)));
            KeStallExecutionProcessor(Delay);
            ucProdIdHiByteLoNibble = READ_PORT_UCHAR(CurrentStatus);
            ucProdIdHiByteLoNibble = ((int) ucProdIdHiByteLoNibble) >> 4;
            ucProdIdHiByte = ((int) ucProdIdHiByteHiNibble) | ((int) ucProdIdHiByteLoNibble);
            KeStallExecutionProcessor(Delay);
            WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) & (-2)));
            WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) | 1));
            KeStallExecutionProcessor(Delay);
            WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) & (-2)));
            KeStallExecutionProcessor(Delay);
            usProdId = (((int) ucProdIdHiByte) << 8) | ((int) ucProdIdLoByte);
          }
          if (43775 == ((int) usProdId))
          {
            bReturnValue = 1;
          }
          else
          {
            if (43263 == ((int) usProdId))
            {
              bReturnValue = 1;
            }
            else
            {
            }

          }

          {
            WRITE_PORT_UCHAR(CurrentPort, ModeQualifier___6[6]);
          }
        }
        else
        {
        }

      }
      else
      {
      }

    }
    else
    {
    }

    {
      WRITE_PORT_UCHAR(CurrentControl, value);
    }
    return bReturnValue;
  }
}

BOOLEAN PptSend1284_3Command(PDEVICE_EXTENSION DeviceExtension, UCHAR Command)
{
  UCHAR i = __VERIFIER_nondet_char("i");
  assume_abort_if_not(i < 7);
  UCHAR value;
  UCHAR newvalue;
  UCHAR test;
  PUCHAR CurrentPort;
  PUCHAR CurrentStatus;
  PUCHAR CurrentControl;
  ULONG Delay;
  BOOLEAN success;
  UCHAR tmp;
  UCHAR tmp___0;
  int tmp___3;
  BOOLEAN tmp___4;
  UCHAR tmp___5;
  int tmp___8;
  BOOLEAN tmp___9;
  UCHAR tmp___10;
  int tmp___13;
  BOOLEAN tmp___14;
  UCHAR tmp___15;
  {
    Delay = 3;
    success = 0;
    CurrentPort = DeviceExtension->PortInfo.Controller;
    CurrentStatus = CurrentPort + 1;
    CurrentControl = CurrentPort + 2;
    test = (unsigned char) (((int) Command) & 248);
    {
    }
    {
      value = READ_PORT_UCHAR(CurrentControl);
      newvalue = (unsigned char) ((((int) value) & (-9)) | 4);
      newvalue = (unsigned char) (((int) newvalue) & (-33));
      WRITE_PORT_UCHAR(CurrentControl, newvalue);
      WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) & (-2)));
      KeStallExecutionProcessor(Delay);
      WRITE_PORT_UCHAR(CurrentPort, ModeQualifier___6[i]);
      KeStallExecutionProcessor(Delay);
      tmp___15 = READ_PORT_UCHAR(CurrentPort + 1);
    }
    if ((((int) tmp___15) & 184) == 184)
    {
      tmp___13 = 1;
    }
    else
    {
      {
        tmp___14 = CheckPort(CurrentPort + 1, 184, (unsigned char) 184, 5);
        tmp___13 = tmp___14;
      }
    }

    if (tmp___13)
    {
      {
        WRITE_PORT_UCHAR(CurrentPort, ModeQualifier___6[4]);
        KeStallExecutionProcessor(Delay);
        tmp___10 = READ_PORT_UCHAR(CurrentPort + 1);
      }
      if ((((int) tmp___10) & 184) == 24)
      {
        tmp___8 = 1;
      }
      else
      {
        {
          tmp___9 = CheckPort(CurrentPort + 1, 184, (unsigned char) 24, 5);
          tmp___8 = tmp___9;
        }
      }

      if (tmp___8)
      {
        {
          WRITE_PORT_UCHAR(CurrentPort, ModeQualifier___6[5]);
          KeStallExecutionProcessor(Delay);
          tmp___5 = READ_PORT_UCHAR(CurrentPort + 1);
        }
        if ((((int) tmp___5) & 48) == 48)
        {
          tmp___3 = 1;
        }
        else
        {
          {
            tmp___4 = CheckPort(CurrentPort + 1, 48, (unsigned char) 48, 5);
            tmp___3 = tmp___4;
          }
        }

        if (tmp___3)
        {
          {
            KeStallExecutionProcessor(Delay);
            WRITE_PORT_UCHAR(CurrentPort, Command);
            KeStallExecutionProcessor(Delay);
            WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) & (-2)));
            WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) | 1));
            KeStallExecutionProcessor(Delay);
          }
          if (test == 224)
          {
            goto switch_99_224;
          }
          else
          {
            if (test == 48)
            {
              goto switch_99_48;
            }
            else
            {
              {
                goto switch_99_default;
                if (0)
                {
                  switch_99_224:
                  ;

                  {
                  }
                  {
                    tmp = READ_PORT_UCHAR(CurrentStatus);
                  }
                  if ((((int) tmp) & 8) == 8)
                  {
                    success = 1;
                    {
                    }
                  }
                  else
                  {
                  }

                  if (!success)
                  {
                    {
                    }
                  }
                  else
                  {
                  }

                  goto switch_99_break;
                  switch_99_48:
                  {
                    tmp___0 = READ_PORT_UCHAR(CurrentStatus);
                  }

                  if ((((int) tmp___0) & 8) != 8)
                  {
                    success = 1;
                    {
                    }
                  }
                  else
                  {
                  }

                  if (!success)
                  {
                    {
                    }
                  }
                  else
                  {
                  }

                  goto switch_99_break;
                  switch_99_default:
                  ;

                  {
                  }
                  {
                    KeStallExecutionProcessor(Delay);
                    success = 1;
                  }
                  goto switch_99_break;
                }
                else
                {
                  switch_99_break:
                  ;

                }

              }
            }

          }

          {
            WRITE_PORT_UCHAR(CurrentControl, (unsigned char) (((int) newvalue) & (-2)));
            KeStallExecutionProcessor(Delay);
            WRITE_PORT_UCHAR(CurrentPort, ModeQualifier___6[6]);
          }
        }
        else
        {
        }

      }
      else
      {
      }

    }
    else
    {
    }

    {
      WRITE_PORT_UCHAR(CurrentControl, value);
    }
    return success;
  }
}

#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4035)
#pragma warning(push)
#pragma warning(disable:4164)
#pragma function(_enable)
#pragma function(_disable)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4200)
#pragma warning(default:4200)
NTSTATUS PptDetectPortCapabilities(PDEVICE_EXTENSION Extension);
void PptDetectEcpPort(PDEVICE_EXTENSION Extension);
void PptDetectEppPortIfDot3DevicePresent(PDEVICE_EXTENSION Extension);
void PptDetectEppPortIfUserRequested(PDEVICE_EXTENSION Extension);
void PptDetectBytePort(PDEVICE_EXTENSION Extension);
void PptDetermineFifoDepth(PDEVICE_EXTENSION Extension);
void PptDetermineFifoWidth(PDEVICE_EXTENSION Extension);
NTSTATUS PptEcrSetMode(PDEVICE_EXTENSION Extension, UCHAR ChipMode);
NTSTATUS PptEcrClearMode(PDEVICE_EXTENSION Extension);
NTSTATUS PptFindNatChip(PDEVICE_EXTENSION Extension);
NTSTATUS PptBuildResourceList(PDEVICE_EXTENSION Extension, ULONG Partial, PULONG Addresses, PCM_RESOURCE_LIST Resources);
NTSTATUS PptSetByteMode(PDEVICE_EXTENSION Extension, UCHAR ChipMode);
NTSTATUS PptClearByteMode(PDEVICE_EXTENSION Extension);
NTSTATUS PptCheckByteMode(PDEVICE_EXTENSION Extension);
int Extension_FilterMode = 0;
NTSTATUS PptDetectChipFilter(PDEVICE_EXTENSION Extension)
{
  NTSTATUS Status;
  KEVENT Event;
  UCHAR ecrLast;
  PUCHAR Controller;
  PUCHAR EcpController;
  PUCHAR wPortECR;
  {
    Status = -1073741810L;
    Controller = Extension->PortInfo.Controller;
    EcpController = Extension->PnpInfo.EcpController;
    {
    }
    {
      Extension->ChipInfo.success = 0;
      Extension->ChipInfo.Controller = Controller;
      Extension->ChipInfo.EcrController = EcpController;
    }
    if (Extension_FilterMode)
    {
      if (Extension->PnpInfo.HardwareCapabilities & 1UL)
      {
        {
        }
        {
          Status = (*Extension->ChipInfo.ParChipSetMode)(Extension->ChipInfo.Context, 96);
        }
        if (Status >= 0L)
        {
          {
          }
          {
            wPortECR = EcpController + 2;
            ecrLast = READ_PORT_UCHAR(wPortECR);
            PptDetermineFifoWidth(Extension);
            PptDetermineFifoDepth(Extension);
            WRITE_PORT_UCHAR(wPortECR, ecrLast);
            Status = (*Extension->ChipInfo.ParChipClearMode)(Extension->ChipInfo.Context, 96);
          }
        }
        else
        {
        }

      }
      else
      {
      }

    }
    else
    {
    }

    {
    }
    return Status;
  }
}

NTSTATUS PptDetectPortType(PDEVICE_EXTENSION Extension)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  NTSTATUS Status;
  UNICODE_STRING ParportPath;
  RTL_QUERY_REGISTRY_TABLE RegTable[2];
  ULONG IdentifierHex;
  ULONG zero;
  {
    IdentifierHex = 12169;
    zero = 0;
    {
    }
    {
      memset(RegTable, 0, sizeof(RegTable));
      RegTable[0].Flags = 36;
      RegTable[0].EntryContext = &IdentifierHex;
      RegTable[0].DefaultType = 4;
      RegTable[0].DefaultData = &zero;
      RegTable[0].DefaultLength = sizeof(ULONG);
      Status = RtlQueryRegistryValues(1, ParportPath.Buffer, RegTable, (void *) 0, (void *) 0);
    }
    {
    }
    {
    }
    if (Status >= 0L)
    {
      if (IdentifierHex == 0UL)
      {
      }
      else
      {
        goto _L;
      }

    }
    else
    {
      _L:
      if (Status != (-1073741772L))
      {
        {
        }
        {
        }
        {
          PptDetectEcpPort(Extension);
          PptDetectBytePort(Extension);
        }
        if (Extension->PnpInfo.HardwareCapabilities & 9UL)
        {
          return 0L;
        }
        else
        {
          return -1073741810L;
        }

      }
      else
      {
      }


    }

    IdentifierHex = 12169;
    if (__BLAST_NONDET)
    {
      Status = 0L;
    }
    else
    {
      Status = 3221225473UL;
    }

    {
    }
    {
      Status = PptDetectPortCapabilities(Extension);
    }
    {
    }
    Status = 0L;
    {
    }
    return Status;
  }
}

NTSTATUS PptDetectPortCapabilities(PDEVICE_EXTENSION Extension)
{
  NTSTATUS Status;
  {
    {
    }
    {
    }
    {
      PptDetectEcpPort(Extension);
    }
    if (Extension->PnpInfo.HardwareCapabilities & 1UL)
    {
      if ((((unsigned long) Extension->PortInfo.Controller) & 15UL) != 12UL)
      {
        {
        }
        {
          Status = PptFindNatChip(Extension);
        }
        if (Status >= 0L)
        {
          if (!Extension->NationalChipFound)
          {
            {
            }
            {
            }
            {
              PptDetectEppPortIfDot3DevicePresent(Extension);
            }
            if (!Extension->CheckedForGenericEpp)
            {
              {
                PptDetectEppPortIfUserRequested(Extension);
              }
            }
            else
            {
            }

          }
          else
          {
            {
            }
            Extension->CheckedForGenericEpp = 1;
          }

        }
        else
        {
        }

      }
      else
      {
        goto _L;
      }

    }
    else
    {
      _L:
      {
      }

      Extension->CheckedForGenericEpp = 1;
    }

    {
    }
    {
      PptDetectBytePort(Extension);
    }
    if (Extension->PnpInfo.HardwareCapabilities & 11UL)
    {
      {
      }
      return 0L;
    }
    else
    {
    }

    {
    }
    return -1073741810L;
  }
}

void PptDetectEcpPort(PDEVICE_EXTENSION Extension)
{
  PUCHAR Controller;
  PUCHAR wPortDCR;
  PUCHAR wPortECR;
  UCHAR ecrLast;
  UCHAR ecr;
  UCHAR dcr;
  {
    Controller = Extension->PortInfo.Controller;
    wPortDCR = Controller + 2;
    if (((unsigned int) ((PUCHAR) 0)) == ((unsigned int) Extension->PnpInfo.EcpController))
    {
      {
      }
      return;
    }
    else
    {
    }

    wPortECR = Extension->PnpInfo.EcpController + 2;
    {
    }
    {
    }
    {
      ecr = READ_PORT_UCHAR(wPortECR);
      ecrLast = ecr;
    }
    {
    }
    {
      dcr = (unsigned char) 14;
      WRITE_PORT_UCHAR(wPortDCR, dcr);
      ecr = READ_PORT_UCHAR(wPortECR);
      ecrLast = ecr;
    }
    {
    }
    if ((((int) ecr) & 3) == 3)
    {
      goto _L;
    }
    else
    {
      if (((int) ecrLast) == 255)
      {
        _L:
        {
        }

        {
          dcr = (unsigned char) 12;
          WRITE_PORT_UCHAR(wPortDCR, dcr);
        }
        return;
      }
      else
      {
      }

    }

    if ((((int) ecr) & 3) == 2)
    {
      {
        dcr = (unsigned char) 12;
        WRITE_PORT_UCHAR(wPortDCR, dcr);
        ecr = READ_PORT_UCHAR(wPortECR);
      }
      if ((((int) ecr) & 3) == 0)
      {
        {
        }
        {
          dcr = (unsigned char) 12;
          WRITE_PORT_UCHAR(wPortDCR, dcr);
        }
        return;
      }
      else
      {
      }

    }
    else
    {
    }

    {
      WRITE_PORT_UCHAR(wPortECR, 20);
      ecr = READ_PORT_UCHAR(wPortECR);
    }
    if (!((((int) ecr) & 3) == 1))
    {
      {
      }
      {
        dcr = (unsigned char) 12;
        WRITE_PORT_UCHAR(wPortDCR, dcr);
      }
      return;
    }
    else
    {
    }

    {
      WRITE_PORT_UCHAR(wPortECR, ecrLast);
      ecrLast = READ_PORT_UCHAR(wPortECR);
      ecr = (unsigned char) (((int) ecrLast) & 31);
      WRITE_PORT_UCHAR(wPortECR, (unsigned char) (((int) ecr) | 192));
      PptDetermineFifoWidth(Extension);
    }
    if (0UL != Extension->PnpInfo.FifoWidth)
    {
      {
        Extension->PnpInfo.HardwareCapabilities |= 1UL;
        PptDetermineFifoDepth(Extension);
      }
      {
      }
    }
    else
    {
    }

    {
      WRITE_PORT_UCHAR(wPortECR, ecrLast);
    }
    return;
  }
}

void PptDetectEppPortIfDot3DevicePresent(PDEVICE_EXTENSION Extension)
{
  NTSTATUS status;
  PUCHAR Controller;
  UCHAR Reverse;
  UCHAR Forward;
  BOOLEAN daisyChainDevicePresent;
  PARALLEL_1284_COMMAND Command;
  {
    Controller = Extension->PortInfo.Controller;
    Reverse = (unsigned char) 38;
    Forward = (unsigned char) 6;
    daisyChainDevicePresent = 0;
    if (0UL == Extension->PnpInfo.Ieee1284_3DeviceCount)
    {
      {
      }
      return;
    }
    else
    {
    }

    {
      Command.ID = 0;
      Command.Port = 0;
      Command.CommandFlags = 2UL;
      status = PptTrySelectDevice(Extension, &Command);
    }
    if (!(status >= 0L))
    {
      {
      }
      return;
    }
    else
    {
    }

    {
      PptDetectEppPort(Extension);
      Command.ID = 0;
      Command.Port = 0;
      Command.CommandFlags = 2UL;
      status = PptDeselectDevice(Extension, &Command);
    }
    if (!(status >= 0L))
    {
      {
      }
    }
    else
    {
      {
      }
    }

    return;
  }
}

void PptDetectEppPortIfUserRequested(PDEVICE_EXTENSION Extension)
{
  ULONG RequestEppTest;
  {
    RequestEppTest = 0;
    if (RequestEppTest)
    {
      {
        PptDetectEppPort(Extension);
      }
    }
    else
    {
    }

    return;
  }
}

void PptDetectEppPort(PDEVICE_EXTENSION Extension)
{
  PUCHAR Controller;
  UCHAR dcr;
  UCHAR i = __VERIFIER_nondet_char("i");
  UCHAR Reverse;
  UCHAR Forward;
  BOOLEAN daisyChainDevicePresent;
  ULONG DisableEppTest;
  UCHAR tmp;
  {
    Reverse = (unsigned char) 38;
    Forward = (unsigned char) 6;
    daisyChainDevicePresent = 0;
    DisableEppTest = 0;
    {
    }
    {
      Controller = Extension->PortInfo.Controller;
      dcr = READ_PORT_UCHAR(Controller + 2);
      Extension->PnpInfo.HardwareCapabilities |= 2UL;
    }
    {
    }
    {
      PptEcrSetMode(Extension, 148);
      WRITE_PORT_UCHAR(Controller + 2, Reverse);
      KeStallExecutionProcessor(5);
      WRITE_PORT_UCHAR(Controller + 4, i);
      WRITE_PORT_UCHAR(Controller + 2, Forward);
      KeStallExecutionProcessor(5);
      tmp = READ_PORT_UCHAR(Controller);
    }
    if (((int) tmp) != ((int) i))
    {
      Extension->PnpInfo.HardwareCapabilities &= 4294967293UL;
    }
    else
    {
    }

    {
      PptEcrClearMode(Extension);
      WRITE_PORT_UCHAR(Controller + 2, dcr);
      Extension->CheckedForGenericEpp = 1;
    }
    if (Extension->PnpInfo.HardwareCapabilities & 2UL)
    {
      {
      }
    }
    else
    {
      {
      }
    }

    return;
  }
}

void PptDetectBytePort(PDEVICE_EXTENSION Extension)
{
  NTSTATUS Status;
  {
    Status = 0L;
    {
    }
    {
      Status = PptSetByteMode(Extension, 52);
    }
    if (Status >= 0L)
    {
      {
      }
      Extension->PnpInfo.HardwareCapabilities |= 8UL;
    }
    else
    {
      {
      }
    }

    {
      PptClearByteMode(Extension);
    }
    return;
  }
}

void PptDetermineFifoDepth(PDEVICE_EXTENSION Extension)
{
  PUCHAR Controller;
  PUCHAR wPortECR;
  PUCHAR wPortDFIFO;
  UCHAR ecr;
  UCHAR ecrLast;
  ULONG wFifoDepth;
  UCHAR writeFifoDepth;
  UCHAR readFifoDepth;
  ULONG limitCount;
  UCHAR testData;
  UCHAR tmp;
  UCHAR tmp___0;
  {
    {
      Controller = Extension->PortInfo.Controller;
      wPortECR = Extension->PnpInfo.EcpController + 2;
      wPortDFIFO = Extension->PnpInfo.EcpController;
      wFifoDepth = 0;
      ecrLast = READ_PORT_UCHAR(wPortECR);
      WRITE_PORT_UCHAR(wPortECR, 212);
      ecr = READ_PORT_UCHAR(wPortECR);
    }
    if ((((int) ecr) & 3) == 1)
    {
      writeFifoDepth = 0;
      limitCount = 0;
      {
        while (1)
        {
          while_148_continue:
          ;

          {
            tmp = READ_PORT_UCHAR(wPortECR);
          }
          if ((((int) tmp) & 3) != 2)
          {
            if (limitCount <= 4098UL)
            {
            }
            else
            {
              goto while_148_break;
            }

          }
          else
          {
            goto while_148_break;
          }

          {
            WRITE_PORT_UCHAR(wPortDFIFO, (unsigned char) (((int) writeFifoDepth) & 255));
            writeFifoDepth = (UCHAR) (((int) writeFifoDepth) + 1);
            limitCount += 1UL;
          }
        }

        while_148_break:
        ;

      }
      {
      }
      readFifoDepth = 0;
      limitCount = 0;
      {
        while (1)
        {
          while_150_continue:
          ;

          {
            tmp___0 = READ_PORT_UCHAR(wPortECR);
          }
          if ((((int) tmp___0) & 3) != 1)
          {
            if (limitCount <= 4098UL)
            {
            }
            else
            {
              goto while_150_break;
            }

          }
          else
          {
            goto while_150_break;
          }

          {
            testData = READ_PORT_UCHAR(wPortDFIFO);
          }
          if (((int) testData) != (((int) readFifoDepth) & 255))
          {
            {
              WRITE_PORT_UCHAR(wPortECR, ecrLast);
            }
            {
            }
            return;
          }
          else
          {
          }

          readFifoDepth = (UCHAR) (((int) readFifoDepth) + 1);
          limitCount += 1UL;
        }

        while_150_break:
        ;

      }
      {
      }
      if (((int) writeFifoDepth) == ((int) readFifoDepth))
      {
        wFifoDepth = readFifoDepth;
      }
      else
      {
        {
          WRITE_PORT_UCHAR(wPortECR, ecrLast);
        }
        {
        }
        return;
      }

    }
    else
    {
      {
      }
      {
        WRITE_PORT_UCHAR(wPortECR, ecrLast);
      }
      return;
    }

    {
      WRITE_PORT_UCHAR(wPortECR, ecrLast);
      Extension->PnpInfo.FifoDepth = wFifoDepth;
    }
    return;
  }
}

void PptDetermineFifoWidth(PDEVICE_EXTENSION Extension)
{
  PUCHAR Controller;
  UCHAR bConfigA;
  PUCHAR wPortECR;
  {
    {
    }
    {
      Controller = Extension->PortInfo.Controller;
      wPortECR = Extension->PnpInfo.EcpController + 2;
      WRITE_PORT_UCHAR(wPortECR, 244);
      bConfigA = READ_PORT_UCHAR(Extension->PnpInfo.EcpController);
      Extension->PnpInfo.FifoWidth = (unsigned long) ((((int) bConfigA) & 112) >> 4);
      WRITE_PORT_UCHAR(wPortECR, 20);
    }
    return;
  }
}

NTSTATUS PptSetChipMode(PDEVICE_EXTENSION Extension, UCHAR ChipMode)
{
  NTSTATUS Status;
  UCHAR EcrMode;
  {
    Status = 0L;
    EcrMode = (unsigned char) (((int) ChipMode) & (-32));
    {
    }
    if (Extension->PnpInfo.CurrentMode != 0UL)
    {
      {
      }
      Status = -1073741436L;
      goto ExitSetChipModeNoChange;
    }
    else
    {
    }

    if (Extension_FilterMode)
    {
      {
      }
      {
        Status = (*Extension->ChipInfo.ParChipSetMode)(Extension->ChipInfo.Context, ChipMode);
      }
    }
    else
    {
      {
      }
      if (((int) EcrMode) == 96)
      {
        if ((Extension->PnpInfo.HardwareCapabilities & 1UL) ^ 1UL)
        {
          {
          }
          return -1073741810L;
        }
        else
        {
        }

        {
          Status = PptEcrSetMode(Extension, ChipMode);
        }
        goto ExitSetChipModeWithChanges;
      }
      else
      {
      }

      if (((int) EcrMode) == 128)
      {
        if ((Extension->PnpInfo.HardwareCapabilities & 2UL) ^ 2UL)
        {
          {
          }
          return -1073741810L;
        }
        else
        {
        }

        {
          Status = PptEcrSetMode(Extension, ChipMode);
        }
        goto ExitSetChipModeWithChanges;
      }
      else
      {
      }

      if (((int) EcrMode) == 32)
      {
        if ((Extension->PnpInfo.HardwareCapabilities & 8UL) ^ 8UL)
        {
          {
          }
          return -1073741810L;
        }
        else
        {
        }

        {
          Status = PptSetByteMode(Extension, ChipMode);
        }
        goto ExitSetChipModeWithChanges;
      }
      else
      {
      }

    }

    ExitSetChipModeWithChanges:
    if (Status >= 0L)
    {
      {
      }
      Extension->PnpInfo.CurrentMode = EcrMode;
    }
    else
    {
      {
      }
    }


    ExitSetChipModeNoChange:
    {
    }

    return Status;
  }
}

NTSTATUS PptClearChipMode(PDEVICE_EXTENSION Extension, UCHAR ChipMode)
{
  NTSTATUS Status;
  ULONG EcrMode;
  {
    Status = -1073741823L;
    EcrMode = ((int) ChipMode) & (-32);
    {
    }
    if (EcrMode != Extension->PnpInfo.CurrentMode)
    {
      {
      }
      Status = -1073741436L;
      goto ExitClearChipModeNoChange;
    }
    else
    {
    }

    if (Extension_FilterMode)
    {
      {
      }
      {
        Status = (*Extension->ChipInfo.ParChipClearMode)(Extension->ChipInfo.Context, ChipMode);
      }
    }
    else
    {
      {
      }
      if (EcrMode == 96UL)
      {
        {
          Status = PptEcrClearMode(Extension);
        }
        goto ExitClearChipModeWithChanges;
      }
      else
      {
      }

      if (EcrMode == 128UL)
      {
        {
          Status = PptEcrClearMode(Extension);
        }
        goto ExitClearChipModeWithChanges;
      }
      else
      {
      }

      if (EcrMode == 32UL)
      {
        {
          Status = PptClearByteMode(Extension);
        }
        goto ExitClearChipModeWithChanges;
      }
      else
      {
      }

    }

    ExitClearChipModeWithChanges:
    if (Status >= 0L)
    {
      {
      }
      Extension->PnpInfo.CurrentMode = 0;
    }
    else
    {
    }


    ExitClearChipModeNoChange:
    {
    }

    return Status;
  }
}

NTSTATUS PptEcrSetMode(PDEVICE_EXTENSION Extension, UCHAR ChipMode)
{
  UCHAR ecr;
  PUCHAR Controller;
  PUCHAR wPortECR;
  {
    {
    }
    Controller = Extension->PortInfo.Controller;
    wPortECR = Extension->PnpInfo.EcpController + 2;
    {
    }
    {
      ecr = READ_PORT_UCHAR(wPortECR);
      Extension->EcrPortData = ecr;
      ecr = ((int) ecr) & 31;
      WRITE_PORT_UCHAR(wPortECR, (unsigned char) (((int) ecr) | 32));
      WRITE_PORT_UCHAR(wPortECR, ChipMode);
    }
    {
    }
    return 0L;
  }
}

NTSTATUS PptSetByteMode(PDEVICE_EXTENSION Extension, UCHAR ChipMode)
{
  NTSTATUS Status;
  {
    if (Extension->PnpInfo.HardwareCapabilities & 1UL)
    {
      {
        Status = PptEcrSetMode(Extension, ChipMode);
      }
    }
    else
    {
    }

    {
      Status = PptCheckByteMode(Extension);
    }
    return Status;
  }
}

NTSTATUS PptClearByteMode(PDEVICE_EXTENSION Extension)
{
  NTSTATUS Status;
  {
    Status = 0L;
    if (Extension->PnpInfo.HardwareCapabilities & 1UL)
    {
      {
        Status = PptEcrClearMode(Extension);
      }
    }
    else
    {
    }

    return Status;
  }
}

NTSTATUS PptCheckByteMode(PDEVICE_EXTENSION Extension)
{
  PUCHAR Controller;
  UCHAR dcr;
  UCHAR tmp;
  UCHAR tmp___0;
  {
    {
      Controller = Extension->PortInfo.Controller;
      dcr = READ_PORT_UCHAR(Controller + 2);
      WRITE_PORT_UCHAR(Controller + 2, (unsigned char) (((int) dcr) | 32));
      WRITE_PORT_UCHAR(Controller, (unsigned char) 85);
      tmp___0 = READ_PORT_UCHAR(Controller);
    }
    if (((int) tmp___0) == 85)
    {
      {
        WRITE_PORT_UCHAR(Controller, (unsigned char) 170);
        tmp = READ_PORT_UCHAR(Controller);
      }
      if (((int) tmp) == 170)
      {
        return -1073741823L;
      }
      else
      {
      }

    }
    else
    {
    }

    {
      WRITE_PORT_UCHAR(Controller + 2, dcr);
    }
    return 0L;
  }
}

NTSTATUS PptEcrClearMode(PDEVICE_EXTENSION Extension)
{
  UCHAR ecr;
  PUCHAR Controller;
  PUCHAR wPortECR;
  {
    {
      Controller = Extension->PortInfo.Controller;
      ecr = Extension->EcrPortData;
      Extension->EcrPortData = 0;
      wPortECR = Extension->PnpInfo.EcpController + 2;
      WRITE_PORT_UCHAR(wPortECR, (unsigned char) (((int) ecr) & 31));
      WRITE_PORT_UCHAR(wPortECR, ecr);
    }
    return 0L;
  }
}

NTSTATUS PptFindNatChip(PDEVICE_EXTENSION Extension)
{
  BOOLEAN found;
  BOOLEAN OkToLook;
  BOOLEAN Conflict;
  PUCHAR ChipAddr[4];
  PUCHAR AddrList[4];
  PUCHAR PortAddr;
  ULONG_PTR Port;
  UCHAR SaveIdx;
  UCHAR cr;
  UCHAR ii;
  NTSTATUS Status;
  ULONG ResourceDescriptorCount;
  ULONG ResourcesSize;
  PCM_RESOURCE_LIST Resources;
  ULONG NationalChecked;
  ULONG NationalChipFound;
  PVOID tmp;
  UCHAR tmp___0;
  UCHAR tmp___1;
  UCHAR tmp___2;
  UCHAR tmp___3;
  UCHAR tmp___4;
  UCHAR tmp___5;
  UCHAR tmp___6;
  UCHAR tmp___7;
  PDEVICE_OBJECT pdo;
  {
    found = 0;
    OkToLook = 0;
    ChipAddr[0] = (UCHAR *) 920;
    ChipAddr[1] = (UCHAR *) 622;
    ChipAddr[2] = (UCHAR *) 348;
    ChipAddr[3] = (UCHAR *) 46;
    AddrList[0] = (UCHAR *) 888;
    AddrList[1] = (UCHAR *) 956;
    AddrList[2] = (UCHAR *) 632;
    AddrList[3] = (UCHAR *) 0;
    NationalChecked = 0;
    NationalChipFound = 0;
    if (((int) Extension->NationalChecked) == 1)
    {
      {
      }
      return 0L;
    }
    else
    {
    }

    Extension->NationalChecked = 1;
    if (NationalChecked)
    {
      if (NationalChipFound)
      {
        Extension->NationalChipFound = 1;
      }
      else
      {
        Extension->NationalChipFound = 0;
      }

      return 0L;
    }
    else
    {
    }

    {
      ResourceDescriptorCount = (sizeof(ChipAddr)) / (sizeof(ULONG));
      ResourcesSize = ((ULONG) (sizeof(CM_RESOURCE_LIST))) + ((ResourceDescriptorCount - 1UL) * ((ULONG) (sizeof(CM_PARTIAL_RESOURCE_DESCRIPTOR))));
      tmp = ExAllocatePoolWithTag(0, ResourcesSize, 1349673296UL);
      Resources = (struct _CM_RESOURCE_LIST *) tmp;
    }
    if (((unsigned int) Resources) == ((unsigned int) ((void *) 0)))
    {
      {
      }
      return -1073741823L;
    }
    else
    {
    }

    {
      memset(Resources, 0, ResourcesSize);
      Status = PptBuildResourceList(Extension, (sizeof(ChipAddr)) / (sizeof(ULONG)), ChipAddr, Resources);
    }
    if (!(Status >= 0L))
    {
      {
      }
      {
      }
      return Status;
    }
    else
    {
    }

    {
      Status = IoReportResourceUsage((void *) 0, Extension->DriverObject, Resources, sizeof(Resources), Extension->DeviceObject, (void *) 0, 0, 0, &Conflict);
    }
    if (!(Status >= 0L))
    {
      {
      }
      return Status;
    }
    else
    {
    }

    if (Conflict)
    {
      {
      }
      return -1073741823L;
    }
    else
    {
    }

    ii = 0;
    {
      while (1)
      {
        while_180_continue:
        ;

        if (!found)
        {
          if (((int) ii) < 4)
          {
          }
          else
          {
            goto while_180_break;
          }

        }
        else
        {
          goto while_180_break;
        }

        {
          PortAddr = ChipAddr[ii];
          tmp___1 = READ_PORT_UCHAR(PortAddr);
        }
        if (((int) tmp___1) == 136)
        {
          {
            tmp___2 = READ_PORT_UCHAR(PortAddr);
          }
          if (((int) tmp___2) < 32)
          {
            OkToLook = 1;
          }
          else
          {
            goto _L;
          }

        }
        else
        {
          _L:
          {
            READ_PORT_UCHAR(PortAddr);
            cr = READ_PORT_UCHAR(PortAddr);
          }

          if (((int) cr) != 255)
          {
            {
              tmp___0 = READ_PORT_UCHAR(PortAddr);
            }
            if (((int) tmp___0) == ((int) cr))
            {
              OkToLook = 1;
            }
            else
            {
            }

          }
          else
          {
          }

        }

        if (OkToLook)
        {
          {
            OkToLook = 0;
            WRITE_PORT_UCHAR(PortAddr, 8);
            cr = READ_PORT_UCHAR(PortAddr);
          }
          if (((int) cr) == 8)
          {
            {
              tmp___3 = READ_PORT_UCHAR(PortAddr + 1);
              cr = (unsigned char) (((int) tmp___3) & 240);
            }
            if (((int) cr) == 16)
            {
              goto _L___0;
            }
            else
            {
              if (((int) cr) == 80)
              {
                goto _L___0;
              }
              else
              {
                if (((int) cr) == 112)
                {
                  goto _L___0;
                }
                else
                {
                  if (((int) cr) == 48)
                  {
                    goto _L___0;
                  }
                  else
                  {
                    if (((int) cr) == 32)
                    {
                      goto _L___0;
                    }
                    else
                    {
                      if (((int) cr) == 144)
                      {
                        goto _L___0;
                      }
                      else
                      {
                        if (((int) cr) == 176)
                        {
                          goto _L___0;
                        }
                        else
                        {
                          if (((int) cr) == 96)
                          {
                            _L___0:
                            {
                              found = 1;
                              WRITE_PORT_UCHAR(PortAddr, 1);
                              tmp___4 = READ_PORT_UCHAR(PortAddr + 1);
                              Port = ((int) tmp___4) & 3;
                            }

                            if (((unsigned int) Extension->PortInfo.Controller) == ((unsigned int) AddrList[Port]))
                            {
                              Extension->NationalChipFound = 1;
                            }
                            else
                            {
                            }

                          }
                          else
                          {
                          }

                        }

                      }

                    }

                  }

                }

              }

            }

          }
          else
          {
          }

        }
        else
        {
        }

        if (!found)
        {
          {
            SaveIdx = READ_PORT_UCHAR(PortAddr);
            WRITE_PORT_UCHAR(PortAddr, 32);
            WRITE_PORT_UCHAR(PortAddr + 1, 0);
            tmp___5 = READ_PORT_UCHAR(PortAddr + 1);
            cr = (unsigned char) (((int) tmp___5) & 248);
          }
          if (((int) cr) == 192)
          {
            goto _L___1;
          }
          else
          {
            if (((int) cr) == 160)
            {
              _L___1:
              {
                found = 1;
                WRITE_PORT_UCHAR(PortAddr, 7);
                WRITE_PORT_UCHAR(PortAddr + 1, 4);
                WRITE_PORT_UCHAR(PortAddr, 96);
                tmp___6 = READ_PORT_UCHAR(PortAddr + 1);
                Port = (unsigned long) ((((int) tmp___6) << 8) & 65280);
                WRITE_PORT_UCHAR(PortAddr, 97);
                tmp___7 = READ_PORT_UCHAR(PortAddr + 1);
                Port |= (unsigned long) tmp___7;
              }

              if (((unsigned int) Extension->PortInfo.Controller) == ((unsigned int) ((UCHAR *) Port)))
              {
                Extension->NationalChipFound = 1;
              }
              else
              {
              }

            }
            else
            {
              {
                WRITE_PORT_UCHAR(PortAddr, SaveIdx);
              }
            }

          }

        }
        else
        {
        }

        ii = (UCHAR) (((int) ii) + 1);
      }

      while_180_break:
      ;

    }
    pdo = Extension->PhysicalDeviceObject;
    NationalChecked = 1;
    if (Extension->NationalChipFound)
    {
      NationalChipFound = 1;
    }
    else
    {
      NationalChipFound = 0;
    }

    {
      Status = IoReportResourceUsage((void *) 0, Extension->DriverObject, (void *) 0, 0, Extension->DeviceObject, (void *) 0, 0, 0, &Conflict);
    }
    {
    }
    return Status;
  }
}

NTSTATUS PptBuildResourceList(PDEVICE_EXTENSION Extension, ULONG Partial, PULONG Addresses, PCM_RESOURCE_LIST Resources)
{
  UCHAR i;
  {
    Resources->Count = 1;
    Resources->List[0].InterfaceType = Extension->InterfaceType;
    Resources->List[0].BusNumber = Extension->BusNumber;
    Resources->List[0].PartialResourceList.Version = 0;
    Resources->List[0].PartialResourceList.Revision = 0;
    Resources->List[0].PartialResourceList.Count = Partial;
    i = 0;
    {
      while (1)
      {
        while_182_continue:
        ;

        if (((ULONG) i) < Partial)
        {
        }
        else
        {
          goto while_182_break;
        }

        Resources->List[0].PartialResourceList.PartialDescriptors[i].Type = 1;
        Resources->List[0].PartialResourceList.PartialDescriptors[i].ShareDisposition = 2;
        Resources->List[0].PartialResourceList.PartialDescriptors[i].Flags = 1;
        Resources->List[0].PartialResourceList.PartialDescriptors[i].u.Port.Start.QuadPart = *(Addresses + i);
        Resources->List[0].PartialResourceList.PartialDescriptors[i].u.Port.Length = 2UL;
        i = (UCHAR) (((int) i) + 1);
      }

      while_182_break:
      ;

    }
    return 0L;
  }
}

#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4035)
#pragma warning(push)
#pragma warning(disable:4164)
#pragma function(_enable)
#pragma function(_disable)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4200)
#pragma warning(default:4200)
const struct _GUID GUID_PARALLEL_DEVICE = {2549575408U, 63619, 4560, {175, 31, 0, 0, 248, 0, 132, 92}};
const struct _GUID GUID_PARCLASS_DEVICE = {2166343333U, 63272, 4560, {165, 55, 0, 0, 248, 117, 62, 209}};
ULONG PptDebugLevel = 0UL;
ULONG PptBreakOn = 0UL;
UNICODE_STRING RegistryPath = {0, 0, 0};
LONG PortInfoReferenceCount = -1L;
PFAST_MUTEX PortInfoMutex = (void *) 0;
const union _LARGE_INTEGER PhysicalZero = {{0, 0L}};
UCHAR PptDot3Retries = 5;
#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4035)
#pragma warning(push)
#pragma warning(disable:4164)
#pragma function(_enable)
#pragma function(_disable)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4200)
#pragma warning(default:4200)
NTSTATUS PptPnpFilterResourceRequirements(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS PptPnpQueryDeviceRelations(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS PptPnpQueryStopDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS PptPnpCancelStopDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS PptPnpStopDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS PptPnpQueryRemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS PptPnpCancelRemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS PptPnpRemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS PptPnpSurpriseRemoval(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS PptPnpUnhandledIrp(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS PptPnpStartDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS PptPnpStartValidateResources(PDEVICE_OBJECT DeviceObject, BOOLEAN FoundPort, BOOLEAN FoundIrq, BOOLEAN FoundDma);
NTSTATUS PptPnpStartScanCmResourceList(PDEVICE_EXTENSION Extension, PIRP Irp, PBOOLEAN FoundPort, PBOOLEAN FoundIrq, PBOOLEAN FoundDma);
NTSTATUS PptPnpPassThroughPnpIrpAndReleaseRemoveLock(PDEVICE_EXTENSION Extension, PIRP Irp);
void PptPnpFilterNukeIrqResourceDescriptors(PIO_RESOURCE_LIST IoResourceList);
void PptPnpFilterNukeIrqResourceDescriptorsFromAllLists(PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirementsList);
BOOLEAN PptPnpFilterExistsNonIrqResourceList(PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirementsList);
PVOID PptPnpFilterGetEndOfResourceRequirementsList(PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirementsList);
BOOLEAN PptPnpListContainsIrqResourceDescriptor(PIO_RESOURCE_LIST List);
void PptPnpFilterRemoveIrqResourceLists(PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirementsList);
NTSTATUS PptPnpBounceAndCatchPnpIrp(PDEVICE_EXTENSION Extension, PIRP Irp);
PDEVICE_RELATIONS PptPnpBuildRemovalRelations(PDEVICE_EXTENSION Extension)
{
  PDEVICE_RELATIONS relations;
  PLIST_ENTRY listHead;
  PLIST_ENTRY thisListEntry;
  PLIST_ENTRY firstListEntry;
  BOOLEAN done;
  PREMOVAL_RELATIONS_LIST_ENTRY node;
  ULONG count;
  ULONG i;
  PDEVICE_OBJECT pDevObj;
  PLIST_ENTRY _EX_Blink;
  PLIST_ENTRY _EX_Flink;
  PLIST_ENTRY _EX_Flink___0;
  PLIST_ENTRY _EX_ListHead;
  PLIST_ENTRY _EX_Blink___0;
  PLIST_ENTRY _EX_ListHead___0;
  PVOID tmp;
  PLIST_ENTRY _EX_Blink___1;
  PLIST_ENTRY _EX_Flink___1;
  PLIST_ENTRY _EX_Blink___2;
  PLIST_ENTRY _EX_ListHead___1;
  {
    relations = (void *) 0;
    listHead = &Extension->RemovalRelationsList;
    thisListEntry = (void *) 0;
    firstListEntry = (void *) 0;
    done = 0;
    node = (void *) 0;
    {
    }
    {
    }
    if (((unsigned int) listHead->Flink) == ((unsigned int) listHead))
    {
      {
      }
      goto targetExit;
    }
    else
    {
    }

    count = 0;
    {
      while (1)
      {
        while_185_continue:
        ;

        if (!done)
        {
        }
        else
        {
          goto while_185_break;
        }

        thisListEntry = listHead->Flink;
        _EX_Flink = listHead->Flink->Flink;
        _EX_Blink = listHead->Flink->Blink;
        _EX_Blink->Flink = _EX_Flink;
        _EX_Flink->Blink = _EX_Blink;
        node = (REMOVAL_RELATIONS_LIST_ENTRY *) (((CHAR *) thisListEntry) - ((unsigned long) (&((REMOVAL_RELATIONS_LIST_ENTRY *) 0)->ListEntry)));
        if (((unsigned int) firstListEntry) == ((unsigned int) thisListEntry))
        {
          _EX_ListHead = listHead;
          _EX_Flink___0 = _EX_ListHead->Flink;
          node->ListEntry.Flink = _EX_Flink___0;
          node->ListEntry.Blink = _EX_ListHead;
          _EX_Flink___0->Blink = &node->ListEntry;
          _EX_ListHead->Flink = &node->ListEntry;
          done = 1;
          {
          }
        }
        else
        {
          {
          }
          _EX_ListHead___0 = listHead;
          _EX_Blink___0 = _EX_ListHead___0->Blink;
          node->ListEntry.Flink = _EX_ListHead___0;
          node->ListEntry.Blink = _EX_Blink___0;
          _EX_Blink___0->Flink = &node->ListEntry;
          _EX_ListHead___0->Blink = &node->ListEntry;
          count += 1UL;
        }

        if (!firstListEntry)
        {
          {
          }
          firstListEntry = thisListEntry;
        }
        else
        {
        }

      }

      while_185_break:
      ;

    }
    {
    }
    {
      tmp = ExAllocatePoolWithTag(1, ((ULONG) (sizeof(DEVICE_RELATIONS))) + ((count - 1UL) * ((ULONG) (sizeof(PDEVICE_OBJECT)))), 1349673296UL);
      relations = tmp;
    }
    if (!relations)
    {
      {
      }
      goto targetExit;
    }
    else
    {
    }

    relations->Count = count;
    i = 0;
    {
      while (1)
      {
        while_191_continue:
        ;

        if (i < count)
        {
        }
        else
        {
          goto while_191_break;
        }

        thisListEntry = listHead->Flink;
        _EX_Flink___1 = listHead->Flink->Flink;
        _EX_Blink___1 = listHead->Flink->Blink;
        _EX_Blink___1->Flink = _EX_Flink___1;
        _EX_Flink___1->Blink = _EX_Blink___1;
        node = (REMOVAL_RELATIONS_LIST_ENTRY *) (((CHAR *) thisListEntry) - ((unsigned long) (&((REMOVAL_RELATIONS_LIST_ENTRY *) 0)->ListEntry)));
        {
        }
        {
          pDevObj = node->DeviceObject;
          relations->Objects[i] = pDevObj;
          _EX_ListHead___1 = listHead;
          _EX_Blink___2 = _EX_ListHead___1->Blink;
          node->ListEntry.Flink = _EX_ListHead___1;
          node->ListEntry.Blink = _EX_Blink___2;
          _EX_Blink___2->Flink = &node->ListEntry;
          _EX_ListHead___1->Blink = &node->ListEntry;
          i += 1UL;
        }
      }

      while_191_break:
      ;

    }
    targetExit:
    {
    }

    return relations;
  }
}

NTSTATUS PptPnpStartScanPciCardCmResourceList(PDEVICE_EXTENSION Extension, PIRP Irp, PBOOLEAN FoundPort, PBOOLEAN FoundIrq, PBOOLEAN FoundDma)
{
  NTSTATUS status;
  PIO_STACK_LOCATION irpStack;
  PCM_RESOURCE_LIST ResourceList;
  PCM_FULL_RESOURCE_DESCRIPTOR FullResourceDescriptor;
  PCM_PARTIAL_RESOURCE_LIST PartialResourceList;
  PCM_PARTIAL_RESOURCE_DESCRIPTOR PartialResourceDescriptor;
  ULONG i;
  ULONG length;
  {
    status = 0L;
    irpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
    {
    }
    *FoundPort = 0;
    *FoundIrq = 0;
    *FoundDma = 0;
    ResourceList = irpStack->Parameters.StartDevice.AllocatedResourcesTranslated;
    FullResourceDescriptor = &ResourceList->List[0];
    if (FullResourceDescriptor)
    {
      Extension->InterfaceType = FullResourceDescriptor->InterfaceType;
      PartialResourceList = &FullResourceDescriptor->PartialResourceList;
      i = 0;
      {
        while (1)
        {
          while_194_continue:
          ;

          if (i < PartialResourceList->Count)
          {
          }
          else
          {
            goto while_194_break;
          }

          PartialResourceDescriptor = &PartialResourceList->PartialDescriptors[i];
          if (PartialResourceDescriptor->Type == 1)
          {
            goto switch_195_1;
          }
          else
          {
            if (PartialResourceDescriptor->Type == 6)
            {
              goto switch_195_6;
            }
            else
            {
              if (PartialResourceDescriptor->Type == 2)
              {
                goto switch_195_2;
              }
              else
              {
                if (PartialResourceDescriptor->Type == 4)
                {
                  goto switch_195_4;
                }
                else
                {
                  {
                    goto switch_195_default;
                    if (0)
                    {
                      switch_195_1:
                      length = PartialResourceDescriptor->u.Port.Length;

                      if (length == 8)
                      {
                        goto switch_196_8;
                      }
                      else
                      {
                        if (length == 4)
                        {
                          goto switch_196_4;
                        }
                        else
                        {
                          {
                            goto switch_196_default;
                            if (0)
                            {
                              switch_196_8:
                              ;

                              {
                              }
                              Extension->PortInfo.OriginalController = PartialResourceDescriptor->u.Port.Start;
                              Extension->PortInfo.SpanOfController = PartialResourceDescriptor->u.Port.Length;
                              Extension->PortInfo.Controller = (UCHAR *) ((unsigned long) Extension->PortInfo.OriginalController.QuadPart);
                              Extension->AddressSpace = PartialResourceDescriptor->Flags;
                              *FoundPort = 1;
                              goto switch_196_break;
                              switch_196_4:
                              ;

                              {
                              }
                              Extension->PnpInfo.OriginalEcpController = PartialResourceDescriptor->u.Port.Start;
                              Extension->PnpInfo.SpanOfEcpController = PartialResourceDescriptor->u.Port.Length;
                              Extension->PnpInfo.EcpController = (UCHAR *) ((unsigned long) Extension->PnpInfo.OriginalEcpController.QuadPart);
                              Extension->EcpAddressSpace = PartialResourceDescriptor->Flags;
                              goto switch_196_break;
                              switch_196_default:
                              ;

                              {
                              }
                            }
                            else
                            {
                              switch_196_break:
                              ;

                            }

                          }
                        }

                      }

                      goto switch_195_break;
                      switch_195_6:
                      Extension->BusNumber = PartialResourceDescriptor->u.BusNumber.Start;

                      goto switch_195_break;
                      switch_195_2:
                      *FoundIrq = 1;

                      Extension->FoundInterrupt = 1;
                      Extension->InterruptLevel = (unsigned char) PartialResourceDescriptor->u.Interrupt.Level;
                      Extension->InterruptVector = PartialResourceDescriptor->u.Interrupt.Vector;
                      Extension->InterruptAffinity = PartialResourceDescriptor->u.Interrupt.Affinity;
                      if (((int) PartialResourceDescriptor->Flags) & 1)
                      {
                        Extension->InterruptMode = 1;
                      }
                      else
                      {
                        Extension->InterruptMode = 0;
                      }

                      goto switch_195_break;
                      switch_195_4:
                      *FoundDma = 1;

                      Extension->DmaChannel = PartialResourceDescriptor->u.Dma.Channel;
                      Extension->DmaPort = PartialResourceDescriptor->u.Dma.Port;
                      Extension->DmaWidth = PartialResourceDescriptor->Flags;
                      goto switch_195_break;
                      switch_195_default:
                      ;

                      goto switch_195_break;
                    }
                    else
                    {
                      switch_195_break:
                      ;

                    }

                  }
                }

              }

            }

          }

          i += 1UL;
        }

        while_194_break:
        ;

      }
    }
    else
    {
    }

    return status;
  }
}

BOOLEAN PptIsPci(PDEVICE_EXTENSION Extension, PIRP Irp)
{
  NTSTATUS status;
  PIO_STACK_LOCATION irpStack;
  PCM_RESOURCE_LIST ResourceList;
  PCM_FULL_RESOURCE_DESCRIPTOR FullResourceDescriptor;
  PCM_PARTIAL_RESOURCE_LIST PartialResourceList;
  PCM_PARTIAL_RESOURCE_DESCRIPTOR PartialResourceDescriptor;
  ULONG i;
  ULONG portResourceDescriptorCount;
  BOOLEAN largePortRangeFound;
  ULONG rangeLength;
  {
    status = 0L;
    irpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
    portResourceDescriptorCount = 0;
    largePortRangeFound = 0;
    ResourceList = irpStack->Parameters.StartDevice.AllocatedResourcesTranslated;
    if (((unsigned int) ResourceList) == ((unsigned int) ((void *) 0)))
    {
      {
      }
      return 0;
    }
    else
    {
    }

    FullResourceDescriptor = &ResourceList->List[0];
    if (FullResourceDescriptor)
    {
      {
      }
      PartialResourceList = &FullResourceDescriptor->PartialResourceList;
      i = 0;
      {
        while (1)
        {
          while_202_continue:
          ;

          if (i < PartialResourceList->Count)
          {
          }
          else
          {
            goto while_202_break;
          }

          PartialResourceDescriptor = &PartialResourceList->PartialDescriptors[i];
          if (PartialResourceDescriptor->Type == 1)
          {
            goto switch_203_1;
          }
          else
          {
            {
              goto switch_203_default;
              if (0)
              {
                switch_203_1:
                rangeLength = PartialResourceDescriptor->u.Port.Length;

                {
                }
                portResourceDescriptorCount += 1UL;
                if (rangeLength > 8UL)
                {
                  {
                  }
                  largePortRangeFound = 1;
                }
                else
                {
                }

                goto switch_203_break;
                switch_203_default:
                ;

                {
                }
              }
              else
              {
                switch_203_break:
                ;

              }

            }
          }

          i += 1UL;
        }

        while_202_break:
        ;

      }
    }
    else
    {
    }

    if (portResourceDescriptorCount > 2UL)
    {
      goto _L;
    }
    else
    {
      if (1 == ((int) largePortRangeFound))
      {
        _L:
        {
        }

        return 1;
      }
      else
      {
        {
        }
        return 0;
      }

    }

  }
}

void PptCompleteRequest(PIRP Irp, CCHAR PriorityBoost)
{
  {
    {
      IofCompleteRequest(Irp, PriorityBoost);
    }
    return;
  }
}

static PDRIVER_DISPATCH PptPnpDispatchFunctionTable[25];
void PptPnpInitDispatchFunctionTable(void)
{
  ULONG i = __VERIFIER_nondet_long("i");
  {
    PptPnpDispatchFunctionTable[i] = &PptPnpUnhandledIrp;
    PptPnpDispatchFunctionTable[0] = &PptPnpStartDevice;
    PptPnpDispatchFunctionTable[13] = &PptPnpFilterResourceRequirements;
    PptPnpDispatchFunctionTable[7] = &PptPnpQueryDeviceRelations;
    PptPnpDispatchFunctionTable[5] = &PptPnpQueryStopDevice;
    PptPnpDispatchFunctionTable[6] = &PptPnpCancelStopDevice;
    PptPnpDispatchFunctionTable[4] = &PptPnpStopDevice;
    PptPnpDispatchFunctionTable[1] = &PptPnpQueryRemoveDevice;
    PptPnpDispatchFunctionTable[3] = &PptPnpCancelRemoveDevice;
    PptPnpDispatchFunctionTable[2] = &PptPnpRemoveDevice;
    PptPnpDispatchFunctionTable[23] = &PptPnpSurpriseRemoval;
    return;
  }
}

NTSTATUS PptPnpAddDevice(PDRIVER_OBJECT pDriverObject, PDEVICE_OBJECT pPhysicalDeviceObject)
{
  NTSTATUS status;
  PDEVICE_OBJECT parentDevice;
  PDEVICE_OBJECT pDeviceObject;
  PDEVICE_EXTENSION Extension;
  PCONFIGURATION_INFORMATION tmp;
  {
    status = 0L;
    {
    }
    {
      pDeviceObject = PptBuildDeviceObject(pDriverObject, pPhysicalDeviceObject);
    }
    if (((unsigned int) ((void *) 0)) == ((unsigned int) pDeviceObject))
    {
      {
      }
      return -1073741823L;
    }
    else
    {
    }

    {
      Extension = pDeviceObject->DeviceExtension;
      status = IoRegisterDeviceInterface(pPhysicalDeviceObject, &GUID_PARALLEL_DEVICE, (void *) 0, &Extension->SymbolicLinkName);
    }
    if (!(status >= 0L))
    {
      {
      }
      {
      }
      return status;
    }
    else
    {
    }

    {
      parentDevice = IoAttachDeviceToDeviceStack(pDeviceObject, pPhysicalDeviceObject);
    }
    if (((unsigned int) ((void *) 0)) == ((unsigned int) parentDevice))
    {
      {
      }
      {
      }
      return -1073741823L;
    }
    else
    {
    }

    {
      Extension->ParentDeviceObject = parentDevice;
      tmp = IoGetConfigurationInformation();
      tmp->ParallelCount += 1UL;
      pDeviceObject->Flags &= 4294967167UL;
    }
    {
    }
    return 0L;
  }
}

NTSTATUS PptDispatchPnp(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  NTSTATUS status;
  PIO_STACK_LOCATION irpStack;
  UCHAR minorFunction;
  {
    {
      PptDebugDumpPnpIrpInfo(DeviceObject, Irp);
      status = PptAcquireRemoveLockOrFailIrp(DeviceObject, Irp);
    }
    if (status >= 0L)
    {
      irpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
      minorFunction = irpStack->MinorFunction;
      if (((int) minorFunction) > 24)
      {
        {
          status = PptPnpUnhandledIrp(DeviceObject, Irp);
        }
      }
      else
      {
        if (__BLAST_NONDET == 0)
        {
          goto switch_214_0;
        }
        else
        {
          if (__BLAST_NONDET == 1)
          {
            goto switch_214_1;
          }
          else
          {
            if (__BLAST_NONDET == 2)
            {
              goto switch_214_2;
            }
            else
            {
              if (__BLAST_NONDET == 3)
              {
                goto switch_214_3;
              }
              else
              {
                if (__BLAST_NONDET == 4)
                {
                  goto switch_214_4;
                }
                else
                {
                  if (__BLAST_NONDET == 5)
                  {
                    goto switch_214_5;
                  }
                  else
                  {
                    if (__BLAST_NONDET == 6)
                    {
                      goto switch_214_6;
                    }
                    else
                    {
                      if (__BLAST_NONDET == 7)
                      {
                        goto switch_214_7;
                      }
                      else
                      {
                        if (__BLAST_NONDET == 8)
                        {
                          goto switch_214_8;
                        }
                        else
                        {
                          if (__BLAST_NONDET == 9)
                          {
                            goto switch_214_9;
                          }
                          else
                          {
                            {
                              goto switch_214_default;
                              if (0)
                              {
                                switch_214_0:
                                {
                                  status = PptPnpUnhandledIrp(DeviceObject, Irp);
                                }

                                goto switch_214_break;
                                switch_214_1:
                                {
                                  status = PptPnpStartDevice(DeviceObject, Irp);
                                }

                                goto switch_214_break;
                                switch_214_2:
                                {
                                  status = PptPnpFilterResourceRequirements(DeviceObject, Irp);
                                }

                                goto switch_214_break;
                                switch_214_3:
                                {
                                  status = PptPnpQueryDeviceRelations(DeviceObject, Irp);
                                }

                                goto switch_214_break;
                                switch_214_4:
                                {
                                  status = PptPnpQueryStopDevice(DeviceObject, Irp);
                                }

                                goto switch_214_break;
                                switch_214_5:
                                {
                                  status = PptPnpCancelStopDevice(DeviceObject, Irp);
                                }

                                goto switch_214_break;
                                switch_214_6:
                                {
                                  status = PptPnpStopDevice(DeviceObject, Irp);
                                }

                                goto switch_214_break;
                                switch_214_7:
                                {
                                  status = PptPnpQueryRemoveDevice(DeviceObject, Irp);
                                }

                                goto switch_214_break;
                                switch_214_8:
                                {
                                  status = PptPnpCancelRemoveDevice(DeviceObject, Irp);
                                }

                                goto switch_214_break;
                                switch_214_9:
                                {
                                  status = PptPnpRemoveDevice(DeviceObject, Irp);
                                }

                                goto switch_214_break;
                                switch_214_default:
                                {
                                  status = PptPnpSurpriseRemoval(DeviceObject, Irp);
                                }

                                goto switch_214_break;
                              }
                              else
                              {
                                switch_214_break:
                                ;

                              }

                            }
                          }

                        }

                      }

                    }

                  }

                }

              }

            }

          }

        }

      }

    }
    else
    {
    }

    return status;
  }
}

NTSTATUS PptPnpStartDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PDEVICE_EXTENSION extension;
  NTSTATUS status;
  BOOLEAN foundPort;
  BOOLEAN foundIrq;
  BOOLEAN foundDma;
  {
    {
      extension = DeviceObject->DeviceExtension;
      foundPort = 0;
      foundIrq = 0;
      foundDma = 0;
      status = PptPnpBounceAndCatchPnpIrp(extension, Irp);
    }
    if (!(status >= 0L))
    {
      if (status != (-1073741637L))
      {
        goto targetExit;
      }
      else
      {
      }

    }
    else
    {
    }

    {
      status = PptPnpStartScanCmResourceList(extension, Irp, &foundPort, &foundIrq, &foundDma);
    }
    if (!(status >= 0L))
    {
      goto targetExit;
    }
    else
    {
    }

    {
      status = PptPnpStartValidateResources(DeviceObject, foundPort, foundIrq, foundDma);
    }
    if (!(status >= 0L))
    {
      goto targetExit;
    }
    else
    {
    }

    {
      extension->PnpInfo.Ieee1284_3DeviceCount = PptInitiate1284_3(extension);
      status = PptDetectChipFilter(extension);
    }
    if (!(status >= 0L))
    {
      {
        PptDetectPortType(extension);
      }
    }
    else
    {
    }

    {
      status = PptWmiInitWmi(DeviceObject);
    }
    if (!(status >= 0L))
    {
      goto targetExit;
    }
    else
    {
    }

    {
      status = IoSetDeviceInterfaceState(&extension->SymbolicLinkName, 1);
    }
    if (!(status >= 0L))
    {
      status = -1073741637L;
    }
    else
    {
    }

    targetExit:
    if (status >= 0L)
    {
      {
        extension->DeviceStateFlags |= 1UL;
      }
    }
    else
    {
    }


    {
      Irp->IoStatus.__annonCompField4.Status = status;
      myStatus = status;
      Irp->IoStatus.Information = 0;
      PptCompleteRequest(Irp, 0);
      PptReleaseRemoveLock(&extension->RemoveLock, Irp);
    }
    return status;
  }
}

NTSTATUS PptPnpStartScanCmResourceList(PDEVICE_EXTENSION Extension, PIRP Irp, PBOOLEAN FoundPort, PBOOLEAN FoundIrq, PBOOLEAN FoundDma)
{
  NTSTATUS status;
  PIO_STACK_LOCATION irpStack;
  PCM_RESOURCE_LIST ResourceList;
  PCM_FULL_RESOURCE_DESCRIPTOR FullResourceDescriptor;
  PCM_PARTIAL_RESOURCE_LIST PartialResourceList;
  PCM_PARTIAL_RESOURCE_DESCRIPTOR PartialResourceDescriptor;
  ULONG i;
  PHYSICAL_ADDRESS start;
  ULONG length;
  BOOLEAN isPci;
  BOOLEAN tmp;
  BOOLEAN tmp___0;
  BOOLEAN tmp___1;
  {
    status = 0L;
    irpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
    isPci = 0;
    *FoundPort = 0;
    *FoundIrq = 0;
    *FoundDma = 0;
    ResourceList = irpStack->Parameters.StartDevice.AllocatedResourcesTranslated;
    if (((unsigned int) ResourceList) == ((unsigned int) ((void *) 0)))
    {
      {
      }
      status = -1073741670L;
      goto targetExit;
    }
    else
    {
    }

    if (((int) ((KUSER_SHARED_DATA * const) 4292804608U)->AlternativeArchitecture) != 1)
    {
      {
        tmp = PptIsPci(Extension, Irp);
      }
      if (1 == ((int) tmp))
      {
        {
        }
        {
          status = PptPnpStartScanPciCardCmResourceList(Extension, Irp, FoundPort, FoundIrq, FoundDma);
          isPci = 1;
        }
        goto targetExit;
      }
      else
      {
      }

    }
    else
    {
    }

    FullResourceDescriptor = &ResourceList->List[0];
    if (FullResourceDescriptor)
    {
      Extension->InterfaceType = FullResourceDescriptor->InterfaceType;
      PartialResourceList = &FullResourceDescriptor->PartialResourceList;
      i = 0;
      {
        while (1)
        {
          while_217_continue:
          ;

          if (i < PartialResourceList->Count)
          {
          }
          else
          {
            goto while_217_break;
          }

          PartialResourceDescriptor = &PartialResourceList->PartialDescriptors[i];
          if (PartialResourceDescriptor->Type == 1)
          {
            goto switch_218_1;
          }
          else
          {
            if (PartialResourceDescriptor->Type == 6)
            {
              goto switch_218_6;
            }
            else
            {
              if (PartialResourceDescriptor->Type == 2)
              {
                goto switch_218_2;
              }
              else
              {
                if (PartialResourceDescriptor->Type == 4)
                {
                  goto switch_218_4;
                }
                else
                {
                  {
                    goto switch_218_default;
                    if (0)
                    {
                      switch_218_1:
                      start = PartialResourceDescriptor->u.Port.Start;

                      length = PartialResourceDescriptor->u.Port.Length;
                      {
                      }
                      *FoundPort = 1;
                      if (Extension->PortInfo.OriginalController.__annonCompField1.LowPart == 0UL)
                      {
                        if (Extension->PortInfo.OriginalController.__annonCompField1.HighPart == 0L)
                        {
                          {
                          }
                          Extension->PortInfo.OriginalController = PartialResourceDescriptor->u.Port.Start;
                          Extension->PortInfo.SpanOfController = PartialResourceDescriptor->u.Port.Length;
                          Extension->PortInfo.Controller = (UCHAR *) ((unsigned long) Extension->PortInfo.OriginalController.QuadPart);
                          Extension->AddressSpace = PartialResourceDescriptor->Flags;
                          if (Extension->PortInfo.SpanOfController == 4096UL)
                          {
                            {
                              tmp___0 = PptIsNecR98Machine();
                            }
                            if (tmp___0)
                            {
                              Extension->PortInfo.SpanOfController = 8;
                            }
                            else
                            {
                            }

                          }
                          else
                          {
                          }

                        }
                        else
                        {
                          goto _L___0;
                        }

                      }
                      else
                      {
                        _L___0:
                        if (Extension->PnpInfo.OriginalEcpController.__annonCompField1.LowPart == 0UL)
                        {
                          if (Extension->PnpInfo.OriginalEcpController.__annonCompField1.HighPart == 0L)
                          {
                            if (((int) ((KUSER_SHARED_DATA * const) 4292804608U)->AlternativeArchitecture) != 1)
                            {
                              if (PartialResourceDescriptor->u.Port.Start.__annonCompField1.LowPart < Extension->PortInfo.OriginalController.__annonCompField1.LowPart)
                              {
                                if (PartialResourceDescriptor->u.Port.Start.__annonCompField1.HighPart < Extension->PortInfo.OriginalController.__annonCompField1.HighPart)
                                {
                                  {
                                  }
                                  Extension->PnpInfo.OriginalEcpController = Extension->PortInfo.OriginalController;
                                  Extension->PnpInfo.SpanOfEcpController = Extension->PortInfo.SpanOfController;
                                  Extension->PnpInfo.EcpController = Extension->PortInfo.Controller;
                                  Extension->EcpAddressSpace = Extension->AddressSpace;
                                  Extension->PortInfo.OriginalController = PartialResourceDescriptor->u.Port.Start;
                                  Extension->PortInfo.SpanOfController = PartialResourceDescriptor->u.Port.Length;
                                  Extension->PortInfo.Controller = (UCHAR *) ((unsigned long) Extension->PortInfo.OriginalController.QuadPart);
                                  Extension->AddressSpace = PartialResourceDescriptor->Flags;
                                  if (Extension->PortInfo.SpanOfController == 4096UL)
                                  {
                                    {
                                      tmp___1 = PptIsNecR98Machine();
                                    }
                                    if (tmp___1)
                                    {
                                      Extension->PortInfo.SpanOfController = 8;
                                    }
                                    else
                                    {
                                    }

                                  }
                                  else
                                  {
                                  }

                                }
                                else
                                {
                                  goto _L;
                                }

                              }
                              else
                              {
                                _L:
                                {
                                }

                                Extension->PnpInfo.OriginalEcpController = PartialResourceDescriptor->u.Port.Start;
                                Extension->PnpInfo.SpanOfEcpController = PartialResourceDescriptor->u.Port.Length;
                                Extension->PnpInfo.EcpController = (UCHAR *) ((unsigned long) Extension->PnpInfo.OriginalEcpController.QuadPart);
                                Extension->EcpAddressSpace = PartialResourceDescriptor->Flags;
                              }

                            }
                            else
                            {
                            }

                          }
                          else
                          {
                          }

                        }
                        else
                        {
                        }


                      }

                      goto switch_218_break;
                      switch_218_6:
                      Extension->BusNumber = PartialResourceDescriptor->u.BusNumber.Start;

                      goto switch_218_break;
                      switch_218_2:
                      *FoundIrq = 1;

                      Extension->FoundInterrupt = 1;
                      Extension->InterruptLevel = (unsigned char) PartialResourceDescriptor->u.Interrupt.Level;
                      Extension->InterruptVector = PartialResourceDescriptor->u.Interrupt.Vector;
                      Extension->InterruptAffinity = PartialResourceDescriptor->u.Interrupt.Affinity;
                      if (((int) PartialResourceDescriptor->Flags) & 1)
                      {
                        Extension->InterruptMode = 1;
                      }
                      else
                      {
                        Extension->InterruptMode = 0;
                      }

                      goto switch_218_break;
                      switch_218_4:
                      *FoundDma = 1;

                      Extension->DmaChannel = PartialResourceDescriptor->u.Dma.Channel;
                      Extension->DmaPort = PartialResourceDescriptor->u.Dma.Port;
                      Extension->DmaWidth = PartialResourceDescriptor->Flags;
                      goto switch_218_break;
                      switch_218_default:
                      ;

                      goto switch_218_break;
                    }
                    else
                    {
                      switch_218_break:
                      ;

                    }

                  }
                }

              }

            }

          }

          i += 1UL;
        }

        while_217_break:
        ;

      }
    }
    else
    {
    }

    targetExit:
    if (0 == ((int) isPci))
    {
      {
      }
      {
      }
      {
      }
      {
      }
    }
    else
    {
    }


    return status;
  }
}

NTSTATUS PptPnpStartValidateResources(PDEVICE_OBJECT DeviceObject, BOOLEAN FoundPort, BOOLEAN FoundIrq, BOOLEAN FoundDma)
{
  PDEVICE_EXTENSION extension;
  NTSTATUS status;
  {
    extension = DeviceObject->DeviceExtension;
    status = 0L;
    if (!FoundPort)
    {
      status = -1073741810L;
    }
    else
    {
      extension->PortInfo.Controller = (UCHAR *) ((unsigned long) extension->PortInfo.OriginalController.QuadPart);
      if (!extension->PortInfo.Controller)
      {
        {
          PptLogError(DeviceObject->DriverObject, DeviceObject, extension->PortInfo.OriginalController, PhysicalZero, 0, 0, 0, 10, 0L, 4);
          status = -1073741709L;
        }
      }
      else
      {
      }

    }

    return status;
  }
}

NTSTATUS PptPnpFilterResourceRequirements(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PDEVICE_EXTENSION extension;
  ULONG filterResourceMethod;
  PIO_RESOURCE_REQUIREMENTS_LIST pResourceRequirementsIn;
  NTSTATUS status;
  PIO_STACK_LOCATION IrpStack;
  BOOLEAN tmp;
  BOOLEAN tmp___0;
  {
    {
      extension = DeviceObject->DeviceExtension;
      filterResourceMethod = 1;
      status = PptPnpBounceAndCatchPnpIrp(extension, Irp);
    }
    if (!(status >= 0L))
    {
      if (status != (-1073741637L))
      {
        goto targetExit;
      }
      else
      {
      }

    }
    else
    {
    }

    if (Irp->IoStatus.Information == 0UL)
    {
      IrpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
      pResourceRequirementsIn = IrpStack->Parameters.FilterResourceRequirements.IoResourceRequirementList;
      if (((unsigned int) pResourceRequirementsIn) == ((unsigned int) ((void *) 0)))
      {
        goto targetExit;
      }
      else
      {
      }

    }
    else
    {
      pResourceRequirementsIn = (struct _IO_RESOURCE_REQUIREMENTS_LIST *) Irp->IoStatus.Information;
    }

    {
    }
    {
    }
    {
      PptDebugDumpResourceRequirementsList(pResourceRequirementsIn);
    }
    if (filterResourceMethod == 1)
    {
      goto switch_229_1;
    }
    else
    {
      if (filterResourceMethod == 0)
      {
        goto switch_229_0;
      }
      else
      {
        if (filterResourceMethod == 2)
        {
          goto switch_229_2;
        }
        else
        {
          {
            goto switch_229_default;
            if (0)
            {
              switch_229_1:
              ;

              {
              }
              {
                tmp = PptPnpFilterExistsNonIrqResourceList(pResourceRequirementsIn);
              }
              if (tmp)
              {
                {
                }
                {
                  PptPnpFilterRemoveIrqResourceLists(pResourceRequirementsIn);
                }
              }
              else
              {
                {
                }
                {
                  PptPnpFilterNukeIrqResourceDescriptorsFromAllLists(pResourceRequirementsIn);
                }
              }

              {
              }
              {
                PptDebugDumpResourceRequirementsList(pResourceRequirementsIn);
              }
              goto switch_229_break;
              switch_229_0:
              ;

              {
              }
              {
                tmp___0 = PptPnpFilterExistsNonIrqResourceList(pResourceRequirementsIn);
              }
              if (tmp___0)
              {
                {
                }
                {
                  PptPnpFilterRemoveIrqResourceLists(pResourceRequirementsIn);
                }
                {
                }
                {
                  PptDebugDumpResourceRequirementsList(pResourceRequirementsIn);
                }
              }
              else
              {
                {
                }
              }

              goto switch_229_break;
              switch_229_2:
              ;

              {
              }
              goto switch_229_break;
              switch_229_default:
              ;

              {
              }
            }
            else
            {
              switch_229_break:
              ;

            }

          }
        }

      }

    }

    targetExit:
    {
      Irp->IoStatus.__annonCompField4.Status = status;
      myStatus = status;
      PptCompleteRequest(Irp, 0);
      PptReleaseRemoveLock(&extension->RemoveLock, Irp);
    }

    return status;
  }
}

BOOLEAN PptPnpFilterExistsNonIrqResourceList(PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirementsList)
{
  ULONG listCount;
  PIO_RESOURCE_LIST curList;
  ULONG i;
  ULONG remain;
  PIO_RESOURCE_DESCRIPTOR curDesc;
  BOOLEAN foundIrq;
  {
    listCount = ResourceRequirementsList->AlternativeLists;
    {
    }
    i = 0;
    curList = ResourceRequirementsList->List;
    {
      while (1)
      {
        while_241_continue:
        ;

        if (i < listCount)
        {
        }
        else
        {
          goto while_241_break;
        }

        {
        }
        remain = curList->Count;
        curDesc = curList->Descriptors;
        foundIrq = 0;
        {
          while (1)
          {
            while_243_continue:
            ;

            if (remain)
            {
            }
            else
            {
              goto while_243_break;
            }

            {
            }
            if (((int) curDesc->Type) == 2)
            {
              {
              }
              foundIrq = 1;
              goto while_243_break;
            }
            else
            {
            }

            curDesc += 1;
            remain -= 1UL;
          }

          while_243_break:
          ;

        }
        if (((int) foundIrq) == 0)
        {
          {
          }
          return 1;
        }
        else
        {
        }

        curList = (struct _IO_RESOURCE_LIST *) (curList->Descriptors + curList->Count);
        i += 1UL;
      }

      while_241_break:
      ;

    }
    {
    }
    return 0;
  }
}

void PptPnpFilterRemoveIrqResourceLists(PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirementsList)
{
  ULONG listCount;
  PIO_RESOURCE_LIST curList;
  PIO_RESOURCE_LIST nextList;
  ULONG i;
  PCHAR currentEndOfResourceRequirementsList;
  LONG bytesToMove;
  PVOID tmp;
  BOOLEAN tmp___0;
  {
    listCount = ResourceRequirementsList->AlternativeLists;
    {
    }
    {
      tmp = PptPnpFilterGetEndOfResourceRequirementsList(ResourceRequirementsList);
      currentEndOfResourceRequirementsList = tmp;
      i = 0;
      curList = ResourceRequirementsList->List;
    }
    {
      while (1)
      {
        while_249_continue:
        ;

        if (i < listCount)
        {
        }
        else
        {
          goto while_249_break;
        }

        {
        }
        {
        }
        {
          tmp___0 = PptPnpListContainsIrqResourceDescriptor(curList);
        }
        if (tmp___0)
        {
          {
          }
          nextList = (struct _IO_RESOURCE_LIST *) (curList->Descriptors + curList->Count);
          bytesToMove = (long) (currentEndOfResourceRequirementsList - ((CHAR *) nextList));
          if (bytesToMove > 0L)
          {
            {
              memmove(curList, nextList, bytesToMove);
              currentEndOfResourceRequirementsList -= ((CHAR *) nextList) - ((CHAR *) curList);
            }
          }
          else
          {
          }

          listCount -= 1UL;
        }
        else
        {
          {
          }
          curList = (struct _IO_RESOURCE_LIST *) (curList->Descriptors + curList->Count);
          i += 1UL;
        }

      }

      while_249_break:
      ;

    }
    ResourceRequirementsList->AlternativeLists = listCount;
    {
    }
    return;
  }
}

PVOID PptPnpFilterGetEndOfResourceRequirementsList(PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirementsList)
{
  ULONG listCount;
  PIO_RESOURCE_LIST curList;
  ULONG i;
  {
    listCount = ResourceRequirementsList->AlternativeLists;
    i = 0;
    curList = ResourceRequirementsList->List;
    {
      while (1)
      {
        while_255_continue:
        ;

        if (i < listCount)
        {
        }
        else
        {
          goto while_255_break;
        }

        curList = (struct _IO_RESOURCE_LIST *) (curList->Descriptors + curList->Count);
        i += 1UL;
      }

      while_255_break:
      ;

    }
    return (void *) curList;
  }
}

void PptPnpFilterNukeIrqResourceDescriptorsFromAllLists(PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirementsList)
{
  ULONG listCount;
  ULONG i;
  PIO_RESOURCE_LIST curList;
  {
    listCount = ResourceRequirementsList->AlternativeLists;
    i = 0;
    curList = ResourceRequirementsList->List;
    {
    }
    {
      while (1)
      {
        while_257_continue:
        ;

        if (i < listCount)
        {
        }
        else
        {
          goto while_257_break;
        }

        {
        }
        {
          PptPnpFilterNukeIrqResourceDescriptors(curList);
          curList = (struct _IO_RESOURCE_LIST *) (curList->Descriptors + curList->Count);
          i += 1UL;
        }
      }

      while_257_break:
      ;

    }
    return;
  }
}

void PptPnpFilterNukeIrqResourceDescriptors(PIO_RESOURCE_LIST IoResourceList)
{
  PIO_RESOURCE_DESCRIPTOR pIoResourceDescriptorIn;
  ULONG i;
  {
    pIoResourceDescriptorIn = IoResourceList->Descriptors;
    i = 0;
    {
      while (1)
      {
        while_259_continue:
        ;

        if (i < IoResourceList->Count)
        {
        }
        else
        {
          goto while_259_break;
        }

        if (((int) pIoResourceDescriptorIn->Type) == 2)
        {
          pIoResourceDescriptorIn->Type = 0;
          {
          }
        }
        else
        {
        }

        pIoResourceDescriptorIn += 1;
        i += 1UL;
      }

      while_259_break:
      ;

    }
    return;
  }
}

NTSTATUS PptPnpQueryDeviceRelations(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PDEVICE_EXTENSION extension;
  PIO_STACK_LOCATION irpSp;
  DEVICE_RELATION_TYPE type;
  PDEVICE_RELATIONS removalRelations;
  NTSTATUS tmp;
  {
    extension = DeviceObject->DeviceExtension;
    irpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
    type = irpSp->Parameters.QueryDeviceRelations.Type;
    if (type == 3)
    {
      goto switch_261_3;
    }
    else
    {
      if (type == 0)
      {
        goto switch_261_0;
      }
      else
      {
        if (type == 1)
        {
          goto switch_261_1;
        }
        else
        {
          if (type == 2)
          {
            goto switch_261_2;
          }
          else
          {
            if (type == 4)
            {
              goto switch_261_4;
            }
            else
            {
              {
                goto switch_261_default;
                if (0)
                {
                  switch_261_3:
                  ;

                  {
                  }
                  {
                    PptDumpRemovalRelationsList(extension);
                  }
                  if (Irp->IoStatus.Information)
                  {
                    {
                    }
                  }
                  else
                  {
                    {
                      removalRelations = PptPnpBuildRemovalRelations(extension);
                    }
                    if (removalRelations)
                    {
                      {
                      }
                      Irp->IoStatus.__annonCompField4.Status = 0L;
                      myStatus = 0L;
                      Irp->IoStatus.Information = (unsigned long) removalRelations;
                    }
                    else
                    {
                      {
                      }
                    }

                  }

                  goto switch_261_break;
                  switch_261_0:
                  ;

                  {
                  }
                  goto switch_261_break;
                  switch_261_1:
                  ;

                  {
                  }
                  goto switch_261_break;
                  switch_261_2:
                  ;

                  {
                  }
                  goto switch_261_break;
                  switch_261_4:
                  ;

                  {
                  }
                  goto switch_261_break;
                  switch_261_default:
                  ;

                  {
                  }
                  goto switch_261_break;
                }
                else
                {
                  switch_261_break:
                  ;

                }

              }
            }

          }

        }

      }

    }

    {
      tmp = PptPnpPassThroughPnpIrpAndReleaseRemoveLock(DeviceObject->DeviceExtension, Irp);
    }
    return tmp;
  }
}

NTSTATUS PptPnpQueryStopDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  NTSTATUS status;
  PDEVICE_EXTENSION extension;
  LONG handlesOpen;
  {
    {
      status = 0L;
      extension = DeviceObject->DeviceExtension;
      handlesOpen = extension->OpenCloseRefCount;
    }
    if (handlesOpen > 0L)
    {
      {
        status = -2147483631L;
        PptFailRequest(Irp, status);
        PptReleaseRemoveLock(&extension->RemoveLock, Irp);
      }
    }
    else
    {
      {
        Irp->IoStatus.__annonCompField4.Status = 0L;
        myStatus = 0L;
        status = PptPnpPassThroughPnpIrpAndReleaseRemoveLock(extension, Irp);
        extension->DeviceStateFlags |= 65552UL;
      }
    }

    return status;
  }
}

NTSTATUS PptPnpCancelStopDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PDEVICE_EXTENSION extension;
  NTSTATUS tmp;
  {
    {
      extension = DeviceObject->DeviceExtension;
    }
    if (extension->DeviceStateFlags & 16UL)
    {
      extension->DeviceStateFlags &= 4294901743UL;
    }
    else
    {
    }

    {
      Irp->IoStatus.__annonCompField4.Status = 0L;
      myStatus = 0L;
      tmp = PptPnpPassThroughPnpIrpAndReleaseRemoveLock(extension, Irp);
    }
    return tmp;
  }
}

NTSTATUS PptPnpStopDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PDEVICE_EXTENSION extension;
  NTSTATUS tmp;
  {
    {
      extension = DeviceObject->DeviceExtension;
      extension->DeviceStateFlags |= 32UL;
      extension->DeviceStateFlags &= 4294967278UL;
      Irp->IoStatus.__annonCompField4.Status = 0L;
      myStatus = 0L;
      tmp = PptPnpPassThroughPnpIrpAndReleaseRemoveLock(extension, Irp);
    }
    return tmp;
  }
}

NTSTATUS PptPnpQueryRemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PDEVICE_EXTENSION extension;
  NTSTATUS tmp;
  {
    extension = DeviceObject->DeviceExtension;
    {
    }
    {
      extension->DeviceStateFlags |= 65792UL;
      Irp->IoStatus.__annonCompField4.Status = 0L;
      myStatus = 0L;
      tmp = PptPnpPassThroughPnpIrpAndReleaseRemoveLock(extension, Irp);
    }
    return tmp;
  }
}

NTSTATUS PptPnpCancelRemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PDEVICE_EXTENSION extension;
  NTSTATUS tmp;
  {
    {
      extension = DeviceObject->DeviceExtension;
    }
    if (extension->DeviceStateFlags & 256UL)
    {
      extension->DeviceStateFlags &= 4294901503UL;
    }
    else
    {
    }

    {
      Irp->IoStatus.__annonCompField4.Status = 0L;
      myStatus = 0L;
      tmp = PptPnpPassThroughPnpIrpAndReleaseRemoveLock(extension, Irp);
    }
    return tmp;
  }
}

NTSTATUS PptPnpRemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PDEVICE_EXTENSION extension;
  NTSTATUS status;
  {
    {
      extension = DeviceObject->DeviceExtension;
      extension->DeviceStateFlags |= 512UL;
      IoWMIRegistrationControl(DeviceObject, 2);
      IoSetDeviceInterfaceState(&extension->SymbolicLinkName, 0);
      Irp->IoStatus.__annonCompField4.Status = 0L;
      myStatus = 0L;
    }
    if (s == NP)
    {
      s = SKIP1;
    }
    else
    {
      {
        errorFn();
      }
    }

    {
      Irp->CurrentLocation = (CHAR) (((int) Irp->CurrentLocation) + 1);
      Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation += 1;
      status = IofCallDriver(extension->ParentDeviceObject, Irp);
      PptReleaseRemoveLockAndWait(&extension->RemoveLock, Irp);
      PptCleanRemovalRelationsList(extension);
    }
    if (extension->PnpInfo.PortName)
    {
      {
        extension->PnpInfo.PortName = (void *) 0;
      }
    }
    else
    {
    }

    {
    }
    return status;
  }
}

NTSTATUS PptPnpSurpriseRemoval(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PDEVICE_EXTENSION extension;
  KIRQL cancelIrql;
  NTSTATUS tmp;
  {
    {
      extension = DeviceObject->DeviceExtension;
      extension->DeviceStateFlags |= 4096UL;
      IoSetDeviceInterfaceState(&extension->SymbolicLinkName, 0);
      Irp->IoStatus.__annonCompField4.Status = 0L;
      myStatus = 0L;
      tmp = PptPnpPassThroughPnpIrpAndReleaseRemoveLock(extension, Irp);
    }
    return tmp;
  }
}

BOOLEAN PptPnpListContainsIrqResourceDescriptor(PIO_RESOURCE_LIST List)
{
  ULONG i;
  PIO_RESOURCE_DESCRIPTOR curDesc;
  {
    curDesc = List->Descriptors;
    i = 0;
    {
      while (1)
      {
        while_272_continue:
        ;

        if (i < List->Count)
        {
        }
        else
        {
          goto while_272_break;
        }

        if (((int) curDesc->Type) == 2)
        {
          return 1;
        }
        else
        {
          curDesc += 1;
        }

        i += 1UL;
      }

      while_272_break:
      ;

    }
    return 0;
  }
}

NTSTATUS PptPnpBounceAndCatchPnpIrp(PDEVICE_EXTENSION Extension, PIRP Irp)
{
  NTSTATUS status;
  KEVENT event;
  PDEVICE_OBJECT parentDevObj;
  PIO_STACK_LOCATION irpSp;
  PIO_STACK_LOCATION nextIrpSp;
  PIO_STACK_LOCATION irpSp___0;
  {
    parentDevObj = Extension->ParentDeviceObject;
    {
    }
    {
      irpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
      nextIrpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
      memcpy_guard(nextIrpSp, irpSp, (long) (&((IO_STACK_LOCATION *) 0)->CompletionRoutine));
      memmove(nextIrpSp, irpSp, (long) (&((IO_STACK_LOCATION *) 0)->CompletionRoutine));
      nextIrpSp->Control = 0;
    }
    if (s != NP)
    {
      {
        errorFn();
      }
    }
    else
    {
      if (compRegistered != 0)
      {
        {
          errorFn();
        }
      }
      else
      {
        compRegistered = 1;
        compFptr = &PptSynchCompletionRoutine;
        routine = 0;
      }

    }

    {
      irpSp___0 = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
      irpSp___0->CompletionRoutine = &PptSynchCompletionRoutine;
      irpSp___0->Context = &event;
      irpSp___0->Control = 0;
      irpSp___0->Control = 64;
      irpSp___0->Control = ((int) irpSp___0->Control) | 128;
      irpSp___0->Control = ((int) irpSp___0->Control) | 32;
      status = IofCallDriver(parentDevObj, Irp);
      KeWaitForSingleObject(&event, 5, 0, 0, (void *) 0);
    }
    if (status == 259L)
    {
      status = myStatus;
    }
    else
    {
    }

    return status;
  }
}

NTSTATUS PptPnpPassThroughPnpIrpAndReleaseRemoveLock(PDEVICE_EXTENSION Extension, PIRP Irp)
{
  NTSTATUS status;
  {
    if (s == NP)
    {
      s = SKIP1;
    }
    else
    {
      {
        errorFn();
      }
    }

    {
      Irp->CurrentLocation = (CHAR) (((int) Irp->CurrentLocation) + 1);
      Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation += 1;
      status = IofCallDriver(Extension->ParentDeviceObject, Irp);
      PptReleaseRemoveLock(&Extension->RemoveLock, Irp);
    }
    return status;
  }
}

NTSTATUS PptPnpUnhandledIrp(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  NTSTATUS tmp;
  {
    {
      tmp = PptPnpPassThroughPnpIrpAndReleaseRemoveLock(DeviceObject->DeviceExtension, Irp);
    }
    return tmp;
  }
}

#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4035)
#pragma warning(push)
#pragma warning(disable:4164)
#pragma function(_enable)
#pragma function(_disable)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4200)
#pragma warning(default:4200)
NTSTATUS PptPowerComplete(PDEVICE_OBJECT pDeviceObject, PIRP pIrp, PDEVICE_EXTENSION Extension)
{
  POWER_STATE_TYPE powerType;
  POWER_STATE powerState;
  PIO_STACK_LOCATION pIrpStack;
  {
    pIrpStack = pIrp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
    powerType = pIrpStack->Parameters.Power.Type;
    powerState = pIrpStack->Parameters.Power.State;
    if (pIrpStack->MinorFunction == 3)
    {
      goto switch_274_3;
    }
    else
    {
      if (pIrpStack->MinorFunction == 2)
      {
        goto switch_274_2;
      }
      else
      {
        {
          goto switch_274_default;
          if (0)
          {
            switch_274_3:
            ;

            goto switch_274_break;
            switch_274_2:
            ;

            {
            }
            if (powerType == 1)
            {
              goto switch_276_1;
            }
            else
            {
              if (powerType == 0)
              {
                goto switch_276_0;
              }
              else
              {
                if (0)
                {
                  switch_276_1:
                  ;

                  if (((int) Extension->DeviceState) < ((int) powerState.DeviceState))
                  {
                  }
                  else
                  {
                    if (((int) powerState.DeviceState) < ((int) Extension->DeviceState))
                    {
                      {
                        PoSetPowerState(Extension->DeviceObject, powerType, powerState);
                      }
                      if (1 == ((int) Extension->DeviceState))
                      {
                      }
                      else
                      {
                      }

                      Extension->DeviceState = powerState.DeviceState;
                    }
                    else
                    {
                    }

                  }

                  goto switch_276_break;
                  switch_276_0:
                  ;

                  if (((int) Extension->SystemState) < ((int) powerState.SystemState))
                  {
                  }
                  else
                  {
                    if (((int) powerState.SystemState) < ((int) Extension->SystemState))
                    {
                      if (1 == ((int) powerState.SystemState))
                      {
                        {
                          powerState.DeviceState = 1;
                          PoRequestPowerIrp(Extension->DeviceObject, 2, powerState, (void *) 0, (void *) 0, (void *) 0);
                        }
                      }
                      else
                      {
                      }

                      Extension->SystemState = powerState.SystemState;
                    }
                    else
                    {
                    }

                  }

                  goto switch_276_break;
                }
                else
                {
                  switch_276_break:
                  ;

                }

              }

            }

            goto switch_274_break;
            switch_274_default:
            ;

          }
          else
          {
            switch_274_break:
            ;

          }

        }
      }

    }

    {
    }
    return 0L;
  }
}

void InitNEC_98(PDEVICE_EXTENSION Extension)
{
  PUCHAR Controller;
  {
    {
      Controller = Extension->PortInfo.Controller;
      WRITE_PORT_UCHAR(Controller + 9, 16);
      WRITE_PORT_UCHAR(Controller + 14, 0);
      WRITE_PORT_UCHAR(Controller + 2, 4);
    }
    return;
  }
}

NTSTATUS PptDispatchPower(PDEVICE_OBJECT pDeviceObject, PIRP pIrp)
{
  POWER_STATE_TYPE powerType;
  POWER_STATE powerState;
  PIO_STACK_LOCATION pIrpStack;
  NTSTATUS status;
  PDEVICE_EXTENSION Extension;
  BOOLEAN hookit;
  NTSTATUS status___0;
  NTSTATUS tmp;
  PIO_STACK_LOCATION irpSp;
  PIO_STACK_LOCATION nextIrpSp;
  PIO_STACK_LOCATION irpSp___0;
  {
    {
      status = 0L;
      hookit = 0;
      Extension = pDeviceObject->DeviceExtension;
      pIrpStack = pIrp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
      tmp = PptAcquireRemoveLock(&Extension->RemoveLock, pIrp);
      status___0 = tmp;
    }
    if (!(status___0 >= 0L))
    {
      {
        pIrp->IoStatus.__annonCompField4.Status = status___0;
        PptCompleteRequest(pIrp, 0);
      }
      return status___0;
    }
    else
    {
    }

    powerType = pIrpStack->Parameters.Power.Type;
    powerState = pIrpStack->Parameters.Power.State;
    if (pIrpStack->MinorFunction == 3)
    {
      goto switch_277_3;
    }
    else
    {
      if (pIrpStack->MinorFunction == 2)
      {
        goto switch_277_2;
      }
      else
      {
        {
          goto switch_277_default;
          if (0)
          {
            switch_277_3:
            status = 0L;

            goto switch_277_break;
            switch_277_2:
            ;

            {
            }
            if (powerType == 1)
            {
              goto switch_279_1;
            }
            else
            {
              if (powerType == 0)
              {
                goto switch_279_0;
              }
              else
              {
                if (0)
                {
                  switch_279_1:
                  ;

                  if (((int) Extension->DeviceState) < ((int) powerState.DeviceState))
                  {
                    {
                      PoSetPowerState(Extension->DeviceObject, powerType, powerState);
                    }
                    if (1 == ((int) Extension->DeviceState))
                    {
                    }
                    else
                    {
                    }

                    Extension->DeviceState = powerState.DeviceState;
                  }
                  else
                  {
                    if (((int) powerState.DeviceState) < ((int) Extension->DeviceState))
                    {
                      hookit = 1;
                      if (((int) ((KUSER_SHARED_DATA * const) 4292804608U)->AlternativeArchitecture) == 1)
                      {
                        {
                          InitNEC_98(Extension);
                        }
                      }
                      else
                      {
                      }

                    }
                    else
                    {
                    }

                  }

                  goto switch_279_break;
                  switch_279_0:
                  ;

                  if (((int) Extension->SystemState) < ((int) powerState.SystemState))
                  {
                    if (1 == ((int) Extension->SystemState))
                    {
                    }
                    else
                    {
                    }

                    {
                      powerState.DeviceState = 4;
                      PoRequestPowerIrp(Extension->DeviceObject, 2, powerState, (void *) 0, (void *) 0, (void *) 0);
                      Extension->SystemState = powerState.SystemState;
                    }
                  }
                  else
                  {
                    if (((int) powerState.SystemState) < ((int) Extension->SystemState))
                    {
                      hookit = 1;
                    }
                    else
                    {
                    }

                  }

                  goto switch_279_break;
                }
                else
                {
                  switch_279_break:
                  ;

                }

              }

            }

            goto switch_277_break;
            switch_277_default:
            status = -1073741637L;

          }
          else
          {
            switch_277_break:
            ;

          }

        }
      }

    }

    {
      irpSp = pIrp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
      nextIrpSp = pIrp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
      memcpy_guard(nextIrpSp, irpSp, (long) (&((IO_STACK_LOCATION *) 0)->CompletionRoutine));
      memmove(nextIrpSp, irpSp, (long) (&((IO_STACK_LOCATION *) 0)->CompletionRoutine));
      nextIrpSp->Control = 0;
    }
    if (!(status >= 0L))
    {
      {
        pIrp->IoStatus.__annonCompField4.Status = status;
        PptCompleteRequest(pIrp, 0);
      }
    }
    else
    {
      if (hookit)
      {
        if (s != NP)
        {
          {
            errorFn();
          }
        }
        else
        {
          if (compRegistered != 0)
          {
            {
              errorFn();
            }
          }
          else
          {
            compRegistered = 1;
            compFptr = &PptPowerComplete;
            routine = 1;
          }

        }

        {
          irpSp___0 = pIrp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
          irpSp___0->CompletionRoutine = &PptPowerComplete;
          irpSp___0->Context = Extension;
          irpSp___0->Control = 0;
          irpSp___0->Control = 64;
          irpSp___0->Control = ((int) irpSp___0->Control) | 128;
          irpSp___0->Control = ((int) irpSp___0->Control) | 32;
          status = PoCallDriver(Extension->ParentDeviceObject, pIrp);
        }
      }
      else
      {
        {
          status = PoCallDriver(Extension->ParentDeviceObject, pIrp);
        }
      }

    }

    {
      PptReleaseRemoveLock(&Extension->RemoveLock, pIrp);
    }
    return status;
  }
}

#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4035)
#pragma warning(push)
#pragma warning(disable:4164)
#pragma function(_enable)
#pragma function(_disable)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4200)
#pragma warning(default:4200)
static UCHAR LegacyZipModeQualifier___11[3] = {0, 60, 32};
void PptLegacyZipClockDiskModeByte(PUCHAR Controller, UCHAR ModeByte)
{
  {
    {
      WRITE_PORT_UCHAR(Controller, ModeByte);
      WRITE_PORT_UCHAR(Controller + 2, (unsigned char) 4);
      WRITE_PORT_UCHAR(Controller + 2, (unsigned char) 6);
      WRITE_PORT_UCHAR(Controller + 2, (unsigned char) 4);
      WRITE_PORT_UCHAR(Controller + 2, (unsigned char) 12);
    }
    return;
  }
}

void PptLegacyZipClockPrtModeByte(PUCHAR Controller, UCHAR ModeByte)
{
  {
    {
      WRITE_PORT_UCHAR(Controller, ModeByte);
      WRITE_PORT_UCHAR(Controller + 2, (unsigned char) 12);
      WRITE_PORT_UCHAR(Controller + 2, (unsigned char) 14);
      WRITE_PORT_UCHAR(Controller + 2, (unsigned char) 12);
      WRITE_PORT_UCHAR(Controller + 2, (unsigned char) 4);
      WRITE_PORT_UCHAR(Controller + 2, (unsigned char) 12);
    }
    return;
  }
}

void PptLegacyZipSetDiskMode(PUCHAR Controller, UCHAR Mode)
{
  ULONG i = __VERIFIER_nondet_long("i");
  assume_abort_if_not(i < 3);
  {
    {
      PptLegacyZipClockDiskModeByte(Controller, LegacyZipModeQualifier___11[i]);
      PptLegacyZipClockDiskModeByte(Controller, Mode);
    }
    return;
  }
}

BOOLEAN PptLegacyZipCheckDevice(PUCHAR Controller)
{
  UCHAR tmp;
  UCHAR tmp___0;
  {
    {
      WRITE_PORT_UCHAR(Controller + 2, (unsigned char) 6);
      tmp___0 = READ_PORT_UCHAR(Controller + 1);
    }
    if ((((int) tmp___0) & 8) == 8)
    {
      {
        WRITE_PORT_UCHAR(Controller + 2, (unsigned char) 4);
        tmp = READ_PORT_UCHAR(Controller + 1);
      }
      if ((((int) tmp) & 8) != 8)
      {
        return 1;
      }
      else
      {
      }

    }
    else
    {
    }

    return 0;
  }
}

NTSTATUS PptTrySelectLegacyZip(PVOID Context, PVOID TrySelectCommand)
{
  PDEVICE_EXTENSION Extension;
  PPARALLEL_1284_COMMAND Command;
  NTSTATUS Status;
  PUCHAR Controller;
  SYNCHRONIZED_COUNT_CONTEXT SyncContext;
  KIRQL CancelIrql;
  BOOLEAN tmp;
  {
    Extension = Context;
    Command = TrySelectCommand;
    Status = 0L;
    Controller = Extension->PortInfo.Controller;
    {
    }
    if (!(Command->CommandFlags & 2UL))
    {
      {
      }
      {
        SyncContext.Count = &Extension->WorkQueueCount;
      }
      if (Extension->InterruptRefCount)
      {
        {
          KeSynchronizeExecution(Extension->InterruptObject, &PptSynchronizedIncrement, &SyncContext);
        }
      }
      else
      {
        {
          PptSynchronizedIncrement(&SyncContext);
        }
      }

      if (SyncContext.NewCount)
      {
        Status = 259L;
      }
      else
      {
      }

      {
      }
    }
    else
    {
    }

    if (Status >= 0L)
    {
      if (Status != 259L)
      {
        if (Command->CommandFlags & 32UL)
        {
          {
            PptLegacyZipSetDiskMode(Controller, (unsigned char) 207);
          }
        }
        else
        {
          {
            PptLegacyZipSetDiskMode(Controller, (unsigned char) 143);
          }
        }

        {
          tmp = PptLegacyZipCheckDevice(Controller);
        }
        if (tmp)
        {
          {
          }
          if (!Extension->CheckedForGenericEpp)
          {
            if (Extension->PnpInfo.HardwareCapabilities & 1UL)
            {
              if (!Extension->NationalChipFound)
              {
                {
                  PptDetectEppPort(Extension);
                }
              }
              else
              {
              }

            }
            else
            {
            }

            Extension->CheckedForGenericEpp = 1;
          }
          else
          {
          }

        }
        else
        {
          {
          }
          {
            PptDeselectLegacyZip(Context, TrySelectCommand);
            Status = -1073741823L;
          }
        }

      }
      else
      {
      }

    }
    else
    {
    }

    return Status;
  }
}

NTSTATUS PptDeselectLegacyZip(PVOID Context, PVOID DeselectCommand)
{
  ULONG i = __VERIFIER_nondet_long("i");
  assume_abort_if_not(i < 3);
  PDEVICE_EXTENSION Extension;
  PUCHAR Controller;
  PPARALLEL_1284_COMMAND Command;
  {
    Extension = Context;
    Controller = Extension->PortInfo.Controller;
    Command = DeselectCommand;
    {
    }
    {
      PptLegacyZipClockPrtModeByte(Controller, LegacyZipModeQualifier___11[i]);
      PptLegacyZipClockPrtModeByte(Controller, (unsigned char) 15);
    }
    if (!(Command->CommandFlags & 2UL))
    {
      {
        PptFreePort(Extension);
      }
    }
    else
    {
    }

    return 0L;
  }
}

#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4035)
#pragma warning(push)
#pragma warning(disable:4164)
#pragma function(_enable)
#pragma function(_disable)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4200)
#pragma warning(default:4200)
void PptRegInitDriverSettings(PUNICODE_STRING RegistryPath___0)
{
  NTSTATUS Status;
  RTL_QUERY_REGISTRY_TABLE paramTable[3];
  PWSTR path;
  ULONG defaultDebugLevel;
  ULONG defaultBreakOn;
  PVOID tmp;
  {
    {
      defaultDebugLevel = 0UL;
      defaultBreakOn = 0UL;
      tmp = ExAllocatePoolWithTag(1, ((unsigned int) RegistryPath___0->Length) + (sizeof(WCHAR)), 1349673296UL);
      path = tmp;
    }
    if (!path)
    {
      PptDebugLevel = defaultDebugLevel;
      PptBreakOn = defaultBreakOn;
      return;
    }
    else
    {
    }

    {
      memmove(path, RegistryPath___0->Buffer, RegistryPath___0->Length);
      *(path + (((int) RegistryPath___0->Length) / 2)) = (unsigned short) 0;
      memset(paramTable, 0, sizeof(paramTable));
      paramTable[0].Flags = 32;
      paramTable[0].EntryContext = &PptDebugLevel;
      paramTable[0].DefaultType = 4;
      paramTable[0].DefaultData = &defaultDebugLevel;
      paramTable[0].DefaultLength = sizeof(ULONG);
      paramTable[1].Flags = 32;
      paramTable[1].EntryContext = &PptBreakOn;
      paramTable[1].DefaultType = 4;
      paramTable[1].DefaultData = &defaultBreakOn;
      paramTable[1].DefaultLength = sizeof(ULONG);
      Status = RtlQueryRegistryValues(2147483648U, path, paramTable, (void *) 0, (void *) 0);
    }
    if (!(Status >= 0L))
    {
      PptDebugLevel = defaultDebugLevel;
      PptBreakOn = defaultBreakOn;
    }
    else
    {
    }

    {
    }
    {
    }
    return;
  }
}

NTSTATUS PptRegGetDeviceParameterDword(PDEVICE_OBJECT Pdo, PWSTR ParameterName, PULONG ParameterValue)
{
  NTSTATUS status;
  HANDLE hKey;
  RTL_QUERY_REGISTRY_TABLE queryTable[2];
  ULONG defaultValue;
  {
    {
      status = IoOpenDeviceRegistryKey(Pdo, 1, 131097L, &hKey);
    }
    if (!(status >= 0L))
    {
      return status;
    }
    else
    {
    }

    {
      defaultValue = *ParameterValue;
      memset(&queryTable, 0, sizeof(queryTable));
      queryTable[0].Flags = 32;
      queryTable[0].Name = ParameterName;
      queryTable[0].EntryContext = ParameterValue;
      queryTable[0].DefaultType = 4;
      queryTable[0].DefaultData = &defaultValue;
      queryTable[0].DefaultLength = sizeof(ULONG);
      status = RtlQueryRegistryValues(1073741824, hKey, queryTable, (void *) 0, (void *) 0);
    }
    if (!(status >= 0L))
    {
      *ParameterValue = defaultValue;
    }
    else
    {
    }

    {
      ZwClose(hKey);
    }
    return status;
  }
}

NTSTATUS PptRegSetDeviceParameterDword(PDEVICE_OBJECT Pdo, PWSTR ParameterName, PULONG ParameterValue)
{
  NTSTATUS status;
  HANDLE hKey;
  UNICODE_STRING valueName;
  {
    {
      status = IoOpenDeviceRegistryKey(Pdo, 1, 131078L, &hKey);
    }
    if (!(status >= 0L))
    {
      {
      }
      return status;
    }
    else
    {
    }

    {
      status = ZwSetValueKey(hKey, &valueName, 0, 4, ParameterValue, sizeof(ULONG));
    }
    if (!(status >= 0L))
    {
      {
      }
    }
    else
    {
    }

    {
      ZwClose(hKey);
    }
    return status;
  }
}

#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4035)
#pragma warning(push)
#pragma warning(disable:4164)
#pragma function(_enable)
#pragma function(_disable)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4200)
#pragma warning(default:4200)
NTSTATUS PptFailRequest(PIRP Irp, NTSTATUS Status)
{
  {
    {
      Irp->IoStatus.__annonCompField4.Status = Status;
      myStatus = Status;
      Irp->IoStatus.Information = 0;
      PptCompleteRequest(Irp, 0);
    }
    return Status;
  }
}

NTSTATUS PptAcquireRemoveLockOrFailIrp(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PDEVICE_EXTENSION extension;
  PIO_REMOVE_LOCK removeLock;
  NTSTATUS status;
  NTSTATUS tmp;
  {
    {
      extension = DeviceObject->DeviceExtension;
      removeLock = &extension->RemoveLock;
      tmp = IoAcquireRemoveLockEx(removeLock, Irp, "util.c", 33, sizeof(IO_REMOVE_LOCK));
      status = tmp;
    }
    if (!(status >= 0L))
    {
      {
        PptFailRequest(Irp, status);
      }
    }
    else
    {
    }

    return status;
  }
}

NTSTATUS PptDispatchPreProcessIrp(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PDEVICE_EXTENSION Extension;
  NTSTATUS status;
  NTSTATUS tmp;
  {
    {
      Extension = DeviceObject->DeviceExtension;
      tmp = PptAcquireRemoveLock(&Extension->RemoveLock, Irp);
      status = tmp;
    }
    if (!(status >= 0L))
    {
      {
        Irp->IoStatus.Information = 0;
        Irp->IoStatus.__annonCompField4.Status = status;
        myStatus = status;
        PptCompleteRequest(Irp, 0);
      }
    }
    else
    {
    }

    return status;
  }
}

NTSTATUS PptDispatchPostProcessIrp(void)
{
  {
    return 0L;
  }
}

NTSTATUS PptSynchCompletionRoutine(PDEVICE_OBJECT DeviceObject, PIRP Irp, PKEVENT Event)
{
  {
    {
      KeSetEvent(Event, 0, 0);
    }
    return -1073741802L;
  }
}

PWSTR PptGetPortNameFromPhysicalDeviceObject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  NTSTATUS status;
  HANDLE hKey;
  PKEY_VALUE_FULL_INFORMATION buffer;
  ULONG bufferLength;
  ULONG resultLength;
  PWSTR valueNameWstr;
  UNICODE_STRING valueName;
  PWSTR portName;
  PVOID tmp;
  PVOID tmp___0;
  {
    {
    }
    {
      status = IoOpenDeviceRegistryKey(PhysicalDeviceObject, 1, 2031616L, &hKey);
    }
    if (!(status >= 0L))
    {
      {
      }
      return (void *) 0;
    }
    else
    {
    }

    {
      bufferLength = 0;
      buffer = (void *) 0;
      status = -1073741789L;
    }
    {
      while (1)
      {
        while_290_continue:
        ;

        if (status == (-1073741789L))
        {
        }
        else
        {
          goto while_290_break;
        }

        {
          status = ZwQueryValueKey(hKey, &valueName, 1, buffer, bufferLength, &resultLength);
        }
        if (status == (-1073741789L))
        {
          if (buffer)
          {
            {
            }
          }
          else
          {
          }

          {
            tmp = ExAllocatePoolWithTag(1, resultLength, 1349673296UL);
            buffer = tmp;
            bufferLength = resultLength;
          }
          if (!buffer)
          {
            {
            }
            {
              ZwClose(hKey);
            }
            return (void *) 0;
          }
          else
          {
          }

        }
        else
        {
        }

      }

      while_290_break:
      ;

    }
    {
      ZwClose(hKey);
    }
    if (!(status >= 0L))
    {
      if (buffer)
      {
        {
        }
      }
      else
      {
      }

      {
      }
      return (void *) 0;
    }
    else
    {
    }

    if (buffer->Type != 1UL)
    {
      goto _L;
    }
    else
    {
      if (!buffer->DataLength)
      {
        _L:
        {
        }

        {
        }
        return (void *) 0;
      }
      else
      {
      }

    }

    {
      tmp___0 = ExAllocatePoolWithTag(1, buffer->DataLength, 1349673296UL);
      portName = tmp___0;
    }
    if (!portName)
    {
      {
      }
      {
      }
      return (void *) 0;
    }
    else
    {
    }

    {
      memcpy_guard(portName, ((UCHAR *) buffer) + buffer->DataOffset, buffer->DataLength);
      memcpy(portName, ((UCHAR *) buffer) + buffer->DataOffset, buffer->DataLength);
    }
    return portName;
  }
}

NTSTATUS PptConnectInterrupt(PDEVICE_EXTENSION Extension)
{
  NTSTATUS Status;
  {
    Status = 0L;
    if (!Extension->FoundInterrupt)
    {
      return -1073741637L;
    }
    else
    {
    }

    {
      Status = IoConnectInterrupt(&Extension->InterruptObject, &PptInterruptService, Extension, (void *) 0, Extension->InterruptVector, Extension->InterruptLevel, Extension->InterruptLevel, Extension->InterruptMode, 1, Extension->InterruptAffinity, 0);
    }
    if (!(Status >= 0L))
    {
      {
        PptLogError(Extension->DeviceObject->DriverObject, Extension->DeviceObject, Extension->PortInfo.OriginalController, PhysicalZero, 0, 0, 0, 14, Status, 20);
      }
      {
      }
    }
    else
    {
    }

    return Status;
  }
}

void PptDisconnectInterrupt(PDEVICE_EXTENSION Extension)
{
  {
    {
    }
    return;
  }
}

BOOLEAN PptSynchronizedIncrement(PVOID SyncContext)
{
  {
    *((struct _SYNCHRONIZED_COUNT_CONTEXT *) SyncContext)->Count += 1L;
    ((struct _SYNCHRONIZED_COUNT_CONTEXT *) SyncContext)->NewCount = *((struct _SYNCHRONIZED_COUNT_CONTEXT *) SyncContext)->Count;
    return 1;
  }
}

BOOLEAN PptSynchronizedDecrement(PVOID SyncContext)
{
  {
    *((struct _SYNCHRONIZED_COUNT_CONTEXT *) SyncContext)->Count -= 1L;
    ((struct _SYNCHRONIZED_COUNT_CONTEXT *) SyncContext)->NewCount = *((struct _SYNCHRONIZED_COUNT_CONTEXT *) SyncContext)->Count;
    return 1;
  }
}

BOOLEAN PptSynchronizedRead(PVOID SyncContext)
{
  {
    ((struct _SYNCHRONIZED_COUNT_CONTEXT *) SyncContext)->NewCount = *((struct _SYNCHRONIZED_COUNT_CONTEXT *) SyncContext)->Count;
    return 1;
  }
}

BOOLEAN PptSynchronizedQueue(PVOID Context)
{
  PSYNCHRONIZED_LIST_CONTEXT ListContext;
  PLIST_ENTRY _EX_Blink;
  PLIST_ENTRY _EX_ListHead;
  {
    ListContext = Context;
    _EX_ListHead = ListContext->List;
    _EX_Blink = _EX_ListHead->Blink;
    ListContext->NewEntry->Flink = _EX_ListHead;
    ListContext->NewEntry->Blink = _EX_Blink;
    _EX_Blink->Flink = ListContext->NewEntry;
    _EX_ListHead->Blink = ListContext->NewEntry;
    return 1;
  }
}

BOOLEAN PptSynchronizedDisconnect(PVOID Context)
{
  PSYNCHRONIZED_DISCONNECT_CONTEXT DisconnectContext;
  BOOLEAN (*ServiceRoutine)(struct _KINTERRUPT *Interrupt, PVOID ServiceContext);
  PVOID ServiceContext;
  PLIST_ENTRY Current;
  PISR_LIST_ENTRY ListEntry;
  PLIST_ENTRY _EX_Blink;
  PLIST_ENTRY _EX_Flink;
  {
    DisconnectContext = Context;
    ServiceRoutine = DisconnectContext->IsrInfo->InterruptServiceRoutine;
    ServiceContext = DisconnectContext->IsrInfo->InterruptServiceContext;
    Current = DisconnectContext->Extension->IsrList.Flink;
    {
      while (1)
      {
        while_296_continue:
        ;

        if (((unsigned int) Current) != ((unsigned int) (&DisconnectContext->Extension->IsrList)))
        {
        }
        else
        {
          goto while_296_break;
        }

        ListEntry = (ISR_LIST_ENTRY *) (((CHAR *) Current) - ((unsigned long) (&((ISR_LIST_ENTRY *) 0)->ListEntry)));
        if (((unsigned int) ListEntry->ServiceRoutine) == ((unsigned int) ServiceRoutine))
        {
          if (((unsigned int) ListEntry->ServiceContext) == ((unsigned int) ServiceContext))
          {
            _EX_Flink = Current->Flink;
            _EX_Blink = Current->Blink;
            _EX_Blink->Flink = _EX_Flink;
            _EX_Flink->Blink = _EX_Blink;
            return 1;
          }
          else
          {
          }

        }
        else
        {
        }

        Current = Current->Flink;
      }

      while_296_break:
      ;

    }
    return 0;
  }
}

void PptCancelRoutine(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PDEVICE_EXTENSION Extension;
  SYNCHRONIZED_COUNT_CONTEXT SyncContext;
  PLIST_ENTRY _EX_Blink;
  PLIST_ENTRY _EX_Flink;
  {
    {
    }
    Extension = DeviceObject->DeviceExtension;
    SyncContext.Count = &Extension->WorkQueueCount;
    if (Extension->InterruptRefCount)
    {
      {
        KeSynchronizeExecution(Extension->InterruptObject, &PptSynchronizedDecrement, &SyncContext);
      }
    }
    else
    {
      {
        PptSynchronizedDecrement(&SyncContext);
      }
    }

    {
      _EX_Flink = Irp->Tail.Overlay.__annonCompField17.ListEntry.Flink;
      _EX_Blink = Irp->Tail.Overlay.__annonCompField17.ListEntry.Blink;
      _EX_Blink->Flink = _EX_Flink;
      _EX_Flink->Blink = _EX_Blink;
      Irp->IoStatus.Information = 0;
      Irp->IoStatus.__annonCompField4.Status = -1073741536L;
      myStatus = -1073741536L;
      PptReleaseRemoveLock(&Extension->RemoveLock, Irp);
      PptCompleteRequest(Irp, 0);
    }
    return;
  }
}

void PptFreePortDpc(PKDPC Dpc, PVOID Extension, PVOID SystemArgument1, PVOID SystemArgument2)
{
  {
    {
      PptFreePort(Extension);
    }
    return;
  }
}

BOOLEAN PptTryAllocatePortAtInterruptLevel(PVOID Context)
{
  {
    if (((struct _DEVICE_EXTENSION *) Context)->WorkQueueCount == (-1L))
    {
      ((struct _DEVICE_EXTENSION *) Context)->WorkQueueCount = 0;
      ((struct _DEVICE_EXTENSION *) Context)->WmiPortAllocFreeCounts.PortAllocates += 1UL;
      return 1;
    }
    else
    {
      return 0;
    }

  }
}

void PptFreePortFromInterruptLevel(PVOID Context)
{
  {
    if (((struct _DEVICE_EXTENSION *) Context)->WorkQueueCount == 0L)
    {
      ((struct _DEVICE_EXTENSION *) Context)->WorkQueueCount = -1;
    }
    else
    {
      {
        KeInsertQueueDpc(&((struct _DEVICE_EXTENSION *) Context)->FreePortDpc, (void *) 0, (void *) 0);
      }
    }

    return;
  }
}

BOOLEAN PptInterruptService(PKINTERRUPT Interrupt, PVOID Extension)
{
  PLIST_ENTRY Current;
  PISR_LIST_ENTRY IsrListEntry;
  PDEVICE_EXTENSION DeviceExtension;
  BOOLEAN tmp;
  {
    DeviceExtension = Extension;
    Current = DeviceExtension->IsrList.Flink;
    {
      while (1)
      {
        while_298_continue:
        ;

        if (((unsigned int) Current) != ((unsigned int) (&DeviceExtension->IsrList)))
        {
        }
        else
        {
          goto while_298_break;
        }

        {
          IsrListEntry = (ISR_LIST_ENTRY *) (((CHAR *) Current) - ((unsigned long) (&((ISR_LIST_ENTRY *) 0)->ListEntry)));
          tmp = (*IsrListEntry->ServiceRoutine)(Interrupt, IsrListEntry->ServiceContext);
        }
        if (tmp)
        {
          return 1;
        }
        else
        {
        }

        Current = Current->Flink;
      }

      while_298_break:
      ;

    }
    return 0;
  }
}

BOOLEAN PptTryAllocatePort(PVOID Extension)
{
  PDEVICE_EXTENSION DeviceExtension;
  KIRQL CancelIrql;
  BOOLEAN b;
  {
    DeviceExtension = Extension;
    if (DeviceExtension->InterruptRefCount)
    {
      {
        b = KeSynchronizeExecution(DeviceExtension->InterruptObject, &PptTryAllocatePortAtInterruptLevel, DeviceExtension);
      }
    }
    else
    {
      {
        b = PptTryAllocatePortAtInterruptLevel(DeviceExtension);
      }
    }

    {
    }
    return b;
  }
}

BOOLEAN PptTraversePortCheckList(PVOID Extension)
{
  PDEVICE_EXTENSION DeviceExtension;
  PLIST_ENTRY Current;
  PISR_LIST_ENTRY CheckEntry;
  {
    DeviceExtension = Extension;
    if (DeviceExtension->WorkQueueCount >= 0L)
    {
      return 0;
    }
    else
    {
    }

    Current = DeviceExtension->IsrList.Flink;
    {
      while (1)
      {
        while_300_continue:
        ;

        if (((unsigned int) Current) != ((unsigned int) (&DeviceExtension->IsrList)))
        {
        }
        else
        {
          goto while_300_break;
        }

        CheckEntry = (ISR_LIST_ENTRY *) (((CHAR *) Current) - ((unsigned long) (&((ISR_LIST_ENTRY *) 0)->ListEntry)));
        if (CheckEntry->DeferredPortCheckRoutine)
        {
          {
            (*CheckEntry->DeferredPortCheckRoutine)(CheckEntry->CheckContext);
          }
        }
        else
        {
        }

        Current = Current->Flink;
      }

      while_300_break:
      ;

    }
    return 1;
  }
}

void PptFreePort(PVOID Extension)
{
  PDEVICE_EXTENSION DeviceExtension;
  SYNCHRONIZED_COUNT_CONTEXT SyncContext;
  KIRQL CancelIrql;
  ULONG InterruptRefCount;
  BOOLEAN Allocated;
  {
    DeviceExtension = Extension;
    {
    }
    {
      SyncContext.Count = &DeviceExtension->WorkQueueCount;
    }
    if (DeviceExtension->InterruptRefCount)
    {
      {
        KeSynchronizeExecution(DeviceExtension->InterruptObject, &PptSynchronizedDecrement, &SyncContext);
      }
    }
    else
    {
      {
        PptSynchronizedDecrement(&SyncContext);
      }
    }

    {
      DeviceExtension->WmiPortAllocFreeCounts.PortFrees += 1UL;
      Allocated = 0;
    }
    {
      while (1)
      {
        while_302_continue:
        ;

        if (!Allocated)
        {
          if (SyncContext.NewCount >= 0L)
          {
          }
          else
          {
            goto while_302_break;
          }

        }
        else
        {
          goto while_302_break;
        }

      }

      while_302_break:
      ;

    }
    if (!Allocated)
    {
      {
        InterruptRefCount = DeviceExtension->InterruptRefCount;
      }
      if (InterruptRefCount)
      {
        {
          KeSynchronizeExecution(DeviceExtension->InterruptObject, &PptTraversePortCheckList, DeviceExtension);
        }
      }
      else
      {
      }

    }
    else
    {
    }

    return;
  }
}

ULONG PptQueryNumWaiters(PVOID Extension)
{
  PDEVICE_EXTENSION DeviceExtension;
  KIRQL CancelIrql;
  SYNCHRONIZED_COUNT_CONTEXT SyncContext;
  unsigned long tmp;
  {
    DeviceExtension = Extension;
    SyncContext.Count = &DeviceExtension->WorkQueueCount;
    if (DeviceExtension->InterruptRefCount)
    {
      {
        KeSynchronizeExecution(DeviceExtension->InterruptObject, &PptSynchronizedRead, &SyncContext);
      }
    }
    else
    {
      {
        PptSynchronizedRead(&SyncContext);
      }
    }

    if (SyncContext.NewCount >= 0L)
    {
      tmp = (unsigned long) SyncContext.NewCount;
    }
    else
    {
      tmp = 0;
    }

    return tmp;
  }
}

PVOID PptSetCancelRoutine(PIRP Irp, void (*CancelRoutine)(struct _DEVICE_OBJECT *DeviceObject, struct _IRP *Irp))
{
  LONG tmp;
  {
    {
      tmp = InterlockedExchange((LONG *) ((PVOID *) (&Irp->CancelRoutine)), (long) ((void *) CancelRoutine));
    }
    return (void (*)(struct _DEVICE_OBJECT *DeviceObject, struct _IRP *Irp)) ((void *) tmp);
  }
}

void KeQueryTickCount(LARGE_INTEGER *i);
void KeQueryTickCount(LARGE_INTEGER *i)
{
  (*i).u.LowPart = __VERIFIER_nondet_ulong("LowPart");
  (*i).u.HighPart = __VERIFIER_nondet_long("HighPart");
}

BOOLEAN CheckPort(PUCHAR wPortAddr, UCHAR bMask, UCHAR bValue, USHORT usTimeDelay)
{
  UCHAR dsr;
  LARGE_INTEGER Wait;
  LARGE_INTEGER Start;
  LARGE_INTEGER End;
  ULONG tmp;
  ULONG tmp___0;
  {
    {
      dsr = READ_PORT_UCHAR(wPortAddr);
    }
    if ((((int) dsr) & ((int) bMask)) == ((int) bValue))
    {
      return 1;
    }
    else
    {
    }

    {
      tmp = KeQueryTimeIncrement();
      Wait.QuadPart = ((ULONG) ((((int) usTimeDelay) * 10) * 10)) + tmp;
      KeQueryTickCount(&Start);
    }
    {
      while (1)
      {
        while_303_continue:
        ;

        {
          KeQueryTickCount(&End);
          dsr = READ_PORT_UCHAR(wPortAddr);
        }
        if ((((int) dsr) & ((int) bMask)) == ((int) bValue))
        {
          return 1;
        }
        else
        {
        }

        {
          tmp___0 = KeQueryTimeIncrement();
        }
        if (((End.QuadPart - Start.QuadPart) * ((LONGLONG) tmp___0)) > Wait.QuadPart)
        {
          goto CheckPort_TimeOut;
        }
        else
        {
        }

      }

      while_303_break:
      ;

    }
    CheckPort_TimeOut:
    return 0;

  }
}

NTSTATUS PptBuildParallelPortDeviceName(ULONG Number, PUNICODE_STRING DeviceName)
{
  UNICODE_STRING uniDeviceString;
  UNICODE_STRING uniBaseNameString;
  UNICODE_STRING uniPortNumberString;
  WCHAR wcPortNum[10];
  NTSTATUS status;
  PVOID tmp;
  {
    {
    }
    {
      uniPortNumberString.Length = 0;
      uniPortNumberString.MaximumLength = sizeof(wcPortNum);
      uniPortNumberString.Buffer = wcPortNum;
      status = RtlIntegerToUnicodeString(Number, 10, &uniPortNumberString);
    }
    if (!(status >= 0L))
    {
      {
      }
      return status;
    }
    else
    {
    }

    {
      DeviceName->MaximumLength = (unsigned short) (((unsigned int) ((((int) uniDeviceString.Length) + ((int) uniBaseNameString.Length)) + ((int) uniPortNumberString.Length))) + (sizeof((unsigned short) 0)));
      tmp = ExAllocatePoolWithTag(1, DeviceName->MaximumLength, 1349673296UL);
      DeviceName->Buffer = tmp;
    }
    if (((unsigned int) ((void *) 0)) == ((unsigned int) DeviceName->Buffer))
    {
      {
      }
      return -1073741670L;
    }
    else
    {
    }

    {
      memset(DeviceName->Buffer, 0, DeviceName->MaximumLength);
      RtlAppendUnicodeStringToString(DeviceName, &uniDeviceString);
      RtlAppendUnicodeStringToString(DeviceName, &uniBaseNameString);
      RtlAppendUnicodeStringToString(DeviceName, &uniPortNumberString);
    }
    return 0L;
  }
}

NTSTATUS PptInitializeDeviceExtension(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT PhysicalDeviceObject, PDEVICE_OBJECT DeviceObject, PUNICODE_STRING UniNameString, PWSTR PortName, ULONG PortNumber)
{
  PDEVICE_EXTENSION Extension;
  ULONG bufferLength;
  PVOID tmp;
  {
    {
      Extension = DeviceObject->DeviceExtension;
      memset(Extension, 0, sizeof(DEVICE_EXTENSION));
      Extension->ExtensionSignatureBegin = 2022144135;
      Extension->ExtensionSignatureEnd = 2272823160U;
      Extension->DriverObject = DriverObject;
      Extension->PhysicalDeviceObject = PhysicalDeviceObject;
      Extension->DeviceObject = DeviceObject;
      Extension->PnpInfo.PortNumber = PortNumber;
      IoInitializeRemoveLockEx(&Extension->RemoveLock, 1349673296UL, 1, 10, sizeof(IO_REMOVE_LOCK));
      Extension->OpenCloseMutex.Count = 1;
      Extension->OpenCloseMutex.Contention = 0;
      Extension->ExtensionFastMutex.Count = 1;
      Extension->ExtensionFastMutex.Contention = 0;
      Extension->NationalChipFound = 0;
      Extension->NationalChecked = 0;
      Extension->WorkQueue.Blink = &Extension->WorkQueue;
      Extension->WorkQueue.Flink = Extension->WorkQueue.Blink;
      Extension->WorkQueueCount = -1;
      Extension->PortInfo.FreePort = &PptFreePort;
      Extension->PortInfo.TryAllocatePort = &PptTryAllocatePort;
      Extension->PortInfo.QueryNumWaiters = &PptQueryNumWaiters;
      Extension->PortInfo.Context = Extension;
      Extension->PnpInfo.HardwareCapabilities = 0;
      Extension->PnpInfo.TrySetChipMode = &PptSetChipMode;
      Extension->PnpInfo.ClearChipMode = &PptClearChipMode;
      Extension->PnpInfo.TrySelectDevice = &PptTrySelectDevice;
      Extension->PnpInfo.DeselectDevice = &PptDeselectDevice;
      Extension->PnpInfo.Context = Extension;
      Extension->PnpInfo.PortName = PortName;
      Extension->RemovalRelationsList.Blink = &Extension->RemovalRelationsList;
      Extension->RemovalRelationsList.Flink = Extension->RemovalRelationsList.Blink;
      Extension->IsrList.Blink = &Extension->IsrList;
      Extension->IsrList.Flink = Extension->IsrList.Blink;
      Extension->InterruptObject = (void *) 0;
      Extension->InterruptRefCount = 0;
      KeInitializeDpc(&Extension->FreePortDpc, &PptFreePortDpc, Extension);
      bufferLength = ((unsigned int) UniNameString->MaximumLength) + (sizeof((unsigned short) 0));
      tmp = ExAllocatePoolWithTag(0, bufferLength, 1349673296UL);
      Extension->DeviceName.Buffer = tmp;
    }
    if (!Extension->DeviceName.Buffer)
    {
      return -1073741670L;
    }
    else
    {
    }

    {
      memset(Extension->DeviceName.Buffer, 0, bufferLength);
      Extension->DeviceName.Length = 0;
      Extension->DeviceName.MaximumLength = UniNameString->MaximumLength;
      Extension->PnpInfo.CurrentMode = 0;
      Extension_FilterMode = 0;
    }
    return 0L;
  }
}

NTSTATUS PptGetPortNumberFromLptName(PWSTR PortName, PULONG PortNumber)
{
  NTSTATUS status;
  UNICODE_STRING str;
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  {
    if (__BLAST_NONDET)
    {
      {
      }
      return -1073741823L;
    }
    else
    {
    }

    {
      status = RtlUnicodeStringToInteger(&str, 10, PortNumber);
    }
    if (!(status >= 0L))
    {
      {
      }
      return -1073741823L;
    }
    else
    {
    }

    if ((*PortNumber) == 0UL)
    {
      {
      }
      return -1073741823L;
    }
    else
    {
    }

    {
    }
    return 0L;
  }
}

PDEVICE_OBJECT PptBuildDeviceObject(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT PhysicalDeviceObject)
{
  UNICODE_STRING uniNameString;
  ULONG portNumber;
  PWSTR portName;
  NTSTATUS status;
  PDEVICE_OBJECT deviceObject;
  {
    uniNameString.Length = 0;
    uniNameString.MaximumLength = 0;
    uniNameString.Buffer = 0;
    portNumber = 0;
    portName = (void *) 0;
    status = 0L;
    deviceObject = (void *) 0;
    {
    }
    {
      portName = PptGetPortNameFromPhysicalDeviceObject(PhysicalDeviceObject);
    }
    if (((unsigned int) ((void *) 0)) == ((unsigned int) portName))
    {
      {
      }
      goto targetExit;
    }
    else
    {
    }

    {
    }
    {
      status = PptGetPortNumberFromLptName(portName, &portNumber);
    }
    if (!(status >= 0L))
    {
      {
      }
      {
      }
      goto targetExit;
    }
    else
    {
    }

    portNumber -= 1UL;
    {
    }
    {
      status = PptBuildParallelPortDeviceName(portNumber, &uniNameString);
    }
    if (!(status >= 0L))
    {
      {
      }
      {
      }
      goto targetExit;
    }
    else
    {
    }

    {
    }
    {
      status = IoCreateDevice(DriverObject, sizeof(DEVICE_EXTENSION), &uniNameString, 22, 256, 0, &deviceObject);
    }
    if ((-1073741771L) == status)
    {
      {
      }
      portNumber = 7;
      {
        while (1)
        {
          while_319_continue:
          ;

          {
            portNumber += 1UL;
            status = PptBuildParallelPortDeviceName(portNumber, &uniNameString);
          }
          if (!(status >= 0L))
          {
            {
            }
            {
            }
            goto targetExit;
          }
          else
          {
          }

          {
          }
          {
            status = IoCreateDevice(DriverObject, sizeof(DEVICE_EXTENSION), &uniNameString, 22, 256, 0, &deviceObject);
          }
          if ((-1073741771L) == status)
          {
          }
          else
          {
            goto while_319_break;
          }

        }

        while_319_break:
        ;

      }
    }
    else
    {
    }

    if (!(status >= 0L))
    {
      {
      }
      {
        deviceObject = (void *) 0;
      }
      goto targetExit;
    }
    else
    {
    }

    {
      status = PptInitializeDeviceExtension(DriverObject, PhysicalDeviceObject, deviceObject, &uniNameString, portName, portNumber);
    }
    if (!(status >= 0L))
    {
      {
      }
      {
        deviceObject = (void *) 0;
      }
      goto targetExit;
    }
    else
    {
    }

    if (PhysicalDeviceObject->Flags & 8192UL)
    {
      deviceObject->Flags |= 8192UL;
    }
    else
    {
    }

    {
    }
    targetExit:
    {
    }

    return deviceObject;
  }
}

#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4035)
#pragma warning(push)
#pragma warning(disable:4164)
#pragma function(_enable)
#pragma function(_disable)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4200)
#pragma warning(default:4200)
#pragma warning(disable:4200)
NTSTATUS PptWmiQueryWmiRegInfo(PDEVICE_OBJECT PDevObj, PULONG PRegFlags, PUNICODE_STRING PInstanceName, PUNICODE_STRING *PRegistryPath, PUNICODE_STRING MofResourceName, PDEVICE_OBJECT *Pdo);
NTSTATUS PptWmiQueryWmiDataBlock(PDEVICE_OBJECT DeviceObject, PIRP Irp, ULONG GuidIndex, ULONG InstanceIndex, ULONG InstanceCount, PULONG InstanceLengthArray, ULONG OutBufferSize, PUCHAR Buffer);
#pragma alloc_text(PAGEPARWMI0,PptWmiInitWmi)
#pragma alloc_text(PAGEPARWMI0,PptDispatchSystemControl)
#pragma alloc_text(PAGEPARWMI0,PptWmiQueryWmiRegInfo)
#pragma alloc_text(PAGEPARWMI0,PptWmiQueryWmiDataBlock)
GUID PptWmiAllocFreeCountsGuid = {1270573546, 26707, 4562, {142, 206, 0, 192, 79, 142, 244, 129}};
WMIGUIDREGINFO PptWmiGuidList[1] = {{&PptWmiAllocFreeCountsGuid, 1, 0}};
NTSTATUS PptWmiInitWmi(PDEVICE_OBJECT DeviceObject)
{
  PDEVICE_EXTENSION devExt;
  PWMILIB_CONTEXT wmiContext;
  NTSTATUS tmp;
  {
    {
      devExt = DeviceObject->DeviceExtension;
      wmiContext = &devExt->WmiLibContext;
      wmiContext->GuidCount = (sizeof(PptWmiGuidList)) / (sizeof(WMIGUIDREGINFO));
      wmiContext->GuidList = PptWmiGuidList;
      wmiContext->QueryWmiRegInfo = &PptWmiQueryWmiRegInfo;
      wmiContext->QueryWmiDataBlock = &PptWmiQueryWmiDataBlock;
      wmiContext->SetWmiDataBlock = (void *) 0;
      wmiContext->SetWmiDataItem = (void *) 0;
      wmiContext->ExecuteWmiMethod = (void *) 0;
      wmiContext->WmiFunctionControl = (void *) 0;
      tmp = IoWMIRegistrationControl(DeviceObject, 1);
    }
    return tmp;
  }
}

NTSTATUS PptDispatchSystemControl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  SYSCTL_IRP_DISPOSITION disposition;
  NTSTATUS status;
  PDEVICE_EXTENSION pDevExt;
  {
    {
      pDevExt = (struct _DEVICE_EXTENSION *) DeviceObject->DeviceExtension;
      status = WmiSystemControl(&pDevExt->WmiLibContext, DeviceObject, Irp, &disposition);
    }
    if (disposition == 0)
    {
      goto switch_325_0;
    }
    else
    {
      if (disposition == 1)
      {
        goto switch_325_1;
      }
      else
      {
        if (disposition == 3)
        {
          goto switch_325_3;
        }
        else
        {
          if (disposition == 2)
          {
            goto switch_325_2;
          }
          else
          {
            {
              goto switch_325_default;
              if (0)
              {
                switch_325_0:
                s = DC;

                goto switch_325_break;
                switch_325_1:
                {
                  PptCompleteRequest(Irp, 0);
                }

                goto switch_325_break;
                switch_325_3:
                ;

                switch_325_2:
                ;

                if (s == NP)
                {
                  s = SKIP1;
                }
                else
                {
                  {
                    errorFn();
                  }
                }

                {
                  Irp->CurrentLocation = (CHAR) (((int) Irp->CurrentLocation) + 1);
                  Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation += 1;
                  status = IofCallDriver(pDevExt->ParentDeviceObject, Irp);
                }
                goto switch_325_break;
                switch_325_default:
                ;

                if (s == NP)
                {
                  s = SKIP1;
                }
                else
                {
                  {
                    errorFn();
                  }
                }

                {
                  Irp->CurrentLocation = (CHAR) (((int) Irp->CurrentLocation) + 1);
                  Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation += 1;
                  status = IofCallDriver(pDevExt->ParentDeviceObject, Irp);
                }
                goto switch_325_break;
              }
              else
              {
                switch_325_break:
                ;

              }

            }
          }

        }

      }

    }

    return status;
  }
}

NTSTATUS PptWmiQueryWmiRegInfo(PDEVICE_OBJECT PDevObj, PULONG PRegFlags, PUNICODE_STRING PInstanceName, PUNICODE_STRING *PRegistryPath, PUNICODE_STRING MofResourceName, PDEVICE_OBJECT *Pdo)
{
  PDEVICE_EXTENSION devExt;
  {
    devExt = PDevObj->DeviceExtension;
    {
    }
    *PRegFlags = 32;
    *PRegistryPath = &RegistryPath;
    *Pdo = devExt->PhysicalDeviceObject;
    return 0L;
  }
}

NTSTATUS PptWmiQueryWmiDataBlock(PDEVICE_OBJECT DeviceObject, PIRP Irp, ULONG GuidIndex, ULONG InstanceIndex, ULONG InstanceCount, PULONG InstanceLengthArray, ULONG OutBufferSize, PUCHAR Buffer)
{
  NTSTATUS status;
  ULONG size;
  PDEVICE_EXTENSION devExt;
  {
    size = sizeof(PARPORT_WMI_ALLOC_FREE_COUNTS);
    devExt = DeviceObject->DeviceExtension;
    if (GuidIndex == 0)
    {
      goto switch_327_0;
    }
    else
    {
      {
        goto switch_327_default;
        if (0)
        {
          switch_327_0:
          ;

          if (OutBufferSize < size)
          {
            status = -1073741789L;
            goto switch_327_break;
          }
          else
          {
          }

          *((struct _PARPORT_WMI_ALLOC_FREE_COUNTS *) Buffer) = devExt->WmiPortAllocFreeCounts;
          *InstanceLengthArray = size;
          status = 0L;
          goto switch_327_break;
          switch_327_default:
          status = -1073741163L;

          goto switch_327_break;
        }
        else
        {
          switch_327_break:
          ;

        }

      }
    }

    {
      status = WmiCompleteRequest(DeviceObject, Irp, status, size, 0);
    }
    return status;
  }
}

#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
#pragma warning(disable:4035)
#pragma warning(push)
#pragma warning(disable:4164)
#pragma function(_enable)
#pragma function(_disable)
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4103)
#pragma warning(disable:4200)
#pragma warning(default:4200)
void _BLAST_init(void)
{
  {
    UNLOADED = 0;
    NP = 1;
    DC = 2;
    SKIP1 = 3;
    SKIP2 = 4;
    MPR1 = 5;
    MPR3 = 6;
    IPC = 7;
    s = UNLOADED;
    pended = 0;
    compFptr = 0;
    compRegistered = 0;
    lowerDriverReturn = 0;
    setEventCalled = 0;
    customIrp = 0;
    return;
  }
}

IRP *pirp;
void stub_driver_init(void)
{
  {
    s = NP;
    customIrp = 0;
    setEventCalled = customIrp;
    lowerDriverReturn = setEventCalled;
    compRegistered = lowerDriverReturn;
    compFptr = compRegistered;
    pended = compFptr;
    return;
  }
}

int main(void)
{
  DRIVER_OBJECT d;
  NTSTATUS status = __VERIFIER_nondet_long("status");
  int we_should_unload = __VERIFIER_nondet_int("we_should_unload");
  IRP irp;
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  int irp_choice = __VERIFIER_nondet_int("irp_choice");
  DEVICE_OBJECT devobj;
  d.DeviceObject = &devobj;
  struct _DEVICE_EXTENSION *e = malloc(sizeof(struct _DEVICE_EXTENSION));
  devobj.DeviceExtension = e;
  e->RemovalRelationsList.Flink = &e->RemovalRelationsList;
  e->RemovalRelationsList.Blink = &e->RemovalRelationsList;
  e->IsrList.Flink = &e->IsrList;
  e->IsrList.Blink = &e->IsrList;
  e->WorkQueue.Flink = &e->WorkQueue;
  e->WorkQueue.Blink = &e->WorkQueue;
  s = __VERIFIER_nondet_int("s");
  irp.Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation = malloc(4 * (sizeof(IO_STACK_LOCATION)));
  for (int i = 0; i < 4; ++i)
  {
    irp.Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation[i].Parameters.FilterResourceRequirements.IoResourceRequirementList = malloc(sizeof(struct _IO_RESOURCE_REQUIREMENTS_LIST));
    struct _CM_RESOURCE_LIST *l = malloc(sizeof(struct _CM_RESOURCE_LIST));
    l->Count = 1;
    l->List[0].PartialResourceList.Count = 1;
    irp.Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation[i].Parameters.StartDevice.AllocatedResourcesTranslated = l;
  }

  irp.Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation += 3;
  {
    {
      pirp = &irp;
      _BLAST_init();
    }
    if (status >= 0L)
    {
      s = NP;
      customIrp = 0;
      setEventCalled = customIrp;
      lowerDriverReturn = setEventCalled;
      compRegistered = lowerDriverReturn;
      compFptr = compRegistered;
      pended = compFptr;
      pirp->IoStatus.__annonCompField4.Status = 0L;
      myStatus = 0L;
      if (irp_choice == 0)
      {
        pirp->IoStatus.__annonCompField4.Status = -1073741637L;
        myStatus = -1073741637L;
      }
      else
      {
      }

      {
        stub_driver_init();
      }
      if (!(status >= 0L))
      {
        return -1;
      }
      else
      {
      }

      if (__BLAST_NONDET == 0)
      {
        goto switch_328_0;
      }
      else
      {
        if (__BLAST_NONDET == 1)
        {
          goto switch_328_1;
        }
        else
        {
          if (__BLAST_NONDET == 3)
          {
            goto switch_328_3;
          }
          else
          {
            if (__BLAST_NONDET == 4)
            {
              goto switch_328_4;
            }
            else
            {
              if (__BLAST_NONDET == 5)
              {
                goto switch_328_5;
              }
              else
              {
                if (__BLAST_NONDET == 6)
                {
                  goto switch_328_6;
                }
                else
                {
                  if (__BLAST_NONDET == 8)
                  {
                    goto switch_328_8;
                  }
                  else
                  {
                    if (__BLAST_NONDET == 11)
                    {
                      goto switch_328_11;
                    }
                    else
                    {
                      {
                        goto switch_328_default;
                        if (0)
                        {
                          switch_328_0:
                          {
                            status = PptDispatchCreate(&devobj, pirp);
                          }

                          goto switch_328_break;
                          switch_328_1:
                          {
                            status = PptDispatchClose(&devobj, pirp);
                          }

                          goto switch_328_break;
                          switch_328_3:
                          {
                            struct _IO_RESOURCE_REQUIREMENTS_LIST rl;
                            rl.List[0].Count = 1;
                            rl.AlternativeLists = 1;
                            pirp->IoStatus.Information = &rl;
                            status = PptDispatchPnp(&devobj, pirp);
                          }

                          goto switch_328_break;
                          switch_328_4:
                          {
                            status = PptDispatchPower(&devobj, pirp);
                          }

                          goto switch_328_break;
                          switch_328_5:
                          {
                            status = PptDispatchCleanup(&devobj, pirp);
                          }

                          goto switch_328_break;
                          switch_328_6:
                          {
                            status = PptDispatchSystemControl(&devobj, pirp);
                          }

                          goto switch_328_break;
                          switch_328_8:
                          {
                            status = PptDispatchInternalDeviceControl(&devobj, pirp);
                          }

                          goto switch_328_break;
                          switch_328_11:
                          {
                            status = PptDispatchCleanup(&devobj, pirp);
                          }

                          goto switch_328_break;
                          switch_328_default:
                          ;

                          return -1;
                        }
                        else
                        {
                          switch_328_break:
                          ;

                        }

                      }
                    }

                  }

                }

              }

            }

          }

        }

      }

      if (we_should_unload)
      {
        {
          PptUnload(&d);
        }
      }
      else
      {
      }

    }
    else
    {
    }

    if (pended == 1)
    {
      if (s == NP)
      {
        s = NP;
      }
      else
      {
        goto _L___2;
      }

    }
    else
    {
      _L___2:
      if (pended == 1)
      {
        if (s == MPR3)
        {
          s = MPR3;
        }
        else
        {
          goto _L___1;
        }

      }
      else
      {
        _L___1:
        if (s == UNLOADED)
        {
        }
        else
        {
          if (status == (-1L))
          {
          }
          else
          {
            if (s != SKIP2)
            {
              if (s != IPC)
              {
                if (s != DC)
                {
                  {
                    errorFn();
                  }
                }
                else
                {
                  goto _L___0;
                }

              }
              else
              {
                goto _L___0;
              }

            }
            else
            {
              _L___0:
              if (pended == 1)
              {
                if (status != 259L)
                {
                  {
                    errorFn();
                  }
                }
                else
                {
                }

              }
              else
              {
                if (s == DC)
                {
                  if (status == 259L)
                  {
                    {
                      errorFn();
                    }
                  }
                  else
                  {
                  }

                }
                else
                {
                  if (status != ((NTSTATUS) lowerDriverReturn))
                  {
                    {
                      errorFn();
                    }
                  }
                  else
                  {
                  }

                }

              }


            }

          }

        }


      }


    }

    return status;
  }
}

char _SLAM_alloc_dummy;
void ExAcquireFastMutex(PFAST_MUTEX FastMutex);
void ExAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  {
    return;
  }
}

void ExReleaseFastMutex(PFAST_MUTEX FastMutex);
void ExReleaseFastMutex(PFAST_MUTEX FastMutex)
{
  {
    return;
  }
}

PVOID ExAllocatePoolWithTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag);
PVOID ExAllocatePoolWithTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  PVOID x;
  char *tmp;
  {
    {
      tmp = malloc(NumberOfBytes);
      x = tmp;
    }
    return x;
  }
}

void ExFreePool(PVOID P);
void ExFreePool(PVOID P)
{
  {
    return;
  }
}

PLIST_ENTRY ExfInterlockedInsertHeadList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock);
PLIST_ENTRY ExfInterlockedInsertHeadList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  {
    return (void *) 0;
  }
}

PLIST_ENTRY ExfInterlockedInsertTailList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock);
PLIST_ENTRY ExfInterlockedInsertTailList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  {
    return (void *) 0;
  }
}

PLIST_ENTRY ExfInterlockedRemoveHeadList(PLIST_ENTRY ListHead, PKSPIN_LOCK Lock);
PLIST_ENTRY ExfInterlockedRemoveHeadList(PLIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  {
    return (void *) 0;
  }
}

PMDL IoAllocateMdl(PVOID VirtualAddress, ULONG Length, BOOLEAN SecondaryBuffer, BOOLEAN ChargeQuota, PIRP Irp);
PMDL IoAllocateMdl(PVOID VirtualAddress, ULONG Length, BOOLEAN SecondaryBuffer, BOOLEAN ChargeQuota, PIRP Irp)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  char *tmp;
  {
    if (__BLAST_NONDET == 0)
    {
      goto switch_329_0;
    }
    else
    {
      {
        goto switch_329_default;
        if (0)
        {
          switch_329_0:
          {
            tmp = malloc(sizeof(MDL));
          }

          return (void *) tmp;
          switch_329_default:
          ;

          return (void *) 0;
        }
        else
        {
          switch_329_break:
          ;

        }

      }
    }

  }
}

PDEVICE_OBJECT IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice);
PDEVICE_OBJECT IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  {
    if (__BLAST_NONDET == 0)
    {
      goto switch_330_0;
    }
    else
    {
      {
        goto switch_330_default;
        if (0)
        {
          switch_330_0:
          ;

          return TargetDevice;
          switch_330_default:
          ;

          return (void *) 0;
        }
        else
        {
          switch_330_break:
          ;

        }

      }
    }

  }
}

PIRP IoBuildAsynchronousFsdRequest(ULONG MajorFunction, PDEVICE_OBJECT DeviceObject, PVOID Buffer, ULONG Length, PLARGE_INTEGER StartingOffset, PIO_STATUS_BLOCK IoStatusBlock);
PIRP IoBuildAsynchronousFsdRequest(ULONG MajorFunction, PDEVICE_OBJECT DeviceObject, PVOID Buffer, ULONG Length, PLARGE_INTEGER StartingOffset, PIO_STATUS_BLOCK IoStatusBlock)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  char *tmp;
  {
    customIrp = 1;
    if (__BLAST_NONDET == 0)
    {
      goto switch_331_0;
    }
    else
    {
      {
        goto switch_331_default;
        if (0)
        {
          switch_331_0:
          {
            tmp = malloc(sizeof(IRP));
          }

          return (void *) tmp;
          switch_331_default:
          ;

          return (void *) 0;
        }
        else
        {
          switch_331_break:
          ;

        }

      }
    }

  }
}

PIRP IoBuildDeviceIoControlRequest(ULONG IoControlCode, PDEVICE_OBJECT DeviceObject, PVOID InputBuffer, ULONG InputBufferLength, PVOID OutputBuffer, ULONG OutputBufferLength, BOOLEAN InternalDeviceIoControl, PKEVENT Event, PIO_STATUS_BLOCK IoStatusBlock);
PIRP IoBuildDeviceIoControlRequest(ULONG IoControlCode, PDEVICE_OBJECT DeviceObject, PVOID InputBuffer, ULONG InputBufferLength, PVOID OutputBuffer, ULONG OutputBufferLength, BOOLEAN InternalDeviceIoControl, PKEVENT Event, PIO_STATUS_BLOCK IoStatusBlock)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  char *tmp;
  {
    customIrp = 1;
    if (__BLAST_NONDET == 0)
    {
      goto switch_332_0;
    }
    else
    {
      {
        goto switch_332_default;
        if (0)
        {
          switch_332_0:
          {
            tmp = malloc(sizeof(IRP));
          }

          return (void *) tmp;
          switch_332_default:
          ;

          return (void *) 0;
        }
        else
        {
          switch_332_break:
          ;

        }

      }
    }

  }
}

NTSTATUS IoCreateDevice(PDRIVER_OBJECT DriverObject, ULONG DeviceExtensionSize, PUNICODE_STRING DeviceName, ULONG DeviceType, ULONG DeviceCharacteristics, BOOLEAN Exclusive, PDEVICE_OBJECT *DeviceObject);
NTSTATUS IoCreateDevice(PDRIVER_OBJECT DriverObject, ULONG DeviceExtensionSize, PUNICODE_STRING DeviceName, ULONG DeviceType, ULONG DeviceCharacteristics, BOOLEAN Exclusive, PDEVICE_OBJECT *DeviceObject)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  char *tmp;
  {
    if (__BLAST_NONDET == 0)
    {
      goto switch_333_0;
    }
    else
    {
      {
        goto switch_333_default;
        if (0)
        {
          switch_333_0:
          {
            tmp = malloc(sizeof(DEVICE_OBJECT));
            *DeviceObject = (void *) tmp;
          }

          return 0L;
          switch_333_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_333_break:
          ;

        }

      }
    }

  }
}

NTSTATUS IoCreateSymbolicLink(PUNICODE_STRING SymbolicLinkName, PUNICODE_STRING DeviceName);
NTSTATUS IoCreateSymbolicLink(PUNICODE_STRING SymbolicLinkName, PUNICODE_STRING DeviceName)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  {
    if (__BLAST_NONDET == 0)
    {
      goto switch_334_0;
    }
    else
    {
      {
        goto switch_334_default;
        if (0)
        {
          switch_334_0:
          ;

          return 0L;
          switch_334_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_334_break:
          ;

        }

      }
    }

  }
}

void IoDeleteDevice(PDEVICE_OBJECT DeviceObject);
void IoDeleteDevice(PDEVICE_OBJECT DeviceObject)
{
  {
    return;
  }
}

NTSTATUS IoDeleteSymbolicLink(PUNICODE_STRING SymbolicLinkName);
NTSTATUS IoDeleteSymbolicLink(PUNICODE_STRING SymbolicLinkName)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  {
    if (__BLAST_NONDET == 0)
    {
      goto switch_335_0;
    }
    else
    {
      {
        goto switch_335_default;
        if (0)
        {
          switch_335_0:
          ;

          return 0L;
          switch_335_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_335_break:
          ;

        }

      }
    }

  }
}

void IoDetachDevice(PDEVICE_OBJECT TargetDevice);
void IoDetachDevice(PDEVICE_OBJECT TargetDevice)
{
  {
    return;
  }
}

void IoFreeIrp(PIRP Irp);
void IoFreeIrp(PIRP Irp)
{
  {
    return;
  }
}

void IoFreeMdl(PMDL Mdl);
void IoFreeMdl(PMDL Mdl)
{
  {
    return;
  }
}

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void);
PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void)
{
  char *tmp;
  {
    {
      tmp = malloc(sizeof(CONFIGURATION_INFORMATION));
    }
    return (void *) tmp;
  }
}

NTSTATUS IoQueryDeviceDescription(PINTERFACE_TYPE BusType, PULONG BusNumber, PCONFIGURATION_TYPE ControllerType, PULONG ControllerNumber, PCONFIGURATION_TYPE PeripheralType, PULONG PeripheralNumber, NTSTATUS (*CalloutRoutine)(PVOID Context, PUNICODE_STRING PathName, INTERFACE_TYPE BusType, ULONG BusNumber, PKEY_VALUE_FULL_INFORMATION *BusInformation, CONFIGURATION_TYPE ControllerType, ULONG ControllerNumber, PKEY_VALUE_FULL_INFORMATION *ControllerInformation, CONFIGURATION_TYPE PeripheralType, ULONG PeripheralNumber, PKEY_VALUE_FULL_INFORMATION *PeripheralInformation), PVOID Context);
NTSTATUS IoQueryDeviceDescription(PINTERFACE_TYPE BusType, PULONG BusNumber, PCONFIGURATION_TYPE ControllerType, PULONG ControllerNumber, PCONFIGURATION_TYPE PeripheralType, PULONG PeripheralNumber, NTSTATUS (*CalloutRoutine)(PVOID Context, PUNICODE_STRING PathName, INTERFACE_TYPE BusType, ULONG BusNumber, PKEY_VALUE_FULL_INFORMATION *BusInformation, CONFIGURATION_TYPE ControllerType, ULONG ControllerNumber, PKEY_VALUE_FULL_INFORMATION *ControllerInformation, CONFIGURATION_TYPE PeripheralType, ULONG PeripheralNumber, PKEY_VALUE_FULL_INFORMATION *PeripheralInformation), PVOID Context)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  {
    if (__BLAST_NONDET == 0)
    {
      goto switch_336_0;
    }
    else
    {
      {
        goto switch_336_default;
        if (0)
        {
          switch_336_0:
          ;

          return 0L;
          switch_336_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_336_break:
          ;

        }

      }
    }

  }
}

NTSTATUS IoRegisterDeviceInterface(PDEVICE_OBJECT PhysicalDeviceObject, const GUID *InterfaceClassGuid, PUNICODE_STRING ReferenceString, PUNICODE_STRING SymbolicLinkName);
NTSTATUS IoRegisterDeviceInterface(PDEVICE_OBJECT PhysicalDeviceObject, const GUID *InterfaceClassGuid, PUNICODE_STRING ReferenceString, PUNICODE_STRING SymbolicLinkName)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  {
    if (__BLAST_NONDET == 0)
    {
      goto switch_337_0;
    }
    else
    {
      {
        goto switch_337_default;
        if (0)
        {
          switch_337_0:
          ;

          return 0L;
          switch_337_default:
          ;

          return -1073741808L;
        }
        else
        {
          switch_337_break:
          ;

        }

      }
    }

  }
}

void IoReleaseCancelSpinLock(KIRQL Irql);
void IoReleaseCancelSpinLock(KIRQL Irql)
{
  {
    return;
  }
}

NTSTATUS IoSetDeviceInterfaceState(PUNICODE_STRING SymbolicLinkName, BOOLEAN Enable);
NTSTATUS IoSetDeviceInterfaceState(PUNICODE_STRING SymbolicLinkName, BOOLEAN Enable)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  {
    if (__BLAST_NONDET == 0)
    {
      goto switch_338_0;
    }
    else
    {
      {
        goto switch_338_default;
        if (0)
        {
          switch_338_0:
          ;

          return 0L;
          switch_338_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_338_break:
          ;

        }

      }
    }

  }
}

void IoSetHardErrorOrVerifyDevice(PIRP Irp, PDEVICE_OBJECT DeviceObject);
void IoSetHardErrorOrVerifyDevice(PIRP Irp, PDEVICE_OBJECT DeviceObject)
{
  {
    return;
  }
}

void stubMoreProcessingRequired(void)
{
  {
    if (s == NP)
    {
      s = MPR1;
    }
    else
    {
      {
        errorFn();
      }
    }

    return;
  }
}

NTSTATUS IofCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS IofCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  NTSTATUS returnVal2;
  int compRetStatus;
  PVOID lcontext = 0;
  NTSTATUS tmp;
  NTSTATUS tmp___0;
  {
    if (compRegistered)
    {
      if (routine == 0)
      {
        {
          tmp = PptSynchCompletionRoutine(DeviceObject, Irp, lcontext);
          compRetStatus = tmp;
        }
      }
      else
      {
        if (routine == 1)
        {
          {
            tmp___0 = PptPowerComplete(DeviceObject, Irp, lcontext);
            compRetStatus = tmp___0;
          }
        }
        else
        {
        }

      }

      if (((long) compRetStatus) == (-1073741802L))
      {
        {
          stubMoreProcessingRequired();
        }
      }
      else
      {
      }

    }
    else
    {
    }

    if (__BLAST_NONDET == 0)
    {
      goto switch_339_0;
    }
    else
    {
      if (__BLAST_NONDET == 1)
      {
        goto switch_339_1;
      }
      else
      {
        {
          goto switch_339_default;
          if (0)
          {
            switch_339_0:
            returnVal2 = 0L;

            goto switch_339_break;
            switch_339_1:
            returnVal2 = -1073741823L;

            goto switch_339_break;
            switch_339_default:
            returnVal2 = 259L;

            goto switch_339_break;
          }
          else
          {
            switch_339_break:
            ;

          }

        }
      }

    }

    if (s == NP)
    {
      s = IPC;
      lowerDriverReturn = returnVal2;
    }
    else
    {
      if (s == MPR1)
      {
        if (returnVal2 == 259L)
        {
          s = MPR3;
          lowerDriverReturn = returnVal2;
        }
        else
        {
          s = NP;
          lowerDriverReturn = returnVal2;
        }

      }
      else
      {
        if (s == SKIP1)
        {
          s = SKIP2;
          lowerDriverReturn = returnVal2;
        }
        else
        {
          {
            errorFn();
          }
        }

      }

    }

    return returnVal2;
  }
}

void IofCompleteRequest(PIRP Irp, CCHAR PriorityBoost);
void IofCompleteRequest(PIRP Irp, CCHAR PriorityBoost)
{
  {
    if (s == NP)
    {
      s = DC;
    }
    else
    {
      {
        errorFn();
      }
    }

    return;
  }
}

KIRQL KeAcquireSpinLockRaiseToDpc(PKSPIN_LOCK SpinLock);
KIRQL KeAcquireSpinLockRaiseToDpc(PKSPIN_LOCK SpinLock)
{
  {
    return (unsigned char) 0;
  }
}

NTSTATUS KeDelayExecutionThread(KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Interval);
NTSTATUS KeDelayExecutionThread(KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Interval)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  {
    if (__BLAST_NONDET == 0)
    {
      goto switch_340_0;
    }
    else
    {
      {
        goto switch_340_default;
        if (0)
        {
          switch_340_0:
          ;

          return 0L;
          switch_340_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_340_break:
          ;

        }

      }
    }

  }
}

void KeInitializeEvent(PRKEVENT Event, EVENT_TYPE Type, BOOLEAN State);
void KeInitializeEvent(PRKEVENT Event, EVENT_TYPE Type, BOOLEAN State)
{
  {
    return;
  }
}

void KeInitializeSemaphore(PRKSEMAPHORE Semaphore, LONG Count, LONG Limit);
void KeInitializeSemaphore(PRKSEMAPHORE Semaphore, LONG Count, LONG Limit)
{
  {
    return;
  }
}

void KeInitializeSpinLock(PKSPIN_LOCK SpinLock);
void KeInitializeSpinLock(PKSPIN_LOCK SpinLock)
{
  {
    return;
  }
}

LONG KeReleaseSemaphore(PRKSEMAPHORE Semaphore, KPRIORITY Increment, LONG Adjustment, BOOLEAN Wait);
LONG KeReleaseSemaphore(PRKSEMAPHORE Semaphore, KPRIORITY Increment, LONG Adjustment, BOOLEAN Wait)
{
  LONG r = __VERIFIER_nondet_long("r");
  {
    return r;
  }
}

void KfReleaseSpinLock(PKSPIN_LOCK SpinLock, KIRQL NewIrql);
void KfReleaseSpinLock(PKSPIN_LOCK SpinLock, KIRQL NewIrql)
{
  {
    return;
  }
}

LONG KeSetEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait);
LONG KeSetEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  LONG l = __VERIFIER_nondet_long("l");
  {
    setEventCalled = 1;
    return l;
  }
}

NTSTATUS KeWaitForSingleObject(PVOID Object, KWAIT_REASON WaitReason, KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Timeout);
NTSTATUS KeWaitForSingleObject(PVOID Object, KWAIT_REASON WaitReason, KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  {
    if (s == MPR3)
    {
      if (setEventCalled == 1)
      {
        s = NP;
        setEventCalled = 0;
      }
      else
      {
        goto _L;
      }

    }
    else
    {
      _L:
      if (customIrp == 1)
      {
        s = NP;
        customIrp = 0;
      }
      else
      {
        if (s == MPR3)
        {
          {
            errorFn();
          }
        }
        else
        {
        }

      }


    }

    if (__BLAST_NONDET == 0)
    {
      goto switch_341_0;
    }
    else
    {
      {
        goto switch_341_default;
        if (0)
        {
          switch_341_0:
          ;

          return 0L;
          switch_341_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_341_break:
          ;

        }

      }
    }

  }
}

PVOID MmAllocateContiguousMemory(SIZE_T NumberOfBytes, PHYSICAL_ADDRESS HighestAcceptableAddress);
PVOID MmAllocateContiguousMemory(SIZE_T NumberOfBytes, PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  char *tmp;
  {
    if (__BLAST_NONDET == 0)
    {
      goto switch_342_0;
    }
    else
    {
      if (__BLAST_NONDET == 1)
      {
        goto switch_342_1;
      }
      else
      {
        if (0)
        {
          switch_342_0:
          {
            tmp = malloc(NumberOfBytes);
          }

          return tmp;
          switch_342_1:
          ;

          return (void *) 0;
        }
        else
        {
          switch_342_break:
          ;

        }

      }

    }

    return (void *) 0;
  }
}

void MmFreeContiguousMemory(PVOID BaseAddress);
void MmFreeContiguousMemory(PVOID BaseAddress)
{
  {
    return;
  }
}

PVOID MmMapLockedPagesSpecifyCache(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, MEMORY_CACHING_TYPE CacheType, PVOID BaseAddress, ULONG BugCheckOnFailure, MM_PAGE_PRIORITY Priority);
PVOID MmMapLockedPagesSpecifyCache(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, MEMORY_CACHING_TYPE CacheType, PVOID BaseAddress, ULONG BugCheckOnFailure, MM_PAGE_PRIORITY Priority)
{
  {
    return (void *) 0;
  }
}

PVOID MmPageEntireDriver(PVOID AddressWithinSection);
PVOID MmPageEntireDriver(PVOID AddressWithinSection)
{
  {
    return (void *) 0;
  }
}

void MmResetDriverPaging(PVOID AddressWithinSection);
void MmResetDriverPaging(PVOID AddressWithinSection)
{
  {
    return;
  }
}

void MmUnlockPages(PMDL MemoryDescriptorList);
void MmUnlockPages(PMDL MemoryDescriptorList)
{
  {
    return;
  }
}

NTSTATUS ObReferenceObjectByHandle(HANDLE Handle, ACCESS_MASK DesiredAccess, POBJECT_TYPE ObjectType, KPROCESSOR_MODE AccessMode, PVOID *Object, POBJECT_HANDLE_INFORMATION HandleInformation);
NTSTATUS ObReferenceObjectByHandle(HANDLE Handle, ACCESS_MASK DesiredAccess, POBJECT_TYPE ObjectType, KPROCESSOR_MODE AccessMode, PVOID *Object, POBJECT_HANDLE_INFORMATION HandleInformation)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  {
    if (__BLAST_NONDET == 0)
    {
      goto switch_343_0;
    }
    else
    {
      {
        goto switch_343_default;
        if (0)
        {
          switch_343_0:
          ;

          return 0L;
          switch_343_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_343_break:
          ;

        }

      }
    }

  }
}

void ObfDereferenceObject(PVOID Object);
void ObfDereferenceObject(PVOID Object)
{
  {
    return;
  }
}

NTSTATUS PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  int compRetStatus;
  NTSTATUS returnVal;
  PVOID lcontext = 0;
  NTSTATUS tmp;
  NTSTATUS tmp___0;
  {
    if (compRegistered)
    {
      if (routine == 0)
      {
        {
          tmp = PptSynchCompletionRoutine(DeviceObject, Irp, lcontext);
          compRetStatus = tmp;
        }
      }
      else
      {
        if (routine == 1)
        {
          {
            tmp___0 = PptPowerComplete(DeviceObject, Irp, lcontext);
            compRetStatus = tmp___0;
          }
        }
        else
        {
        }

      }

      if (((long) compRetStatus) == (-1073741802L))
      {
        {
          stubMoreProcessingRequired();
        }
      }
      else
      {
      }

    }
    else
    {
    }

    if (__BLAST_NONDET == 0)
    {
      goto switch_344_0;
    }
    else
    {
      if (__BLAST_NONDET == 1)
      {
        goto switch_344_1;
      }
      else
      {
        {
          goto switch_344_default;
          if (0)
          {
            switch_344_0:
            returnVal = 0L;

            goto switch_344_break;
            switch_344_1:
            returnVal = -1073741823L;

            goto switch_344_break;
            switch_344_default:
            returnVal = 259L;

            goto switch_344_break;
          }
          else
          {
            switch_344_break:
            ;

          }

        }
      }

    }

    if (s == NP)
    {
      s = IPC;
      lowerDriverReturn = returnVal;
    }
    else
    {
      if (s == MPR1)
      {
        if (returnVal == 259L)
        {
          s = MPR3;
          lowerDriverReturn = returnVal;
        }
        else
        {
          s = NP;
          lowerDriverReturn = returnVal;
        }

      }
      else
      {
        if (s == SKIP1)
        {
          s = SKIP2;
          lowerDriverReturn = returnVal;
        }
        else
        {
          {
            errorFn();
          }
        }

      }

    }

    return returnVal;
  }
}

void PoStartNextPowerIrp(PIRP Irp);
void PoStartNextPowerIrp(PIRP Irp)
{
  {
    return;
  }
}

NTSTATUS PsCreateSystemThread(PHANDLE ThreadHandle, ULONG DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes, HANDLE ProcessHandle, PCLIENT_ID ClientId, void (*StartRoutine)(PVOID StartContext), PVOID StartContext);
NTSTATUS PsCreateSystemThread(PHANDLE ThreadHandle, ULONG DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes, HANDLE ProcessHandle, PCLIENT_ID ClientId, void (*StartRoutine)(PVOID StartContext), PVOID StartContext)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  {
    if (__BLAST_NONDET == 0)
    {
      goto switch_345_0;
    }
    else
    {
      {
        goto switch_345_default;
        if (0)
        {
          switch_345_0:
          ;

          return 0L;
          switch_345_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_345_break:
          ;

        }

      }
    }

  }
}

NTSTATUS PsTerminateSystemThread(NTSTATUS ExitStatus);
NTSTATUS PsTerminateSystemThread(NTSTATUS ExitStatus)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  {
    if (__BLAST_NONDET == 0)
    {
      goto switch_346_0;
    }
    else
    {
      {
        goto switch_346_default;
        if (0)
        {
          switch_346_0:
          ;

          return 0L;
          switch_346_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_346_break:
          ;

        }

      }
    }

  }
}

NTSTATUS RtlAnsiStringToUnicodeString(PUNICODE_STRING DestinationString, PANSI_STRING SourceString, BOOLEAN AllocateDestinationString);
NTSTATUS RtlAnsiStringToUnicodeString(PUNICODE_STRING DestinationString, PANSI_STRING SourceString, BOOLEAN AllocateDestinationString)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  {
    if (__BLAST_NONDET == 0)
    {
      goto switch_347_0;
    }
    else
    {
      {
        goto switch_347_default;
        if (0)
        {
          switch_347_0:
          ;

          return 0L;
          switch_347_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_347_break:
          ;

        }

      }
    }

  }
}

SIZE_T RtlCompareMemory(const void *Source1, const void *Source2, SIZE_T Length);
SIZE_T RtlCompareMemory(const void *Source1, const void *Source2, SIZE_T Length)
{
  SIZE_T r = __VERIFIER_nondet_long("r");
  {
    return r;
  }
}

void RtlCopyUnicodeString(PUNICODE_STRING DestinationString, PUNICODE_STRING SourceString);
void RtlCopyUnicodeString(PUNICODE_STRING DestinationString, PUNICODE_STRING SourceString)
{
  {
    return;
  }
}

NTSTATUS RtlDeleteRegistryValue(ULONG RelativeTo, PCWSTR Path, PCWSTR ValueName);
NTSTATUS RtlDeleteRegistryValue(ULONG RelativeTo, PCWSTR Path, PCWSTR ValueName)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  {
    if (__BLAST_NONDET == 0)
    {
      goto switch_348_0;
    }
    else
    {
      {
        goto switch_348_default;
        if (0)
        {
          switch_348_0:
          ;

          return 0L;
          switch_348_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_348_break:
          ;

        }

      }
    }

  }
}

void RtlFreeUnicodeString(PUNICODE_STRING UnicodeString);
void RtlFreeUnicodeString(PUNICODE_STRING UnicodeString)
{
  {
    return;
  }
}

void RtlInitString(PSTRING DestinationString, PCSZ SourceString);
void RtlInitString(PSTRING DestinationString, PCSZ SourceString)
{
  {
    return;
  }
}

void RtlInitUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString);
void RtlInitUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  {
    return;
  }
}

NTSTATUS RtlQueryRegistryValues(ULONG RelativeTo, PCWSTR Path, PRTL_QUERY_REGISTRY_TABLE QueryTable, PVOID Context, PVOID Environment);
NTSTATUS RtlQueryRegistryValues(ULONG RelativeTo, PCWSTR Path, PRTL_QUERY_REGISTRY_TABLE QueryTable, PVOID Context, PVOID Environment)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  {
    if (__BLAST_NONDET == 0)
    {
      goto switch_349_0;
    }
    else
    {
      {
        goto switch_349_default;
        if (0)
        {
          switch_349_0:
          ;

          return 0L;
          switch_349_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_349_break:
          ;

        }

      }
    }

  }
}

NTSTATUS ZwClose(HANDLE Handle);
NTSTATUS ZwClose(HANDLE Handle)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  {
    if (__BLAST_NONDET == 0)
    {
      goto switch_350_0;
    }
    else
    {
      {
        goto switch_350_default;
        if (0)
        {
          switch_350_0:
          ;

          return 0L;
          switch_350_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_350_break:
          ;

        }

      }
    }

  }
}

NTSTATUS WmiSystemControl(PWMILIB_CONTEXT WmiLibInfo, PDEVICE_OBJECT DeviceObject, PIRP Irp, PSYSCTL_IRP_DISPOSITION IrpDisposition)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  {
    if (__BLAST_NONDET == 0)
    {
      goto switch_351_0;
    }
    else
    {
      {
        goto switch_351_default;
        if (0)
        {
          switch_351_0:
          return 0L;

          switch_351_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_351_break:
          ;

        }

      }
    }

  }
}

NTSTATUS IoAcquireRemoveLockEx(PIO_REMOVE_LOCK RemoveLock, PVOID Tag, PCSTR File, ULONG Line, ULONG RemlockSize);
NTSTATUS IoAcquireRemoveLockEx(PIO_REMOVE_LOCK RemoveLock, PVOID Tag, PCSTR File, ULONG Line, ULONG RemlockSize)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  {
    if (__BLAST_NONDET)
    {
      return 0L;
    }
    else
    {
      return -1073741738L;
    }

  }
}

