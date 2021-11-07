extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "kbfiltr.i.cil-1.c", 3, "reach_error");
}

extern char __VERIFIER_nondet_char(char *);
extern int __VERIFIER_nondet_int(char *);
extern long __VERIFIER_nondet_long(char *);
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
typedef unsigned int size_t;
typedef UCHAR KIRQL;
struct _KTHREAD;
typedef struct _KTHREAD *PKTHREAD;
struct _ETHREAD;
typedef struct _ETHREAD *PETHREAD;
struct _EPROCESS;
typedef struct _EPROCESS *PEPROCESS;
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
#pragma pack(pop)
struct _CM_PARTIAL_RESOURCE_LIST
{
  USHORT Version;
  USHORT Revision;
  ULONG Count;
  CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];
};
typedef struct _CM_PARTIAL_RESOURCE_LIST CM_PARTIAL_RESOURCE_LIST;
struct _CM_FULL_RESOURCE_DESCRIPTOR
{
  INTERFACE_TYPE InterfaceType;
  ULONG BusNumber;
  CM_PARTIAL_RESOURCE_LIST PartialResourceList;
};
typedef struct _CM_FULL_RESOURCE_DESCRIPTOR CM_FULL_RESOURCE_DESCRIPTOR;
struct _CM_RESOURCE_LIST
{
  ULONG Count;
  CM_FULL_RESOURCE_DESCRIPTOR List[1];
};
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
struct _IO_RESOURCE_LIST
{
  USHORT Version;
  USHORT Revision;
  ULONG Count;
  IO_RESOURCE_DESCRIPTOR Descriptors[1];
};
typedef struct _IO_RESOURCE_LIST IO_RESOURCE_LIST;
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
struct _OBJECT_HANDLE_INFORMATION
{
  ULONG HandleAttributes;
  ACCESS_MASK GrantedAccess;
};
typedef struct _OBJECT_HANDLE_INFORMATION *POBJECT_HANDLE_INFORMATION;
struct _KEYBOARD_INPUT_DATA
{
  USHORT UnitId;
  USHORT MakeCode;
  USHORT Flags;
  USHORT Reserved;
  ULONG ExtraInformation;
};
typedef struct _KEYBOARD_INPUT_DATA *PKEYBOARD_INPUT_DATA;
struct _CONNECT_DATA
{
  PDEVICE_OBJECT ClassDeviceObject;
  PVOID ClassService;
};
typedef struct _CONNECT_DATA CONNECT_DATA;
typedef struct _CONNECT_DATA *PCONNECT_DATA;
enum _TRANSMIT_STATE
{
  Idle = 0,
  SendingBytes = 1
};
typedef enum _TRANSMIT_STATE TRANSMIT_STATE;
struct _OUTPUT_PACKET
{
  PUCHAR Bytes;
  ULONG CurrentByte;
  ULONG ByteCount;
  TRANSMIT_STATE State;
};
typedef struct _OUTPUT_PACKET *POUTPUT_PACKET;
enum _KEYBOARD_SCAN_STATE
{
  Normal = 0,
  GotE0 = 1,
  GotE1 = 2
};
typedef enum _KEYBOARD_SCAN_STATE *PKEYBOARD_SCAN_STATE;
struct _INTERNAL_I8042_HOOK_KEYBOARD
{
  PVOID Context;
  NTSTATUS (*InitializationRoutine)(PVOID InitializationContext, PVOID SynchFuncContext, NTSTATUS (*ReadPort)(PVOID Context, PUCHAR Value, BOOLEAN WaitForACK), NTSTATUS (*WritePort)(PVOID Context, UCHAR Value, BOOLEAN WaitForACK), PBOOLEAN TurnTranslationOn);
  BOOLEAN (*IsrRoutine)(PVOID IsrContext, PKEYBOARD_INPUT_DATA CurrentInput, POUTPUT_PACKET CurrentOutput, UCHAR StatusByte, PUCHAR Byte, PBOOLEAN ContinueProcessing, PKEYBOARD_SCAN_STATE ScanState);
  void (*IsrWritePort)(PVOID Context, UCHAR Value);
  void (*QueueKeyboardPacket)(PVOID Context);
  PVOID CallContext;
};
typedef struct _INTERNAL_I8042_HOOK_KEYBOARD INTERNAL_I8042_HOOK_KEYBOARD;
typedef struct _INTERNAL_I8042_HOOK_KEYBOARD *PINTERNAL_I8042_HOOK_KEYBOARD;
struct _DEVICE_EXTENSION
{
  PDEVICE_OBJECT Self;
  PDEVICE_OBJECT PDO;
  PDEVICE_OBJECT TopOfStack;
  LONG EnableCount;
  CONNECT_DATA UpperConnectData;
  PVOID UpperContext;
  NTSTATUS (*UpperInitializationRoutine)(PVOID InitializationContext, PVOID SynchFuncContext, NTSTATUS (*ReadPort)(PVOID Context, PUCHAR Value, BOOLEAN WaitForACK), NTSTATUS (*WritePort)(PVOID Context, UCHAR Value, BOOLEAN WaitForACK), PBOOLEAN TurnTranslationOn);
  BOOLEAN (*UpperIsrHook)(PVOID IsrContext, PKEYBOARD_INPUT_DATA CurrentInput, POUTPUT_PACKET CurrentOutput, UCHAR StatusByte, PUCHAR Byte, PBOOLEAN ContinueProcessing, PKEYBOARD_SCAN_STATE ScanState);
  void (*IsrWritePort)(PVOID Context, UCHAR Value);
  void (*QueueKeyboardPacket)(PVOID Context);
  PVOID CallContext;
  DEVICE_POWER_STATE DeviceState;
  BOOLEAN Started;
  BOOLEAN SurpriseRemoved;
  BOOLEAN Removed;
};
typedef struct _DEVICE_EXTENSION DEVICE_EXTENSION;
typedef struct _DEVICE_EXTENSION *PDEVICE_EXTENSION;
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
extern void *memcpy(void *, const void *, size_t);
extern void *memset(void *, int, size_t);
#pragma warning(disable:4103)
#pragma warning(disable:4103)
NTSTATUS RtlQueryRegistryValues(ULONG RelativeTo, PCWSTR Path, PRTL_QUERY_REGISTRY_TABLE QueryTable, PVOID Context, PVOID Environment);
NTSTATUS RtlDeleteRegistryValue(ULONG RelativeTo, PCWSTR Path, PCWSTR ValueName);
void RtlInitString(PSTRING DestinationString, PCSZ SourceString);
void RtlInitUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString);
NTSTATUS RtlAnsiStringToUnicodeString(PUNICODE_STRING DestinationString, PANSI_STRING SourceString, BOOLEAN AllocateDestinationString);
void RtlCopyUnicodeString(PUNICODE_STRING DestinationString, PUNICODE_STRING SourceString);
void RtlFreeUnicodeString(PUNICODE_STRING UnicodeString);
SIZE_T RtlCompareMemory(const void *Source1, const void *Source2, SIZE_T Length);
#pragma warning(push)
#pragma warning(disable:4035)
#pragma warning(pop)
LONG InterlockedIncrement(PLONG Addend)
{
  return ++(*Addend);
}

LONG InterlockedDecrement(PLONG Addend)
{
  return --(*Addend);
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
void KeInitializeEvent(PRKEVENT Event, EVENT_TYPE Type, BOOLEAN State);
LONG KeSetEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait);
void KeInitializeSemaphore(PRKSEMAPHORE Semaphore, LONG Count, LONG Limit);
LONG KeReleaseSemaphore(PRKSEMAPHORE Semaphore, KPRIORITY Increment, LONG Adjustment, BOOLEAN Wait);
NTSTATUS KeDelayExecutionThread(KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Interval);
NTSTATUS KeWaitForSingleObject(PVOID Object, KWAIT_REASON WaitReason, KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Timeout);
void KeInitializeSpinLock(PKSPIN_LOCK SpinLock);
void KfReleaseSpinLock(PKSPIN_LOCK SpinLock, KIRQL NewIrql);
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
PMDL IoAllocateMdl(PVOID VirtualAddress, ULONG Length, BOOLEAN SecondaryBuffer, BOOLEAN ChargeQuota, PIRP Irp);
PDEVICE_OBJECT IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice);
PIRP IoBuildAsynchronousFsdRequest(ULONG MajorFunction, PDEVICE_OBJECT DeviceObject, PVOID Buffer, ULONG Length, PLARGE_INTEGER StartingOffset, PIO_STATUS_BLOCK IoStatusBlock);
PIRP IoBuildDeviceIoControlRequest(ULONG IoControlCode, PDEVICE_OBJECT DeviceObject, PVOID InputBuffer, ULONG InputBufferLength, PVOID OutputBuffer, ULONG OutputBufferLength, BOOLEAN InternalDeviceIoControl, PKEVENT Event, PIO_STATUS_BLOCK IoStatusBlock);
NTSTATUS IofCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp);
void IofCompleteRequest(PIRP Irp, CCHAR PriorityBoost);
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
void IoSetHardErrorOrVerifyDevice(PIRP Irp, PDEVICE_OBJECT DeviceObject);
NTSTATUS IoRegisterDeviceInterface(PDEVICE_OBJECT PhysicalDeviceObject, const GUID *InterfaceClassGuid, PUNICODE_STRING ReferenceString, PUNICODE_STRING SymbolicLinkName);
NTSTATUS IoSetDeviceInterfaceState(PUNICODE_STRING SymbolicLinkName, BOOLEAN Enable);
#pragma warning(disable:4200)
#pragma warning(default:4200)
NTSTATUS PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp);
void PoStartNextPowerIrp(PIRP Irp);
NTSTATUS ObReferenceObjectByHandle(HANDLE Handle, ACCESS_MASK DesiredAccess, POBJECT_TYPE ObjectType, KPROCESSOR_MODE AccessMode, PVOID *Object, POBJECT_HANDLE_INFORMATION HandleInformation);
void ObfDereferenceObject(PVOID Object);
NTSTATUS ZwClose(HANDLE Handle);
NTSTATUS KbFilter_AddDevice(PDRIVER_OBJECT Driver, PDEVICE_OBJECT PDO);
NTSTATUS KbFilter_CreateClose(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS KbFilter_DispatchPassThrough(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS KbFilter_InternIoCtl(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS KbFilter_IoCtl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  if (__VERIFIER_nondet_int("if_1"))
  {
    return 0L;
  }
  else
    if (__VERIFIER_nondet_int("if_2"))
  {
    return -1L;
  }
  else
  {
    return 259L;
  }


}

NTSTATUS KbFilter_PnP(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS KbFilter_Power(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS KbFilter_InitializationRoutine(PDEVICE_OBJECT DeviceObject, PVOID SynchFuncContext, NTSTATUS (*ReadPort)(PVOID Context, PUCHAR Value, BOOLEAN WaitForACK), NTSTATUS (*WritePort)(PVOID Context, UCHAR Value, BOOLEAN WaitForACK), PBOOLEAN TurnTranslationOn);
BOOLEAN KbFilter_IsrHook(PDEVICE_OBJECT DeviceObject, PKEYBOARD_INPUT_DATA CurrentInput, POUTPUT_PACKET CurrentOutput, UCHAR StatusByte, PUCHAR DataByte, PBOOLEAN ContinueProcessing, PKEYBOARD_SCAN_STATE ScanState);
void KbFilter_ServiceCallback(PDEVICE_OBJECT DeviceObject, PKEYBOARD_INPUT_DATA InputDataStart, PKEYBOARD_INPUT_DATA InputDataEnd, PULONG InputDataConsumed);
void KbFilter_Unload(PDRIVER_OBJECT Driver);
NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath);
#pragma alloc_text(INIT,DriverEntry)
#pragma alloc_text(PAGE,KbFilter_AddDevice)
#pragma alloc_text(PAGE,KbFilter_CreateClose)
#pragma alloc_text(PAGE,KbFilter_IoCtl)
#pragma alloc_text(PAGE,KbFilter_InternIoCtl)
#pragma alloc_text(PAGE,KbFilter_Unload)
#pragma alloc_text(PAGE,KbFilter_DispatchPassThrough)
#pragma alloc_text(PAGE,KbFilter_PnP)
#pragma alloc_text(PAGE,KbFilter_Power)
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

NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  ULONG i = __VERIFIER_nondet_long("i");
  {
    DriverObject->MajorFunction[i] = &KbFilter_DispatchPassThrough;
    DriverObject->MajorFunction[0] = &KbFilter_CreateClose;
    DriverObject->MajorFunction[2] = &KbFilter_CreateClose;
    DriverObject->MajorFunction[27] = &KbFilter_PnP;
    DriverObject->MajorFunction[22] = &KbFilter_Power;
    DriverObject->MajorFunction[15] = &KbFilter_InternIoCtl;
    DriverObject->DriverUnload = &KbFilter_Unload;
    DriverObject->DriverExtension->AddDevice = &KbFilter_AddDevice;
    return 0L;
  }
}

NTSTATUS KbFilter_AddDevice(PDRIVER_OBJECT Driver, PDEVICE_OBJECT PDO)
{
  PDEVICE_EXTENSION devExt;
  PDEVICE_OBJECT device;
  NTSTATUS status;
  {
    {
      status = 0L;
      status = IoCreateDevice(Driver, sizeof(DEVICE_EXTENSION), (void *) 0, 11, 0, 0, &device);
    }
    if (!(status >= 0L))
    {
      return status;
    }
    else
    {
    }

    {
      memset(device->DeviceExtension, 0, sizeof(DEVICE_EXTENSION));
      devExt = (struct _DEVICE_EXTENSION *) device->DeviceExtension;
      devExt->TopOfStack = IoAttachDeviceToDeviceStack(device, PDO);
      devExt->Self = device;
      devExt->PDO = PDO;
      devExt->DeviceState = 1;
      devExt->SurpriseRemoved = 0;
      devExt->Removed = 0;
      devExt->Started = 0;
      device->Flags |= 8196UL;
      device->Flags &= 4294967167UL;
    }
    return status;
  }
}

NTSTATUS KbFilter_Complete(PDEVICE_OBJECT DeviceObject, PIRP Irp, PVOID Context)
{
  PKEVENT event;
  {
    {
      event = (struct _KEVENT *) Context;
      KeSetEvent(event, 0, 0);
    }
    return -1073741802L;
  }
}

NTSTATUS KbFilter_CreateClose(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PIO_STACK_LOCATION irpStack;
  NTSTATUS status;
  PDEVICE_EXTENSION devExt;
  LONG tmp;
  LONG tmp___0;
  NTSTATUS tmp___1;
  {
    irpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
    devExt = (struct _DEVICE_EXTENSION *) DeviceObject->DeviceExtension;
    status = Irp->IoStatus.__annonCompField4.Status;
    status = myStatus;
    if (irpStack->MajorFunction == 0)
    {
      goto switch_0_0;
    }
    else
    {
      if (irpStack->MajorFunction == 2)
      {
        goto switch_0_2;
      }
      else
      {
        if (0)
        {
          switch_0_0:
          ;

          if (((unsigned int) ((void *) 0)) == ((unsigned int) devExt->UpperConnectData.ClassService))
          {
            status = -1073741436L;
          }
          else
          {
            {
              tmp = InterlockedIncrement(&devExt->EnableCount);
            }
            if (1L == tmp)
            {
            }
            else
            {
            }

          }

          goto switch_0_break;
          switch_0_2:
          {
            tmp___0 = InterlockedDecrement(&devExt->EnableCount);
          }

          if (0L == tmp___0)
          {
          }
          else
          {
          }

          goto switch_0_break;
        }
        else
        {
          switch_0_break:
          ;

        }

      }

    }

    {
      Irp->IoStatus.__annonCompField4.Status = status;
      myStatus = status;
      tmp___1 = KbFilter_DispatchPassThrough(DeviceObject, Irp);
    }
    return tmp___1;
  }
}

NTSTATUS KbFilter_DispatchPassThrough(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PIO_STACK_LOCATION irpStack;
  NTSTATUS tmp;
  {
    irpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
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
      tmp = IofCallDriver(((struct _DEVICE_EXTENSION *) DeviceObject->DeviceExtension)->TopOfStack, Irp);
    }
    return tmp;
  }
}

NTSTATUS KbFilter_InternIoCtl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PIO_STACK_LOCATION irpStack;
  PDEVICE_EXTENSION devExt;
  PINTERNAL_I8042_HOOK_KEYBOARD hookKeyboard;
  PCONNECT_DATA connectData;
  NTSTATUS status;
  NTSTATUS tmp;
  {
    status = 0L;
    devExt = (struct _DEVICE_EXTENSION *) DeviceObject->DeviceExtension;
    Irp->IoStatus.Information = 0;
    irpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
    if (irpStack->Parameters.DeviceIoControl.IoControlCode == (((11 << 16) | (128 << 2)) | 3))
    {
      goto switch_1_exp_0;
    }
    else
    {
      if (irpStack->Parameters.DeviceIoControl.IoControlCode == (((11 << 16) | (256 << 2)) | 3))
      {
        goto switch_1_exp_1;
      }
      else
      {
        if (irpStack->Parameters.DeviceIoControl.IoControlCode == (((11 << 16) | (4080 << 2)) | 3))
        {
          goto switch_1_exp_2;
        }
        else
        {
          if (irpStack->Parameters.DeviceIoControl.IoControlCode == (11 << 16))
          {
            goto switch_1_exp_3;
          }
          else
          {
            if (irpStack->Parameters.DeviceIoControl.IoControlCode == ((11 << 16) | (32 << 2)))
            {
              goto switch_1_exp_4;
            }
            else
            {
              if (irpStack->Parameters.DeviceIoControl.IoControlCode == ((11 << 16) | (16 << 2)))
              {
                goto switch_1_exp_5;
              }
              else
              {
                if (irpStack->Parameters.DeviceIoControl.IoControlCode == ((11 << 16) | (2 << 2)))
                {
                  goto switch_1_exp_6;
                }
                else
                {
                  if (irpStack->Parameters.DeviceIoControl.IoControlCode == ((11 << 16) | (8 << 2)))
                  {
                    goto switch_1_exp_7;
                  }
                  else
                  {
                    if (irpStack->Parameters.DeviceIoControl.IoControlCode == ((11 << 16) | (1 << 2)))
                    {
                      goto switch_1_exp_8;
                    }
                    else
                    {
                      if (0)
                      {
                        switch_1_exp_0:
                        ;

                        if (((unsigned int) devExt->UpperConnectData.ClassService) != ((unsigned int) ((void *) 0)))
                        {
                          status = -1073741757L;
                          goto switch_1_break;
                        }
                        else
                        {
                          if (irpStack->Parameters.DeviceIoControl.InputBufferLength < ((ULONG) (sizeof(CONNECT_DATA))))
                          {
                            status = -1073741811L;
                            goto switch_1_break;
                          }
                          else
                          {
                          }

                        }

                        connectData = (struct _CONNECT_DATA *) irpStack->Parameters.DeviceIoControl.Type3InputBuffer;
                        devExt->UpperConnectData = *connectData;
                        connectData->ClassDeviceObject = devExt->Self;
                        connectData->ClassService = &KbFilter_ServiceCallback;
                        goto switch_1_break;
                        switch_1_exp_1:
                        status = -1073741822L;

                        goto switch_1_break;
                        switch_1_exp_2:
                        ;

                        if (irpStack->Parameters.DeviceIoControl.InputBufferLength < ((ULONG) (sizeof(INTERNAL_I8042_HOOK_KEYBOARD))))
                        {
                          status = -1073741811L;
                          goto switch_1_break;
                        }
                        else
                        {
                        }

                        hookKeyboard = (struct _INTERNAL_I8042_HOOK_KEYBOARD *) irpStack->Parameters.DeviceIoControl.Type3InputBuffer;
                        devExt->UpperContext = hookKeyboard->Context;
                        hookKeyboard->Context = (void *) DeviceObject;
                        if (hookKeyboard->InitializationRoutine)
                        {
                          devExt->UpperInitializationRoutine = hookKeyboard->InitializationRoutine;
                        }
                        else
                        {
                        }

                        hookKeyboard->InitializationRoutine = (NTSTATUS (*)(PVOID InitializationContext, PVOID SynchFuncContext, NTSTATUS (*ReadPort)(PVOID Context, PUCHAR Value, BOOLEAN WaitForACK), NTSTATUS (*WritePort)(PVOID Context, UCHAR Value, BOOLEAN WaitForACK), PBOOLEAN TurnTranslationOn)) (&KbFilter_InitializationRoutine);
                        if (hookKeyboard->IsrRoutine)
                        {
                          devExt->UpperIsrHook = hookKeyboard->IsrRoutine;
                        }
                        else
                        {
                        }

                        hookKeyboard->IsrRoutine = (BOOLEAN (*)(PVOID IsrContext, PKEYBOARD_INPUT_DATA CurrentInput, POUTPUT_PACKET CurrentOutput, UCHAR StatusByte, PUCHAR Byte, PBOOLEAN ContinueProcessing, PKEYBOARD_SCAN_STATE ScanState)) (&KbFilter_IsrHook);
                        devExt->IsrWritePort = hookKeyboard->IsrWritePort;
                        devExt->QueueKeyboardPacket = hookKeyboard->QueueKeyboardPacket;
                        devExt->CallContext = hookKeyboard->CallContext;
                        status = 0L;
                        goto switch_1_break;
                        switch_1_exp_3:
                        ;

                        switch_1_exp_4:
                        ;

                        switch_1_exp_5:
                        ;

                        switch_1_exp_6:
                        ;

                        switch_1_exp_7:
                        ;

                        switch_1_exp_8:
                        ;

                        goto switch_1_break;
                      }
                      else
                      {
                        switch_1_break:
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

    if (!(status >= 0L))
    {
      {
        Irp->IoStatus.__annonCompField4.Status = status;
        myStatus = status;
        IofCompleteRequest(Irp, 0);
      }
      return status;
    }
    else
    {
    }

    {
      tmp = KbFilter_DispatchPassThrough(DeviceObject, Irp);
    }
    return tmp;
  }
}

NTSTATUS KbFilter_PnP(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PDEVICE_EXTENSION devExt;
  PIO_STACK_LOCATION irpStack;
  NTSTATUS status;
  KEVENT event;
  PIO_STACK_LOCATION irpSp;
  PIO_STACK_LOCATION nextIrpSp;
  PIO_STACK_LOCATION irpSp___0;
  {
    status = 0L;
    devExt = (struct _DEVICE_EXTENSION *) DeviceObject->DeviceExtension;
    irpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
    if (irpStack->MinorFunction == 0)
    {
      goto switch_2_0;
    }
    else
    {
      if (irpStack->MinorFunction == 23)
      {
        goto switch_2_23;
      }
      else
      {
        if (irpStack->MinorFunction == 2)
        {
          goto switch_2_2;
        }
        else
        {
          if (irpStack->MinorFunction == 1)
          {
            goto switch_2_1;
          }
          else
          {
            if (irpStack->MinorFunction == 5)
            {
              goto switch_2_5;
            }
            else
            {
              if (irpStack->MinorFunction == 3)
              {
                goto switch_2_3;
              }
              else
              {
                if (irpStack->MinorFunction == 6)
                {
                  goto switch_2_6;
                }
                else
                {
                  if (irpStack->MinorFunction == 13)
                  {
                    goto switch_2_13;
                  }
                  else
                  {
                    if (irpStack->MinorFunction == 4)
                    {
                      goto switch_2_4;
                    }
                    else
                    {
                      if (irpStack->MinorFunction == 7)
                      {
                        goto switch_2_7;
                      }
                      else
                      {
                        if (irpStack->MinorFunction == 8)
                        {
                          goto switch_2_8;
                        }
                        else
                        {
                          if (irpStack->MinorFunction == 9)
                          {
                            goto switch_2_9;
                          }
                          else
                          {
                            if (irpStack->MinorFunction == 12)
                            {
                              goto switch_2_12;
                            }
                            else
                            {
                              if (irpStack->MinorFunction == 10)
                              {
                                goto switch_2_10;
                              }
                              else
                              {
                                if (irpStack->MinorFunction == 11)
                                {
                                  goto switch_2_11;
                                }
                                else
                                {
                                  if (irpStack->MinorFunction == 15)
                                  {
                                    goto switch_2_15;
                                  }
                                  else
                                  {
                                    if (irpStack->MinorFunction == 16)
                                    {
                                      goto switch_2_16;
                                    }
                                    else
                                    {
                                      if (irpStack->MinorFunction == 17)
                                      {
                                        goto switch_2_17;
                                      }
                                      else
                                      {
                                        if (irpStack->MinorFunction == 18)
                                        {
                                          goto switch_2_18;
                                        }
                                        else
                                        {
                                          if (irpStack->MinorFunction == 19)
                                          {
                                            goto switch_2_19;
                                          }
                                          else
                                          {
                                            if (irpStack->MinorFunction == 20)
                                            {
                                              goto switch_2_20;
                                            }
                                            else
                                            {
                                              {
                                                goto switch_2_default;
                                                if (0)
                                                {
                                                  switch_2_0:
                                                  {
                                                    irpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
                                                    nextIrpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
                                                    memcpy(nextIrpSp, irpSp, (long) (&((IO_STACK_LOCATION *) 0)->CompletionRoutine));
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
                                                      compFptr = &KbFilter_Complete;
                                                    }

                                                  }

                                                  {
                                                    irpSp___0 = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
                                                    irpSp___0->CompletionRoutine = &KbFilter_Complete;
                                                    irpSp___0->Context = &event;
                                                    irpSp___0->Control = 0;
                                                    irpSp___0->Control = 64;
                                                    irpSp___0->Control = ((int) irpSp___0->Control) | 128;
                                                    irpSp___0->Control = ((int) irpSp___0->Control) | 32;
                                                    status = IofCallDriver(devExt->TopOfStack, Irp);
                                                  }
                                                  if (259L == status)
                                                  {
                                                    {
                                                      KeWaitForSingleObject(&event, 0, 0, 0, (void *) 0);
                                                    }
                                                  }
                                                  else
                                                  {
                                                  }

                                                  if (status >= 0L)
                                                  {
                                                    if (((long) myStatus) >= 0L)
                                                    {
                                                      devExt->Started = 1;
                                                      devExt->Removed = 0;
                                                      devExt->SurpriseRemoved = 0;
                                                    }
                                                    else
                                                    {
                                                    }

                                                  }
                                                  else
                                                  {
                                                  }

                                                  {
                                                    Irp->IoStatus.__annonCompField4.Status = status;
                                                    myStatus = status;
                                                    Irp->IoStatus.Information = 0;
                                                    IofCompleteRequest(Irp, 0);
                                                  }
                                                  goto switch_2_break;
                                                  switch_2_23:
                                                  devExt->SurpriseRemoved = 1;

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
                                                    status = IofCallDriver(devExt->TopOfStack, Irp);
                                                  }
                                                  goto switch_2_break;
                                                  switch_2_2:
                                                  devExt->Removed = 1;

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
                                                    IofCallDriver(devExt->TopOfStack, Irp);
                                                    status = 0L;
                                                  }
                                                  goto switch_2_break;
                                                  switch_2_1:
                                                  ;

                                                  switch_2_5:
                                                  ;

                                                  switch_2_3:
                                                  ;

                                                  switch_2_6:
                                                  ;

                                                  switch_2_13:
                                                  ;

                                                  switch_2_4:
                                                  ;

                                                  switch_2_7:
                                                  ;

                                                  switch_2_8:
                                                  ;

                                                  switch_2_9:
                                                  ;

                                                  switch_2_12:
                                                  ;

                                                  switch_2_10:
                                                  ;

                                                  switch_2_11:
                                                  ;

                                                  switch_2_15:
                                                  ;

                                                  switch_2_16:
                                                  ;

                                                  switch_2_17:
                                                  ;

                                                  switch_2_18:
                                                  ;

                                                  switch_2_19:
                                                  ;

                                                  switch_2_20:
                                                  ;

                                                  switch_2_default:
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
                                                    status = IofCallDriver(devExt->TopOfStack, Irp);
                                                  }
                                                  goto switch_2_break;
                                                }
                                                else
                                                {
                                                  switch_2_break:
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

              }

            }

          }

        }

      }

    }

    return status;
  }
}

NTSTATUS KbFilter_Power(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PIO_STACK_LOCATION irpStack;
  PDEVICE_EXTENSION devExt;
  POWER_STATE powerState;
  POWER_STATE_TYPE powerType;
  NTSTATUS tmp;
  {
    devExt = (struct _DEVICE_EXTENSION *) DeviceObject->DeviceExtension;
    irpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
    powerType = irpStack->Parameters.Power.Type;
    powerState = irpStack->Parameters.Power.State;
    if (irpStack->MinorFunction == 2)
    {
      goto switch_3_2;
    }
    else
    {
      if (irpStack->MinorFunction == 1)
      {
        goto switch_3_1;
      }
      else
      {
        if (irpStack->MinorFunction == 0)
        {
          goto switch_3_0;
        }
        else
        {
          if (irpStack->MinorFunction == 3)
          {
            goto switch_3_3;
          }
          else
          {
            {
              goto switch_3_default;
              if (0)
              {
                switch_3_2:
                ;

                if (((int) powerType) == 1)
                {
                  devExt->DeviceState = powerState.DeviceState;
                }
                else
                {
                }

                switch_3_1:
                ;

                switch_3_0:
                ;

                switch_3_3:
                ;

                switch_3_default:
                ;

                goto switch_3_break;
              }
              else
              {
                switch_3_break:
                ;

              }

            }
          }

        }

      }

    }

    {
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
      tmp = PoCallDriver(devExt->TopOfStack, Irp);
    }
    return tmp;
  }
}

NTSTATUS KbFilter_InitializationRoutine(PDEVICE_OBJECT DeviceObject, PVOID SynchFuncContext, NTSTATUS (*ReadPort)(PVOID Context, PUCHAR Value, BOOLEAN WaitForACK), NTSTATUS (*WritePort)(PVOID Context, UCHAR Value, BOOLEAN WaitForACK), PBOOLEAN TurnTranslationOn)
{
  PDEVICE_EXTENSION devExt;
  NTSTATUS status;
  {
    status = 0L;
    devExt = DeviceObject->DeviceExtension;
    if (devExt->UpperInitializationRoutine)
    {
      {
        status = (*devExt->UpperInitializationRoutine)(devExt->UpperContext, SynchFuncContext, ReadPort, WritePort, TurnTranslationOn);
      }
      if (!(status >= 0L))
      {
        return status;
      }
      else
      {
      }

    }
    else
    {
    }

    *TurnTranslationOn = 1;
    return status;
  }
}

BOOLEAN KbFilter_IsrHook(PDEVICE_OBJECT DeviceObject, PKEYBOARD_INPUT_DATA CurrentInput, POUTPUT_PACKET CurrentOutput, UCHAR StatusByte, PUCHAR DataByte, PBOOLEAN ContinueProcessing, PKEYBOARD_SCAN_STATE ScanState)
{
  PDEVICE_EXTENSION devExt;
  BOOLEAN retVal;
  {
    retVal = 1;
    devExt = DeviceObject->DeviceExtension;
    if (devExt->UpperIsrHook)
    {
      {
        retVal = (*devExt->UpperIsrHook)(devExt->UpperContext, CurrentInput, CurrentOutput, StatusByte, DataByte, ContinueProcessing, ScanState);
      }
      if (!retVal)
      {
        return retVal;
      }
      else
      {
        if (!(*ContinueProcessing))
        {
          return retVal;
        }
        else
        {
        }

      }

    }
    else
    {
    }

    *ContinueProcessing = 1;
    return retVal;
  }
}

void KbFilter_ServiceCallback(PDEVICE_OBJECT DeviceObject, PKEYBOARD_INPUT_DATA InputDataStart, PKEYBOARD_INPUT_DATA InputDataEnd, PULONG InputDataConsumed)
{
  PDEVICE_EXTENSION devExt;
  {
    {
      devExt = (struct _DEVICE_EXTENSION *) DeviceObject->DeviceExtension;
      (*((void (*)(PVOID NormalContext, PVOID SystemArgument1, PVOID SystemArgument2, PVOID SystemArgument3)) devExt->UpperConnectData.ClassService))(devExt->UpperConnectData.ClassDeviceObject, InputDataStart, InputDataEnd, InputDataConsumed);
    }
    return;
  }
}

void KbFilter_Unload(PDRIVER_OBJECT Driver)
{
  {
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
IRP *pirp;
void stub_driver_init(void)
{
  {
    s = NP;
    pended = 0;
    compFptr = 0;
    compRegistered = 0;
    lowerDriverReturn = 0;
    setEventCalled = 0;
    customIrp = 0;
    return;
  }
}

int main(void)
{
  DRIVER_OBJECT d;
  UNICODE_STRING u;
  NTSTATUS status;
  int we_should_unload = __VERIFIER_nondet_int("we_should_unload");
  PIRP irp;
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  int irp_choice = __VERIFIER_nondet_int("irp_choice");
  DEVICE_OBJECT devobj;
  {
    {
      pirp = &irp;
      _BLAST_init();
      status = DriverEntry(&d, &u);
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
        status = KbFilter_AddDevice(&d, &devobj);
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
        goto switch_4_0;
      }
      else
      {
        if (__BLAST_NONDET == 1)
        {
          goto switch_4_1;
        }
        else
        {
          if (__BLAST_NONDET == 2)
          {
            goto switch_4_2;
          }
          else
          {
            if (__BLAST_NONDET == 3)
            {
              goto switch_4_3;
            }
            else
            {
              if (__BLAST_NONDET == 4)
              {
                goto switch_4_4;
              }
              else
              {
                if (__BLAST_NONDET == 8)
                {
                  goto switch_4_8;
                }
                else
                {
                  {
                    goto switch_4_default;
                    if (0)
                    {
                      switch_4_0:
                      {
                        status = KbFilter_CreateClose(&devobj, pirp);
                      }

                      goto switch_4_break;
                      switch_4_1:
                      {
                        status = KbFilter_CreateClose(&devobj, pirp);
                      }

                      goto switch_4_break;
                      switch_4_2:
                      {
                        status = KbFilter_IoCtl(&devobj, pirp);
                      }

                      goto switch_4_break;
                      switch_4_3:
                      {
                        status = KbFilter_PnP(&devobj, pirp);
                      }

                      goto switch_4_break;
                      switch_4_4:
                      {
                        status = KbFilter_Power(&devobj, pirp);
                      }

                      goto switch_4_break;
                      switch_4_8:
                      {
                        status = KbFilter_InternIoCtl(&devobj, pirp);
                      }

                      goto switch_4_break;
                      switch_4_default:
                      ;

                      return -1;
                    }
                    else
                    {
                      switch_4_break:
                      ;

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
char *stubedmalloc(int i)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  {
    if (__BLAST_NONDET)
    {
      return (char *) 0;
    }
    else
    {
      return (char *) 1;
    }

  }
}

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
      tmp = stubedmalloc(NumberOfBytes);
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
      goto switch_5_0;
    }
    else
    {
      {
        goto switch_5_default;
        if (0)
        {
          switch_5_0:
          {
            tmp = stubedmalloc(sizeof(MDL));
          }

          return (void *) tmp;
          switch_5_default:
          ;

          return (void *) 0;
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

PDEVICE_OBJECT IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice);
PDEVICE_OBJECT IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  int __BLAST_NONDET = __VERIFIER_nondet_int("__BLAST_NONDET");
  {
    if (__BLAST_NONDET == 0)
    {
      goto switch_6_0;
    }
    else
    {
      {
        goto switch_6_default;
        if (0)
        {
          switch_6_0:
          ;

          return TargetDevice;
          switch_6_default:
          ;

          return (void *) 0;
        }
        else
        {
          switch_6_break:
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
      goto switch_7_0;
    }
    else
    {
      {
        goto switch_7_default;
        if (0)
        {
          switch_7_0:
          {
            tmp = stubedmalloc(sizeof(IRP));
          }

          return (void *) tmp;
          switch_7_default:
          ;

          return (void *) 0;
        }
        else
        {
          switch_7_break:
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
      goto switch_8_0;
    }
    else
    {
      {
        goto switch_8_default;
        if (0)
        {
          switch_8_0:
          {
            tmp = stubedmalloc(sizeof(IRP));
          }

          return (void *) tmp;
          switch_8_default:
          ;

          return (void *) 0;
        }
        else
        {
          switch_8_break:
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
      goto switch_9_0;
    }
    else
    {
      {
        goto switch_9_default;
        if (0)
        {
          switch_9_0:
          {
            tmp = stubedmalloc(sizeof(DEVICE_OBJECT));
            *DeviceObject = (void *) tmp;
          }

          return 0L;
          switch_9_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_9_break:
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
      goto switch_10_0;
    }
    else
    {
      {
        goto switch_10_default;
        if (0)
        {
          switch_10_0:
          ;

          return 0L;
          switch_10_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_10_break:
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
      goto switch_11_0;
    }
    else
    {
      {
        goto switch_11_default;
        if (0)
        {
          switch_11_0:
          ;

          return 0L;
          switch_11_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_11_break:
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
      tmp = stubedmalloc(sizeof(CONFIGURATION_INFORMATION));
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
      goto switch_12_0;
    }
    else
    {
      {
        goto switch_12_default;
        if (0)
        {
          switch_12_0:
          ;

          return 0L;
          switch_12_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_12_break:
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
      goto switch_13_0;
    }
    else
    {
      {
        goto switch_13_default;
        if (0)
        {
          switch_13_0:
          ;

          return 0L;
          switch_13_default:
          ;

          return -1073741808L;
        }
        else
        {
          switch_13_break:
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
      goto switch_14_0;
    }
    else
    {
      {
        goto switch_14_default;
        if (0)
        {
          switch_14_0:
          ;

          return 0L;
          switch_14_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_14_break:
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
  {
    if (compRegistered)
    {
      {
        tmp = KbFilter_Complete(DeviceObject, Irp, lcontext);
        compRetStatus = tmp;
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
      goto switch_15_0;
    }
    else
    {
      if (__BLAST_NONDET == 1)
      {
        goto switch_15_1;
      }
      else
      {
        {
          goto switch_15_default;
          if (0)
          {
            switch_15_0:
            returnVal2 = 0L;

            goto switch_15_break;
            switch_15_1:
            returnVal2 = -1073741823L;

            goto switch_15_break;
            switch_15_default:
            returnVal2 = 259L;

            goto switch_15_break;
          }
          else
          {
            switch_15_break:
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
      goto switch_16_0;
    }
    else
    {
      {
        goto switch_16_default;
        if (0)
        {
          switch_16_0:
          ;

          return 0L;
          switch_16_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_16_break:
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
      goto switch_17_0;
    }
    else
    {
      {
        goto switch_17_default;
        if (0)
        {
          switch_17_0:
          ;

          return 0L;
          switch_17_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_17_break:
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
      goto switch_18_0;
    }
    else
    {
      if (__BLAST_NONDET == 1)
      {
        goto switch_18_1;
      }
      else
      {
        if (0)
        {
          switch_18_0:
          {
            tmp = stubedmalloc(NumberOfBytes);
          }

          return tmp;
          switch_18_1:
          ;

          return (void *) 0;
        }
        else
        {
          switch_18_break:
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
      goto switch_19_0;
    }
    else
    {
      {
        goto switch_19_default;
        if (0)
        {
          switch_19_0:
          ;

          return 0L;
          switch_19_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_19_break:
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
  {
    if (compRegistered)
    {
      {
        tmp = KbFilter_Complete(DeviceObject, Irp, lcontext);
        compRetStatus = tmp;
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
      goto switch_20_0;
    }
    else
    {
      if (__BLAST_NONDET == 1)
      {
        goto switch_20_1;
      }
      else
      {
        {
          goto switch_20_default;
          if (0)
          {
            switch_20_0:
            returnVal = 0L;

            goto switch_20_break;
            switch_20_1:
            returnVal = -1073741823L;

            goto switch_20_break;
            switch_20_default:
            returnVal = 259L;

            goto switch_20_break;
          }
          else
          {
            switch_20_break:
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
      goto switch_21_0;
    }
    else
    {
      {
        goto switch_21_default;
        if (0)
        {
          switch_21_0:
          ;

          return 0L;
          switch_21_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_21_break:
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
      goto switch_22_0;
    }
    else
    {
      {
        goto switch_22_default;
        if (0)
        {
          switch_22_0:
          ;

          return 0L;
          switch_22_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_22_break:
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
      goto switch_23_0;
    }
    else
    {
      {
        goto switch_23_default;
        if (0)
        {
          switch_23_0:
          ;

          return 0L;
          switch_23_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_23_break:
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
      goto switch_24_0;
    }
    else
    {
      {
        goto switch_24_default;
        if (0)
        {
          switch_24_0:
          ;

          return 0L;
          switch_24_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_24_break:
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
      goto switch_25_0;
    }
    else
    {
      {
        goto switch_25_default;
        if (0)
        {
          switch_25_0:
          ;

          return 0L;
          switch_25_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_25_break:
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
      goto switch_26_0;
    }
    else
    {
      {
        goto switch_26_default;
        if (0)
        {
          switch_26_0:
          ;

          return 0L;
          switch_26_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_26_break:
          ;

        }

      }
    }

  }
}

