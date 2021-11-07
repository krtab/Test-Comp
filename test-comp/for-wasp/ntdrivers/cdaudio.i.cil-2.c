extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "cdaudio.i.cil-2.c", 3, "reach_error");
}

extern char __VERIFIER_nondet_char(char *);
extern int __VERIFIER_nondet_int(char *);
extern long __VERIFIER_nondet_long(char *);
extern unsigned long __VERIFIER_nondet_ulong(char *);
extern void *malloc(unsigned int size);
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
typedef unsigned long long ULONGLONG;
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
struct __anonstruct____missing_field_name_3
{
  ULONG LowPart;
  ULONG HighPart;
};
struct __anonstruct_u_4
{
  ULONG LowPart;
  ULONG HighPart;
};
union _ULARGE_INTEGER
{
  struct __anonstruct____missing_field_name_3 __annonCompField2;
  struct __anonstruct_u_4 u;
  ULONGLONG QuadPart;
};
typedef union _ULARGE_INTEGER ULARGE_INTEGER;
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
struct _KTIMER
{
  DISPATCHER_HEADER Header;
  ULARGE_INTEGER DueTime;
  LIST_ENTRY TimerListEntry;
  struct _KDPC *Dpc;
  LONG Period;
};
typedef struct _KTIMER *PKTIMER;
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
struct _SCSI_PASS_THROUGH
{
  USHORT Length;
  UCHAR ScsiStatus;
  UCHAR PathId;
  UCHAR TargetId;
  UCHAR Lun;
  UCHAR CdbLength;
  UCHAR SenseInfoLength;
  UCHAR DataIn;
  ULONG DataTransferLength;
  ULONG TimeOutValue;
  ULONG_PTR DataBufferOffset;
  ULONG SenseInfoOffset;
  UCHAR Cdb[16];
};
typedef struct _SCSI_PASS_THROUGH SCSI_PASS_THROUGH;
typedef struct _SCSI_PASS_THROUGH *PSCSI_PASS_THROUGH;
struct _TRACK_DATA
{
  UCHAR Reserved;
  UCHAR Control : 4;
  UCHAR Adr : 4;
  UCHAR TrackNumber;
  UCHAR Reserved1;
  UCHAR Address[4];
};
typedef struct _TRACK_DATA TRACK_DATA;
struct _CDROM_TOC
{
  UCHAR Length[2];
  UCHAR FirstTrack;
  UCHAR LastTrack;
  TRACK_DATA TrackData[100];
};
typedef struct _CDROM_TOC CDROM_TOC;
typedef struct _CDROM_TOC *PCDROM_TOC;
struct _CDROM_PLAY_AUDIO_MSF
{
  UCHAR StartingM;
  UCHAR StartingS;
  UCHAR StartingF;
  UCHAR EndingM;
  UCHAR EndingS;
  UCHAR EndingF;
};
typedef struct _CDROM_PLAY_AUDIO_MSF CDROM_PLAY_AUDIO_MSF;
typedef struct _CDROM_PLAY_AUDIO_MSF *PCDROM_PLAY_AUDIO_MSF;
struct _CDROM_SEEK_AUDIO_MSF
{
  UCHAR M;
  UCHAR S;
  UCHAR F;
};
typedef struct _CDROM_SEEK_AUDIO_MSF CDROM_SEEK_AUDIO_MSF;
typedef struct _CDROM_SEEK_AUDIO_MSF *PCDROM_SEEK_AUDIO_MSF;
struct _CDROM_SUB_Q_DATA_FORMAT
{
  UCHAR Format;
  UCHAR Track;
};
struct _SUB_Q_HEADER
{
  UCHAR Reserved;
  UCHAR AudioStatus;
  UCHAR DataLength[2];
};
typedef struct _SUB_Q_HEADER SUB_Q_HEADER;
struct _SUB_Q_CURRENT_POSITION
{
  SUB_Q_HEADER Header;
  UCHAR FormatCode;
  UCHAR Control : 4;
  UCHAR ADR : 4;
  UCHAR TrackNumber;
  UCHAR IndexNumber;
  UCHAR AbsoluteAddress[4];
  UCHAR TrackRelativeAddress[4];
};
typedef struct _SUB_Q_CURRENT_POSITION SUB_Q_CURRENT_POSITION;
typedef struct _SUB_Q_CURRENT_POSITION *PSUB_Q_CURRENT_POSITION;
struct _SUB_Q_MEDIA_CATALOG_NUMBER
{
  SUB_Q_HEADER Header;
  UCHAR FormatCode;
  UCHAR Reserved[3];
  UCHAR Reserved1 : 7;
  UCHAR Mcval : 1;
  UCHAR MediaCatalog[15];
};
typedef struct _SUB_Q_MEDIA_CATALOG_NUMBER SUB_Q_MEDIA_CATALOG_NUMBER;
struct _SUB_Q_TRACK_ISRC
{
  SUB_Q_HEADER Header;
  UCHAR FormatCode;
  UCHAR Reserved0;
  UCHAR Track;
  UCHAR Reserved1;
  UCHAR Reserved2 : 7;
  UCHAR Tcval : 1;
  UCHAR TrackIsrc[15];
};
typedef struct _SUB_Q_TRACK_ISRC SUB_Q_TRACK_ISRC;
union _SUB_Q_CHANNEL_DATA
{
  SUB_Q_CURRENT_POSITION CurrentPosition;
  SUB_Q_MEDIA_CATALOG_NUMBER MediaCatalog;
  SUB_Q_TRACK_ISRC TrackIsrc;
};
typedef union _SUB_Q_CHANNEL_DATA SUB_Q_CHANNEL_DATA;
#pragma pack(push,8)
#pragma pack(pop)
union __anonunion____missing_field_name_116
{
  ULONG InternalStatus;
  ULONG QueueSortKey;
};
struct _SCSI_REQUEST_BLOCK
{
  USHORT Length;
  UCHAR Function;
  UCHAR SrbStatus;
  UCHAR ScsiStatus;
  UCHAR PathId;
  UCHAR TargetId;
  UCHAR Lun;
  UCHAR QueueTag;
  UCHAR QueueAction;
  UCHAR CdbLength;
  UCHAR SenseInfoBufferLength;
  ULONG SrbFlags;
  ULONG DataTransferLength;
  ULONG TimeOutValue;
  PVOID DataBuffer;
  PVOID SenseInfoBuffer;
  struct _SCSI_REQUEST_BLOCK *NextSrb;
  PVOID OriginalRequest;
  PVOID SrbExtension;
  union __anonunion____missing_field_name_116 __annonCompField21;
  UCHAR Cdb[16];
};
struct _CDB6GENERIC
{
  UCHAR OperationCode;
  UCHAR Immediate : 1;
  UCHAR CommandUniqueBits : 4;
  UCHAR LogicalUnitNumber : 3;
  UCHAR CommandUniqueBytes[3];
  UCHAR Link : 1;
  UCHAR Flag : 1;
  UCHAR Reserved : 4;
  UCHAR VendorUnique : 2;
};
struct _CDB6READWRITE
{
  UCHAR OperationCode;
  UCHAR LogicalBlockMsb1 : 5;
  UCHAR LogicalUnitNumber : 3;
  UCHAR LogicalBlockMsb0;
  UCHAR LogicalBlockLsb;
  UCHAR TransferBlocks;
  UCHAR Control;
};
struct _CDB6INQUIRY
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 5;
  UCHAR LogicalUnitNumber : 3;
  UCHAR PageCode;
  UCHAR IReserved;
  UCHAR AllocationLength;
  UCHAR Control;
};
struct _CDB6VERIFY
{
  UCHAR OperationCode;
  UCHAR Fixed : 1;
  UCHAR ByteCompare : 1;
  UCHAR Immediate : 1;
  UCHAR Reserved : 2;
  UCHAR LogicalUnitNumber : 3;
  UCHAR VerificationLength[3];
  UCHAR Control;
};
struct _CDB6FORMAT
{
  UCHAR OperationCode;
  UCHAR FormatControl : 5;
  UCHAR LogicalUnitNumber : 3;
  UCHAR FReserved1;
  UCHAR InterleaveMsb;
  UCHAR InterleaveLsb;
  UCHAR FReserved2;
};
struct _CDB10
{
  UCHAR OperationCode;
  UCHAR RelativeAddress : 1;
  UCHAR Reserved1 : 2;
  UCHAR ForceUnitAccess : 1;
  UCHAR DisablePageOut : 1;
  UCHAR LogicalUnitNumber : 3;
  UCHAR LogicalBlockByte0;
  UCHAR LogicalBlockByte1;
  UCHAR LogicalBlockByte2;
  UCHAR LogicalBlockByte3;
  UCHAR Reserved2;
  UCHAR TransferBlocksMsb;
  UCHAR TransferBlocksLsb;
  UCHAR Control;
};
struct _CDB12
{
  UCHAR OperationCode;
  UCHAR RelativeAddress : 1;
  UCHAR Reserved1 : 2;
  UCHAR ForceUnitAccess : 1;
  UCHAR DisablePageOut : 1;
  UCHAR LogicalUnitNumber : 3;
  UCHAR LogicalBlock[4];
  UCHAR TransferLength[4];
  UCHAR Reserved2;
  UCHAR Control;
};
struct _PAUSE_RESUME
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 5;
  UCHAR LogicalUnitNumber : 3;
  UCHAR Reserved2[6];
  UCHAR Action;
  UCHAR Control;
};
struct _READ_TOC
{
  UCHAR OperationCode;
  UCHAR Reserved0 : 1;
  UCHAR Msf : 1;
  UCHAR Reserved1 : 3;
  UCHAR LogicalUnitNumber : 3;
  UCHAR Format2 : 4;
  UCHAR Reserved2 : 4;
  UCHAR Reserved3[3];
  UCHAR StartingTrack;
  UCHAR AllocationLength[2];
  UCHAR Control : 6;
  UCHAR Format : 2;
};
struct _READ_DISK_INFORMATION
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 5;
  UCHAR Lun : 3;
  UCHAR Reserved2[5];
  UCHAR AllocationLength[2];
  UCHAR Control;
};
struct _READ_TRACK_INFORMATION
{
  UCHAR OperationCode;
  UCHAR Track : 1;
  UCHAR Reserved1 : 3;
  UCHAR Reserved2 : 1;
  UCHAR Lun : 3;
  UCHAR BlockAddress[4];
  UCHAR Reserved3;
  UCHAR AllocationLength[2];
  UCHAR Control;
};
struct _READ_HEADER
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 1;
  UCHAR Msf : 1;
  UCHAR Reserved2 : 3;
  UCHAR Lun : 3;
  UCHAR LogicalBlockAddress[4];
  UCHAR Reserved3;
  UCHAR AllocationLength[2];
  UCHAR Control;
};
struct _PLAY_AUDIO
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 5;
  UCHAR LogicalUnitNumber : 3;
  UCHAR StartingBlockAddress[4];
  UCHAR Reserved2;
  UCHAR PlayLength[2];
  UCHAR Control;
};
struct _PLAY_AUDIO_MSF
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 5;
  UCHAR LogicalUnitNumber : 3;
  UCHAR Reserved2;
  UCHAR StartingM;
  UCHAR StartingS;
  UCHAR StartingF;
  UCHAR EndingM;
  UCHAR EndingS;
  UCHAR EndingF;
  UCHAR Control;
};
struct _LBA
{
  UCHAR StartingBlockAddress[4];
  UCHAR PlayLength[4];
};
struct _MSF
{
  UCHAR Reserved1;
  UCHAR StartingM;
  UCHAR StartingS;
  UCHAR StartingF;
  UCHAR EndingM;
  UCHAR EndingS;
  UCHAR EndingF;
  UCHAR Reserved2;
};
union __anonunion____missing_field_name_117
{
  struct _LBA LBA;
  struct _MSF MSF;
};
struct _PLAY_CD
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 1;
  UCHAR CMSF : 1;
  UCHAR ExpectedSectorType : 3;
  UCHAR Lun : 3;
  union __anonunion____missing_field_name_117 __annonCompField22;
  UCHAR Audio : 1;
  UCHAR Composite : 1;
  UCHAR Port1 : 1;
  UCHAR Port2 : 1;
  UCHAR Reserved2 : 3;
  UCHAR Speed : 1;
  UCHAR Control;
};
struct _SCAN_CD
{
  UCHAR OperationCode;
  UCHAR RelativeAddress : 1;
  UCHAR Reserved1 : 3;
  UCHAR Direct : 1;
  UCHAR Lun : 3;
  UCHAR StartingAddress[4];
  UCHAR Reserved2[3];
  UCHAR Reserved3 : 6;
  UCHAR Type : 2;
  UCHAR Reserved4;
  UCHAR Control;
};
struct _STOP_PLAY_SCAN
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 5;
  UCHAR Lun : 3;
  UCHAR Reserved2[7];
  UCHAR Control;
};
struct _SUBCHANNEL
{
  UCHAR OperationCode;
  UCHAR Reserved0 : 1;
  UCHAR Msf : 1;
  UCHAR Reserved1 : 3;
  UCHAR LogicalUnitNumber : 3;
  UCHAR Reserved2 : 6;
  UCHAR SubQ : 1;
  UCHAR Reserved3 : 1;
  UCHAR Format;
  UCHAR Reserved4[2];
  UCHAR TrackNumber;
  UCHAR AllocationLength[2];
  UCHAR Control;
};
struct _READ_CD
{
  UCHAR OperationCode;
  UCHAR RelativeAddress : 1;
  UCHAR Reserved0 : 1;
  UCHAR ExpectedSectorType : 3;
  UCHAR Lun : 3;
  UCHAR StartingLBA[4];
  UCHAR TransferBlocks[3];
  UCHAR Reserved2 : 1;
  UCHAR ErrorFlags : 2;
  UCHAR IncludeEDC : 1;
  UCHAR IncludeUserData : 1;
  UCHAR HeaderCode : 2;
  UCHAR IncludeSyncData : 1;
  UCHAR SubChannelSelection : 3;
  UCHAR Reserved3 : 5;
  UCHAR Control;
};
struct _READ_CD_MSF
{
  UCHAR OperationCode;
  UCHAR RelativeAddress : 1;
  UCHAR Reserved1 : 1;
  UCHAR ExpectedSectorType : 3;
  UCHAR Lun : 3;
  UCHAR Reserved2;
  UCHAR StartingM;
  UCHAR StartingS;
  UCHAR StartingF;
  UCHAR EndingM;
  UCHAR EndingS;
  UCHAR EndingF;
  UCHAR Reserved3;
  UCHAR Reserved4 : 1;
  UCHAR ErrorFlags : 2;
  UCHAR IncludeEDC : 1;
  UCHAR IncludeUserData : 1;
  UCHAR HeaderCode : 2;
  UCHAR IncludeSyncData : 1;
  UCHAR SubChannelSelection : 3;
  UCHAR Reserved5 : 5;
  UCHAR Control;
};
struct _PLXTR_READ_CDDA
{
  UCHAR OperationCode;
  UCHAR Reserved0 : 5;
  UCHAR LogicalUnitNumber : 3;
  UCHAR LogicalBlockByte0;
  UCHAR LogicalBlockByte1;
  UCHAR LogicalBlockByte2;
  UCHAR LogicalBlockByte3;
  UCHAR TransferBlockByte0;
  UCHAR TransferBlockByte1;
  UCHAR TransferBlockByte2;
  UCHAR TransferBlockByte3;
  UCHAR SubCode;
  UCHAR Control;
};
struct _NEC_READ_CDDA
{
  UCHAR OperationCode;
  UCHAR Reserved0;
  UCHAR LogicalBlockByte0;
  UCHAR LogicalBlockByte1;
  UCHAR LogicalBlockByte2;
  UCHAR LogicalBlockByte3;
  UCHAR Reserved1;
  UCHAR TransferBlockByte0;
  UCHAR TransferBlockByte1;
  UCHAR Control;
};
struct _MODE_SENSE
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 3;
  UCHAR Dbd : 1;
  UCHAR Reserved2 : 1;
  UCHAR LogicalUnitNumber : 3;
  UCHAR PageCode : 6;
  UCHAR Pc : 2;
  UCHAR Reserved3;
  UCHAR AllocationLength;
  UCHAR Control;
};
struct _MODE_SENSE10
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 3;
  UCHAR Dbd : 1;
  UCHAR Reserved2 : 1;
  UCHAR LogicalUnitNumber : 3;
  UCHAR PageCode : 6;
  UCHAR Pc : 2;
  UCHAR Reserved3[4];
  UCHAR AllocationLength[2];
  UCHAR Control;
};
struct _MODE_SELECT
{
  UCHAR OperationCode;
  UCHAR SPBit : 1;
  UCHAR Reserved1 : 3;
  UCHAR PFBit : 1;
  UCHAR LogicalUnitNumber : 3;
  UCHAR Reserved2[2];
  UCHAR ParameterListLength;
  UCHAR Control;
};
struct _MODE_SELECT10
{
  UCHAR OperationCode;
  UCHAR SPBit : 1;
  UCHAR Reserved1 : 3;
  UCHAR PFBit : 1;
  UCHAR LogicalUnitNumber : 3;
  UCHAR Reserved2[5];
  UCHAR ParameterListLength[2];
  UCHAR Control;
};
struct _LOCATE
{
  UCHAR OperationCode;
  UCHAR Immediate : 1;
  UCHAR CPBit : 1;
  UCHAR BTBit : 1;
  UCHAR Reserved1 : 2;
  UCHAR LogicalUnitNumber : 3;
  UCHAR Reserved3;
  UCHAR LogicalBlockAddress[4];
  UCHAR Reserved4;
  UCHAR Partition;
  UCHAR Control;
};
struct _LOGSENSE
{
  UCHAR OperationCode;
  UCHAR SPBit : 1;
  UCHAR PPCBit : 1;
  UCHAR Reserved1 : 3;
  UCHAR LogicalUnitNumber : 3;
  UCHAR PageCode : 6;
  UCHAR PCBit : 2;
  UCHAR Reserved2;
  UCHAR Reserved3;
  UCHAR ParameterPointer[2];
  UCHAR AllocationLength[2];
  UCHAR Control;
};
struct _LOGSELECT
{
  UCHAR OperationCode;
  UCHAR SPBit : 1;
  UCHAR PCRBit : 1;
  UCHAR Reserved1 : 3;
  UCHAR LogicalUnitNumber : 3;
  UCHAR Reserved : 6;
  UCHAR PCBit : 2;
  UCHAR Reserved2[4];
  UCHAR ParameterListLength[2];
  UCHAR Control;
};
struct _PRINT
{
  UCHAR OperationCode;
  UCHAR Reserved : 5;
  UCHAR LogicalUnitNumber : 3;
  UCHAR TransferLength[3];
  UCHAR Control;
};
struct _SEEK
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 5;
  UCHAR LogicalUnitNumber : 3;
  UCHAR LogicalBlockAddress[4];
  UCHAR Reserved2[3];
  UCHAR Control;
};
struct _ERASE
{
  UCHAR OperationCode;
  UCHAR Long : 1;
  UCHAR Immediate : 1;
  UCHAR Reserved1 : 3;
  UCHAR LogicalUnitNumber : 3;
  UCHAR Reserved2[3];
  UCHAR Control;
};
struct _START_STOP
{
  UCHAR OperationCode;
  UCHAR Immediate : 1;
  UCHAR Reserved1 : 4;
  UCHAR LogicalUnitNumber : 3;
  UCHAR Reserved2[2];
  UCHAR Start : 1;
  UCHAR LoadEject : 1;
  UCHAR Reserved3 : 6;
  UCHAR Control;
};
struct _MEDIA_REMOVAL
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 5;
  UCHAR LogicalUnitNumber : 3;
  UCHAR Reserved2[2];
  UCHAR Prevent : 1;
  UCHAR Persistant : 1;
  UCHAR Reserved3 : 6;
  UCHAR Control;
};
struct _SEEK_BLOCK
{
  UCHAR OperationCode;
  UCHAR Immediate : 1;
  UCHAR Reserved1 : 7;
  UCHAR BlockAddress[3];
  UCHAR Link : 1;
  UCHAR Flag : 1;
  UCHAR Reserved2 : 4;
  UCHAR VendorUnique : 2;
};
struct _REQUEST_BLOCK_ADDRESS
{
  UCHAR OperationCode;
  UCHAR Reserved1[3];
  UCHAR AllocationLength;
  UCHAR Link : 1;
  UCHAR Flag : 1;
  UCHAR Reserved2 : 4;
  UCHAR VendorUnique : 2;
};
struct _PARTITION
{
  UCHAR OperationCode;
  UCHAR Immediate : 1;
  UCHAR Sel : 1;
  UCHAR PartitionSelect : 6;
  UCHAR Reserved1[3];
  UCHAR Control;
};
struct _WRITE_TAPE_MARKS
{
  UCHAR OperationCode;
  UCHAR Immediate : 1;
  UCHAR WriteSetMarks : 1;
  UCHAR Reserved : 3;
  UCHAR LogicalUnitNumber : 3;
  UCHAR TransferLength[3];
  UCHAR Control;
};
struct __anonstruct_Fields_119
{
  UCHAR Link : 1;
  UCHAR Flag : 1;
  UCHAR Reserved : 4;
  UCHAR VendorUnique : 2;
};
union __anonunion_Byte6_118
{
  UCHAR value;
  struct __anonstruct_Fields_119 Fields;
};
struct _SPACE_TAPE_MARKS
{
  UCHAR OperationCode;
  UCHAR Code : 3;
  UCHAR Reserved : 2;
  UCHAR LogicalUnitNumber : 3;
  UCHAR NumMarksMSB;
  UCHAR NumMarks;
  UCHAR NumMarksLSB;
  union __anonunion_Byte6_118 Byte6;
};
struct _READ_POSITION
{
  UCHAR Operation;
  UCHAR BlockType : 1;
  UCHAR Reserved1 : 4;
  UCHAR Lun : 3;
  UCHAR Reserved2[7];
  UCHAR Control;
};
struct _CDB6READWRITETAPE
{
  UCHAR OperationCode;
  UCHAR VendorSpecific : 5;
  UCHAR Reserved : 3;
  UCHAR TransferLenMSB;
  UCHAR TransferLen;
  UCHAR TransferLenLSB;
  UCHAR Link : 1;
  UCHAR Flag : 1;
  UCHAR Reserved1 : 4;
  UCHAR VendorUnique : 2;
};
struct _INIT_ELEMENT_STATUS
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 5;
  UCHAR LogicalUnitNubmer : 3;
  UCHAR Reserved2[3];
  UCHAR Reserved3 : 7;
  UCHAR NoBarCode : 1;
};
struct _INITIALIZE_ELEMENT_RANGE
{
  UCHAR OperationCode;
  UCHAR Range : 1;
  UCHAR Reserved1 : 4;
  UCHAR LogicalUnitNubmer : 3;
  UCHAR FirstElementAddress[2];
  UCHAR Reserved2[2];
  UCHAR NumberOfElements[2];
  UCHAR Reserved3;
  UCHAR Reserved4 : 7;
  UCHAR NoBarCode : 1;
};
struct _POSITION_TO_ELEMENT
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 5;
  UCHAR LogicalUnitNumber : 3;
  UCHAR TransportElementAddress[2];
  UCHAR DestinationElementAddress[2];
  UCHAR Reserved2[2];
  UCHAR Flip : 1;
  UCHAR Reserved3 : 7;
  UCHAR Control;
};
struct _MOVE_MEDIUM
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 5;
  UCHAR LogicalUnitNumber : 3;
  UCHAR TransportElementAddress[2];
  UCHAR SourceElementAddress[2];
  UCHAR DestinationElementAddress[2];
  UCHAR Reserved2[2];
  UCHAR Flip : 1;
  UCHAR Reserved3 : 7;
  UCHAR Control;
};
struct _EXCHANGE_MEDIUM
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 5;
  UCHAR LogicalUnitNumber : 3;
  UCHAR TransportElementAddress[2];
  UCHAR SourceElementAddress[2];
  UCHAR Destination1ElementAddress[2];
  UCHAR Destination2ElementAddress[2];
  UCHAR Flip1 : 1;
  UCHAR Flip2 : 1;
  UCHAR Reserved3 : 6;
  UCHAR Control;
};
struct _READ_ELEMENT_STATUS
{
  UCHAR OperationCode;
  UCHAR ElementType : 4;
  UCHAR VolTag : 1;
  UCHAR LogicalUnitNumber : 3;
  UCHAR StartingElementAddress[2];
  UCHAR NumberOfElements[2];
  UCHAR Reserved1;
  UCHAR AllocationLength[3];
  UCHAR Reserved2;
  UCHAR Control;
};
struct _SEND_VOLUME_TAG
{
  UCHAR OperationCode;
  UCHAR ElementType : 4;
  UCHAR Reserved1 : 1;
  UCHAR LogicalUnitNumber : 3;
  UCHAR StartingElementAddress[2];
  UCHAR Reserved2;
  UCHAR ActionCode : 5;
  UCHAR Reserved3 : 3;
  UCHAR Reserved4[2];
  UCHAR ParameterListLength[2];
  UCHAR Reserved5;
  UCHAR Control;
};
struct _REQUEST_VOLUME_ELEMENT_ADDRESS
{
  UCHAR OperationCode;
  UCHAR ElementType : 4;
  UCHAR VolTag : 1;
  UCHAR LogicalUnitNumber : 3;
  UCHAR StartingElementAddress[2];
  UCHAR NumberElements[2];
  UCHAR Reserved1;
  UCHAR AllocationLength[3];
  UCHAR Reserved2;
  UCHAR Control;
};
struct _LOAD_UNLOAD
{
  UCHAR OperationCode;
  UCHAR Immediate : 1;
  UCHAR Reserved1 : 4;
  UCHAR Lun : 3;
  UCHAR Reserved2[2];
  UCHAR Start : 1;
  UCHAR LoadEject : 1;
  UCHAR Reserved3 : 6;
  UCHAR Reserved4[3];
  UCHAR Slot;
  UCHAR Reserved5[3];
};
struct _MECH_STATUS
{
  UCHAR OperationCode;
  UCHAR Reserved : 5;
  UCHAR Lun : 3;
  UCHAR Reserved1[6];
  UCHAR AllocationLength[2];
  UCHAR Reserved2[1];
  UCHAR Control;
};
struct _SYNCHRONIZE_CACHE10
{
  UCHAR OperationCode;
  UCHAR RelAddr : 1;
  UCHAR Immediate : 1;
  UCHAR Reserved : 3;
  UCHAR Lun : 3;
  UCHAR LogicalBlockAddress[4];
  UCHAR Reserved2;
  UCHAR BlockCount[2];
  UCHAR Control;
};
struct _GET_EVENT_STATUS_NOTIFICATION
{
  UCHAR OperationCode;
  UCHAR Immediate : 1;
  UCHAR Reserved : 4;
  UCHAR Lun : 3;
  UCHAR Reserved2[2];
  UCHAR NotificationClassRequest;
  UCHAR Reserved3[2];
  UCHAR EventListLength[2];
  UCHAR Control;
};
struct _READ_DVD_STRUCTURE
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 5;
  UCHAR Lun : 3;
  UCHAR RMDBlockNumber[4];
  UCHAR LayerNumber;
  UCHAR Format;
  UCHAR AllocationLength[2];
  UCHAR Reserved3 : 6;
  UCHAR AGID : 2;
  UCHAR Control;
};
struct _SEND_KEY
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 5;
  UCHAR Lun : 3;
  UCHAR Reserved2[6];
  UCHAR ParameterListLength[2];
  UCHAR KeyFormat : 6;
  UCHAR AGID : 2;
  UCHAR Control;
};
struct _REPORT_KEY
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 5;
  UCHAR Lun : 3;
  UCHAR LogicalBlockAddress[4];
  UCHAR Reserved2[2];
  UCHAR AllocationLength[2];
  UCHAR KeyFormat : 6;
  UCHAR AGID : 2;
  UCHAR Control;
};
struct _SET_READ_AHEAD
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 5;
  UCHAR Lun : 3;
  UCHAR TriggerLBA[4];
  UCHAR ReadAheadLBA[4];
  UCHAR Reserved2;
  UCHAR Control;
};
struct _READ_FORMATTED_CAPACITIES
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 5;
  UCHAR Lun : 3;
  UCHAR Reserved2[5];
  UCHAR AllocationLength[2];
  UCHAR Control;
};
struct _REPORT_LUNS
{
  UCHAR OperationCode;
  UCHAR Reserved1[5];
  UCHAR AllocationLength[4];
  UCHAR Reserved2[1];
  UCHAR Control;
};
union _CDB
{
  struct _CDB6GENERIC CDB6GENERIC;
  struct _CDB6GENERIC *PCDB6GENERIC;
  struct _CDB6READWRITE CDB6READWRITE;
  struct _CDB6READWRITE *PCDB6READWRITE;
  struct _CDB6INQUIRY CDB6INQUIRY;
  struct _CDB6INQUIRY *PCDB6INQUIRY;
  struct _CDB6VERIFY CDB6VERIFY;
  struct _CDB6VERIFY *PCDB6VERIFY;
  struct _CDB6FORMAT CDB6FORMAT;
  struct _CDB6FORMAT *PCDB6FORMAT;
  struct _CDB10 CDB10;
  struct _CDB10 *PCDB10;
  struct _CDB12 CDB12;
  struct _CDB12 *PCDB12;
  struct _PAUSE_RESUME PAUSE_RESUME;
  struct _PAUSE_RESUME *PPAUSE_RESUME;
  struct _READ_TOC READ_TOC;
  struct _READ_TOC *PREAD_TOC;
  struct _READ_DISK_INFORMATION READ_DISK_INFORMATION;
  struct _READ_DISK_INFORMATION *PREAD_DISK_INFORMATION;
  struct _READ_TRACK_INFORMATION READ_TRACK_INFORMATION;
  struct _READ_TRACK_INFORMATION *PREAD_TRACK_INFORMATION;
  struct _READ_HEADER READ_HEADER;
  struct _READ_HEADER *PREAD_HEADER;
  struct _PLAY_AUDIO PLAY_AUDIO;
  struct _PLAY_AUDIO *PPLAY_AUDIO;
  struct _PLAY_AUDIO_MSF PLAY_AUDIO_MSF;
  struct _PLAY_AUDIO_MSF *PPLAY_AUDIO_MSF;
  struct _PLAY_CD PLAY_CD;
  struct _PLAY_CD *PPLAY_CD;
  struct _SCAN_CD SCAN_CD;
  struct _SCAN_CD *PSCAN_CD;
  struct _STOP_PLAY_SCAN STOP_PLAY_SCAN;
  struct _STOP_PLAY_SCAN *PSTOP_PLAY_SCAN;
  struct _SUBCHANNEL SUBCHANNEL;
  struct _SUBCHANNEL *PSUBCHANNEL;
  struct _READ_CD READ_CD;
  struct _READ_CD *PREAD_CD;
  struct _READ_CD_MSF READ_CD_MSF;
  struct _READ_CD_MSF *PREAD_CD_MSF;
  struct _PLXTR_READ_CDDA PLXTR_READ_CDDA;
  struct _PLXTR_READ_CDDA *PPLXTR_READ_CDDA;
  struct _NEC_READ_CDDA NEC_READ_CDDA;
  struct _NEC_READ_CDDA *PNEC_READ_CDDA;
  struct _MODE_SENSE MODE_SENSE;
  struct _MODE_SENSE *PMODE_SENSE;
  struct _MODE_SENSE10 MODE_SENSE10;
  struct _MODE_SENSE10 *PMODE_SENSE10;
  struct _MODE_SELECT MODE_SELECT;
  struct _MODE_SELECT *PMODE_SELECT;
  struct _MODE_SELECT10 MODE_SELECT10;
  struct _MODE_SELECT10 *PMODE_SELECT10;
  struct _LOCATE LOCATE;
  struct _LOCATE *PLOCATE;
  struct _LOGSENSE LOGSENSE;
  struct _LOGSENSE *PLOGSENSE;
  struct _LOGSELECT LOGSELECT;
  struct _LOGSELECT *PLOGSELECT;
  struct _PRINT PRINT;
  struct _PRINT *PPRINT;
  struct _SEEK SEEK;
  struct _SEEK *PSEEK;
  struct _ERASE ERASE;
  struct _ERASE *PERASE;
  struct _START_STOP START_STOP;
  struct _START_STOP *PSTART_STOP;
  struct _MEDIA_REMOVAL MEDIA_REMOVAL;
  struct _MEDIA_REMOVAL *PMEDIA_REMOVAL;
  struct _SEEK_BLOCK SEEK_BLOCK;
  struct _SEEK_BLOCK *PSEEK_BLOCK;
  struct _REQUEST_BLOCK_ADDRESS REQUEST_BLOCK_ADDRESS;
  struct _REQUEST_BLOCK_ADDRESS *PREQUEST_BLOCK_ADDRESS;
  struct _PARTITION PARTITION;
  struct _PARTITION *PPARTITION;
  struct _WRITE_TAPE_MARKS WRITE_TAPE_MARKS;
  struct _WRITE_TAPE_MARKS *PWRITE_TAPE_MARKS;
  struct _SPACE_TAPE_MARKS SPACE_TAPE_MARKS;
  struct _SPACE_TAPE_MARKS *PSPACE_TAPE_MARKS;
  struct _READ_POSITION READ_POSITION;
  struct _READ_POSITION *PREAD_POSITION;
  struct _CDB6READWRITETAPE CDB6READWRITETAPE;
  struct _CDB6READWRITETAPE *PCDB6READWRITETAPE;
  struct _INIT_ELEMENT_STATUS INIT_ELEMENT_STATUS;
  struct _INIT_ELEMENT_STATUS *PINIT_ELEMENT_STATUS;
  struct _INITIALIZE_ELEMENT_RANGE INITIALIZE_ELEMENT_RANGE;
  struct _INITIALIZE_ELEMENT_RANGE *PINITIALIZE_ELEMENT_RANGE;
  struct _POSITION_TO_ELEMENT POSITION_TO_ELEMENT;
  struct _POSITION_TO_ELEMENT *PPOSITION_TO_ELEMENT;
  struct _MOVE_MEDIUM MOVE_MEDIUM;
  struct _MOVE_MEDIUM *PMOVE_MEDIUM;
  struct _EXCHANGE_MEDIUM EXCHANGE_MEDIUM;
  struct _EXCHANGE_MEDIUM *PEXCHANGE_MEDIUM;
  struct _READ_ELEMENT_STATUS READ_ELEMENT_STATUS;
  struct _READ_ELEMENT_STATUS *PREAD_ELEMENT_STATUS;
  struct _SEND_VOLUME_TAG SEND_VOLUME_TAG;
  struct _SEND_VOLUME_TAG *PSEND_VOLUME_TAG;
  struct _REQUEST_VOLUME_ELEMENT_ADDRESS REQUEST_VOLUME_ELEMENT_ADDRESS;
  struct _REQUEST_VOLUME_ELEMENT_ADDRESS *PREQUEST_VOLUME_ELEMENT_ADDRESS;
  struct _LOAD_UNLOAD LOAD_UNLOAD;
  struct _LOAD_UNLOAD *PLOAD_UNLOAD;
  struct _MECH_STATUS MECH_STATUS;
  struct _MECH_STATUS *PMECH_STATUS;
  struct _SYNCHRONIZE_CACHE10 SYNCHRONIZE_CACHE10;
  struct _SYNCHRONIZE_CACHE10 *PSYNCHRONIZE_CACHE10;
  struct _GET_EVENT_STATUS_NOTIFICATION GET_EVENT_STATUS_NOTIFICATION;
  struct _GET_EVENT_STATUS_NOTIFICATION *PGET_EVENT_STATUS_NOTIFICATION;
  struct _READ_DVD_STRUCTURE READ_DVD_STRUCTURE;
  struct _READ_DVD_STRUCTURE *PREAD_DVD_STRUCTURE;
  struct _SEND_KEY SEND_KEY;
  struct _SEND_KEY *PSEND_KEY;
  struct _REPORT_KEY REPORT_KEY;
  struct _REPORT_KEY *PREPORT_KEY;
  struct _SET_READ_AHEAD SET_READ_AHEAD;
  struct _SET_READ_AHEAD *PSET_READ_AHEAD;
  struct _READ_FORMATTED_CAPACITIES READ_FORMATTED_CAPACITIES;
  struct _READ_FORMATTED_CAPACITIES *PREAD_FORMATTED_CAPACITIES;
  struct _REPORT_LUNS REPORT_LUNS;
  struct _REPORT_LUNS *PREPORT_LUNS;
  ULONG AsUlong[4];
  UCHAR AsByte[16];
};
typedef union _CDB *PCDB;
#pragma pack(1)
#pragma pack()
struct _INQUIRYDATA
{
  UCHAR DeviceType : 5;
  UCHAR DeviceTypeQualifier : 3;
  UCHAR DeviceTypeModifier : 7;
  UCHAR RemovableMedia : 1;
  UCHAR Versions;
  UCHAR ResponseDataFormat : 4;
  UCHAR HiSupport : 1;
  UCHAR NormACA : 1;
  UCHAR ReservedBit : 1;
  UCHAR AERC : 1;
  UCHAR AdditionalLength;
  UCHAR Reserved[2];
  UCHAR SoftReset : 1;
  UCHAR CommandQueue : 1;
  UCHAR Reserved2 : 1;
  UCHAR LinkedCommands : 1;
  UCHAR Synchronous : 1;
  UCHAR Wide16Bit : 1;
  UCHAR Wide32Bit : 1;
  UCHAR RelativeAddressing : 1;
  UCHAR VendorId[8];
  UCHAR ProductId[16];
  UCHAR ProductRevisionLevel[4];
  UCHAR VendorSpecific[20];
  UCHAR Reserved3[40];
};
typedef struct _INQUIRYDATA *PINQUIRYDATA;
struct _READ_CAPACITY_DATA
{
  ULONG LogicalBlockAddress;
  ULONG BytesPerBlock;
};
typedef struct _READ_CAPACITY_DATA READ_CAPACITY_DATA;
typedef struct _READ_CAPACITY_DATA *PREAD_CAPACITY_DATA;
struct _CD_DEVICE_EXTENSION
{
  PDEVICE_OBJECT TargetDeviceObject;
  PDEVICE_OBJECT TargetPdo;
  PDEVICE_OBJECT DeviceObject;
  ULONG PagingPathCount;
  KEVENT PagingPathCountEvent;
  PRKDPC Dpc;
  PKTIMER Timer;
  LONG Sync;
  UCHAR Active;
  UCHAR Paused;
  UCHAR PausedM;
  UCHAR PausedS;
  UCHAR PausedF;
  UCHAR LastEndM;
  UCHAR LastEndS;
  UCHAR LastEndF;
  BOOLEAN PlayActive;
};
typedef struct _CD_DEVICE_EXTENSION CD_DEVICE_EXTENSION;
typedef struct _CD_DEVICE_EXTENSION *PCD_DEVICE_EXTENSION;
struct _NEC_READ_TOC
{
  UCHAR OperationCode;
  UCHAR Type : 2;
  UCHAR Reserved1 : 6;
  UCHAR TrackNumber;
  UCHAR Reserved2[6];
  UCHAR Control;
};
struct _NEC_PLAY_AUDIO
{
  UCHAR OperationCode;
  UCHAR PlayMode : 3;
  UCHAR Reserved1 : 5;
  UCHAR Minute;
  UCHAR Second;
  UCHAR Frame;
  UCHAR Reserved2[4];
  UCHAR Control;
};
struct _NEC_SEEK_AUDIO
{
  UCHAR OperationCode;
  UCHAR Play : 1;
  UCHAR Reserved1 : 7;
  UCHAR Minute;
  UCHAR Second;
  UCHAR Frame;
  UCHAR Reserved2[4];
  UCHAR Control;
};
struct _NEC_PAUSE_AUDIO
{
  UCHAR OperationCode;
  UCHAR Reserved1[8];
  UCHAR Control;
};
struct _NEC_READ_Q_CHANNEL
{
  UCHAR OperationCode;
  UCHAR TransferSize : 5;
  UCHAR Reserved1 : 3;
  UCHAR Reserved2[7];
  UCHAR Control;
};
struct _NEC_EJECT
{
  UCHAR OperationCode;
  UCHAR Immediate : 1;
  UCHAR Reserved1 : 7;
  UCHAR Reserved2[7];
  UCHAR Control;
};
union _NEC_CDB
{
  struct _NEC_READ_TOC NEC_READ_TOC;
  struct _NEC_READ_TOC *PNEC_READ_TOC;
  struct _NEC_PLAY_AUDIO NEC_PLAY_AUDIO;
  struct _NEC_PLAY_AUDIO *PNEC_PLAY_AUDIO;
  struct _NEC_SEEK_AUDIO NEC_SEEK_AUDIO;
  struct _NEC_SEEK_AUDIO *PNEC_SEEK_AUDIO;
  struct _NEC_PAUSE_AUDIO NEC_PAUSE_AUDIO;
  struct _NEC_PAUSE_AUDIO *PNEC_PAUSE_AUDIO;
  struct _NEC_READ_Q_CHANNEL NEC_READ_Q_CHANNEL;
  struct _NEC_READ_Q_CHANNEL *PNEC_READ_Q_CHANNEL;
  struct _NEC_EJECT NEC_EJECT;
  struct _NEC_EJECT *PNEC_EJECT;
};
typedef union _NEC_CDB *PNEC_CDB;
struct _PNR_START_STOP
{
  UCHAR OperationCode;
  UCHAR Immediate : 1;
  UCHAR Reserved1 : 4;
  UCHAR Lun : 3;
  UCHAR Reserved2 : 7;
  UCHAR PCF : 1;
  UCHAR Reserved3;
  UCHAR Start : 1;
  UCHAR Eject : 1;
  UCHAR Reserved4 : 6;
  UCHAR Link : 1;
  UCHAR Flag : 1;
  UCHAR Reserved5 : 4;
  UCHAR Vendor : 2;
};
struct _PNR_READ_TOC
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 5;
  UCHAR Lun : 3;
  UCHAR Reserved2[3];
  UCHAR TrackNumber;
  UCHAR Reserved3;
  UCHAR AssignedLength[2];
  UCHAR Link : 1;
  UCHAR Flag : 1;
  UCHAR Reserved4 : 4;
  UCHAR Type : 2;
};
struct _PNR_PLAY_AUDIO
{
  UCHAR OperationCode;
  UCHAR PlayMode : 4;
  UCHAR StopAddr : 1;
  UCHAR Lun : 3;
  UCHAR Reserved1;
  UCHAR Minute;
  UCHAR Second;
  UCHAR Frame;
  UCHAR Reserved2[3];
  UCHAR Link : 1;
  UCHAR Flag : 1;
  UCHAR Reserved3 : 4;
  UCHAR Type : 2;
};
struct _PNR_SEEK_AUDIO
{
  UCHAR OperationCode;
  UCHAR PlayMode : 4;
  UCHAR PlayBack : 1;
  UCHAR Lun : 3;
  UCHAR Reserved1;
  UCHAR Minute;
  UCHAR Second;
  UCHAR Frame;
  UCHAR Reserved2[3];
  UCHAR Link : 1;
  UCHAR Flag : 1;
  UCHAR Reserved3 : 4;
  UCHAR Type : 2;
};
struct _PNR_PAUSE_AUDIO
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 4;
  UCHAR Pause : 1;
  UCHAR Lun : 3;
  UCHAR Reserved2[7];
  UCHAR Link : 1;
  UCHAR Flag : 1;
  UCHAR Reserved3 : 4;
  UCHAR Reserved4 : 2;
};
struct _PNR_AUDIO_STATUS
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 4;
  UCHAR Reserved2 : 1;
  UCHAR Lun : 3;
  UCHAR Reserved3[6];
  UCHAR AssignedLength;
  UCHAR Link : 1;
  UCHAR Flag : 1;
  UCHAR Reserved4 : 4;
  UCHAR Reserved5 : 2;
};
struct _PNR_READ_Q_CHANNEL
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 4;
  UCHAR Reserved2 : 1;
  UCHAR Lun : 3;
  UCHAR Reserved3[6];
  UCHAR AssignedLength;
  UCHAR Link : 1;
  UCHAR Flag : 1;
  UCHAR Reserved4 : 4;
  UCHAR Reserved5 : 2;
};
struct _PNR_EJECT
{
  UCHAR OperationCode;
  UCHAR Immediate : 1;
  UCHAR Reserved1 : 4;
  UCHAR Lun : 3;
  UCHAR Reserved2[7];
  UCHAR Link : 1;
  UCHAR Flag : 1;
  UCHAR Reserved4 : 4;
  UCHAR Reserved5 : 2;
};
struct _PNR_READ_STATUS
{
  UCHAR OperationCode;
  UCHAR Reserved1 : 4;
  UCHAR Lun : 3;
  UCHAR PageCode : 5;
  UCHAR PCField : 1;
  UCHAR Reserved2[5];
  UCHAR AllocationLengthMsb;
  UCHAR AllocationLengthLsb;
  UCHAR Link : 1;
  UCHAR Flag : 1;
  UCHAR Reserved3 : 4;
  UCHAR Reserved4 : 2;
};
union _PIONEER_CDB
{
  struct _PNR_START_STOP PNR_START_STOP;
  struct _PNR_START_STOP *PPNR_START_STOP;
  struct _PNR_READ_TOC PNR_READ_TOC;
  struct _PNR_READ_TOC *PPNR_READ_TOC;
  struct _PNR_PLAY_AUDIO PNR_PLAY_AUDIO;
  struct _PNR_PLAY_AUDIO *PPNR_PLAY_AUDIO;
  struct _PNR_SEEK_AUDIO PNR_SEEK_AUDIO;
  struct _PNR_SEEK_AUDIO *PPNR_SEEK_AUDIO;
  struct _PNR_PAUSE_AUDIO PNR_PAUSE_AUDIO;
  struct _PNR_PAUSE_AUDIO *PPNR_PAUSE_AUDIO;
  struct _PNR_AUDIO_STATUS PNR_AUDIO_STATUS;
  struct _PNR_AUDIO_STATUS *PPNR_AUDIO_STATUS;
  struct _PNR_READ_Q_CHANNEL PNR_READ_Q_CHANNEL;
  struct _PNR_READ_Q_CHANNEL *PPNR_READ_Q_CHANNEL;
  struct _PNR_EJECT PNR_EJECT;
  struct _PNR_EJECT *PPNR_EJECT;
  struct _PNR_READ_STATUS PNR_READ_STATUS;
  struct _PNR_READ_STATUS *PPNR_READ_STATUS;
};
typedef union _PIONEER_CDB *PPNR_CDB;
struct _READ_DISC_INFO
{
  UCHAR OperationCode;
  UCHAR Reserved : 5;
  UCHAR LogicalUnitNumber : 3;
  UCHAR Reserved1[7];
  UCHAR AllocationLength[2];
  UCHAR Link : 1;
  UCHAR Flag : 1;
  UCHAR Reserved2 : 4;
  UCHAR VendorUniqueBits : 2;
};
struct __anonstruct_PLAY_AUDIO_127
{
  UCHAR OperationCode;
  UCHAR Immediate : 1;
  UCHAR Right : 1;
  UCHAR Left : 1;
  UCHAR Reserved : 2;
  UCHAR Lun : 3;
  UCHAR StartingM;
  UCHAR StartingS;
  UCHAR StartingF;
  UCHAR Reserved1[2];
  UCHAR EndingM;
  UCHAR EndingS;
  UCHAR EndingF;
  UCHAR Reserved2;
  UCHAR Link : 1;
  UCHAR Flag : 1;
  UCHAR Reserved3 : 4;
  UCHAR VendorUniqueBits : 2;
};
struct _PAUSE
{
  UCHAR OperationCode;
  UCHAR Reserved : 5;
  UCHAR Lun : 3;
  UCHAR Reserved1[9];
  UCHAR Link : 1;
  UCHAR Flag : 1;
  UCHAR Reserved2 : 4;
  UCHAR VendorUnqiueBits : 2;
};
struct _EJECT
{
  UCHAR OperationCode;
  UCHAR Reserved : 5;
  UCHAR Lun : 3;
  UCHAR Reserved1[8];
  UCHAR Eject : 1;
  UCHAR Mode : 1;
  UCHAR Reserved2 : 6;
  UCHAR Link : 1;
  UCHAR Flag : 1;
  UCHAR Reserved3 : 4;
  UCHAR VendorUnqiueBits : 2;
};
struct _AUDIO_STATUS
{
  UCHAR OperationCode;
  UCHAR Reserved : 5;
  UCHAR Lun : 3;
  UCHAR Reserved1[9];
  UCHAR Link : 1;
  UCHAR Flag : 1;
  UCHAR Reserved2 : 4;
  UCHAR VendorUnqiueBits : 2;
};
struct _STOP_PLAY
{
  UCHAR OperationCode;
  UCHAR Reserved[11];
};
union _HITACHICDB
{
  struct _READ_DISC_INFO READ_DISC_INFO;
  struct _READ_DISC_INFO *PREAD_DISC_INFO;
  struct __anonstruct_PLAY_AUDIO_127 PLAY_AUDIO;
  struct __anonstruct_PLAY_AUDIO_127 *PPLAY_AUDIO;
  struct _PAUSE PAUSE_AUDIO;
  struct _PAUSE *PPAUSE_AUDIO;
  struct _EJECT EJECT;
  struct _EJECT *PEJECT;
  struct _AUDIO_STATUS AUDIO_STATUS;
  struct _AUDIO_STATUS *PAUDIO_STATUS;
  struct _STOP_PLAY STOP_PLAY;
  struct _STOP_PLAY *PSTOP_PLAY;
};
typedef union _HITACHICDB *PHITACHICDB;
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
extern void *memmove(void *, const void *, size_t);
extern int memcmp(const void *, const void *, size_t);
extern void *memset(void *, int, size_t);
#pragma warning(disable:4103)
#pragma warning(disable:4103)
NTSTATUS RtlQueryRegistryValues(ULONG RelativeTo, PCWSTR Path, PRTL_QUERY_REGISTRY_TABLE QueryTable, PVOID Context, PVOID Environment);
NTSTATUS RtlWriteRegistryValue(ULONG RelativeTo, PCWSTR Path, PCWSTR ValueName, ULONG ValueType, PVOID ValueData, ULONG ValueLength)
{
  if (__VERIFIER_nondet_int("if_1"))
  {
    return (long) 0x00000000;
  }
  else
  {
    return (long) 0xC000000D;
  }

}

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
void MmLockPagableDataSection(PVOID AddressWithinSection)
{
}

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
NTSTATUS IoOpenDeviceRegistryKey(PDEVICE_OBJECT DeviceObject, ULONG DevInstKeyType, ACCESS_MASK DesiredAccess, PHANDLE DevInstRegKey)
{
  if (__VERIFIER_nondet_int("if_2"))
  {
    return (long) 0x00000000;
  }
  else
    if (__VERIFIER_nondet_int("if_3"))
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
#pragma warning(disable:4200)
#pragma warning(default:4200)
NTSTATUS PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp);
void PoStartNextPowerIrp(PIRP Irp);
NTSTATUS ObReferenceObjectByHandle(HANDLE Handle, ACCESS_MASK DesiredAccess, POBJECT_TYPE ObjectType, KPROCESSOR_MODE AccessMode, PVOID *Object, POBJECT_HANDLE_INFORMATION HandleInformation);
void ObfDereferenceObject(PVOID Object);
NTSTATUS ZwClose(HANDLE Handle);
#pragma warning(disable:4200)
#pragma warning(default:4200)
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
int routine;
int myStatus;
int myIrp_PendingReturned;
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

NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath);
NTSTATUS CdAudioReadWrite(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS CdAudioDeviceControl(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS CdAudioSendToNextDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp);
BOOLEAN CdAudioIsPlayActive(PDEVICE_OBJECT DeviceObject);
BOOLEAN NecSupportNeeded(PUCHAR InquiryData);
NTSTATUS CdAudioNECDeviceControl(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS CdAudioPioneerDeviceControl(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS CdAudioDenonDeviceControl(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS CdAudioHitachiSendPauseCommand(PDEVICE_OBJECT DeviceObject);
NTSTATUS CdAudioHitachiDeviceControl(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS CdAudio535DeviceControl(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS CdAudio435DeviceControl(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS CdAudioAtapiDeviceControl(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS CdAudioHPCdrDeviceControl(PDEVICE_OBJECT DeviceObject, PIRP Irp);
void HpCdrProcessLastSession(PCDROM_TOC Toc);
NTSTATUS HPCdrCompletion(PDEVICE_OBJECT DeviceObject, PIRP Irp, PVOID Context);
NTSTATUS CdAudioPower(PDEVICE_OBJECT DeviceObject, PIRP Irp);
NTSTATUS CdAudioForwardIrpSynchronous(PDEVICE_OBJECT DeviceObject, PIRP Irp);
void CdAudioUnload(PDRIVER_OBJECT DriverObject);
#pragma alloc_text(INIT,DriverEntry)
#pragma alloc_text(PAGECDNC,CdAudioNECDeviceControl)
#pragma alloc_text(PAGECDOT,CdAudioHitachiSendPauseCommand)
#pragma alloc_text(PAGECDOT,CdAudioHitachiDeviceControl)
#pragma alloc_text(PAGECDOT,CdAudioDenonDeviceControl)
#pragma alloc_text(PAGECDNC,CdAudio435DeviceControl)
#pragma alloc_text(PAGECDNC,CdAudio535DeviceControl)
#pragma alloc_text(PAGECDOT,CdAudioPioneerDeviceControl)
#pragma alloc_text(PAGECDNC,CdAudioPan533DeviceControl)
#pragma alloc_text(PAGECDOT,CdAudioAtapiDeviceControl)
#pragma alloc_text(PAGECDOT,CdAudioLionOpticsDeviceControl)
#pragma alloc_text(PAGECDOT,CdAudioHPCdrDeviceControl)
#pragma alloc_text(PAGECDOT,HpCdrProcessLastSession)
#pragma alloc_text(PAGECDOT,HPCdrCompletion)
NTSTATUS SendSrbSynchronous(PCD_DEVICE_EXTENSION Extension, PSCSI_PASS_THROUGH Srb, PVOID Buffer, ULONG BufferLength)
{
  ULONG ioctl;
  KEVENT event;
  PIRP irp;
  IO_STATUS_BLOCK ioStatus;
  NTSTATUS status = __VERIFIER_nondet_long("status");
  {
    irp = (void *) 0;
    Srb->Length = sizeof(SCSI_PASS_THROUGH);
    Srb->SenseInfoLength = 0;
    Srb->SenseInfoOffset = 0;
    if (Buffer)
    {
      Srb->DataIn = 1;
      Srb->DataTransferLength = BufferLength;
      Srb->DataBufferOffset = (unsigned long) Buffer;
      ioctl = ((4 << 16) | (3 << 14)) | (1029 << 2);
    }
    else
    {
      Srb->DataIn = 0;
      Srb->DataTransferLength = 0;
      Srb->DataBufferOffset = 0;
      ioctl = ((4 << 16) | (3 << 14)) | (1025 << 2);
    }

    {
    }
    if (!irp)
    {
      return -1073741670L;
    }
    else
    {
    }

    if (status == 259L)
    {
      {
        KeWaitForSingleObject(&event, 0, 0, 0, (void *) 0);
        status = ioStatus.__annonCompField4.Status;
      }
    }
    else
    {
    }

    return status;
  }
}

NTSTATUS CdAudioAddDevice(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT PhysicalDeviceObject)
{
  NTSTATUS status;
  PDEVICE_OBJECT deviceObject;
  PCD_DEVICE_EXTENSION extension;
  ULONG regActive;
  HANDLE deviceParameterHandle;
  RTL_QUERY_REGISTRY_TABLE queryTable[2];
  {
    {
      regActive = 255;
      status = IoOpenDeviceRegistryKey(PhysicalDeviceObject, 2, 131097L, &deviceParameterHandle);
    }
    if (!(status >= 0L))
    {
      regActive = 255;
      goto AddDeviceEndRegistry;
    }
    else
    {
    }

    {
      memset(&queryTable, 0, sizeof(queryTable));
      queryTable[0].Flags = 36;
      queryTable[0].Name = "M\000a\000p\000T\000y\000p\000e\000";
      queryTable[0].EntryContext = &regActive;
      queryTable[0].DefaultType = 4;
      queryTable[0].DefaultData = (void *) 0;
      queryTable[0].DefaultLength = 0;
      status = RtlQueryRegistryValues(1073741824, (WCHAR *) deviceParameterHandle, queryTable, (void *) 0, (void *) 0);
    }
    if (!(status >= 0L))
    {
      regActive = 255;
    }
    else
    {
      if (regActive > 10UL)
      {
        regActive = 255;
      }
      else
      {
      }

    }

    {
      ZwClose(deviceParameterHandle);
    }
    AddDeviceEndRegistry:
    if (regActive > 10UL)
    {
      if (regActive != 255UL)
      {
        regActive = 255;
      }
      else
      {
      }

    }
    else
    {
    }


    if (regActive == 0UL)
    {
      return 0L;
    }
    else
    {
    }

    if (regActive == 8)
    {
      goto switch_0_8;
    }
    else
    {
      if (regActive == 9)
      {
        goto switch_0_9;
      }
      else
      {
        if (regActive == 10)
        {
          goto switch_0_10;
        }
        else
        {
          if (regActive == 4)
          {
            goto switch_0_4;
          }
          else
          {
            if (regActive == 6)
            {
              goto switch_0_6;
            }
            else
            {
              if (regActive == 5)
              {
                goto switch_0_5;
              }
              else
              {
                if (regActive == 2)
                {
                  goto switch_0_2;
                }
                else
                {
                  if (regActive == 3)
                  {
                    goto switch_0_3;
                  }
                  else
                  {
                    if (regActive == 1)
                    {
                      goto switch_0_1;
                    }
                    else
                    {
                      if (regActive == 7)
                      {
                        goto switch_0_7;
                      }
                      else
                      {
                        if (regActive == 255)
                        {
                          goto switch_0_255;
                        }
                        else
                        {
                          {
                            goto switch_0_default;
                            if (0)
                            {
                              switch_0_8:
                              {
                                MmLockPagableDataSection((void *) (&CdAudioNECDeviceControl));
                              }

                              goto switch_0_break;
                              switch_0_9:
                              ;

                              switch_0_10:
                              {
                                MmLockPagableDataSection((void *) (&CdAudioPioneerDeviceControl));
                              }

                              goto switch_0_break;
                              switch_0_4:
                              {
                                MmLockPagableDataSection((void *) (&CdAudioDenonDeviceControl));
                              }

                              goto switch_0_break;
                              switch_0_6:
                              ;

                              switch_0_5:
                              {
                                MmLockPagableDataSection((void *) (&CdAudioHitachiDeviceControl));
                              }

                              goto switch_0_break;
                              switch_0_2:
                              {
                                MmLockPagableDataSection((void *) (&CdAudio535DeviceControl));
                              }

                              goto switch_0_break;
                              switch_0_3:
                              {
                                MmLockPagableDataSection((void *) (&CdAudio435DeviceControl));
                              }

                              goto switch_0_break;
                              switch_0_1:
                              {
                                MmLockPagableDataSection((void *) (&CdAudioAtapiDeviceControl));
                              }

                              goto switch_0_break;
                              switch_0_7:
                              {
                                MmLockPagableDataSection((void *) (&CdAudioHPCdrDeviceControl));
                              }

                              goto switch_0_break;
                              switch_0_255:
                              ;

                              switch_0_default:
                              ;

                              goto switch_0_break;
                            }
                            else
                            {
                              switch_0_break:
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

    {
      status = IoCreateDevice(DriverObject, sizeof(CD_DEVICE_EXTENSION), (void *) 0, 2, 0, 0, &deviceObject);
    }
    if (!(status >= 0L))
    {
      return status;
    }
    else
    {
    }

    deviceObject->Flags |= 16UL;
    if (deviceObject->Flags & 16384UL)
    {
    }
    else
    {
      deviceObject->Flags |= 8192UL;
    }

    {
      extension = deviceObject->DeviceExtension;
      memset(extension, 0, sizeof(CD_DEVICE_EXTENSION));
      extension->TargetDeviceObject = IoAttachDeviceToDeviceStack(deviceObject, PhysicalDeviceObject);
    }
    if (!extension->TargetDeviceObject)
    {
      {
      }
      return -1073741810L;
    }
    else
    {
    }

    {
      extension->Active = (unsigned char) regActive;
      extension->DeviceObject = deviceObject;
      extension->TargetPdo = PhysicalDeviceObject;
      deviceObject->Flags &= 4294967167UL;
    }
    return 0L;
  }
}

NTSTATUS CdAudioSignalCompletion(PDEVICE_OBJECT DeviceObject, PIRP Irp, PKEVENT Event)
{
  {
    {
      KeSetEvent(Event, 0, 0);
    }
    return -1073741802L;
  }
}

NTSTATUS CdAudioStartDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PCD_DEVICE_EXTENSION deviceExtension;
  NTSTATUS status;
  SCSI_PASS_THROUGH srb;
  PCDB cdb;
  PUCHAR inquiryDataPtr;
  UCHAR attempt;
  PVOID tmp;
  UCHAR tmp___0;
  BOOLEAN tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  int tmp___8;
  int tmp___9;
  int tmp___10;
  int tmp___11;
  int tmp___12;
  int tmp___13;
  int tmp___14;
  int tmp___15;
  HANDLE deviceParameterHandle;
  ULONG keyValue;
  {
    {
      deviceExtension = DeviceObject->DeviceExtension;
      status = CdAudioForwardIrpSynchronous(DeviceObject, Irp);
    }
    if (!(status >= 0L))
    {
      return status;
    }
    else
    {
    }

    deviceExtension->Paused = 0;
    deviceExtension->PausedM = 0;
    deviceExtension->PausedS = 0;
    deviceExtension->PausedF = 0;
    deviceExtension->LastEndM = 0;
    deviceExtension->LastEndS = 0;
    deviceExtension->LastEndF = 0;
    if (((int) deviceExtension->Active) == 255)
    {
      {
        cdb = (union _CDB *) srb.Cdb;
        inquiryDataPtr = (void *) 0;
        attempt = 0;
        tmp = ExAllocatePoolWithTag(4, 36, 541156419UL);
        inquiryDataPtr = (UCHAR *) tmp;
      }
      if (!inquiryDataPtr)
      {
        deviceExtension->Active = 0;
        return 0L;
      }
      else
      {
      }

      status = -1073741823L;
      {
        while (1)
        {
          while_1_continue:
          ;

          if (!(status >= 0L))
          {
            tmp___0 = attempt;
            attempt = (UCHAR) (((int) attempt) + 1);
            if (tmp___0 < 4)
            {
            }
            else
            {
              goto while_1_break;
            }

          }
          else
          {
            goto while_1_break;
          }

          {
            memset(&srb, 0, sizeof(SCSI_PASS_THROUGH));
            memset(inquiryDataPtr, 0, 36);
            cdb->CDB6INQUIRY.OperationCode = 18;
            cdb->CDB6INQUIRY.AllocationLength = 36;
            srb.CdbLength = 6;
            srb.TimeOutValue = 10;
            status = SendSrbSynchronous(deviceExtension, &srb, inquiryDataPtr, 36);
          }
        }

        while_1_break:
        ;

      }
      if (!(status >= 0L))
      {
        {
          deviceExtension->Active = 0;
        }
        return 0L;
      }
      else
      {
      }

      {
        deviceExtension->Active = 0;
        tmp___2 = memcmp(inquiryDataPtr + 8, "NEC     ", 8);
      }
      if (tmp___2)
      {
      }
      else
      {
        {
          tmp___1 = NecSupportNeeded(inquiryDataPtr);
        }
        if (tmp___1)
        {
          {
            MmLockPagableDataSection((void *) (&CdAudioNECDeviceControl));
            deviceExtension->Active = 8;
          }
        }
        else
        {
        }

      }

      {
        tmp___3 = memcmp(inquiryDataPtr + 8, "PIONEER ", 8);
      }
      if (tmp___3)
      {
      }
      else
      {
        {
          tmp___4 = memcmp(inquiryDataPtr + 16, "CD-ROM DRM-600", 15);
        }
        if (tmp___4)
        {
        }
        else
        {
          {
            MmLockPagableDataSection((void *) (&CdAudioPioneerDeviceControl));
            deviceExtension->Active = 9;
          }
        }

      }

      if (((int) (*(inquiryDataPtr + 8))) == 68)
      {
        if (((int) (*(inquiryDataPtr + 9))) == 69)
        {
          if (((int) (*(inquiryDataPtr + 10))) == 78)
          {
            if (((int) (*(inquiryDataPtr + 16))) == 68)
            {
              if (((int) (*(inquiryDataPtr + 17))) == 82)
              {
                if (((int) (*(inquiryDataPtr + 18))) == 68)
                {
                  if (((int) (*(inquiryDataPtr + 20))) == 50)
                  {
                    if (((int) (*(inquiryDataPtr + 21))) == 53)
                    {
                      if (((int) (*(inquiryDataPtr + 22))) == 88)
                      {
                        {
                          MmLockPagableDataSection((void *) (&CdAudioDenonDeviceControl));
                          deviceExtension->Active = 4;
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
        tmp___5 = memcmp(inquiryDataPtr + 8, "CHINON", 6);
      }
      if (tmp___5)
      {
      }
      else
      {
        if (((int) (*(inquiryDataPtr + 27))) == 53)
        {
          if (((int) (*(inquiryDataPtr + 28))) == 51)
          {
            if (((int) (*(inquiryDataPtr + 29))) == 53)
            {
              if (((int) (*(inquiryDataPtr + 32))) == 81)
              {
                {
                  MmLockPagableDataSection((void *) (&CdAudio535DeviceControl));
                  deviceExtension->Active = 2;
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

        if (((int) (*(inquiryDataPtr + 27))) == 52)
        {
          if (((int) (*(inquiryDataPtr + 28))) == 51)
          {
            if (((int) (*(inquiryDataPtr + 29))) == 53)
            {
              goto _L;
            }
            else
            {
              if (((int) (*(inquiryDataPtr + 29))) == 49)
              {
                _L:
                if (((int) (*(inquiryDataPtr + 32))) == 77)
                {
                  {
                    MmLockPagableDataSection((void *) (&CdAudio435DeviceControl));
                    deviceExtension->Active = 3;
                  }
                }
                else
                {
                  if (((int) (*(inquiryDataPtr + 32))) == 78)
                  {
                    {
                      MmLockPagableDataSection((void *) (&CdAudio435DeviceControl));
                      deviceExtension->Active = 3;
                    }
                  }
                  else
                  {
                    if (((int) (*(inquiryDataPtr + 32))) == 83)
                    {
                      {
                        MmLockPagableDataSection((void *) (&CdAudio435DeviceControl));
                        deviceExtension->Active = 3;
                      }
                    }
                    else
                    {
                      if (((int) (*(inquiryDataPtr + 32))) == 85)
                      {
                        {
                          MmLockPagableDataSection((void *) (&CdAudio435DeviceControl));
                          deviceExtension->Active = 3;
                        }
                      }
                      else
                      {
                        if (((int) (*(inquiryDataPtr + 32))) == 72)
                        {
                          {
                            MmLockPagableDataSection((void *) (&CdAudio435DeviceControl));
                            deviceExtension->Active = 3;
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
              else
              {
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

      }

      {
        tmp___6 = memcmp(inquiryDataPtr + 8, "HITACHI ", 8);
      }
      if (tmp___6)
      {
      }
      else
      {
        {
          tmp___7 = memcmp(inquiryDataPtr + 16, "CDR-3650/1650S  ", 16);
        }
        if (tmp___7)
        {
          {
            tmp___8 = memcmp(inquiryDataPtr + 16, "CDR-1750S       ", 16);
          }
          if (tmp___8)
          {
          }
          else
          {
            {
              MmLockPagableDataSection((void *) (&CdAudioHitachiDeviceControl));
              deviceExtension->Active = 6;
            }
          }

        }
        else
        {
          {
            MmLockPagableDataSection((void *) (&CdAudioHitachiDeviceControl));
            deviceExtension->Active = 6;
          }
        }

      }

      {
        tmp___9 = memcmp(inquiryDataPtr + 8, "WEARNES ", 8);
      }
      if (tmp___9)
      {
        _L___0:
        {
          tmp___11 = memcmp(inquiryDataPtr + 8, "OTI     ", 8);
        }

        if (tmp___11)
        {
        }
        else
        {
          {
            tmp___12 = memcmp(inquiryDataPtr + 16, "DOLPHIN ", 8);
          }
          if (tmp___12)
          {
          }
          else
          {
            {
              MmLockPagableDataSection((void *) (&CdAudioAtapiDeviceControl));
              deviceExtension->Active = 1;
              *(inquiryDataPtr + 25) = (unsigned char) 0;
            }
          }

        }

      }
      else
      {
        {
          tmp___10 = memcmp(inquiryDataPtr + 16, "RUB", 3);
        }
        if (tmp___10)
        {
          goto _L___0;
        }
        else
        {
          {
            MmLockPagableDataSection((void *) (&CdAudioAtapiDeviceControl));
            deviceExtension->Active = 1;
            *(inquiryDataPtr + 25) = (unsigned char) 0;
          }
        }

      }

      {
        tmp___13 = memcmp(inquiryDataPtr + 8, "FUJITSU ", 8);
      }
      if (tmp___13)
      {
      }
      else
      {
        if (((int) (*(inquiryDataPtr + 16))) == 67)
        {
          if (((int) (*(inquiryDataPtr + 17))) == 68)
          {
            if (((int) (*(inquiryDataPtr + 18))) == 82)
            {
              if (((int) (*(inquiryDataPtr + 20))) == 51)
              {
                if (((int) (*(inquiryDataPtr + 21))) == 54)
                {
                  if (((int) (*(inquiryDataPtr + 22))) == 53)
                  {
                    if (((int) (*(inquiryDataPtr + 23))) == 48)
                    {
                      {
                        MmLockPagableDataSection((void *) (&CdAudioHitachiDeviceControl));
                        deviceExtension->Active = 6;
                        *(inquiryDataPtr + 25) = (unsigned char) 0;
                      }
                    }
                    else
                    {
                      goto _L___6;
                    }

                  }
                  else
                  {
                    goto _L___6;
                  }

                }
                else
                {
                  goto _L___6;
                }

              }
              else
              {
                goto _L___6;
              }

            }
            else
            {
              goto _L___6;
            }

          }
          else
          {
            goto _L___6;
          }

        }
        else
        {
          _L___6:
          if (((int) (*(inquiryDataPtr + 16))) == 70)
          {
            if (((int) (*(inquiryDataPtr + 17))) == 77)
            {
              if (((int) (*(inquiryDataPtr + 18))) == 67)
              {
                if (((int) (*(inquiryDataPtr + 21))) == 49)
                {
                  if (((int) (*(inquiryDataPtr + 22))) == 48)
                  {
                    if (((int) (*(inquiryDataPtr + 23))) == 49)
                    {
                      {
                        MmLockPagableDataSection((void *) (&CdAudioHitachiDeviceControl));
                        deviceExtension->Active = 5;
                        *(inquiryDataPtr + 25) = (unsigned char) 0;
                      }
                    }
                    else
                    {
                      if (((int) (*(inquiryDataPtr + 23))) == 50)
                      {
                        {
                          MmLockPagableDataSection((void *) (&CdAudioHitachiDeviceControl));
                          deviceExtension->Active = 5;
                          *(inquiryDataPtr + 25) = (unsigned char) 0;
                        }
                      }
                      else
                      {
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

      }

      {
        tmp___14 = memcmp(inquiryDataPtr + 8, "HP      ", 8);
      }
      if (tmp___14)
      {
      }
      else
      {
        {
          tmp___15 = memcmp(inquiryDataPtr + 16, "C4324/C4325", 11);
        }
        if (tmp___15)
        {
        }
        else
        {
          {
            MmLockPagableDataSection((void *) (&CdAudioHPCdrDeviceControl));
            deviceExtension->Active = 7;
          }
        }

      }

      {
      }
    }
    else
    {
    }

    {
      keyValue = (unsigned long) deviceExtension->Active;
      status = IoOpenDeviceRegistryKey(deviceExtension->TargetPdo, 2, 131078L, &deviceParameterHandle);
    }
    if (!(status >= 0L))
    {
      return 0L;
    }
    else
    {
    }

    {
      status = RtlWriteRegistryValue(1073741824, (WCHAR *) deviceParameterHandle, "M\000a\000p\000T\000y\000p\000e\000", 4, &keyValue, sizeof(keyValue));
    }
    if (!(status >= 0L))
    {
    }
    else
    {
    }

    {
      ZwClose(deviceParameterHandle);
    }
    return 0L;
  }
}

NTSTATUS CdAudioPnp(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PIO_STACK_LOCATION irpSp;
  NTSTATUS status;
  BOOLEAN setPagable;
  PCD_DEVICE_EXTENSION deviceExtension;
  NTSTATUS tmp;
  NTSTATUS tmp___0;
  {
    irpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
    status = -1073741637L;
    if (irpSp->MinorFunction == 0)
    {
      goto switch_2_0;
    }
    else
    {
      if (irpSp->MinorFunction == 22)
      {
        goto switch_2_22;
      }
      else
      {
        {
          goto switch_2_default;
          if (0)
          {
            switch_2_0:
            {
              status = CdAudioStartDevice(DeviceObject, Irp);
              Irp->IoStatus.__annonCompField4.Status = status;
              myStatus = status;
              IofCompleteRequest(Irp, 0);
            }

            return status;
            switch_2_22:
            ;

            if (((int) irpSp->Parameters.UsageNotification.Type) != 1)
            {
              {
                tmp = CdAudioSendToNextDriver(DeviceObject, Irp);
              }
              return tmp;
            }
            else
            {
            }

            {
              deviceExtension = DeviceObject->DeviceExtension;
              status = KeWaitForSingleObject(&deviceExtension->PagingPathCountEvent, 0, 0, 0, (void *) 0);
              setPagable = 0;
            }
            if (!irpSp->Parameters.UsageNotification.InPath)
            {
              if (deviceExtension->PagingPathCount == 1UL)
              {
                if (DeviceObject->Flags & 16384UL)
                {
                }
                else
                {
                  DeviceObject->Flags |= 8192UL;
                  setPagable = 1;
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
              status = CdAudioForwardIrpSynchronous(DeviceObject, Irp);
            }
            if (status >= 0L)
            {
              if (irpSp->Parameters.UsageNotification.InPath)
              {
                {
                  InterlockedIncrement(&deviceExtension->PagingPathCount);
                }
              }
              else
              {
                {
                  InterlockedDecrement(&deviceExtension->PagingPathCount);
                }
              }

              if (irpSp->Parameters.UsageNotification.InPath)
              {
                if (deviceExtension->PagingPathCount == 1UL)
                {
                  DeviceObject->Flags &= 4294959103UL;
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
              if (((int) setPagable) == 1)
              {
                DeviceObject->Flags &= 4294959103UL;
                setPagable = 0;
              }
              else
              {
              }

            }

            {
              KeSetEvent(&deviceExtension->PagingPathCountEvent, 0, 0);
              IofCompleteRequest(Irp, 0);
            }
            return status;
            goto switch_2_break;
            switch_2_default:
            {
              tmp___0 = CdAudioSendToNextDriver(DeviceObject, Irp);
            }

            return tmp___0;
          }
          else
          {
            switch_2_break:
            ;

          }

        }
      }

    }

    return 0L;
  }
}

NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  ULONG i = __VERIFIER_nondet_long("i");
  {
    DriverObject->MajorFunction[i] = &CdAudioSendToNextDriver;
    DriverObject->MajorFunction[3] = &CdAudioReadWrite;
    DriverObject->MajorFunction[4] = &CdAudioReadWrite;
    DriverObject->MajorFunction[14] = &CdAudioDeviceControl;
    DriverObject->MajorFunction[27] = &CdAudioPnp;
    DriverObject->MajorFunction[22] = &CdAudioPower;
    DriverObject->DriverExtension->AddDevice = &CdAudioAddDevice;
    DriverObject->DriverUnload = &CdAudioUnload;
    return 0L;
  }
}

BOOLEAN NecSupportNeeded(PUCHAR InquiryData)
{
  PINQUIRYDATA inquiryData;
  ULONG i = __VERIFIER_nondet_long("i");
  PUCHAR badDriveList[12];
  SIZE_T tmp;
  {
    {
      inquiryData = (struct _INQUIRYDATA *) InquiryData;
      badDriveList[0] = "CD-ROM DRIVE:80 ";
      badDriveList[1] = "CD-ROM DRIVE:82 ";
      badDriveList[2] = "CD-ROM DRIVE:83 ";
      badDriveList[3] = "CD-ROM DRIVE:84 ";
      badDriveList[4] = "CD-ROM DRIVE:841";
      badDriveList[5] = "CD-ROM DRIVE:38 ";
      badDriveList[6] = "CD-ROM DRIVE 4 M";
      badDriveList[7] = "CD-ROM DRIVE:500";
      badDriveList[8] = "CD-ROM DRIVE:400";
      badDriveList[9] = "CD-ROM DRIVE:401";
      badDriveList[10] = "CD-ROM DRIVE:501";
      badDriveList[11] = "CD-ROM DRIVE:900";
      tmp = RtlCompareMemory(inquiryData->ProductId, badDriveList[i], 16);
    }
    if (tmp == 16UL)
    {
      return 1;
    }
    else
    {
    }

    return 0;
  }
}

NTSTATUS CdAudioReadWrite(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PCD_DEVICE_EXTENSION deviceExtension;
  NTSTATUS tmp;
  {
    deviceExtension = DeviceObject->DeviceExtension;
    if (deviceExtension->PlayActive)
    {
      {
        Irp->IoStatus.__annonCompField4.Status = -2147483631L;
        myStatus = -2147483631L;
        IofCompleteRequest(Irp, 0);
      }
      return -2147483631L;
    }
    else
    {
    }

    {
      tmp = CdAudioSendToNextDriver(DeviceObject, Irp);
    }
    return tmp;
  }
}

NTSTATUS CdAudioDeviceControl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PCD_DEVICE_EXTENSION deviceExtension;
  NTSTATUS status;
  {
    deviceExtension = DeviceObject->DeviceExtension;
    if (deviceExtension->Active == 2)
    {
      goto switch_3_2;
    }
    else
    {
      if (deviceExtension->Active == 3)
      {
        goto switch_3_3;
      }
      else
      {
        if (deviceExtension->Active == 1)
        {
          goto switch_3_1;
        }
        else
        {
          if (deviceExtension->Active == 7)
          {
            goto switch_3_7;
          }
          else
          {
            {
              goto switch_3_default;
              if (0)
              {
                switch_3_2:
                {
                  status = CdAudio535DeviceControl(DeviceObject, Irp);
                }

                goto switch_3_break;
                switch_3_3:
                {
                  status = CdAudio435DeviceControl(DeviceObject, Irp);
                }

                goto switch_3_break;
                switch_3_1:
                {
                  status = CdAudioAtapiDeviceControl(DeviceObject, Irp);
                }

                goto switch_3_break;
                switch_3_7:
                {
                  status = CdAudioHPCdrDeviceControl(DeviceObject, Irp);
                }

                goto switch_3_break;
                switch_3_default:
                {
                  deviceExtension->Active = 0;
                  status = CdAudioSendToNextDriver(DeviceObject, Irp);
                }

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

    return status;
  }
}

NTSTATUS CdAudioSendToNextDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PCD_DEVICE_EXTENSION deviceExtension;
  NTSTATUS tmp;
  {
    deviceExtension = DeviceObject->DeviceExtension;
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
      tmp = IofCallDriver(deviceExtension->TargetDeviceObject, Irp);
    }
    return tmp;
  }
}

BOOLEAN CdAudioIsPlayActive(PDEVICE_OBJECT DeviceObject)
{
  PCD_DEVICE_EXTENSION deviceExtension;
  PIRP irp_CdAudioIsPlayActive = (PIRP) __VERIFIER_nondet_ulong("irp_CdAudioIsPlayActive");
  IO_STATUS_BLOCK ioStatus;
  KEVENT event;
  NTSTATUS status = __VERIFIER_nondet_long("status");
  PSUB_Q_CURRENT_POSITION currentBuffer;
  BOOLEAN returnValue;
  PVOID tmp;
  {
    deviceExtension = DeviceObject->DeviceExtension;
    if (!deviceExtension->PlayActive)
    {
      return 0;
    }
    else
    {
    }

    {
      tmp = ExAllocatePoolWithTag(4, sizeof(SUB_Q_CURRENT_POSITION), 541156419UL);
      currentBuffer = tmp;
    }
    if (((unsigned int) currentBuffer) == ((unsigned int) ((void *) 0)))
    {
      return 0;
    }
    else
    {
    }

    {
      ((struct _CDROM_SUB_Q_DATA_FORMAT *) currentBuffer)->Format = 1;
      ((struct _CDROM_SUB_Q_DATA_FORMAT *) currentBuffer)->Track = 0;
    }
    if (((unsigned int) irp_CdAudioIsPlayActive) == ((unsigned int) ((void *) 0)))
    {
      {
      }
      return 0;
    }
    else
    {
    }

    if (status == 259L)
    {
      {
        KeWaitForSingleObject(&event, 5, 0, 0, (void *) 0);
        status = ioStatus.__annonCompField4.Status;
      }
    }
    else
    {
    }

    if (!(status >= 0L))
    {
      {
      }
      return 0;
    }
    else
    {
    }

    if (((int) currentBuffer->Header.AudioStatus) == 17)
    {
      returnValue = 1;
    }
    else
    {
      returnValue = 0;
      deviceExtension->PlayActive = 0;
    }

    {
    }
    return returnValue;
  }
}

NTSTATUS CdAudioNECDeviceControl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PIO_STACK_LOCATION currentIrpStack;
  PCD_DEVICE_EXTENSION deviceExtension;
  PCDROM_TOC cdaudioDataOut;
  SCSI_PASS_THROUGH srb;
  PNEC_CDB cdb;
  NTSTATUS status;
  ULONG i;
  ULONG bytesTransfered;
  PUCHAR Toc;
  ULONG retryCount;
  ULONG address;
  LARGE_INTEGER delay;
  BOOLEAN tmp;
  PVOID tmp___0;
  BOOLEAN tmp___1;
  PVOID tmp___2;
  ULONG tracksToReturn;
  ULONG tracksOnCd;
  ULONG tracksInBuffer;
  ULONG dataLength;
  NTSTATUS tmp___3;
  PCDROM_PLAY_AUDIO_MSF inputBuffer;
  PCDROM_SEEK_AUDIO_MSF inputBuffer___0;
  PSUB_Q_CURRENT_POSITION userPtr;
  PUCHAR SubQPtr;
  PVOID tmp___4;
  ULONG tmp___5;
  NTSTATUS tmp___6;
  {
    currentIrpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
    deviceExtension = DeviceObject->DeviceExtension;
    cdaudioDataOut = Irp->AssociatedIrp.SystemBuffer;
    cdb = (union _NEC_CDB *) srb.Cdb;
    retryCount = 0;
    NECRestart:
    {
      memset(cdb, 0, 12);
    }

    if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (14 << 2)))
    {
      goto switch_4_exp_0;
    }
    else
    {
      if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == ((2 << 16) | (1 << 14)))
      {
        goto switch_4_exp_1;
      }
      else
      {
        if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (2 << 2)))
        {
          goto switch_4_exp_2;
        }
        else
        {
          if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (6 << 2)))
          {
            goto switch_4_exp_3;
          }
          else
          {
            if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (1 << 2)))
            {
              goto switch_4_exp_4;
            }
            else
            {
              if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (3 << 2)))
              {
                goto switch_4_exp_5;
              }
              else
              {
                if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (4 << 2)))
                {
                  goto switch_4_exp_6;
                }
                else
                {
                  if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (11 << 2)))
                  {
                    goto switch_4_exp_7;
                  }
                  else
                  {
                    if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (514 << 2)))
                    {
                      goto switch_4_exp_8;
                    }
                    else
                    {
                      if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (13 << 2)))
                      {
                        goto switch_4_exp_9;
                      }
                      else
                      {
                        if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (5 << 2)))
                        {
                          goto switch_4_exp_10;
                        }
                        else
                        {
                          if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (10 << 2)))
                          {
                            goto switch_4_exp_11;
                          }
                          else
                          {
                            if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (512 << 2)))
                            {
                              goto switch_4_exp_12;
                            }
                            else
                            {
                              {
                                goto switch_4_default;
                                if (0)
                                {
                                  switch_4_exp_0:
                                  ;

                                  if (currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < ((unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[1]))))
                                  {
                                    status = -1073741789L;
                                    Irp->IoStatus.Information = 0;
                                    goto switch_4_break;
                                  }
                                  else
                                  {
                                  }

                                  {
                                    tmp = CdAudioIsPlayActive(DeviceObject);
                                  }
                                  if (tmp)
                                  {
                                    Irp->IoStatus.Information = 0;
                                    status = -2147483631L;
                                    goto switch_4_break;
                                  }
                                  else
                                  {
                                  }

                                  {
                                    tmp___0 = ExAllocatePoolWithTag(4, 1022, 541156419UL);
                                    Toc = (UCHAR *) tmp___0;
                                  }
                                  if (((unsigned int) Toc) == ((unsigned int) ((void *) 0)))
                                  {
                                    status = -1073741670L;
                                    Irp->IoStatus.Information = 0;
                                    goto SetStatusAndReturn;
                                  }
                                  else
                                  {
                                  }

                                  {
                                    memset(Toc, 0, 1022);
                                    srb.CdbLength = 10;
                                    cdb->NEC_READ_TOC.OperationCode = 222;
                                    cdb->NEC_READ_TOC.Type = 3;
                                    cdb->NEC_READ_TOC.TrackNumber = 176;
                                    srb.TimeOutValue = 10;
                                    status = SendSrbSynchronous(deviceExtension, &srb, Toc, 1022);
                                  }
                                  if (!(status >= 0L))
                                  {
                                    if (status != (-1073741764L))
                                    {
                                      {
                                        Irp->IoStatus.Information = 0;
                                      }
                                      goto SetStatusAndReturn;
                                    }
                                    else
                                    {
                                      status = 0L;
                                    }

                                  }
                                  else
                                  {
                                    status = 0L;
                                  }

                                  {
                                    bytesTransfered = (long) (&((CDROM_TOC *) 0)->TrackData[1]);
                                    Irp->IoStatus.Information = bytesTransfered;
                                    memset(cdaudioDataOut, 0, bytesTransfered);
                                    cdaudioDataOut->Length[0] = (unsigned char) ((bytesTransfered - 2UL) >> 8);
                                    cdaudioDataOut->Length[1] = (unsigned char) ((bytesTransfered - 2UL) & 255UL);
                                  }
                                  if ((*((ULONG *) (Toc + 14))) == 0UL)
                                  {
                                    {
                                    }
                                    goto switch_4_break;
                                  }
                                  else
                                  {
                                  }

                                  {
                                    cdaudioDataOut->FirstTrack = 1;
                                    cdaudioDataOut->LastTrack = 2;
                                    cdaudioDataOut->TrackData[0].Reserved = 0;
                                    cdaudioDataOut->TrackData[0].Control = ((((int) (*(Toc + 2))) & 15) << 4) | (((int) (*(Toc + 2))) >> 4);
                                    cdaudioDataOut->TrackData[0].TrackNumber = 1;
                                    cdaudioDataOut->TrackData[0].Reserved1 = 0;
                                    address = (((((((((int) (*(Toc + 15))) & 240) >> 4) * 10) + (((int) (*(Toc + 15))) & 15)) * 60) + ((((((int) (*(Toc + 16))) & 240) >> 4) * 10) + (((int) (*(Toc + 16))) & 15))) * 75) + ((((((int) (*(Toc + 17))) & 240) >> 4) * 10) + (((int) (*(Toc + 17))) & 15));
                                    cdaudioDataOut->TrackData[0].Address[0] = (unsigned char) (address >> 24);
                                    cdaudioDataOut->TrackData[0].Address[1] = (unsigned char) (address >> 16);
                                    cdaudioDataOut->TrackData[0].Address[2] = (unsigned char) (address >> 8);
                                    cdaudioDataOut->TrackData[0].Address[3] = (unsigned char) address;
                                  }
                                  goto switch_4_break;
                                  switch_4_exp_1:
                                  {
                                    tmp___1 = CdAudioIsPlayActive(DeviceObject);
                                  }

                                  if (tmp___1)
                                  {
                                    status = -2147483631L;
                                    Irp->IoStatus.Information = 0;
                                    goto switch_4_break;
                                  }
                                  else
                                  {
                                  }

                                  if (currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < ((unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[0]))))
                                  {
                                    status = -1073741789L;
                                    Irp->IoStatus.Information = 0;
                                    goto switch_4_break;
                                  }
                                  else
                                  {
                                  }

                                  {
                                    tmp___2 = ExAllocatePoolWithTag(4, 1022, 541156419UL);
                                    Toc = (UCHAR *) tmp___2;
                                  }
                                  if (((unsigned int) Toc) == ((unsigned int) ((void *) 0)))
                                  {
                                    status = -1073741670L;
                                    Irp->IoStatus.Information = 0;
                                    goto SetStatusAndReturn;
                                  }
                                  else
                                  {
                                  }

                                  {
                                    memset(Toc, 0, 1022);
                                    srb.CdbLength = 10;
                                    cdb->NEC_READ_TOC.OperationCode = 222;
                                    cdb->NEC_READ_TOC.Type = 3;
                                    srb.TimeOutValue = 10;
                                    status = SendSrbSynchronous(deviceExtension, &srb, Toc, 1022);
                                  }
                                  if (!(status >= 0L))
                                  {
                                    if (status != (-1073741764L))
                                    {
                                      if (status != (-1073741764L))
                                      {
                                        {
                                          Irp->IoStatus.Information = 0;
                                        }
                                        goto SetStatusAndReturn;
                                      }
                                      else
                                      {
                                      }

                                    }
                                    else
                                    {
                                      status = 0L;
                                    }

                                  }
                                  else
                                  {
                                    status = 0L;
                                  }

                                  if (currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength > ((ULONG) (sizeof(CDROM_TOC))))
                                  {
                                    bytesTransfered = sizeof(CDROM_TOC);
                                  }
                                  else
                                  {
                                    bytesTransfered = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength;
                                  }

                                  cdaudioDataOut->FirstTrack = (((((int) (*(Toc + 9))) & 240) >> 4) * 10) + (((int) (*(Toc + 9))) & 15);
                                  cdaudioDataOut->LastTrack = (((((int) (*(Toc + 19))) & 240) >> 4) * 10) + (((int) (*(Toc + 19))) & 15);
                                  tracksOnCd = (((int) cdaudioDataOut->LastTrack) - ((int) cdaudioDataOut->FirstTrack)) + 1;
                                  dataLength = ((unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[tracksOnCd]))) - 2UL;
                                  cdaudioDataOut->Length[0] = (unsigned char) (dataLength >> 8);
                                  cdaudioDataOut->Length[1] = (unsigned char) (dataLength & 255UL);
                                  tracksInBuffer = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength - ((unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[0])));
                                  tracksInBuffer /= (ULONG) (sizeof(TRACK_DATA));
                                  if (tracksInBuffer < tracksOnCd)
                                  {
                                    tracksToReturn = tracksInBuffer;
                                  }
                                  else
                                  {
                                    tracksToReturn = tracksOnCd;
                                  }

                                  i = 0;
                                  {
                                    while (1)
                                    {
                                      while_5_continue:
                                      ;

                                      if (i < tracksToReturn)
                                      {
                                      }
                                      else
                                      {
                                        goto while_5_break;
                                      }

                                      cdaudioDataOut->TrackData[i].Reserved = 0;
                                      cdaudioDataOut->TrackData[i].Control = ((((int) (*(Toc + ((i * 10UL) + 32UL)))) & 15) << 4) | (((int) (*(Toc + ((i * 10UL) + 32UL)))) >> 4);
                                      cdaudioDataOut->TrackData[i].TrackNumber = (unsigned char) (i + ((ULONG) cdaudioDataOut->FirstTrack));
                                      cdaudioDataOut->TrackData[i].Reserved1 = 0;
                                      cdaudioDataOut->TrackData[i].Address[0] = 0;
                                      cdaudioDataOut->TrackData[i].Address[1] = (((((int) (*(Toc + ((i * 10UL) + 39UL)))) & 240) >> 4) * 10) + (((int) (*(Toc + ((i * 10UL) + 39UL)))) & 15);
                                      cdaudioDataOut->TrackData[i].Address[2] = (((((int) (*(Toc + ((i * 10UL) + 40UL)))) & 240) >> 4) * 10) + (((int) (*(Toc + ((i * 10UL) + 40UL)))) & 15);
                                      cdaudioDataOut->TrackData[i].Address[3] = (((((int) (*(Toc + ((i * 10UL) + 41UL)))) & 240) >> 4) * 10) + (((int) (*(Toc + ((i * 10UL) + 41UL)))) & 15);
                                      i += 1UL;
                                    }

                                    while_5_break:
                                    ;

                                  }
                                  if (tracksInBuffer > tracksOnCd)
                                  {
                                    cdaudioDataOut->TrackData[i].Reserved = 0;
                                    cdaudioDataOut->TrackData[i].Control = 16;
                                    cdaudioDataOut->TrackData[i].TrackNumber = 170;
                                    cdaudioDataOut->TrackData[i].Reserved1 = 0;
                                    cdaudioDataOut->TrackData[i].Address[0] = 0;
                                    cdaudioDataOut->TrackData[i].Address[1] = (((((int) (*(Toc + 29))) & 240) >> 4) * 10) + (((int) (*(Toc + 29))) & 15);
                                    cdaudioDataOut->TrackData[i].Address[2] = (((((int) (*(Toc + 30))) & 240) >> 4) * 10) + (((int) (*(Toc + 30))) & 15);
                                    cdaudioDataOut->TrackData[i].Address[3] = (((((int) (*(Toc + 31))) & 240) >> 4) * 10) + (((int) (*(Toc + 31))) & 15);
                                    i += 1UL;
                                  }
                                  else
                                  {
                                  }

                                  {
                                    Irp->IoStatus.Information = (unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[i]));
                                  }
                                  goto switch_4_break;
                                  switch_4_exp_2:
                                  {
                                    deviceExtension->PlayActive = 0;
                                    tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
                                  }

                                  return tmp___3;
                                  goto switch_4_break;
                                  switch_4_exp_3:
                                  inputBuffer = Irp->AssociatedIrp.SystemBuffer;

                                  if (currentIrpStack->Parameters.DeviceIoControl.InputBufferLength < ((ULONG) (sizeof(CDROM_PLAY_AUDIO_MSF))))
                                  {
                                    status = -1073741820L;
                                    Irp->IoStatus.Information = 0;
                                    goto switch_4_break;
                                  }
                                  else
                                  {
                                  }

                                  {
                                    srb.CdbLength = 10;
                                    srb.TimeOutValue = 10;
                                    cdb->NEC_PLAY_AUDIO.OperationCode = 216;
                                    cdb->NEC_PLAY_AUDIO.PlayMode = 1;
                                    cdb->NEC_PLAY_AUDIO.Minute = ((((int) inputBuffer->StartingM) / 10) << 4) + (((int) inputBuffer->StartingM) % 10);
                                    cdb->NEC_PLAY_AUDIO.Second = ((((int) inputBuffer->StartingS) / 10) << 4) + (((int) inputBuffer->StartingS) % 10);
                                    cdb->NEC_PLAY_AUDIO.Frame = ((((int) inputBuffer->StartingF) / 10) << 4) + (((int) inputBuffer->StartingF) % 10);
                                    cdb->NEC_PLAY_AUDIO.Control = 64;
                                    status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                  }
                                  if (status >= 0L)
                                  {
                                    {
                                      deviceExtension->PlayActive = 1;
                                      memset(cdb, 0, 12);
                                      cdb->NEC_PLAY_AUDIO.OperationCode = 217;
                                      cdb->NEC_PLAY_AUDIO.PlayMode = 3;
                                      cdb->NEC_PLAY_AUDIO.Minute = ((((int) inputBuffer->EndingM) / 10) << 4) + (((int) inputBuffer->EndingM) % 10);
                                      cdb->NEC_PLAY_AUDIO.Second = ((((int) inputBuffer->EndingS) / 10) << 4) + (((int) inputBuffer->EndingS) % 10);
                                      cdb->NEC_PLAY_AUDIO.Frame = ((((int) inputBuffer->EndingF) / 10) << 4) + (((int) inputBuffer->EndingF) % 10);
                                      cdb->NEC_PLAY_AUDIO.Control = 64;
                                      status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                    }
                                  }
                                  else
                                  {
                                  }

                                  goto switch_4_break;
                                  switch_4_exp_4:
                                  inputBuffer___0 = Irp->AssociatedIrp.SystemBuffer;

                                  if (currentIrpStack->Parameters.DeviceIoControl.InputBufferLength < ((ULONG) (sizeof(CDROM_SEEK_AUDIO_MSF))))
                                  {
                                    status = -1073741820L;
                                    Irp->IoStatus.Information = 0;
                                    goto switch_4_break;
                                  }
                                  else
                                  {
                                  }

                                  {
                                    srb.CdbLength = 10;
                                    srb.TimeOutValue = 10;
                                    cdb->NEC_SEEK_AUDIO.OperationCode = 216;
                                    cdb->NEC_SEEK_AUDIO.Minute = ((((int) inputBuffer___0->M) / 10) << 4) + (((int) inputBuffer___0->M) % 10);
                                    cdb->NEC_SEEK_AUDIO.Second = ((((int) inputBuffer___0->S) / 10) << 4) + (((int) inputBuffer___0->S) % 10);
                                    cdb->NEC_SEEK_AUDIO.Frame = ((((int) inputBuffer___0->F) / 10) << 4) + (((int) inputBuffer___0->F) % 10);
                                    cdb->NEC_SEEK_AUDIO.Control = 64;
                                    status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                  }
                                  goto switch_4_break;
                                  switch_4_exp_5:
                                  {
                                    deviceExtension->PlayActive = 0;
                                    srb.CdbLength = 10;
                                    srb.TimeOutValue = 10;
                                    cdb->NEC_PAUSE_AUDIO.OperationCode = 218;
                                    status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                  }

                                  goto switch_4_break;
                                  switch_4_exp_6:
                                  {
                                    srb.CdbLength = 10;
                                    srb.TimeOutValue = 10;
                                    cdb->NEC_PLAY_AUDIO.OperationCode = 217;
                                    cdb->NEC_PLAY_AUDIO.PlayMode = 3;
                                    cdb->NEC_PLAY_AUDIO.Control = 192;
                                    status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                  }

                                  goto switch_4_break;
                                  switch_4_exp_7:
                                  {
                                    userPtr = Irp->AssociatedIrp.SystemBuffer;
                                    tmp___4 = ExAllocatePoolWithTag(4, 10, 541156419UL);
                                    SubQPtr = tmp___4;
                                  }

                                  if (currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < ((ULONG) (sizeof(SUB_Q_CURRENT_POSITION))))
                                  {
                                    status = -1073741789L;
                                    Irp->IoStatus.Information = 0;
                                    if (SubQPtr)
                                    {
                                      {
                                      }
                                    }
                                    else
                                    {
                                    }

                                    goto switch_4_break;
                                  }
                                  else
                                  {
                                  }

                                  if (((unsigned int) SubQPtr) == ((unsigned int) ((void *) 0)))
                                  {
                                    status = -1073741670L;
                                    Irp->IoStatus.Information = 0;
                                    goto SetStatusAndReturn;
                                  }
                                  else
                                  {
                                  }

                                  {
                                    memset(SubQPtr, 0, 10);
                                  }
                                  if (((int) ((struct _CDROM_SUB_Q_DATA_FORMAT *) userPtr)->Format) != 1)
                                  {
                                    {
                                      status = -1073741823L;
                                      Irp->IoStatus.Information = 0;
                                    }
                                    goto SetStatusAndReturn;
                                  }
                                  else
                                  {
                                  }

                                  NECSeek:
                                  {
                                    srb.CdbLength = 10;
                                    srb.TimeOutValue = 10;
                                    cdb->NEC_READ_Q_CHANNEL.OperationCode = 221;
                                    cdb->NEC_READ_Q_CHANNEL.TransferSize = 10;
                                    status = SendSrbSynchronous(deviceExtension, &srb, SubQPtr, 10);
                                  }

                                  if (status >= 0L)
                                  {
                                    goto _L;
                                  }
                                  else
                                  {
                                    if (status == (-1073741764L))
                                    {
                                      _L:
                                      userPtr->Header.Reserved = 0;

                                      if (((int) (*(SubQPtr + 0))) == 0)
                                      {
                                        userPtr->Header.AudioStatus = 17;
                                      }
                                      else
                                      {
                                        if (((int) (*(SubQPtr + 0))) == 1)
                                        {
                                          userPtr->Header.AudioStatus = 18;
                                          deviceExtension->PlayActive = 0;
                                        }
                                        else
                                        {
                                          if (((int) (*(SubQPtr + 0))) == 2)
                                          {
                                            userPtr->Header.AudioStatus = 18;
                                            deviceExtension->PlayActive = 0;
                                          }
                                          else
                                          {
                                            if (((int) (*(SubQPtr + 0))) == 3)
                                            {
                                              userPtr->Header.AudioStatus = 19;
                                              deviceExtension->PlayActive = 0;
                                            }
                                            else
                                            {
                                              deviceExtension->PlayActive = 0;
                                            }

                                          }

                                        }

                                      }

                                      userPtr->Header.DataLength[0] = 0;
                                      userPtr->Header.DataLength[0] = 12;
                                      userPtr->FormatCode = 1;
                                      userPtr->Control = ((int) (*(SubQPtr + 1))) & 15;
                                      userPtr->ADR = 0;
                                      userPtr->TrackNumber = (((((int) (*(SubQPtr + 2))) & 240) >> 4) * 10) + (((int) (*(SubQPtr + 2))) & 15);
                                      userPtr->IndexNumber = (((((int) (*(SubQPtr + 3))) & 240) >> 4) * 10) + (((int) (*(SubQPtr + 3))) & 15);
                                      userPtr->AbsoluteAddress[0] = 0;
                                      userPtr->AbsoluteAddress[1] = (((((int) (*(SubQPtr + 7))) & 240) >> 4) * 10) + (((int) (*(SubQPtr + 7))) & 15);
                                      userPtr->AbsoluteAddress[2] = (((((int) (*(SubQPtr + 8))) & 240) >> 4) * 10) + (((int) (*(SubQPtr + 8))) & 15);
                                      userPtr->AbsoluteAddress[3] = (((((int) (*(SubQPtr + 9))) & 240) >> 4) * 10) + (((int) (*(SubQPtr + 9))) & 15);
                                      userPtr->TrackRelativeAddress[0] = 0;
                                      userPtr->TrackRelativeAddress[1] = (((((int) (*(SubQPtr + 4))) & 240) >> 4) * 10) + (((int) (*(SubQPtr + 4))) & 15);
                                      userPtr->TrackRelativeAddress[2] = (((((int) (*(SubQPtr + 5))) & 240) >> 4) * 10) + (((int) (*(SubQPtr + 5))) & 15);
                                      userPtr->TrackRelativeAddress[3] = (((((int) (*(SubQPtr + 6))) & 240) >> 4) * 10) + (((int) (*(SubQPtr + 6))) & 15);
                                      Irp->IoStatus.Information = sizeof(SUB_Q_CURRENT_POSITION);
                                      if (((int) userPtr->TrackNumber) > 100)
                                      {
                                        {
                                          delay.QuadPart = -5000000;
                                          KeDelayExecutionThread(0, 0, &delay);
                                          tmp___5 = retryCount;
                                          retryCount += 1UL;
                                        }
                                        if (tmp___5 < 4UL)
                                        {
                                          goto NECSeek;
                                        }
                                        else
                                        {
                                          Irp->IoStatus.Information = 0;
                                          status = -1073741434L;
                                        }

                                      }
                                      else
                                      {
                                        status = 0L;
                                      }

                                    }
                                    else
                                    {
                                      {
                                        memset(userPtr, 0, sizeof(SUB_Q_CURRENT_POSITION));
                                        Irp->IoStatus.Information = 0;
                                      }
                                    }

                                  }

                                  {
                                  }
                                  goto switch_4_break;
                                  switch_4_exp_8:
                                  {
                                    deviceExtension->PlayActive = 0;
                                    srb.CdbLength = 10;
                                    srb.TimeOutValue = 10;
                                    cdb->NEC_EJECT.OperationCode = 220;
                                    status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                    Irp->IoStatus.Information = 0;
                                  }

                                  goto switch_4_break;
                                  switch_4_exp_9:
                                  ;

                                  switch_4_exp_10:
                                  ;

                                  switch_4_exp_11:
                                  Irp->IoStatus.Information = 0;

                                  status = -1073741808L;
                                  goto switch_4_break;
                                  switch_4_exp_12:
                                  {
                                    CdAudioIsPlayActive(DeviceObject);
                                  }

                                  switch_4_default:
                                  {
                                    tmp___6 = CdAudioSendToNextDriver(DeviceObject, Irp);
                                  }

                                  return tmp___6;
                                  goto switch_4_break;
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

                }

              }

            }

          }

        }

      }

    }

    SetStatusAndReturn:
    if (status == (-2147483626L))
    {
      if (((int) currentIrpStack->Flags) & 2)
      {
        status = -1073741435L;
        goto NECRestart;
      }
      else
      {
      }

      {
        Irp->IoStatus.Information = 0;
      }
    }
    else
    {
    }


    {
      Irp->IoStatus.__annonCompField4.Status = status;
      myStatus = status;
      IofCompleteRequest(Irp, 0);
    }
    return status;
  }
}

NTSTATUS CdAudioPioneerDeviceControl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PIO_STACK_LOCATION currentIrpStack;
  PCD_DEVICE_EXTENSION deviceExtension;
  PCDROM_TOC cdaudioDataOut;
  SCSI_PASS_THROUGH srb;
  PPNR_CDB cdb;
  PCDB scsiCdb;
  NTSTATUS status;
  ULONG i;
  ULONG retry;
  PUCHAR Toc;
  BOOLEAN tmp;
  PVOID tmp___0;
  ULONG tracksToReturn;
  ULONG tracksOnCd;
  ULONG tracksInBuffer;
  ULONG dataLength;
  NTSTATUS tmp___1;
  PCDROM_PLAY_AUDIO_MSF inputBuffer;
  ULONG tmp___2;
  ULONG tmp___3;
  PCDROM_SEEK_AUDIO_MSF inputBuffer___0;
  ULONG tmp___4;
  PSUB_Q_CURRENT_POSITION userPtr;
  PUCHAR SubQPtr;
  PVOID tmp___5;
  ULONG tmp___6;
  ULONG tmp___7;
  NTSTATUS tmp___8;
  {
    currentIrpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
    deviceExtension = DeviceObject->DeviceExtension;
    cdaudioDataOut = Irp->AssociatedIrp.SystemBuffer;
    cdb = (union _PIONEER_CDB *) srb.Cdb;
    scsiCdb = (union _CDB *) srb.Cdb;
    PioneerRestart:
    {
      memset(cdb, 0, 12);
    }

    if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == ((2 << 16) | (1 << 14)))
    {
      goto switch_6_exp_13;
    }
    else
    {
      if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (2 << 2)))
      {
        goto switch_6_exp_14;
      }
      else
      {
        if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (6 << 2)))
        {
          goto switch_6_exp_15;
        }
        else
        {
          if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (1 << 2)))
          {
            goto switch_6_exp_16;
          }
          else
          {
            if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (3 << 2)))
            {
              goto switch_6_exp_17;
            }
            else
            {
              if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (4 << 2)))
              {
                goto switch_6_exp_18;
              }
              else
              {
                if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (11 << 2)))
                {
                  goto switch_6_exp_19;
                }
                else
                {
                  if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (514 << 2)))
                  {
                    goto switch_6_exp_20;
                  }
                  else
                  {
                    if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (13 << 2)))
                    {
                      goto switch_6_exp_21;
                    }
                    else
                    {
                      if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (5 << 2)))
                      {
                        goto switch_6_exp_22;
                      }
                      else
                      {
                        if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (10 << 2)))
                        {
                          goto switch_6_exp_23;
                        }
                        else
                        {
                          if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (512 << 2)))
                          {
                            goto switch_6_exp_24;
                          }
                          else
                          {
                            {
                              goto switch_6_default;
                              if (0)
                              {
                                switch_6_exp_13:
                                ;

                                if (currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < ((unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[0]))))
                                {
                                  status = -1073741789L;
                                  Irp->IoStatus.Information = 0;
                                  goto switch_6_break;
                                }
                                else
                                {
                                }

                                {
                                  tmp = CdAudioIsPlayActive(DeviceObject);
                                }
                                if (tmp)
                                {
                                  status = -2147483631L;
                                  Irp->IoStatus.Information = 0;
                                  goto switch_6_break;
                                }
                                else
                                {
                                }

                                {
                                  tmp___0 = ExAllocatePoolWithTag(4, sizeof(CDROM_TOC), 541156419UL);
                                  Toc = (UCHAR *) tmp___0;
                                }
                                if (((unsigned int) Toc) == ((unsigned int) ((void *) 0)))
                                {
                                  status = -1073741670L;
                                  Irp->IoStatus.Information = 0;
                                  goto SetStatusAndReturn;
                                }
                                else
                                {
                                }

                                {
                                  memset(Toc, 0, sizeof(CDROM_TOC));
                                }
                                if (((int) deviceExtension->Active) == 9)
                                {
                                  cdb->PNR_START_STOP.Immediate = 1;
                                }
                                else
                                {
                                  cdb->PNR_START_STOP.Immediate = 0;
                                }

                                {
                                  cdb->PNR_START_STOP.OperationCode = 27;
                                  cdb->PNR_START_STOP.Start = 1;
                                  srb.CdbLength = 6;
                                  srb.TimeOutValue = 10;
                                  status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                }
                                if (!(status >= 0L))
                                {
                                  {
                                    Irp->IoStatus.Information = 0;
                                  }
                                  goto SetStatusAndReturn;
                                }
                                else
                                {
                                }

                                {
                                  memset(cdb, 0, 12);
                                  srb.CdbLength = 10;
                                  cdb->PNR_READ_TOC.OperationCode = 193;
                                  cdb->PNR_READ_TOC.AssignedLength[1] = 4;
                                  cdb->PNR_READ_TOC.Type = 0;
                                  srb.TimeOutValue = 10;
                                  status = SendSrbSynchronous(deviceExtension, &srb, Toc, 4);
                                }
                                if (!(status >= 0L))
                                {
                                  {
                                    Irp->IoStatus.Information = 0;
                                  }
                                  goto SetStatusAndReturn;
                                }
                                else
                                {
                                }

                                cdaudioDataOut->FirstTrack = (((((int) (*(Toc + 0))) & 240) >> 4) * 10) + (((int) (*(Toc + 0))) & 15);
                                cdaudioDataOut->LastTrack = (((((int) (*(Toc + 1))) & 240) >> 4) * 10) + (((int) (*(Toc + 1))) & 15);
                                tracksOnCd = (((int) cdaudioDataOut->LastTrack) - ((int) cdaudioDataOut->FirstTrack)) + 1;
                                dataLength = ((unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[tracksOnCd]))) - 2UL;
                                cdaudioDataOut->Length[0] = (unsigned char) (dataLength >> 8);
                                cdaudioDataOut->Length[1] = (unsigned char) (dataLength & 255UL);
                                tracksInBuffer = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength - ((unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[0])));
                                tracksInBuffer /= (ULONG) (sizeof(TRACK_DATA));
                                if (tracksInBuffer < tracksOnCd)
                                {
                                  tracksToReturn = tracksInBuffer;
                                }
                                else
                                {
                                  tracksToReturn = tracksOnCd;
                                }

                                i = 0;
                                {
                                  while (1)
                                  {
                                    while_7_continue:
                                    ;

                                    if (i < tracksToReturn)
                                    {
                                    }
                                    else
                                    {
                                      goto while_7_break;
                                    }

                                    {
                                      memset(cdb, 0, 12);
                                      cdb->PNR_READ_TOC.OperationCode = 193;
                                      cdb->PNR_READ_TOC.TrackNumber = (unsigned char) ((((i + ((ULONG) cdaudioDataOut->FirstTrack)) / 10UL) << 4) + ((i + ((ULONG) cdaudioDataOut->FirstTrack)) % 10UL));
                                      cdb->PNR_READ_TOC.AssignedLength[1] = 4;
                                      cdb->PNR_READ_TOC.Type = 2;
                                      srb.TimeOutValue = 10;
                                      status = SendSrbSynchronous(deviceExtension, &srb, Toc, 4);
                                    }
                                    if (!(status >= 0L))
                                    {
                                      {
                                        Irp->IoStatus.Information = 0;
                                      }
                                      goto SetStatusAndReturn;
                                    }
                                    else
                                    {
                                    }

                                    cdaudioDataOut->TrackData[i].Reserved = 0;
                                    cdaudioDataOut->TrackData[i].Control = *(Toc + 0);
                                    cdaudioDataOut->TrackData[i].TrackNumber = (unsigned char) (i + ((ULONG) cdaudioDataOut->FirstTrack));
                                    cdaudioDataOut->TrackData[i].Reserved1 = 0;
                                    cdaudioDataOut->TrackData[i].Address[0] = 0;
                                    cdaudioDataOut->TrackData[i].Address[1] = (((((int) (*(Toc + 1))) & 240) >> 4) * 10) + (((int) (*(Toc + 1))) & 15);
                                    cdaudioDataOut->TrackData[i].Address[2] = (((((int) (*(Toc + 2))) & 240) >> 4) * 10) + (((int) (*(Toc + 2))) & 15);
                                    cdaudioDataOut->TrackData[i].Address[3] = (((((int) (*(Toc + 3))) & 240) >> 4) * 10) + (((int) (*(Toc + 3))) & 15);
                                    i += 1UL;
                                  }

                                  while_7_break:
                                  ;

                                }
                                if (tracksInBuffer > tracksOnCd)
                                {
                                  {
                                    memset(cdb, 0, 12);
                                    cdb->PNR_READ_TOC.OperationCode = 193;
                                    cdb->PNR_READ_TOC.AssignedLength[1] = 4;
                                    cdb->PNR_READ_TOC.Type = 1;
                                    srb.TimeOutValue = 10;
                                    status = SendSrbSynchronous(deviceExtension, &srb, Toc, 4);
                                  }
                                  if (!(status >= 0L))
                                  {
                                    {
                                      Irp->IoStatus.Information = 0;
                                    }
                                    goto SetStatusAndReturn;
                                  }
                                  else
                                  {
                                  }

                                  cdaudioDataOut->TrackData[i].Reserved = 0;
                                  cdaudioDataOut->TrackData[i].Control = 16;
                                  cdaudioDataOut->TrackData[i].TrackNumber = 170;
                                  cdaudioDataOut->TrackData[i].Reserved1 = 0;
                                  cdaudioDataOut->TrackData[i].Address[0] = 0;
                                  cdaudioDataOut->TrackData[i].Address[1] = (((((int) (*(Toc + 0))) & 240) >> 4) * 10) + (((int) (*(Toc + 0))) & 15);
                                  cdaudioDataOut->TrackData[i].Address[2] = (((((int) (*(Toc + 1))) & 240) >> 4) * 10) + (((int) (*(Toc + 1))) & 15);
                                  cdaudioDataOut->TrackData[i].Address[3] = (((((int) (*(Toc + 2))) & 240) >> 4) * 10) + (((int) (*(Toc + 2))) & 15);
                                  i += 1UL;
                                }
                                else
                                {
                                }

                                {
                                  Irp->IoStatus.Information = (unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[i]));
                                }
                                goto switch_6_break;
                                switch_6_exp_14:
                                {
                                  deviceExtension->PlayActive = 0;
                                  tmp___1 = CdAudioSendToNextDriver(DeviceObject, Irp);
                                }

                                return tmp___1;
                                goto switch_6_break;
                                switch_6_exp_15:
                                inputBuffer = Irp->AssociatedIrp.SystemBuffer;

                                Irp->IoStatus.Information = 0;
                                if (currentIrpStack->Parameters.DeviceIoControl.InputBufferLength < ((ULONG) (sizeof(CDROM_PLAY_AUDIO_MSF))))
                                {
                                  status = -1073741820L;
                                  goto switch_6_break;
                                }
                                else
                                {
                                }

                                retry = 5;
                                {
                                  while (1)
                                  {
                                    while_8_continue:
                                    ;

                                    {
                                      srb.CdbLength = 10;
                                      srb.TimeOutValue = 10;
                                      cdb->PNR_SEEK_AUDIO.OperationCode = 200;
                                      cdb->PNR_SEEK_AUDIO.Minute = ((((int) inputBuffer->StartingM) / 10) << 4) + (((int) inputBuffer->StartingM) % 10);
                                      cdb->PNR_SEEK_AUDIO.Second = ((((int) inputBuffer->StartingS) / 10) << 4) + (((int) inputBuffer->StartingS) % 10);
                                      cdb->PNR_SEEK_AUDIO.Frame = ((((int) inputBuffer->StartingF) / 10) << 4) + (((int) inputBuffer->StartingF) % 10);
                                      cdb->PNR_SEEK_AUDIO.Type = 1;
                                      status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                    }
                                    if (!(status >= 0L))
                                    {
                                      tmp___2 = retry;
                                      retry -= 1UL;
                                      if (tmp___2 > 0UL)
                                      {
                                      }
                                      else
                                      {
                                        goto while_8_break;
                                      }

                                    }
                                    else
                                    {
                                      goto while_8_break;
                                    }

                                  }

                                  while_8_break:
                                  ;

                                }
                                if (status >= 0L)
                                {
                                  {
                                    memset(cdb, 0, 12);
                                    retry = 5;
                                  }
                                  {
                                    while (1)
                                    {
                                      while_9_continue:
                                      ;

                                      {
                                        srb.CdbLength = 10;
                                        srb.TimeOutValue = 10;
                                        cdb->PNR_PLAY_AUDIO.OperationCode = 201;
                                        cdb->PNR_PLAY_AUDIO.StopAddr = 1;
                                        cdb->PNR_PLAY_AUDIO.Minute = ((((int) inputBuffer->EndingM) / 10) << 4) + (((int) inputBuffer->EndingM) % 10);
                                        cdb->PNR_PLAY_AUDIO.Second = ((((int) inputBuffer->EndingS) / 10) << 4) + (((int) inputBuffer->EndingS) % 10);
                                        cdb->PNR_PLAY_AUDIO.Frame = ((((int) inputBuffer->EndingF) / 10) << 4) + (((int) inputBuffer->EndingF) % 10);
                                        cdb->PNR_PLAY_AUDIO.Type = 1;
                                        status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                      }
                                      if (!(status >= 0L))
                                      {
                                        tmp___3 = retry;
                                        retry -= 1UL;
                                        if (tmp___3 > 0UL)
                                        {
                                        }
                                        else
                                        {
                                          goto while_9_break;
                                        }

                                      }
                                      else
                                      {
                                        goto while_9_break;
                                      }

                                    }

                                    while_9_break:
                                    ;

                                  }
                                  if (status >= 0L)
                                  {
                                    deviceExtension->PlayActive = 1;
                                  }
                                  else
                                  {
                                  }

                                }
                                else
                                {
                                }

                                goto switch_6_break;
                                switch_6_exp_16:
                                inputBuffer___0 = Irp->AssociatedIrp.SystemBuffer;

                                Irp->IoStatus.Information = 0;
                                if (currentIrpStack->Parameters.DeviceIoControl.InputBufferLength < ((ULONG) (sizeof(CDROM_SEEK_AUDIO_MSF))))
                                {
                                  status = -1073741820L;
                                  goto switch_6_break;
                                }
                                else
                                {
                                }

                                retry = 5;
                                {
                                  while (1)
                                  {
                                    while_10_continue:
                                    ;

                                    {
                                      srb.CdbLength = 10;
                                      srb.TimeOutValue = 10;
                                      cdb->PNR_SEEK_AUDIO.OperationCode = 200;
                                      cdb->PNR_SEEK_AUDIO.Minute = ((((int) inputBuffer___0->M) / 10) << 4) + (((int) inputBuffer___0->M) % 10);
                                      cdb->PNR_SEEK_AUDIO.Second = ((((int) inputBuffer___0->S) / 10) << 4) + (((int) inputBuffer___0->S) % 10);
                                      cdb->PNR_SEEK_AUDIO.Frame = ((((int) inputBuffer___0->F) / 10) << 4) + (((int) inputBuffer___0->F) % 10);
                                      cdb->PNR_SEEK_AUDIO.Type = 1;
                                      status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                    }
                                    if (!(status >= 0L))
                                    {
                                      tmp___4 = retry;
                                      retry -= 1UL;
                                      if (tmp___4 > 0UL)
                                      {
                                      }
                                      else
                                      {
                                        goto while_10_break;
                                      }

                                    }
                                    else
                                    {
                                      goto while_10_break;
                                    }

                                  }

                                  while_10_break:
                                  ;

                                }
                                goto switch_6_break;
                                switch_6_exp_17:
                                {
                                  Irp->IoStatus.Information = 0;
                                  deviceExtension->PlayActive = 0;
                                  srb.CdbLength = 10;
                                  srb.TimeOutValue = 10;
                                  cdb->PNR_PAUSE_AUDIO.OperationCode = 202;
                                  cdb->PNR_PAUSE_AUDIO.Pause = 1;
                                  status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                }

                                goto switch_6_break;
                                switch_6_exp_18:
                                {
                                  Irp->IoStatus.Information = 0;
                                  srb.CdbLength = 10;
                                  srb.TimeOutValue = 10;
                                  cdb->PNR_PAUSE_AUDIO.OperationCode = 202;
                                  status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                }

                                goto switch_6_break;
                                switch_6_exp_19:
                                {
                                  userPtr = Irp->AssociatedIrp.SystemBuffer;
                                  tmp___5 = ExAllocatePoolWithTag(4, 9, 541156419UL);
                                  SubQPtr = tmp___5;
                                }

                                if (currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < ((ULONG) (sizeof(SUB_Q_CURRENT_POSITION))))
                                {
                                  status = -1073741789L;
                                  Irp->IoStatus.Information = 0;
                                  if (SubQPtr)
                                  {
                                    {
                                    }
                                  }
                                  else
                                  {
                                  }

                                  goto switch_6_break;
                                }
                                else
                                {
                                }

                                if (((unsigned int) SubQPtr) == ((unsigned int) ((void *) 0)))
                                {
                                  {
                                    memset(userPtr, 0, sizeof(SUB_Q_CURRENT_POSITION));
                                    status = -1073741670L;
                                    Irp->IoStatus.Information = 0;
                                  }
                                  goto SetStatusAndReturn;
                                }
                                else
                                {
                                }

                                if (((int) ((struct _CDROM_SUB_Q_DATA_FORMAT *) userPtr)->Format) != 1)
                                {
                                  {
                                    memset(userPtr, 0, sizeof(SUB_Q_CURRENT_POSITION));
                                    Irp->IoStatus.Information = 0;
                                    status = -1073741808L;
                                  }
                                  goto SetStatusAndReturn;
                                }
                                else
                                {
                                }

                                retry = 5;
                                {
                                  while (1)
                                  {
                                    while_11_continue:
                                    ;

                                    {
                                      srb.CdbLength = 10;
                                      srb.TimeOutValue = 10;
                                      cdb->PNR_AUDIO_STATUS.OperationCode = 204;
                                      cdb->PNR_AUDIO_STATUS.AssignedLength = 6;
                                      status = SendSrbSynchronous(deviceExtension, &srb, SubQPtr, 6);
                                    }
                                    if (!(status >= 0L))
                                    {
                                      tmp___6 = retry;
                                      retry -= 1UL;
                                      if (tmp___6 > 0UL)
                                      {
                                        if (status != (-1073741661L))
                                        {
                                        }
                                        else
                                        {
                                          goto while_11_break;
                                        }

                                      }
                                      else
                                      {
                                        goto while_11_break;
                                      }

                                    }
                                    else
                                    {
                                      goto while_11_break;
                                    }

                                  }

                                  while_11_break:
                                  ;

                                }
                                if (status >= 0L)
                                {
                                  userPtr->Header.Reserved = 0;
                                  if (((int) (*(SubQPtr + 0))) == 0)
                                  {
                                    userPtr->Header.AudioStatus = 17;
                                  }
                                  else
                                  {
                                    if (((int) (*(SubQPtr + 0))) == 1)
                                    {
                                      deviceExtension->PlayActive = 0;
                                      userPtr->Header.AudioStatus = 18;
                                    }
                                    else
                                    {
                                      if (((int) (*(SubQPtr + 0))) == 2)
                                      {
                                        deviceExtension->PlayActive = 0;
                                        userPtr->Header.AudioStatus = 18;
                                      }
                                      else
                                      {
                                        if (((int) (*(SubQPtr + 0))) == 3)
                                        {
                                          userPtr->Header.AudioStatus = 19;
                                          deviceExtension->PlayActive = 0;
                                        }
                                        else
                                        {
                                          deviceExtension->PlayActive = 0;
                                        }

                                      }

                                    }

                                  }

                                }
                                else
                                {
                                  {
                                    Irp->IoStatus.Information = 0;
                                  }
                                  goto SetStatusAndReturn;
                                }

                                {
                                  memset(cdb, 0, 12);
                                  retry = 5;
                                }
                                {
                                  while (1)
                                  {
                                    while_12_continue:
                                    ;

                                    {
                                      srb.CdbLength = 10;
                                      srb.TimeOutValue = 10;
                                      cdb->PNR_READ_Q_CHANNEL.OperationCode = 194;
                                      cdb->PNR_READ_Q_CHANNEL.AssignedLength = 9;
                                      status = SendSrbSynchronous(deviceExtension, &srb, SubQPtr, 9);
                                    }
                                    if (!(status >= 0L))
                                    {
                                      tmp___7 = retry;
                                      retry -= 1UL;
                                      if (tmp___7 > 0UL)
                                      {
                                      }
                                      else
                                      {
                                        goto while_12_break;
                                      }

                                    }
                                    else
                                    {
                                      goto while_12_break;
                                    }

                                  }

                                  while_12_break:
                                  ;

                                }
                                if (status >= 0L)
                                {
                                  userPtr->Header.DataLength[0] = 0;
                                  userPtr->Header.DataLength[0] = 12;
                                  userPtr->FormatCode = 1;
                                  userPtr->Control = ((int) (*(SubQPtr + 0))) & 15;
                                  userPtr->ADR = 0;
                                  userPtr->TrackNumber = (((((int) (*(SubQPtr + 1))) & 240) >> 4) * 10) + (((int) (*(SubQPtr + 1))) & 15);
                                  userPtr->IndexNumber = (((((int) (*(SubQPtr + 2))) & 240) >> 4) * 10) + (((int) (*(SubQPtr + 2))) & 15);
                                  userPtr->AbsoluteAddress[0] = 0;
                                  userPtr->AbsoluteAddress[1] = (((((int) (*(SubQPtr + 6))) & 240) >> 4) * 10) + (((int) (*(SubQPtr + 6))) & 15);
                                  userPtr->AbsoluteAddress[2] = (((((int) (*(SubQPtr + 7))) & 240) >> 4) * 10) + (((int) (*(SubQPtr + 7))) & 15);
                                  userPtr->AbsoluteAddress[3] = (((((int) (*(SubQPtr + 8))) & 240) >> 4) * 10) + (((int) (*(SubQPtr + 8))) & 15);
                                  userPtr->TrackRelativeAddress[0] = 0;
                                  userPtr->TrackRelativeAddress[1] = (((((int) (*(SubQPtr + 3))) & 240) >> 4) * 10) + (((int) (*(SubQPtr + 3))) & 15);
                                  userPtr->TrackRelativeAddress[2] = (((((int) (*(SubQPtr + 4))) & 240) >> 4) * 10) + (((int) (*(SubQPtr + 4))) & 15);
                                  userPtr->TrackRelativeAddress[3] = (((((int) (*(SubQPtr + 5))) & 240) >> 4) * 10) + (((int) (*(SubQPtr + 5))) & 15);
                                  Irp->IoStatus.Information = sizeof(SUB_Q_CURRENT_POSITION);
                                }
                                else
                                {
                                  Irp->IoStatus.Information = 0;
                                }

                                {
                                }
                                goto switch_6_break;
                                switch_6_exp_20:
                                Irp->IoStatus.Information = 0;

                                deviceExtension->PlayActive = 0;
                                if (((int) deviceExtension->Active) == 9)
                                {
                                  srb.CdbLength = 10;
                                  srb.TimeOutValue = 10;
                                  cdb->PNR_EJECT.OperationCode = 192;
                                  cdb->PNR_EJECT.Immediate = 1;
                                }
                                else
                                {
                                  srb.CdbLength = 6;
                                  scsiCdb->START_STOP.OperationCode = 27;
                                  scsiCdb->START_STOP.LoadEject = 1;
                                  scsiCdb->START_STOP.Start = 0;
                                }

                                {
                                  status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                }
                                goto switch_6_break;
                                switch_6_exp_21:
                                ;

                                switch_6_exp_22:
                                ;

                                switch_6_exp_23:
                                Irp->IoStatus.Information = 0;

                                status = -1073741808L;
                                goto switch_6_break;
                                switch_6_exp_24:
                                {
                                  CdAudioIsPlayActive(DeviceObject);
                                }

                                switch_6_default:
                                {
                                  tmp___8 = CdAudioSendToNextDriver(DeviceObject, Irp);
                                }

                                return tmp___8;
                                goto switch_6_break;
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

                    }

                  }

                }

              }

            }

          }

        }

      }

    }

    SetStatusAndReturn:
    if (status == (-2147483626L))
    {
      if (((int) currentIrpStack->Flags) & 2)
      {
        status = -1073741435L;
        goto PioneerRestart;
      }
      else
      {
      }

      {
        Irp->IoStatus.Information = 0;
      }
    }
    else
    {
    }


    {
      Irp->IoStatus.__annonCompField4.Status = status;
      myStatus = status;
      IofCompleteRequest(Irp, 0);
    }
    return status;
  }
}

NTSTATUS CdAudioDenonDeviceControl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PIO_STACK_LOCATION currentIrpStack;
  PCD_DEVICE_EXTENSION deviceExtension;
  PCDROM_TOC cdaudioDataOut;
  SCSI_PASS_THROUGH srb;
  PCDB cdb;
  NTSTATUS status;
  ULONG i;
  ULONG bytesTransfered;
  PUCHAR Toc;
  BOOLEAN tmp;
  PVOID tmp___0;
  ULONG tracksToReturn;
  ULONG tracksOnCd;
  ULONG tracksInBuffer;
  ULONG dataLength;
  PCDROM_PLAY_AUDIO_MSF inputBuffer;
  PCDROM_SEEK_AUDIO_MSF inputBuffer___0;
  PUCHAR SubQPtr;
  PVOID tmp___1;
  PSUB_Q_CURRENT_POSITION userPtr;
  PUCHAR SubQPtr___0;
  PVOID tmp___2;
  NTSTATUS tmp___3;
  {
    currentIrpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
    deviceExtension = DeviceObject->DeviceExtension;
    cdaudioDataOut = Irp->AssociatedIrp.SystemBuffer;
    cdb = (union _CDB *) srb.Cdb;
    DenonRestart:
    {
      memset(cdb, 0, 12);
    }

    if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (14 << 2)))
    {
      goto switch_13_exp_25;
    }
    else
    {
      if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == ((2 << 16) | (1 << 14)))
      {
        goto switch_13_exp_26;
      }
      else
      {
        if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (6 << 2)))
        {
          goto switch_13_exp_27;
        }
        else
        {
          if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (2 << 2)))
          {
            goto switch_13_exp_28;
          }
          else
          {
            if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (1 << 2)))
            {
              goto switch_13_exp_29;
            }
            else
            {
              if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (3 << 2)))
              {
                goto switch_13_exp_30;
              }
              else
              {
                if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (4 << 2)))
                {
                  goto switch_13_exp_31;
                }
                else
                {
                  if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (11 << 2)))
                  {
                    goto switch_13_exp_32;
                  }
                  else
                  {
                    if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (514 << 2)))
                    {
                      goto switch_13_exp_33;
                    }
                    else
                    {
                      if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (13 << 2)))
                      {
                        goto switch_13_exp_34;
                      }
                      else
                      {
                        if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (5 << 2)))
                        {
                          goto switch_13_exp_35;
                        }
                        else
                        {
                          if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (10 << 2)))
                          {
                            goto switch_13_exp_36;
                          }
                          else
                          {
                            if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (512 << 2)))
                            {
                              goto switch_13_exp_37;
                            }
                            else
                            {
                              {
                                goto switch_13_default;
                                if (0)
                                {
                                  switch_13_exp_25:
                                  status = -1073741808L;

                                  Irp->IoStatus.Information = 0;
                                  goto switch_13_break;
                                  switch_13_exp_26:
                                  ;

                                  if (currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < ((unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[0]))))
                                  {
                                    status = -1073741789L;
                                    Irp->IoStatus.Information = 0;
                                    goto switch_13_break;
                                  }
                                  else
                                  {
                                  }

                                  {
                                    tmp = CdAudioIsPlayActive(DeviceObject);
                                  }
                                  if (tmp)
                                  {
                                    status = -2147483631L;
                                    Irp->IoStatus.Information = 0;
                                    goto switch_13_break;
                                  }
                                  else
                                  {
                                  }

                                  {
                                    tmp___0 = ExAllocatePoolWithTag(4, sizeof(CDROM_TOC), 541156419UL);
                                    Toc = (UCHAR *) tmp___0;
                                  }
                                  if (((unsigned int) Toc) == ((unsigned int) ((void *) 0)))
                                  {
                                    status = -1073741670L;
                                    Irp->IoStatus.Information = 0;
                                    goto SetStatusAndReturn;
                                  }
                                  else
                                  {
                                  }

                                  {
                                    memset(Toc, 0, sizeof(CDROM_TOC));
                                    cdb->CDB6GENERIC.OperationCode = 233;
                                    srb.TimeOutValue = 10;
                                    srb.CdbLength = 6;
                                    status = SendSrbSynchronous(deviceExtension, &srb, Toc, sizeof(CDROM_TOC));
                                  }
                                  if (!(status >= 0L))
                                  {
                                    if (status != (-1073741764L))
                                    {
                                      if (status != (-1073741764L))
                                      {
                                        {
                                          Irp->IoStatus.Information = 0;
                                        }
                                        goto SetStatusAndReturn;
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

                                  status = 0L;
                                  if (currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength > srb.DataTransferLength)
                                  {
                                    bytesTransfered = srb.DataTransferLength;
                                  }
                                  else
                                  {
                                    bytesTransfered = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength;
                                  }

                                  cdaudioDataOut->FirstTrack = (((((int) (*(Toc + 1))) & 240) >> 4) * 10) + (((int) (*(Toc + 1))) & 15);
                                  cdaudioDataOut->LastTrack = (((((int) (*(Toc + 5))) & 240) >> 4) * 10) + (((int) (*(Toc + 5))) & 15);
                                  tracksOnCd = (((int) cdaudioDataOut->LastTrack) - ((int) cdaudioDataOut->FirstTrack)) + 1;
                                  dataLength = ((unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[tracksOnCd]))) - 2UL;
                                  cdaudioDataOut->Length[0] = (unsigned char) (dataLength >> 8);
                                  cdaudioDataOut->Length[1] = (unsigned char) (dataLength & 255UL);
                                  tracksInBuffer = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength - ((unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[0])));
                                  tracksInBuffer /= (ULONG) (sizeof(TRACK_DATA));
                                  if (tracksInBuffer < tracksOnCd)
                                  {
                                    tracksToReturn = tracksInBuffer;
                                  }
                                  else
                                  {
                                    tracksToReturn = tracksOnCd;
                                  }

                                  i = 0;
                                  {
                                    while (1)
                                    {
                                      while_14_continue:
                                      ;

                                      if (i < tracksToReturn)
                                      {
                                      }
                                      else
                                      {
                                        goto while_14_break;
                                      }

                                      cdaudioDataOut->TrackData[i].Reserved = 0;
                                      cdaudioDataOut->TrackData[i].Control = *(Toc + ((i * 4UL) + 12UL));
                                      cdaudioDataOut->TrackData[i].TrackNumber = (unsigned char) (i + ((ULONG) cdaudioDataOut->FirstTrack));
                                      cdaudioDataOut->TrackData[i].Reserved1 = 0;
                                      cdaudioDataOut->TrackData[i].Address[0] = 0;
                                      cdaudioDataOut->TrackData[i].Address[1] = (((((int) (*(Toc + ((i * 4UL) + 13UL)))) & 240) >> 4) * 10) + (((int) (*(Toc + ((i * 4UL) + 13UL)))) & 15);
                                      cdaudioDataOut->TrackData[i].Address[2] = (((((int) (*(Toc + ((i * 4UL) + 14UL)))) & 240) >> 4) * 10) + (((int) (*(Toc + ((i * 4UL) + 14UL)))) & 15);
                                      cdaudioDataOut->TrackData[i].Address[3] = (((((int) (*(Toc + ((i * 4UL) + 15UL)))) & 240) >> 4) * 10) + (((int) (*(Toc + ((i * 4UL) + 15UL)))) & 15);
                                      i += 1UL;
                                    }

                                    while_14_break:
                                    ;

                                  }
                                  if (tracksInBuffer > tracksOnCd)
                                  {
                                    cdaudioDataOut->TrackData[i].Reserved = 0;
                                    cdaudioDataOut->TrackData[i].Control = 0;
                                    cdaudioDataOut->TrackData[i].TrackNumber = 170;
                                    cdaudioDataOut->TrackData[i].Reserved1 = 0;
                                    cdaudioDataOut->TrackData[i].Address[0] = 0;
                                    cdaudioDataOut->TrackData[i].Address[1] = (((((int) (*(Toc + 9))) & 240) >> 4) * 10) + (((int) (*(Toc + 9))) & 15);
                                    cdaudioDataOut->TrackData[i].Address[2] = (((((int) (*(Toc + 10))) & 240) >> 4) * 10) + (((int) (*(Toc + 10))) & 15);
                                    cdaudioDataOut->TrackData[i].Address[3] = (((((int) (*(Toc + 11))) & 240) >> 4) * 10) + (((int) (*(Toc + 11))) & 15);
                                    i += 1UL;
                                  }
                                  else
                                  {
                                  }

                                  {
                                    Irp->IoStatus.Information = (unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[i]));
                                    deviceExtension->Paused = 0;
                                    deviceExtension->PausedM = 0;
                                    deviceExtension->PausedS = 0;
                                    deviceExtension->PausedF = 0;
                                    deviceExtension->LastEndM = 0;
                                    deviceExtension->LastEndS = 0;
                                    deviceExtension->LastEndF = 0;
                                  }
                                  goto switch_13_break;
                                  switch_13_exp_27:
                                  ;

                                  switch_13_exp_28:
                                  {
                                    inputBuffer = Irp->AssociatedIrp.SystemBuffer;
                                    Irp->IoStatus.Information = 0;
                                    deviceExtension->PlayActive = 0;
                                    srb.CdbLength = 6;
                                    srb.TimeOutValue = 10;
                                    cdb->CDB6GENERIC.OperationCode = 231;
                                    status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                  }

                                  if (status >= 0L)
                                  {
                                    deviceExtension->Paused = 0;
                                    deviceExtension->PausedM = 0;
                                    deviceExtension->PausedS = 0;
                                    deviceExtension->PausedF = 0;
                                    deviceExtension->LastEndM = 0;
                                    deviceExtension->LastEndS = 0;
                                    deviceExtension->LastEndF = 0;
                                  }
                                  else
                                  {
                                  }

                                  if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == ((ULONG) (((2 << 16) | (1 << 14)) | (2 << 2))))
                                  {
                                    goto SetStatusAndReturn;
                                  }
                                  else
                                  {
                                  }

                                  if (currentIrpStack->Parameters.DeviceIoControl.InputBufferLength < ((ULONG) (sizeof(CDROM_PLAY_AUDIO_MSF))))
                                  {
                                    status = -1073741820L;
                                    goto switch_13_break;
                                  }
                                  else
                                  {
                                  }

                                  {
                                    srb.CdbLength = 10;
                                    srb.TimeOutValue = 10;
                                    cdb->CDB10.OperationCode = 34;
                                    cdb->CDB10.LogicalBlockByte0 = ((((int) inputBuffer->StartingM) / 10) << 4) + (((int) inputBuffer->StartingM) % 10);
                                    cdb->CDB10.LogicalBlockByte1 = ((((int) inputBuffer->StartingS) / 10) << 4) + (((int) inputBuffer->StartingS) % 10);
                                    cdb->CDB10.LogicalBlockByte2 = ((((int) inputBuffer->StartingF) / 10) << 4) + (((int) inputBuffer->StartingF) % 10);
                                    cdb->CDB10.LogicalBlockByte3 = ((((int) inputBuffer->EndingM) / 10) << 4) + (((int) inputBuffer->EndingM) % 10);
                                    cdb->CDB10.Reserved2 = ((((int) inputBuffer->EndingS) / 10) << 4) + (((int) inputBuffer->EndingS) % 10);
                                    cdb->CDB10.TransferBlocksMsb = ((((int) inputBuffer->EndingF) / 10) << 4) + (((int) inputBuffer->EndingF) % 10);
                                    status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                  }
                                  if (status >= 0L)
                                  {
                                    deviceExtension->PlayActive = 1;
                                    deviceExtension->Paused = 0;
                                    deviceExtension->LastEndM = ((((int) inputBuffer->EndingM) / 10) << 4) + (((int) inputBuffer->EndingM) % 10);
                                    deviceExtension->LastEndS = ((((int) inputBuffer->EndingS) / 10) << 4) + (((int) inputBuffer->EndingS) % 10);
                                    deviceExtension->LastEndF = ((((int) inputBuffer->EndingF) / 10) << 4) + (((int) inputBuffer->EndingF) % 10);
                                  }
                                  else
                                  {
                                    if (status == (-1073741808L))
                                    {
                                      status = -1073741803L;
                                    }
                                    else
                                    {
                                    }

                                  }

                                  goto switch_13_break;
                                  switch_13_exp_29:
                                  inputBuffer___0 = Irp->AssociatedIrp.SystemBuffer;

                                  Irp->IoStatus.Information = 0;
                                  if (currentIrpStack->Parameters.DeviceIoControl.InputBufferLength < ((ULONG) (sizeof(CDROM_SEEK_AUDIO_MSF))))
                                  {
                                    status = -1073741820L;
                                    goto switch_13_break;
                                  }
                                  else
                                  {
                                  }

                                  {
                                    srb.CdbLength = 10;
                                    srb.TimeOutValue = 10;
                                    cdb->CDB10.OperationCode = 34;
                                    cdb->CDB10.LogicalBlockByte0 = ((((int) inputBuffer___0->M) / 10) << 4) + (((int) inputBuffer___0->M) % 10);
                                    cdb->CDB10.LogicalBlockByte1 = ((((int) inputBuffer___0->S) / 10) << 4) + (((int) inputBuffer___0->S) % 10);
                                    cdb->CDB10.LogicalBlockByte2 = ((((int) inputBuffer___0->F) / 10) << 4) + (((int) inputBuffer___0->F) % 10);
                                    cdb->CDB10.LogicalBlockByte3 = ((((int) inputBuffer___0->M) / 10) << 4) + (((int) inputBuffer___0->M) % 10);
                                    cdb->CDB10.Reserved2 = ((((int) inputBuffer___0->S) / 10) << 4) + (((int) inputBuffer___0->S) % 10);
                                    cdb->CDB10.TransferBlocksMsb = ((((int) inputBuffer___0->F) / 10) << 4) + (((int) inputBuffer___0->F) % 10);
                                    status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                  }
                                  if (status >= 0L)
                                  {
                                    deviceExtension->Paused = 1;
                                    deviceExtension->PausedM = ((((int) inputBuffer___0->M) / 10) << 4) + (((int) inputBuffer___0->M) % 10);
                                    deviceExtension->PausedS = ((((int) inputBuffer___0->S) / 10) << 4) + (((int) inputBuffer___0->S) % 10);
                                    deviceExtension->PausedF = ((((int) inputBuffer___0->F) / 10) << 4) + (((int) inputBuffer___0->F) % 10);
                                    deviceExtension->LastEndM = ((((int) inputBuffer___0->M) / 10) << 4) + (((int) inputBuffer___0->M) % 10);
                                    deviceExtension->LastEndS = ((((int) inputBuffer___0->S) / 10) << 4) + (((int) inputBuffer___0->S) % 10);
                                    deviceExtension->LastEndF = ((((int) inputBuffer___0->F) / 10) << 4) + (((int) inputBuffer___0->F) % 10);
                                  }
                                  else
                                  {
                                    if (status == (-1073741808L))
                                    {
                                      status = -1073741803L;
                                    }
                                    else
                                    {
                                    }

                                  }

                                  goto switch_13_break;
                                  switch_13_exp_30:
                                  {
                                    tmp___1 = ExAllocatePoolWithTag(4, 10, 541156419UL);
                                    SubQPtr = tmp___1;
                                    Irp->IoStatus.Information = 0;
                                    deviceExtension->PlayActive = 0;
                                  }

                                  if (((unsigned int) SubQPtr) == ((unsigned int) ((void *) 0)))
                                  {
                                    status = -1073741670L;
                                    goto SetStatusAndReturn;
                                  }
                                  else
                                  {
                                  }

                                  if (((int) deviceExtension->Paused) == 1)
                                  {
                                    {
                                      status = 0L;
                                    }
                                    goto SetStatusAndReturn;
                                  }
                                  else
                                  {
                                  }

                                  {
                                    srb.CdbLength = 6;
                                    srb.TimeOutValue = 10;
                                    cdb->CDB6GENERIC.OperationCode = 235;
                                    cdb->CDB6GENERIC.CommandUniqueBytes[2] = 10;
                                    status = SendSrbSynchronous(deviceExtension, &srb, SubQPtr, 10);
                                  }
                                  if (!(status >= 0L))
                                  {
                                    {
                                    }
                                    goto SetStatusAndReturn;
                                  }
                                  else
                                  {
                                  }

                                  {
                                    deviceExtension->PausedM = *(SubQPtr + 7);
                                    deviceExtension->PausedS = *(SubQPtr + 8);
                                    deviceExtension->PausedF = *(SubQPtr + 9);
                                    memset(cdb, 0, 12);
                                    srb.CdbLength = 6;
                                    srb.TimeOutValue = 10;
                                    cdb->CDB6GENERIC.OperationCode = 231;
                                    status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                  }
                                  if (!(status >= 0L))
                                  {
                                    {
                                    }
                                    goto SetStatusAndReturn;
                                  }
                                  else
                                  {
                                  }

                                  {
                                    deviceExtension->Paused = 1;
                                    deviceExtension->PausedM = *(SubQPtr + 7);
                                    deviceExtension->PausedS = *(SubQPtr + 8);
                                    deviceExtension->PausedF = *(SubQPtr + 9);
                                  }
                                  goto switch_13_break;
                                  switch_13_exp_31:
                                  Irp->IoStatus.Information = 0;

                                  if (((int) deviceExtension->Paused) == 0)
                                  {
                                    status = -1073741823L;
                                    goto SetStatusAndReturn;
                                  }
                                  else
                                  {
                                  }

                                  {
                                    srb.CdbLength = 10;
                                    srb.TimeOutValue = 10;
                                    cdb->CDB10.OperationCode = 34;
                                    cdb->CDB10.LogicalBlockByte0 = deviceExtension->PausedM;
                                    cdb->CDB10.LogicalBlockByte1 = deviceExtension->PausedS;
                                    cdb->CDB10.LogicalBlockByte2 = deviceExtension->PausedF;
                                    cdb->CDB10.LogicalBlockByte3 = deviceExtension->LastEndM;
                                    cdb->CDB10.Reserved2 = deviceExtension->LastEndS;
                                    cdb->CDB10.TransferBlocksMsb = deviceExtension->LastEndF;
                                    status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                  }
                                  if (status >= 0L)
                                  {
                                    deviceExtension->Paused = 0;
                                  }
                                  else
                                  {
                                  }

                                  goto switch_13_break;
                                  switch_13_exp_32:
                                  {
                                    userPtr = Irp->AssociatedIrp.SystemBuffer;
                                    tmp___2 = ExAllocatePoolWithTag(4, sizeof(SUB_Q_CHANNEL_DATA), 541156419UL);
                                    SubQPtr___0 = tmp___2;
                                  }

                                  if (currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < ((ULONG) (sizeof(SUB_Q_CURRENT_POSITION))))
                                  {
                                    status = -1073741789L;
                                    Irp->IoStatus.Information = 0;
                                    if (SubQPtr___0)
                                    {
                                      {
                                      }
                                    }
                                    else
                                    {
                                    }

                                    goto switch_13_break;
                                  }
                                  else
                                  {
                                  }

                                  if (((unsigned int) SubQPtr___0) == ((unsigned int) ((void *) 0)))
                                  {
                                    {
                                      memset(userPtr, 0, sizeof(SUB_Q_CURRENT_POSITION));
                                      status = -1073741670L;
                                      Irp->IoStatus.Information = 0;
                                    }
                                    goto SetStatusAndReturn;
                                  }
                                  else
                                  {
                                  }

                                  if (((int) ((struct _CDROM_SUB_Q_DATA_FORMAT *) userPtr)->Format) != 1)
                                  {
                                    {
                                      memset(userPtr, 0, sizeof(SUB_Q_CURRENT_POSITION));
                                      status = -1073741823L;
                                      Irp->IoStatus.Information = 0;
                                    }
                                    goto SetStatusAndReturn;
                                  }
                                  else
                                  {
                                  }

                                  {
                                    srb.CdbLength = 6;
                                    srb.TimeOutValue = 10;
                                    cdb->CDB6GENERIC.OperationCode = 235;
                                    cdb->CDB6GENERIC.CommandUniqueBytes[2] = 10;
                                    status = SendSrbSynchronous(deviceExtension, &srb, SubQPtr___0, 10);
                                  }
                                  if (status >= 0L)
                                  {
                                    userPtr->Header.Reserved = 0;
                                    if (((int) deviceExtension->Paused) == 1)
                                    {
                                      deviceExtension->PlayActive = 0;
                                      userPtr->Header.AudioStatus = 18;
                                    }
                                    else
                                    {
                                      if (((int) (*(SubQPtr___0 + 0))) == 1)
                                      {
                                        userPtr->Header.AudioStatus = 17;
                                      }
                                      else
                                      {
                                        if (((int) (*(SubQPtr___0 + 0))) == 0)
                                        {
                                          userPtr->Header.AudioStatus = 19;
                                          deviceExtension->PlayActive = 0;
                                        }
                                        else
                                        {
                                          deviceExtension->PlayActive = 0;
                                        }

                                      }

                                    }

                                    userPtr->Header.DataLength[0] = 0;
                                    userPtr->Header.DataLength[0] = 12;
                                    userPtr->FormatCode = 1;
                                    userPtr->Control = *(SubQPtr___0 + 1);
                                    userPtr->ADR = 0;
                                    userPtr->TrackNumber = (((((int) (*(SubQPtr___0 + 2))) & 240) >> 4) * 10) + (((int) (*(SubQPtr___0 + 2))) & 15);
                                    userPtr->IndexNumber = (((((int) (*(SubQPtr___0 + 3))) & 240) >> 4) * 10) + (((int) (*(SubQPtr___0 + 3))) & 15);
                                    userPtr->AbsoluteAddress[0] = 0;
                                    userPtr->AbsoluteAddress[1] = (((((int) (*(SubQPtr___0 + 7))) & 240) >> 4) * 10) + (((int) (*(SubQPtr___0 + 7))) & 15);
                                    userPtr->AbsoluteAddress[2] = (((((int) (*(SubQPtr___0 + 8))) & 240) >> 4) * 10) + (((int) (*(SubQPtr___0 + 8))) & 15);
                                    userPtr->AbsoluteAddress[3] = (((((int) (*(SubQPtr___0 + 9))) & 240) >> 4) * 10) + (((int) (*(SubQPtr___0 + 9))) & 15);
                                    userPtr->TrackRelativeAddress[0] = 0;
                                    userPtr->TrackRelativeAddress[1] = (((((int) (*(SubQPtr___0 + 4))) & 240) >> 4) * 10) + (((int) (*(SubQPtr___0 + 4))) & 15);
                                    userPtr->TrackRelativeAddress[2] = (((((int) (*(SubQPtr___0 + 5))) & 240) >> 4) * 10) + (((int) (*(SubQPtr___0 + 5))) & 15);
                                    userPtr->TrackRelativeAddress[3] = (((((int) (*(SubQPtr___0 + 6))) & 240) >> 4) * 10) + (((int) (*(SubQPtr___0 + 6))) & 15);
                                    Irp->IoStatus.Information = sizeof(SUB_Q_CURRENT_POSITION);
                                  }
                                  else
                                  {
                                    Irp->IoStatus.Information = 0;
                                  }

                                  {
                                  }
                                  goto switch_13_break;
                                  switch_13_exp_33:
                                  {
                                    Irp->IoStatus.Information = 0;
                                    deviceExtension->PlayActive = 0;
                                    srb.CdbLength = 6;
                                    srb.TimeOutValue = 10;
                                    cdb->CDB6GENERIC.OperationCode = 230;
                                    status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                  }

                                  goto switch_13_break;
                                  switch_13_exp_34:
                                  ;

                                  switch_13_exp_35:
                                  ;

                                  switch_13_exp_36:
                                  Irp->IoStatus.Information = 0;

                                  status = -1073741808L;
                                  goto switch_13_break;
                                  switch_13_exp_37:
                                  {
                                    CdAudioIsPlayActive(DeviceObject);
                                  }

                                  switch_13_default:
                                  {
                                    tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
                                  }

                                  return tmp___3;
                                  goto switch_13_break;
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

    SetStatusAndReturn:
    if (status == (-2147483626L))
    {
      if (((int) currentIrpStack->Flags) & 2)
      {
        status = -1073741435L;
        goto DenonRestart;
      }
      else
      {
      }

      {
        Irp->IoStatus.Information = 0;
      }
    }
    else
    {
    }


    {
      Irp->IoStatus.__annonCompField4.Status = status;
      myStatus = status;
      IofCompleteRequest(Irp, 0);
    }
    return status;
  }
}

NTSTATUS CdAudioHitachiSendPauseCommand(PDEVICE_OBJECT DeviceObject)
{
  PCD_DEVICE_EXTENSION deviceExtension;
  SCSI_PASS_THROUGH srb;
  PHITACHICDB cdb;
  NTSTATUS status;
  PUCHAR PausePos;
  PVOID tmp;
  {
    {
      deviceExtension = DeviceObject->DeviceExtension;
      cdb = (union _HITACHICDB *) srb.Cdb;
      tmp = ExAllocatePoolWithTag(4, 3, 541156419UL);
      PausePos = (UCHAR *) tmp;
    }
    if (((unsigned int) PausePos) == ((unsigned int) ((void *) 0)))
    {
      return -1073741670L;
    }
    else
    {
    }

    {
      memset(PausePos, 0, 3);
      memset(cdb, 0, 12);
      srb.CdbLength = 12;
      srb.TimeOutValue = 10;
      cdb->PAUSE_AUDIO.OperationCode = 225;
      status = SendSrbSynchronous(deviceExtension, &srb, PausePos, 3);
    }
    return status;
  }
}

NTSTATUS CdAudioHitachiDeviceControl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PIO_STACK_LOCATION currentIrpStack;
  PCD_DEVICE_EXTENSION deviceExtension;
  PCDROM_TOC cdaudioDataOut;
  SCSI_PASS_THROUGH srb;
  PHITACHICDB cdb;
  NTSTATUS status;
  ULONG i;
  ULONG bytesTransfered;
  PUCHAR Toc;
  BOOLEAN tmp;
  PVOID tmp___0;
  ULONG tracksToReturn;
  ULONG tracksOnCd;
  ULONG tracksInBuffer;
  ULONG dataLength;
  ULONG tracksToReturn___0;
  ULONG tracksOnCd___0;
  ULONG tracksInBuffer___0;
  ULONG dataLength___0;
  NTSTATUS tmp___1;
  PCDROM_PLAY_AUDIO_MSF inputBuffer;
  PCDROM_SEEK_AUDIO_MSF inputBuffer___0;
  PUCHAR PausePos;
  PVOID tmp___2;
  PSUB_Q_CURRENT_POSITION userPtr;
  PUCHAR SubQPtr;
  PVOID tmp___3;
  PUCHAR EjectStatus;
  PVOID tmp___4;
  NTSTATUS tmp___5;
  {
    currentIrpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
    deviceExtension = DeviceObject->DeviceExtension;
    cdaudioDataOut = Irp->AssociatedIrp.SystemBuffer;
    cdb = (union _HITACHICDB *) srb.Cdb;
    HitachiRestart:
    {
      memset(cdb, 0, 12);
    }

    if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == ((2 << 16) | (1 << 14)))
    {
      goto switch_15_exp_38;
    }
    else
    {
      if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (2 << 2)))
      {
        goto switch_15_exp_39;
      }
      else
      {
        if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (6 << 2)))
        {
          goto switch_15_exp_40;
        }
        else
        {
          if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (1 << 2)))
          {
            goto switch_15_exp_41;
          }
          else
          {
            if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (3 << 2)))
            {
              goto switch_15_exp_42;
            }
            else
            {
              if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (4 << 2)))
              {
                goto switch_15_exp_43;
              }
              else
              {
                if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (11 << 2)))
                {
                  goto switch_15_exp_44;
                }
                else
                {
                  if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (514 << 2)))
                  {
                    goto switch_15_exp_45;
                  }
                  else
                  {
                    if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (13 << 2)))
                    {
                      goto switch_15_exp_46;
                    }
                    else
                    {
                      if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (5 << 2)))
                      {
                        goto switch_15_exp_47;
                      }
                      else
                      {
                        if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (10 << 2)))
                        {
                          goto switch_15_exp_48;
                        }
                        else
                        {
                          if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (512 << 2)))
                          {
                            goto switch_15_exp_49;
                          }
                          else
                          {
                            {
                              goto switch_15_default;
                              if (0)
                              {
                                switch_15_exp_38:
                                ;

                                if (currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < ((unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[0]))))
                                {
                                  status = -1073741789L;
                                  Irp->IoStatus.Information = 0;
                                  goto switch_15_break;
                                }
                                else
                                {
                                }

                                {
                                  tmp = CdAudioIsPlayActive(DeviceObject);
                                }
                                if (tmp)
                                {
                                  status = -2147483631L;
                                  Irp->IoStatus.Information = 0;
                                  goto switch_15_break;
                                }
                                else
                                {
                                }

                                {
                                  tmp___0 = ExAllocatePoolWithTag(4, sizeof(CDROM_TOC), 541156419UL);
                                  Toc = (UCHAR *) tmp___0;
                                }
                                if (((unsigned int) Toc) == ((unsigned int) ((void *) 0)))
                                {
                                  status = -1073741670L;
                                  Irp->IoStatus.Information = 0;
                                  goto SetStatusAndReturn;
                                }
                                else
                                {
                                }

                                {
                                  memset(Toc, 0, sizeof(CDROM_TOC));
                                  srb.CdbLength = 12;
                                }
                                if (((int) deviceExtension->Active) == 5)
                                {
                                  cdb->READ_DISC_INFO.OperationCode = 227;
                                }
                                else
                                {
                                  cdb->READ_DISC_INFO.OperationCode = 232;
                                }

                                {
                                  cdb->READ_DISC_INFO.AllocationLength[0] = (sizeof(CDROM_TOC)) >> 8;
                                  cdb->READ_DISC_INFO.AllocationLength[1] = (sizeof(CDROM_TOC)) & 255U;
                                  srb.TimeOutValue = 10;
                                  status = SendSrbSynchronous(deviceExtension, &srb, Toc, sizeof(CDROM_TOC));
                                }
                                if (!(status >= 0L))
                                {
                                  if (status != (-1073741764L))
                                  {
                                    if (status != (-1073741764L))
                                    {
                                      {
                                        Irp->IoStatus.Information = 0;
                                      }
                                      goto SetStatusAndReturn;
                                    }
                                    else
                                    {
                                    }

                                  }
                                  else
                                  {
                                    status = 0L;
                                  }

                                }
                                else
                                {
                                  status = 0L;
                                }

                                if (((int) deviceExtension->Active) == 6)
                                {
                                  if (currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength > ((ULONG) (sizeof(CDROM_TOC))))
                                  {
                                    bytesTransfered = sizeof(CDROM_TOC);
                                  }
                                  else
                                  {
                                    bytesTransfered = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength;
                                  }

                                  cdaudioDataOut->FirstTrack = *(Toc + 2);
                                  cdaudioDataOut->LastTrack = *(Toc + 3);
                                  tracksOnCd = (((int) cdaudioDataOut->LastTrack) - ((int) cdaudioDataOut->FirstTrack)) + 1;
                                  dataLength = ((unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[tracksOnCd]))) - 2UL;
                                  cdaudioDataOut->Length[0] = (unsigned char) (dataLength >> 8);
                                  cdaudioDataOut->Length[1] = (unsigned char) (dataLength & 255UL);
                                  tracksInBuffer = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength - ((unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[0])));
                                  tracksInBuffer /= (ULONG) (sizeof(TRACK_DATA));
                                  if (tracksInBuffer < tracksOnCd)
                                  {
                                    tracksToReturn = tracksInBuffer;
                                  }
                                  else
                                  {
                                    tracksToReturn = tracksOnCd;
                                  }

                                  i = 0;
                                  {
                                    while (1)
                                    {
                                      while_16_continue:
                                      ;

                                      if (i < tracksToReturn)
                                      {
                                      }
                                      else
                                      {
                                        goto while_16_break;
                                      }

                                      cdaudioDataOut->TrackData[i].Reserved = 0;
                                      cdaudioDataOut->TrackData[i].Control = ((((int) (*(Toc + ((i * 4UL) + 8UL)))) & 15) << 4) | (((int) (*(Toc + ((i * 4UL) + 8UL)))) >> 4);
                                      cdaudioDataOut->TrackData[i].TrackNumber = (unsigned char) (i + ((ULONG) cdaudioDataOut->FirstTrack));
                                      cdaudioDataOut->TrackData[i].Reserved1 = 0;
                                      cdaudioDataOut->TrackData[i].Address[0] = 0;
                                      cdaudioDataOut->TrackData[i].Address[1] = *(Toc + ((i * 4UL) + 9UL));
                                      cdaudioDataOut->TrackData[i].Address[2] = *(Toc + ((i * 4UL) + 10UL));
                                      cdaudioDataOut->TrackData[i].Address[3] = *(Toc + ((i * 4UL) + 11UL));
                                      i += 1UL;
                                    }

                                    while_16_break:
                                    ;

                                  }
                                  if (tracksInBuffer > tracksOnCd)
                                  {
                                    cdaudioDataOut->TrackData[i].Reserved = 0;
                                    cdaudioDataOut->TrackData[i].Control = 16;
                                    cdaudioDataOut->TrackData[i].TrackNumber = 170;
                                    cdaudioDataOut->TrackData[i].Reserved1 = 0;
                                    cdaudioDataOut->TrackData[i].Address[0] = 0;
                                    cdaudioDataOut->TrackData[i].Address[1] = *(Toc + 5);
                                    cdaudioDataOut->TrackData[i].Address[2] = *(Toc + 6);
                                    cdaudioDataOut->TrackData[i].Address[3] = *(Toc + 7);
                                    i += 1UL;
                                  }
                                  else
                                  {
                                  }

                                  Irp->IoStatus.Information = (unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[i]));
                                  deviceExtension->Paused = 0;
                                  deviceExtension->PausedM = 0;
                                  deviceExtension->PausedS = 0;
                                  deviceExtension->PausedF = 0;
                                  deviceExtension->LastEndM = 0;
                                  deviceExtension->LastEndS = 0;
                                  deviceExtension->LastEndF = 0;
                                }
                                else
                                {
                                  if (currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength > ((ULONG) (sizeof(CDROM_TOC))))
                                  {
                                    bytesTransfered = sizeof(CDROM_TOC);
                                  }
                                  else
                                  {
                                    bytesTransfered = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength;
                                  }

                                  cdaudioDataOut->FirstTrack = *(Toc + 1);
                                  cdaudioDataOut->LastTrack = *(Toc + 2);
                                  tracksOnCd___0 = (((int) cdaudioDataOut->LastTrack) - ((int) cdaudioDataOut->FirstTrack)) + 1;
                                  dataLength___0 = ((unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[tracksOnCd___0]))) - 2UL;
                                  cdaudioDataOut->Length[0] = (unsigned char) (dataLength___0 >> 8);
                                  cdaudioDataOut->Length[1] = (unsigned char) (dataLength___0 & 255UL);
                                  tracksInBuffer___0 = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength - ((unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[0])));
                                  tracksInBuffer___0 /= (ULONG) (sizeof(TRACK_DATA));
                                  if (tracksInBuffer___0 < tracksOnCd___0)
                                  {
                                    tracksToReturn___0 = tracksInBuffer___0;
                                  }
                                  else
                                  {
                                    tracksToReturn___0 = tracksOnCd___0;
                                  }

                                  i = 0;
                                  {
                                    while (1)
                                    {
                                      while_17_continue:
                                      ;

                                      if (i < tracksToReturn___0)
                                      {
                                      }
                                      else
                                      {
                                        goto while_17_break;
                                      }

                                      cdaudioDataOut->TrackData[i].Reserved = 0;
                                      if (((int) (*(Toc + ((i * 3UL) + 6UL)))) & 128)
                                      {
                                        cdaudioDataOut->TrackData[i].Control = 4;
                                      }
                                      else
                                      {
                                        cdaudioDataOut->TrackData[i].Control = 0;
                                      }

                                      cdaudioDataOut->TrackData[i].Adr = 0;
                                      cdaudioDataOut->TrackData[i].TrackNumber = (unsigned char) (i + ((ULONG) cdaudioDataOut->FirstTrack));
                                      cdaudioDataOut->TrackData[i].Reserved1 = 0;
                                      cdaudioDataOut->TrackData[i].Address[0] = 0;
                                      cdaudioDataOut->TrackData[i].Address[1] = ((int) (*(Toc + ((i * 3UL) + 6UL)))) & 127;
                                      cdaudioDataOut->TrackData[i].Address[2] = *(Toc + ((i * 3UL) + 7UL));
                                      cdaudioDataOut->TrackData[i].Address[3] = *(Toc + ((i * 3UL) + 8UL));
                                      i += 1UL;
                                    }

                                    while_17_break:
                                    ;

                                  }
                                  if (tracksInBuffer___0 > tracksOnCd___0)
                                  {
                                    cdaudioDataOut->TrackData[i].Reserved = 0;
                                    cdaudioDataOut->TrackData[i].Control = 16;
                                    cdaudioDataOut->TrackData[i].TrackNumber = 170;
                                    cdaudioDataOut->TrackData[i].Reserved1 = 0;
                                    cdaudioDataOut->TrackData[i].Address[0] = 0;
                                    cdaudioDataOut->TrackData[i].Address[1] = *(Toc + 3);
                                    cdaudioDataOut->TrackData[i].Address[2] = *(Toc + 4);
                                    cdaudioDataOut->TrackData[i].Address[3] = *(Toc + 5);
                                    i += 1UL;
                                  }
                                  else
                                  {
                                  }

                                  Irp->IoStatus.Information = (unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[i]));
                                }

                                {
                                }
                                goto switch_15_break;
                                switch_15_exp_39:
                                {
                                  deviceExtension->PlayActive = 0;
                                  Irp->IoStatus.Information = 0;
                                  CdAudioHitachiSendPauseCommand(DeviceObject);
                                  deviceExtension->Paused = 0;
                                  deviceExtension->PausedM = 0;
                                  deviceExtension->PausedS = 0;
                                  deviceExtension->PausedF = 0;
                                  deviceExtension->LastEndM = 0;
                                  deviceExtension->LastEndS = 0;
                                  deviceExtension->LastEndF = 0;
                                  tmp___1 = CdAudioSendToNextDriver(DeviceObject, Irp);
                                }

                                return tmp___1;
                                goto switch_15_break;
                                switch_15_exp_40:
                                inputBuffer = Irp->AssociatedIrp.SystemBuffer;

                                Irp->IoStatus.Information = 0;
                                if (currentIrpStack->Parameters.DeviceIoControl.InputBufferLength < ((ULONG) (sizeof(CDROM_PLAY_AUDIO_MSF))))
                                {
                                  status = -1073741820L;
                                  goto switch_15_break;
                                }
                                else
                                {
                                }

                                {
                                  CdAudioHitachiSendPauseCommand(DeviceObject);
                                  srb.CdbLength = 12;
                                  srb.TimeOutValue = 10;
                                  cdb->PLAY_AUDIO.OperationCode = 224;
                                  cdb->PLAY_AUDIO.Immediate = 1;
                                  cdb->PLAY_AUDIO.StartingM = inputBuffer->StartingM;
                                  cdb->PLAY_AUDIO.StartingS = inputBuffer->StartingS;
                                  cdb->PLAY_AUDIO.StartingF = inputBuffer->StartingF;
                                  cdb->PLAY_AUDIO.EndingM = inputBuffer->EndingM;
                                  cdb->PLAY_AUDIO.EndingS = inputBuffer->EndingS;
                                  cdb->PLAY_AUDIO.EndingF = inputBuffer->EndingF;
                                  status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                }
                                if (status >= 0L)
                                {
                                  deviceExtension->PlayActive = 1;
                                  deviceExtension->Paused = 0;
                                  deviceExtension->PausedM = inputBuffer->StartingM;
                                  deviceExtension->PausedS = inputBuffer->StartingS;
                                  deviceExtension->PausedF = inputBuffer->StartingF;
                                  deviceExtension->LastEndM = inputBuffer->EndingM;
                                  deviceExtension->LastEndS = inputBuffer->EndingS;
                                  deviceExtension->LastEndF = inputBuffer->EndingF;
                                }
                                else
                                {
                                }

                                goto switch_15_break;
                                switch_15_exp_41:
                                inputBuffer___0 = Irp->AssociatedIrp.SystemBuffer;

                                Irp->IoStatus.Information = 0;
                                if (currentIrpStack->Parameters.DeviceIoControl.InputBufferLength < ((ULONG) (sizeof(CDROM_SEEK_AUDIO_MSF))))
                                {
                                  status = -1073741820L;
                                  goto switch_15_break;
                                }
                                else
                                {
                                }

                                {
                                  CdAudioHitachiSendPauseCommand(DeviceObject);
                                  srb.CdbLength = 12;
                                  srb.TimeOutValue = 10;
                                  cdb->PLAY_AUDIO.OperationCode = 224;
                                  cdb->PLAY_AUDIO.Immediate = 1;
                                  cdb->PLAY_AUDIO.StartingM = inputBuffer___0->M;
                                  cdb->PLAY_AUDIO.StartingS = inputBuffer___0->S;
                                  cdb->PLAY_AUDIO.StartingF = inputBuffer___0->F;
                                  cdb->PLAY_AUDIO.EndingM = inputBuffer___0->M;
                                  cdb->PLAY_AUDIO.EndingS = inputBuffer___0->S;
                                  cdb->PLAY_AUDIO.EndingF = inputBuffer___0->F;
                                  status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                }
                                if (status >= 0L)
                                {
                                  deviceExtension->PausedM = inputBuffer___0->M;
                                  deviceExtension->PausedS = inputBuffer___0->S;
                                  deviceExtension->PausedF = inputBuffer___0->F;
                                  deviceExtension->LastEndM = inputBuffer___0->M;
                                  deviceExtension->LastEndS = inputBuffer___0->S;
                                  deviceExtension->LastEndF = inputBuffer___0->F;
                                }
                                else
                                {
                                }

                                goto switch_15_break;
                                switch_15_exp_42:
                                {
                                  tmp___2 = ExAllocatePoolWithTag(4, 3, 541156419UL);
                                  PausePos = tmp___2;
                                  Irp->IoStatus.Information = 0;
                                }

                                if (((unsigned int) PausePos) == ((unsigned int) ((void *) 0)))
                                {
                                  status = -1073741670L;
                                  goto SetStatusAndReturn;
                                }
                                else
                                {
                                }

                                {
                                  deviceExtension->PlayActive = 0;
                                  memset(PausePos, 0, 3);
                                  srb.CdbLength = 12;
                                  srb.TimeOutValue = 10;
                                  cdb->PAUSE_AUDIO.OperationCode = 225;
                                  status = SendSrbSynchronous(deviceExtension, &srb, PausePos, 3);
                                  deviceExtension->Paused = 1;
                                  deviceExtension->PausedM = *(PausePos + 0);
                                  deviceExtension->PausedS = *(PausePos + 1);
                                  deviceExtension->PausedF = *(PausePos + 2);
                                }
                                goto switch_15_break;
                                switch_15_exp_43:
                                {
                                  Irp->IoStatus.Information = 0;
                                  CdAudioHitachiSendPauseCommand(DeviceObject);
                                  srb.CdbLength = 12;
                                  srb.TimeOutValue = 10;
                                  cdb->PLAY_AUDIO.OperationCode = 224;
                                  cdb->PLAY_AUDIO.Immediate = 1;
                                  cdb->PLAY_AUDIO.StartingM = deviceExtension->PausedM;
                                  cdb->PLAY_AUDIO.StartingS = deviceExtension->PausedS;
                                  cdb->PLAY_AUDIO.StartingF = deviceExtension->PausedF;
                                  cdb->PLAY_AUDIO.EndingM = deviceExtension->LastEndM;
                                  cdb->PLAY_AUDIO.EndingS = deviceExtension->LastEndS;
                                  cdb->PLAY_AUDIO.EndingF = deviceExtension->LastEndF;
                                  status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                }

                                if (status >= 0L)
                                {
                                  deviceExtension->Paused = 0;
                                }
                                else
                                {
                                }

                                goto switch_15_break;
                                switch_15_exp_44:
                                {
                                  userPtr = Irp->AssociatedIrp.SystemBuffer;
                                  tmp___3 = ExAllocatePoolWithTag(4, sizeof(SUB_Q_CHANNEL_DATA), 541156419UL);
                                  SubQPtr = tmp___3;
                                }

                                if (currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < ((ULONG) (sizeof(SUB_Q_CURRENT_POSITION))))
                                {
                                  status = -1073741789L;
                                  Irp->IoStatus.Information = 0;
                                  if (SubQPtr)
                                  {
                                    {
                                    }
                                  }
                                  else
                                  {
                                  }

                                  goto switch_15_break;
                                }
                                else
                                {
                                }

                                if (((unsigned int) SubQPtr) == ((unsigned int) ((void *) 0)))
                                {
                                  status = -1073741670L;
                                  Irp->IoStatus.Information = 0;
                                  goto SetStatusAndReturn;
                                }
                                else
                                {
                                }

                                if (((int) ((struct _CDROM_SUB_Q_DATA_FORMAT *) userPtr)->Format) != 1)
                                {
                                  {
                                    status = -1073741823L;
                                    Irp->IoStatus.Information = 0;
                                  }
                                  goto SetStatusAndReturn;
                                }
                                else
                                {
                                }

                                srb.CdbLength = 12;
                                srb.TimeOutValue = 10;
                                cdb->AUDIO_STATUS.OperationCode = 229;
                                Retry:
                                {
                                  status = SendSrbSynchronous(deviceExtension, &srb, SubQPtr, sizeof(SUB_Q_CHANNEL_DATA));
                                }

                                if (status >= 0L)
                                {
                                  goto _L;
                                }
                                else
                                {
                                  if (status == (-1073741764L))
                                  {
                                    _L:
                                    if ((((int) (*(SubQPtr + 1))) & 15) != 1)
                                    {
                                      goto Retry;
                                    }
                                    else
                                    {
                                    }


                                    userPtr->Header.Reserved = 0;
                                    if (((int) deviceExtension->Paused) == 1)
                                    {
                                      deviceExtension->PlayActive = 0;
                                      userPtr->Header.AudioStatus = 18;
                                    }
                                    else
                                    {
                                      if (((int) (*(SubQPtr + 0))) == 1)
                                      {
                                        userPtr->Header.AudioStatus = 17;
                                      }
                                      else
                                      {
                                        if (((int) (*(SubQPtr + 0))) == 0)
                                        {
                                          userPtr->Header.AudioStatus = 19;
                                          deviceExtension->PlayActive = 0;
                                        }
                                        else
                                        {
                                          deviceExtension->PlayActive = 0;
                                        }

                                      }

                                    }

                                    userPtr->Header.DataLength[0] = 0;
                                    userPtr->Header.DataLength[0] = 12;
                                    userPtr->FormatCode = 1;
                                    userPtr->Control = (((int) (*(SubQPtr + 1))) & 240) >> 4;
                                    userPtr->ADR = ((int) (*(SubQPtr + 1))) & 15;
                                    userPtr->TrackNumber = *(SubQPtr + 2);
                                    userPtr->IndexNumber = *(SubQPtr + 3);
                                    userPtr->AbsoluteAddress[0] = 0;
                                    userPtr->AbsoluteAddress[1] = *(SubQPtr + 8);
                                    userPtr->AbsoluteAddress[2] = *(SubQPtr + 9);
                                    userPtr->AbsoluteAddress[3] = *(SubQPtr + 10);
                                    userPtr->TrackRelativeAddress[0] = 0;
                                    userPtr->TrackRelativeAddress[1] = *(SubQPtr + 4);
                                    userPtr->TrackRelativeAddress[2] = *(SubQPtr + 5);
                                    userPtr->TrackRelativeAddress[3] = *(SubQPtr + 6);
                                    Irp->IoStatus.Information = sizeof(SUB_Q_CURRENT_POSITION);
                                    status = 0L;
                                  }
                                  else
                                  {
                                    Irp->IoStatus.Information = 0;
                                  }

                                }

                                {
                                }
                                goto switch_15_break;
                                switch_15_exp_45:
                                {
                                  tmp___4 = ExAllocatePoolWithTag(4, 1, 541156419UL);
                                  EjectStatus = tmp___4;
                                  Irp->IoStatus.Information = 0;
                                }

                                if (((unsigned int) EjectStatus) == ((unsigned int) ((void *) 0)))
                                {
                                  status = -1073741670L;
                                  goto SetStatusAndReturn;
                                }
                                else
                                {
                                }

                                {
                                  deviceExtension->PlayActive = 0;
                                  srb.CdbLength = 12;
                                  srb.TimeOutValue = 10;
                                  cdb->EJECT.OperationCode = 228;
                                  cdb->EJECT.Eject = 1;
                                  status = SendSrbSynchronous(deviceExtension, &srb, EjectStatus, 1);
                                }
                                if (status >= 0L)
                                {
                                  deviceExtension->Paused = 0;
                                  deviceExtension->PausedM = 0;
                                  deviceExtension->PausedS = 0;
                                  deviceExtension->PausedF = 0;
                                  deviceExtension->LastEndM = 0;
                                  deviceExtension->LastEndS = 0;
                                  deviceExtension->LastEndF = 0;
                                }
                                else
                                {
                                }

                                {
                                }
                                goto switch_15_break;
                                switch_15_exp_46:
                                ;

                                switch_15_exp_47:
                                ;

                                switch_15_exp_48:
                                Irp->IoStatus.Information = 0;

                                status = -1073741808L;
                                goto switch_15_break;
                                switch_15_exp_49:
                                {
                                  CdAudioIsPlayActive(DeviceObject);
                                }

                                switch_15_default:
                                {
                                  tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
                                }

                                return tmp___5;
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

    SetStatusAndReturn:
    if (status == (-2147483626L))
    {
      if (((int) currentIrpStack->Flags) & 2)
      {
        status = -1073741435L;
        goto HitachiRestart;
      }
      else
      {
      }

      {
        Irp->IoStatus.Information = 0;
      }
    }
    else
    {
    }


    {
      Irp->IoStatus.__annonCompField4.Status = status;
      myStatus = status;
      IofCompleteRequest(Irp, 0);
    }
    return status;
  }
}

NTSTATUS CdAudio535DeviceControl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PIO_STACK_LOCATION currentIrpStack;
  PCD_DEVICE_EXTENSION deviceExtension;
  PCDROM_TOC cdaudioDataOut;
  SCSI_PASS_THROUGH srb;
  PREAD_CAPACITY_DATA lastSession;
  PCDB cdb;
  NTSTATUS status;
  ULONG i;
  ULONG bytesTransfered;
  PUCHAR Toc;
  ULONG destblock;
  BOOLEAN tmp;
  PVOID tmp___0;
  BOOLEAN tmp___1;
  PVOID tmp___2;
  ULONG tracksToReturn;
  ULONG tracksOnCd;
  ULONG tracksInBuffer;
  PSUB_Q_CURRENT_POSITION userPtr;
  PUCHAR SubQPtr;
  PVOID tmp___3;
  PCDROM_PLAY_AUDIO_MSF inputBuffer;
  PCDROM_SEEK_AUDIO_MSF inputBuffer___0;
  NTSTATUS tmp___4;
  {
    {
      currentIrpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
      deviceExtension = DeviceObject->DeviceExtension;
      cdaudioDataOut = Irp->AssociatedIrp.SystemBuffer;
      cdb = (union _CDB *) srb.Cdb;
      memset(cdb, 0, 12);
    }
    if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (14 << 2)))
    {
      goto switch_18_exp_50;
    }
    else
    {
      if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == ((2 << 16) | (1 << 14)))
      {
        goto switch_18_exp_51;
      }
      else
      {
        if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (11 << 2)))
        {
          goto switch_18_exp_52;
        }
        else
        {
          if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (6 << 2)))
          {
            goto switch_18_exp_53;
          }
          else
          {
            if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (1 << 2)))
            {
              goto switch_18_exp_54;
            }
            else
            {
              if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (514 << 2)))
              {
                goto switch_18_exp_55;
              }
              else
              {
                if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (13 << 2)))
                {
                  goto switch_18_exp_56;
                }
                else
                {
                  if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (5 << 2)))
                  {
                    goto switch_18_exp_57;
                  }
                  else
                  {
                    if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (10 << 2)))
                    {
                      goto switch_18_exp_58;
                    }
                    else
                    {
                      if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (512 << 2)))
                      {
                        goto switch_18_exp_59;
                      }
                      else
                      {
                        {
                          goto switch_18_default;
                          if (0)
                          {
                            switch_18_exp_50:
                            {
                              tmp = CdAudioIsPlayActive(DeviceObject);
                            }

                            if (tmp)
                            {
                              status = -2147483631L;
                              Irp->IoStatus.Information = 0;
                              goto switch_18_break;
                            }
                            else
                            {
                            }

                            if (currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < ((unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[1]))))
                            {
                              status = -1073741789L;
                              Irp->IoStatus.Information = 0;
                              goto switch_18_break;
                            }
                            else
                            {
                            }

                            {
                              tmp___0 = ExAllocatePoolWithTag(4, sizeof(READ_CAPACITY_DATA), 541156419UL);
                              lastSession = tmp___0;
                            }
                            if (((unsigned int) lastSession) == ((unsigned int) ((void *) 0)))
                            {
                              status = -1073741670L;
                              Irp->IoStatus.Information = 0;
                              goto SetStatusAndReturn;
                            }
                            else
                            {
                            }

                            {
                              memset(lastSession, 0, sizeof(READ_CAPACITY_DATA));
                              srb.CdbLength = 10;
                              cdb->CDB10.OperationCode = 38;
                              srb.TimeOutValue = 10;
                              status = SendSrbSynchronous(deviceExtension, &srb, lastSession, sizeof(READ_CAPACITY_DATA));
                            }
                            if (!(status >= 0L))
                            {
                              {
                                Irp->IoStatus.Information = 0;
                              }
                              goto SetStatusAndReturn;
                            }
                            else
                            {
                              status = 0L;
                            }

                            {
                              bytesTransfered = (long) (&((CDROM_TOC *) 0)->TrackData[1]);
                              Irp->IoStatus.Information = bytesTransfered;
                              memset(cdaudioDataOut, 0, bytesTransfered);
                              cdaudioDataOut->Length[0] = (unsigned char) ((bytesTransfered - 2UL) >> 8);
                              cdaudioDataOut->Length[1] = (unsigned char) ((bytesTransfered - 2UL) & 255UL);
                            }
                            if (lastSession->LogicalBlockAddress == 0UL)
                            {
                              {
                              }
                              goto switch_18_break;
                            }
                            else
                            {
                            }

                            {
                              cdaudioDataOut->FirstTrack = 1;
                              cdaudioDataOut->LastTrack = 2;
                              *((ULONG *) (&cdaudioDataOut->TrackData[0].Address[0])) = lastSession->LogicalBlockAddress;
                            }
                            goto switch_18_break;
                            switch_18_exp_51:
                            ;

                            if (currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < ((unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[0]))))
                            {
                              status = -1073741789L;
                              Irp->IoStatus.Information = 0;
                              goto switch_18_break;
                            }
                            else
                            {
                            }

                            {
                              tmp___1 = CdAudioIsPlayActive(DeviceObject);
                            }
                            if (tmp___1)
                            {
                              status = -2147483631L;
                              Irp->IoStatus.Information = 0;
                              goto switch_18_break;
                            }
                            else
                            {
                            }

                            {
                              tmp___2 = ExAllocatePoolWithTag(4, sizeof(CDROM_TOC), 541156419UL);
                              Toc = (UCHAR *) tmp___2;
                            }
                            if (((unsigned int) Toc) == ((unsigned int) ((void *) 0)))
                            {
                              status = -1073741670L;
                              Irp->IoStatus.Information = 0;
                              goto SetStatusAndReturn;
                            }
                            else
                            {
                            }

                            {
                              memset(Toc, 0, sizeof(CDROM_TOC));
                              cdb->CDB10.OperationCode = 67;
                              cdb->CDB10.Reserved1 = 1;
                              cdb->CDB10.TransferBlocksMsb = (sizeof(CDROM_TOC)) >> 8;
                              cdb->CDB10.TransferBlocksLsb = (sizeof(CDROM_TOC)) & 255U;
                              srb.TimeOutValue = 10;
                              srb.CdbLength = 10;
                              status = SendSrbSynchronous(deviceExtension, &srb, Toc, sizeof(CDROM_TOC));
                            }
                            if (!(status >= 0L))
                            {
                              if (status != (-1073741764L))
                              {
                                if (status != (-1073741764L))
                                {
                                  {
                                    Irp->IoStatus.Information = 0;
                                  }
                                  goto SetStatusAndReturn;
                                }
                                else
                                {
                                }

                              }
                              else
                              {
                                status = 0L;
                              }

                            }
                            else
                            {
                              status = 0L;
                            }

                            if (currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength > ((ULONG) (sizeof(CDROM_TOC))))
                            {
                              bytesTransfered = sizeof(CDROM_TOC);
                            }
                            else
                            {
                              bytesTransfered = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength;
                            }

                            cdaudioDataOut->Length[0] = *(Toc + 0);
                            cdaudioDataOut->Length[1] = *(Toc + 1);
                            cdaudioDataOut->FirstTrack = (((((int) (*(Toc + 2))) & 240) >> 4) * 10) + (((int) (*(Toc + 2))) & 15);
                            cdaudioDataOut->LastTrack = (((((int) (*(Toc + 3))) & 240) >> 4) * 10) + (((int) (*(Toc + 3))) & 15);
                            tracksOnCd = (((int) cdaudioDataOut->LastTrack) - ((int) cdaudioDataOut->FirstTrack)) + 1;
                            tracksInBuffer = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength - ((unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[0])));
                            tracksInBuffer /= (ULONG) (sizeof(TRACK_DATA));
                            if (tracksInBuffer < tracksOnCd)
                            {
                              tracksToReturn = tracksInBuffer;
                            }
                            else
                            {
                              tracksToReturn = tracksOnCd;
                            }

                            i = 0;
                            {
                              while (1)
                              {
                                while_19_continue:
                                ;

                                if (i < tracksToReturn)
                                {
                                }
                                else
                                {
                                  goto while_19_break;
                                }

                                cdaudioDataOut->TrackData[i].Reserved = 0;
                                cdaudioDataOut->TrackData[i].Control = *(Toc + (((i * 8UL) + 4UL) + 1UL));
                                cdaudioDataOut->TrackData[i].TrackNumber = (((((int) (*(Toc + (((i * 8UL) + 4UL) + 2UL)))) & 240) >> 4) * 10) + (((int) (*(Toc + (((i * 8UL) + 4UL) + 2UL)))) & 15);
                                cdaudioDataOut->TrackData[i].Reserved1 = 0;
                                cdaudioDataOut->TrackData[i].Address[0] = 0;
                                cdaudioDataOut->TrackData[i].Address[1] = *(Toc + (((i * 8UL) + 4UL) + 5UL));
                                cdaudioDataOut->TrackData[i].Address[2] = *(Toc + (((i * 8UL) + 4UL) + 6UL));
                                cdaudioDataOut->TrackData[i].Address[3] = *(Toc + (((i * 8UL) + 4UL) + 7UL));
                                i += 1UL;
                              }

                              while_19_break:
                              ;

                            }
                            if (tracksInBuffer > tracksOnCd)
                            {
                              cdaudioDataOut->TrackData[i].Reserved = 0;
                              cdaudioDataOut->TrackData[i].Control = *(Toc + (((i * 8UL) + 4UL) + 1UL));
                              cdaudioDataOut->TrackData[i].TrackNumber = *(Toc + (((i * 8UL) + 4UL) + 2UL));
                              cdaudioDataOut->TrackData[i].Reserved1 = 0;
                              cdaudioDataOut->TrackData[i].Address[0] = 0;
                              cdaudioDataOut->TrackData[i].Address[1] = *(Toc + (((i * 8UL) + 4UL) + 5UL));
                              cdaudioDataOut->TrackData[i].Address[2] = *(Toc + (((i * 8UL) + 4UL) + 6UL));
                              cdaudioDataOut->TrackData[i].Address[3] = *(Toc + (((i * 8UL) + 4UL) + 7UL));
                              i += 1UL;
                            }
                            else
                            {
                            }

                            {
                              Irp->IoStatus.Information = (unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[i]));
                            }
                            goto switch_18_break;
                            switch_18_exp_52:
                            {
                              userPtr = Irp->AssociatedIrp.SystemBuffer;
                              tmp___3 = ExAllocatePoolWithTag(4, sizeof(SUB_Q_CURRENT_POSITION), 541156419UL);
                              SubQPtr = tmp___3;
                            }

                            if (currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < ((ULONG) (sizeof(SUB_Q_CURRENT_POSITION))))
                            {
                              status = -1073741789L;
                              Irp->IoStatus.Information = 0;
                              if (SubQPtr)
                              {
                                {
                                }
                              }
                              else
                              {
                              }

                              goto switch_18_break;
                            }
                            else
                            {
                            }

                            if (((unsigned int) SubQPtr) == ((unsigned int) ((void *) 0)))
                            {
                              {
                                memset(userPtr, 0, sizeof(SUB_Q_CURRENT_POSITION));
                                status = -1073741670L;
                                Irp->IoStatus.Information = 0;
                              }
                              goto SetStatusAndReturn;
                            }
                            else
                            {
                            }

                            if (((int) ((struct _CDROM_SUB_Q_DATA_FORMAT *) userPtr)->Format) != 1)
                            {
                              {
                                memset(userPtr, 0, sizeof(SUB_Q_CURRENT_POSITION));
                                status = -1073741823L;
                                Irp->IoStatus.Information = 0;
                              }
                              goto SetStatusAndReturn;
                            }
                            else
                            {
                            }

                            {
                              srb.CdbLength = 10;
                              srb.TimeOutValue = 10;
                              cdb->SUBCHANNEL.OperationCode = 66;
                              cdb->SUBCHANNEL.Msf = 1;
                              cdb->SUBCHANNEL.SubQ = 1;
                              cdb->SUBCHANNEL.Format = 1;
                              cdb->SUBCHANNEL.AllocationLength[1] = sizeof(SUB_Q_CURRENT_POSITION);
                              status = SendSrbSynchronous(deviceExtension, &srb, SubQPtr, sizeof(SUB_Q_CURRENT_POSITION));
                            }
                            if (status >= 0L)
                            {
                              if (((int) (*(SubQPtr + 1))) == 17)
                              {
                                deviceExtension->PlayActive = 1;
                              }
                              else
                              {
                                deviceExtension->PlayActive = 0;
                              }

                              userPtr->Header.Reserved = 0;
                              userPtr->Header.AudioStatus = *(SubQPtr + 1);
                              userPtr->Header.DataLength[0] = 0;
                              userPtr->Header.DataLength[1] = 12;
                              userPtr->FormatCode = 1;
                              userPtr->Control = *(SubQPtr + 5);
                              userPtr->ADR = 0;
                              userPtr->TrackNumber = (((((int) (*(SubQPtr + 6))) & 240) >> 4) * 10) + (((int) (*(SubQPtr + 6))) & 15);
                              userPtr->IndexNumber = (((((int) (*(SubQPtr + 7))) & 240) >> 4) * 10) + (((int) (*(SubQPtr + 7))) & 15);
                              userPtr->AbsoluteAddress[0] = 0;
                              userPtr->AbsoluteAddress[1] = *(SubQPtr + 9);
                              userPtr->AbsoluteAddress[2] = *(SubQPtr + 10);
                              userPtr->AbsoluteAddress[3] = *(SubQPtr + 11);
                              userPtr->TrackRelativeAddress[0] = 0;
                              userPtr->TrackRelativeAddress[1] = *(SubQPtr + 13);
                              userPtr->TrackRelativeAddress[2] = *(SubQPtr + 14);
                              userPtr->TrackRelativeAddress[3] = *(SubQPtr + 15);
                              Irp->IoStatus.Information = sizeof(SUB_Q_CURRENT_POSITION);
                            }
                            else
                            {
                              Irp->IoStatus.Information = 0;
                            }

                            {
                            }
                            goto switch_18_break;
                            switch_18_exp_53:
                            inputBuffer = Irp->AssociatedIrp.SystemBuffer;

                            Irp->IoStatus.Information = 0;
                            if (currentIrpStack->Parameters.DeviceIoControl.InputBufferLength < ((ULONG) (sizeof(CDROM_PLAY_AUDIO_MSF))))
                            {
                              status = -1073741820L;
                              goto switch_18_break;
                            }
                            else
                            {
                            }

                            if (((int) inputBuffer->StartingM) == ((int) inputBuffer->EndingM))
                            {
                              if (((int) inputBuffer->StartingS) == ((int) inputBuffer->EndingS))
                              {
                                if (((int) inputBuffer->StartingF) == ((int) inputBuffer->EndingF))
                                {
                                  cdb->PAUSE_RESUME.OperationCode = 75;
                                  cdb->PAUSE_RESUME.Action = 0;
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
                              cdb->PLAY_AUDIO_MSF.OperationCode = 71;

                              cdb->PLAY_AUDIO_MSF.StartingM = inputBuffer->StartingM;
                              cdb->PLAY_AUDIO_MSF.StartingS = inputBuffer->StartingS;
                              cdb->PLAY_AUDIO_MSF.StartingF = inputBuffer->StartingF;
                              cdb->PLAY_AUDIO_MSF.EndingM = inputBuffer->EndingM;
                              cdb->PLAY_AUDIO_MSF.EndingS = inputBuffer->EndingS;
                              cdb->PLAY_AUDIO_MSF.EndingF = inputBuffer->EndingF;
                            }

                            {
                              srb.CdbLength = 10;
                              srb.TimeOutValue = 10;
                              status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                            }
                            if (status >= 0L)
                            {
                              if (((int) cdb->PLAY_AUDIO_MSF.OperationCode) == 71)
                              {
                                deviceExtension->PlayActive = 1;
                              }
                              else
                              {
                              }

                            }
                            else
                            {
                            }

                            goto switch_18_break;
                            switch_18_exp_54:
                            inputBuffer___0 = Irp->AssociatedIrp.SystemBuffer;

                            Irp->IoStatus.Information = 0;
                            if (currentIrpStack->Parameters.DeviceIoControl.InputBufferLength < ((ULONG) (sizeof(CDROM_SEEK_AUDIO_MSF))))
                            {
                              status = -1073741820L;
                              goto switch_18_break;
                            }
                            else
                            {
                            }

                            {
                              destblock = ((((((unsigned long) inputBuffer___0->M) * 60UL) + ((unsigned long) inputBuffer___0->S)) * 75UL) + ((unsigned long) inputBuffer___0->F)) - 150UL;
                              srb.CdbLength = 10;
                              srb.TimeOutValue = 10;
                              cdb->SEEK.OperationCode = 43;
                              cdb->SEEK.LogicalBlockAddress[0] = ((int) ((unsigned char) (destblock >> 24))) & 255;
                              cdb->SEEK.LogicalBlockAddress[1] = ((int) ((unsigned char) (destblock >> 16))) & 255;
                              cdb->SEEK.LogicalBlockAddress[2] = ((int) ((unsigned char) (destblock >> 8))) & 255;
                              cdb->SEEK.LogicalBlockAddress[3] = (unsigned char) (destblock & 255UL);
                              status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                            }
                            if (!(status >= 0L))
                            {
                            }
                            else
                            {
                            }

                            goto switch_18_break;
                            switch_18_exp_55:
                            {
                              Irp->IoStatus.Information = 0;
                              deviceExtension->PlayActive = 0;
                              srb.CdbLength = 10;
                              srb.TimeOutValue = 10;
                              cdb->CDB10.OperationCode = 192;
                              status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                            }

                            goto switch_18_break;
                            switch_18_exp_56:
                            ;

                            switch_18_exp_57:
                            ;

                            switch_18_exp_58:
                            Irp->IoStatus.Information = 0;

                            status = -1073741808L;
                            goto switch_18_break;
                            switch_18_exp_59:
                            {
                              CdAudioIsPlayActive(DeviceObject);
                            }

                            switch_18_default:
                            {
                              tmp___4 = CdAudioSendToNextDriver(DeviceObject, Irp);
                            }

                            return tmp___4;
                            goto switch_18_break;
                          }
                          else
                          {
                            switch_18_break:
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

    SetStatusAndReturn:
    if (status == (-2147483626L))
    {
      {
        Irp->IoStatus.Information = 0;
      }
    }
    else
    {
    }


    {
      Irp->IoStatus.__annonCompField4.Status = status;
      myStatus = status;
      IofCompleteRequest(Irp, 0);
    }
    return status;
  }
}

NTSTATUS CdAudio435DeviceControl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PIO_STACK_LOCATION currentIrpStack;
  PCD_DEVICE_EXTENSION deviceExtension;
  PCDROM_TOC cdaudioDataOut;
  SCSI_PASS_THROUGH srb;
  PCDB cdb;
  NTSTATUS status;
  ULONG i;
  ULONG bytesTransfered;
  PUCHAR Toc;
  BOOLEAN tmp;
  PVOID tmp___0;
  ULONG tracksToReturn;
  ULONG tracksOnCd;
  ULONG tracksInBuffer;
  PCDROM_PLAY_AUDIO_MSF inputBuffer;
  PCDROM_SEEK_AUDIO_MSF inputBuffer___0;
  PUCHAR SubQPtr;
  PVOID tmp___1;
  PSUB_Q_CURRENT_POSITION userPtr;
  PUCHAR SubQPtr___0;
  PVOID tmp___2;
  NTSTATUS tmp___3;
  BOOLEAN tmp___4;
  NTSTATUS tmp___5;
  {
    {
      currentIrpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
      deviceExtension = DeviceObject->DeviceExtension;
      cdaudioDataOut = Irp->AssociatedIrp.SystemBuffer;
      cdb = (union _CDB *) srb.Cdb;
      memset(cdb, 0, 12);
    }
    if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == ((2 << 16) | (1 << 14)))
    {
      goto switch_20_exp_60;
    }
    else
    {
      if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (6 << 2)))
      {
        goto switch_20_exp_61;
      }
      else
      {
        if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (2 << 2)))
        {
          goto switch_20_exp_62;
        }
        else
        {
          if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (1 << 2)))
          {
            goto switch_20_exp_63;
          }
          else
          {
            if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (3 << 2)))
            {
              goto switch_20_exp_64;
            }
            else
            {
              if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (4 << 2)))
              {
                goto switch_20_exp_65;
              }
              else
              {
                if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (11 << 2)))
                {
                  goto switch_20_exp_66;
                }
                else
                {
                  if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (514 << 2)))
                  {
                    goto switch_20_exp_67;
                  }
                  else
                  {
                    if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (13 << 2)))
                    {
                      goto switch_20_exp_68;
                    }
                    else
                    {
                      if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (5 << 2)))
                      {
                        goto switch_20_exp_69;
                      }
                      else
                      {
                        if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (10 << 2)))
                        {
                          goto switch_20_exp_70;
                        }
                        else
                        {
                          if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (512 << 2)))
                          {
                            goto switch_20_exp_71;
                          }
                          else
                          {
                            {
                              goto switch_20_default;
                              if (0)
                              {
                                switch_20_exp_60:
                                ;

                                if (currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < ((unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[0]))))
                                {
                                  status = -1073741789L;
                                  Irp->IoStatus.Information = 0;
                                  goto switch_20_break;
                                }
                                else
                                {
                                }

                                {
                                  tmp = CdAudioIsPlayActive(DeviceObject);
                                }
                                if (tmp)
                                {
                                  status = -2147483631L;
                                  Irp->IoStatus.Information = 0;
                                  goto switch_20_break;
                                }
                                else
                                {
                                }

                                {
                                  tmp___0 = ExAllocatePoolWithTag(4, sizeof(CDROM_TOC), 541156419UL);
                                  Toc = (UCHAR *) tmp___0;
                                }
                                if (((unsigned int) Toc) == ((unsigned int) ((void *) 0)))
                                {
                                  status = -1073741670L;
                                  Irp->IoStatus.Information = 0;
                                  goto SetStatusAndReturn;
                                }
                                else
                                {
                                }

                                {
                                  memset(Toc, 0, sizeof(CDROM_TOC));
                                  cdb->READ_TOC.OperationCode = 67;
                                  cdb->READ_TOC.Msf = 1;
                                  cdb->READ_TOC.AllocationLength[0] = (sizeof(CDROM_TOC)) >> 8;
                                  cdb->READ_TOC.AllocationLength[1] = (sizeof(CDROM_TOC)) & 255U;
                                  srb.TimeOutValue = 10;
                                  srb.CdbLength = 10;
                                  status = SendSrbSynchronous(deviceExtension, &srb, Toc, sizeof(CDROM_TOC));
                                }
                                if (!(status >= 0L))
                                {
                                  if (status != (-1073741764L))
                                  {
                                    if (status != (-1073741764L))
                                    {
                                      {
                                        Irp->IoStatus.Information = 0;
                                      }
                                      goto SetStatusAndReturn;
                                    }
                                    else
                                    {
                                    }

                                  }
                                  else
                                  {
                                    status = 0L;
                                  }

                                }
                                else
                                {
                                  status = 0L;
                                }

                                if (currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength > ((ULONG) (sizeof(CDROM_TOC))))
                                {
                                  bytesTransfered = sizeof(CDROM_TOC);
                                }
                                else
                                {
                                  bytesTransfered = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength;
                                }

                                cdaudioDataOut->Length[0] = *(Toc + 0);
                                cdaudioDataOut->Length[1] = *(Toc + 1);
                                cdaudioDataOut->FirstTrack = (((((int) (*(Toc + 2))) & 240) >> 4) * 10) + (((int) (*(Toc + 2))) & 15);
                                cdaudioDataOut->LastTrack = (((((int) (*(Toc + 3))) & 240) >> 4) * 10) + (((int) (*(Toc + 3))) & 15);
                                tracksOnCd = (((int) cdaudioDataOut->LastTrack) - ((int) cdaudioDataOut->FirstTrack)) + 1;
                                tracksInBuffer = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength - ((unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[0])));
                                tracksInBuffer /= (ULONG) (sizeof(TRACK_DATA));
                                if (tracksInBuffer < tracksOnCd)
                                {
                                  tracksToReturn = tracksInBuffer;
                                }
                                else
                                {
                                  tracksToReturn = tracksOnCd;
                                }

                                i = 0;
                                {
                                  while (1)
                                  {
                                    while_21_continue:
                                    ;

                                    if (i < tracksToReturn)
                                    {
                                    }
                                    else
                                    {
                                      goto while_21_break;
                                    }

                                    cdaudioDataOut->TrackData[i].Reserved = 0;
                                    cdaudioDataOut->TrackData[i].Control = *(Toc + (((i * 8UL) + 4UL) + 1UL));
                                    cdaudioDataOut->TrackData[i].TrackNumber = (((((int) (*(Toc + (((i * 8UL) + 4UL) + 2UL)))) & 240) >> 4) * 10) + (((int) (*(Toc + (((i * 8UL) + 4UL) + 2UL)))) & 15);
                                    cdaudioDataOut->TrackData[i].Reserved1 = 0;
                                    cdaudioDataOut->TrackData[i].Address[0] = 0;
                                    cdaudioDataOut->TrackData[i].Address[1] = *(Toc + (((i * 8UL) + 4UL) + 5UL));
                                    cdaudioDataOut->TrackData[i].Address[2] = *(Toc + (((i * 8UL) + 4UL) + 6UL));
                                    cdaudioDataOut->TrackData[i].Address[3] = *(Toc + (((i * 8UL) + 4UL) + 7UL));
                                    i += 1UL;
                                  }

                                  while_21_break:
                                  ;

                                }
                                if (tracksInBuffer > tracksOnCd)
                                {
                                  cdaudioDataOut->TrackData[i].Reserved = 0;
                                  cdaudioDataOut->TrackData[i].Control = *(Toc + (((i * 8UL) + 4UL) + 1UL));
                                  cdaudioDataOut->TrackData[i].TrackNumber = *(Toc + (((i * 8UL) + 4UL) + 2UL));
                                  cdaudioDataOut->TrackData[i].Reserved1 = 0;
                                  cdaudioDataOut->TrackData[i].Address[0] = 0;
                                  cdaudioDataOut->TrackData[i].Address[1] = *(Toc + (((i * 8UL) + 4UL) + 5UL));
                                  cdaudioDataOut->TrackData[i].Address[2] = *(Toc + (((i * 8UL) + 4UL) + 6UL));
                                  cdaudioDataOut->TrackData[i].Address[3] = *(Toc + (((i * 8UL) + 4UL) + 7UL));
                                  i += 1UL;
                                }
                                else
                                {
                                }

                                {
                                  Irp->IoStatus.Information = (unsigned long) ((long) (&((CDROM_TOC *) 0)->TrackData[i]));
                                  deviceExtension->Paused = 0;
                                  deviceExtension->PausedM = 0;
                                  deviceExtension->PausedS = 0;
                                  deviceExtension->PausedF = 0;
                                  deviceExtension->LastEndM = 0;
                                  deviceExtension->LastEndS = 0;
                                  deviceExtension->LastEndF = 0;
                                }
                                goto switch_20_break;
                                switch_20_exp_61:
                                ;

                                switch_20_exp_62:
                                {
                                  inputBuffer = Irp->AssociatedIrp.SystemBuffer;
                                  Irp->IoStatus.Information = 0;
                                  srb.CdbLength = 10;
                                  srb.TimeOutValue = 10;
                                  cdb->CDB10.OperationCode = 198;
                                  status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                }

                                if (status >= 0L)
                                {
                                  deviceExtension->PlayActive = 0;
                                  deviceExtension->Paused = 0;
                                  deviceExtension->PausedM = 0;
                                  deviceExtension->PausedS = 0;
                                  deviceExtension->PausedF = 0;
                                  deviceExtension->LastEndM = 0;
                                  deviceExtension->LastEndS = 0;
                                  deviceExtension->LastEndF = 0;
                                }
                                else
                                {
                                }

                                if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == ((ULONG) (((2 << 16) | (1 << 14)) | (2 << 2))))
                                {
                                  goto SetStatusAndReturn;
                                }
                                else
                                {
                                }

                                if (currentIrpStack->Parameters.DeviceIoControl.InputBufferLength < ((ULONG) (sizeof(CDROM_PLAY_AUDIO_MSF))))
                                {
                                  status = -1073741820L;
                                  goto switch_20_break;
                                }
                                else
                                {
                                }

                                {
                                  srb.CdbLength = 10;
                                  srb.TimeOutValue = 10;
                                  cdb->PLAY_AUDIO_MSF.OperationCode = 71;
                                  cdb->PLAY_AUDIO_MSF.StartingM = inputBuffer->StartingM;
                                  cdb->PLAY_AUDIO_MSF.StartingS = inputBuffer->StartingS;
                                  cdb->PLAY_AUDIO_MSF.StartingF = inputBuffer->StartingF;
                                  cdb->PLAY_AUDIO_MSF.EndingM = inputBuffer->EndingM;
                                  cdb->PLAY_AUDIO_MSF.EndingS = inputBuffer->EndingS;
                                  cdb->PLAY_AUDIO_MSF.EndingF = inputBuffer->EndingF;
                                  status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                }
                                if (status >= 0L)
                                {
                                  deviceExtension->PlayActive = 1;
                                  deviceExtension->Paused = 0;
                                  deviceExtension->LastEndM = inputBuffer->EndingM;
                                  deviceExtension->LastEndS = inputBuffer->EndingS;
                                  deviceExtension->LastEndF = inputBuffer->EndingF;
                                }
                                else
                                {
                                }

                                goto switch_20_break;
                                switch_20_exp_63:
                                inputBuffer___0 = Irp->AssociatedIrp.SystemBuffer;

                                Irp->IoStatus.Information = 0;
                                if (currentIrpStack->Parameters.DeviceIoControl.InputBufferLength < ((ULONG) (sizeof(CDROM_SEEK_AUDIO_MSF))))
                                {
                                  status = -1073741820L;
                                  goto switch_20_break;
                                }
                                else
                                {
                                }

                                {
                                  srb.CdbLength = 10;
                                  srb.TimeOutValue = 10;
                                  cdb->CDB10.OperationCode = 71;
                                  cdb->PLAY_AUDIO_MSF.StartingM = inputBuffer___0->M;
                                  cdb->PLAY_AUDIO_MSF.StartingS = inputBuffer___0->S;
                                  cdb->PLAY_AUDIO_MSF.StartingF = inputBuffer___0->F;
                                  cdb->PLAY_AUDIO_MSF.EndingM = inputBuffer___0->M;
                                  cdb->PLAY_AUDIO_MSF.EndingS = inputBuffer___0->S;
                                  cdb->PLAY_AUDIO_MSF.EndingF = inputBuffer___0->F;
                                  status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                }
                                if (status >= 0L)
                                {
                                  deviceExtension->Paused = 1;
                                  deviceExtension->PausedM = inputBuffer___0->M;
                                  deviceExtension->PausedS = inputBuffer___0->S;
                                  deviceExtension->PausedF = inputBuffer___0->F;
                                  deviceExtension->LastEndM = inputBuffer___0->M;
                                  deviceExtension->LastEndS = inputBuffer___0->S;
                                  deviceExtension->LastEndF = inputBuffer___0->F;
                                }
                                else
                                {
                                  if (status == (-1073741808L))
                                  {
                                    status = -1073741803L;
                                  }
                                  else
                                  {
                                  }

                                }

                                goto switch_20_break;
                                switch_20_exp_64:
                                {
                                  tmp___1 = ExAllocatePoolWithTag(4, sizeof(SUB_Q_CHANNEL_DATA), 541156419UL);
                                  SubQPtr = tmp___1;
                                  Irp->IoStatus.Information = 0;
                                }

                                if (((unsigned int) SubQPtr) == ((unsigned int) ((void *) 0)))
                                {
                                  status = -1073741670L;
                                  goto SetStatusAndReturn;
                                }
                                else
                                {
                                }

                                if (((int) deviceExtension->Paused) == 1)
                                {
                                  {
                                    status = 0L;
                                  }
                                  goto SetStatusAndReturn;
                                }
                                else
                                {
                                }

                                {
                                  srb.CdbLength = 10;
                                  srb.TimeOutValue = 10;
                                  cdb->SUBCHANNEL.OperationCode = 66;
                                  cdb->SUBCHANNEL.Msf = 1;
                                  cdb->SUBCHANNEL.SubQ = 1;
                                  cdb->SUBCHANNEL.AllocationLength[1] = sizeof(SUB_Q_CHANNEL_DATA);
                                  status = SendSrbSynchronous(deviceExtension, &srb, SubQPtr, sizeof(SUB_Q_CHANNEL_DATA));
                                }
                                if (!(status >= 0L))
                                {
                                  {
                                  }
                                  goto SetStatusAndReturn;
                                }
                                else
                                {
                                }

                                {
                                  deviceExtension->PausedM = *(SubQPtr + 9);
                                  deviceExtension->PausedS = *(SubQPtr + 10);
                                  deviceExtension->PausedF = *(SubQPtr + 11);
                                  memset(cdb, 0, 12);
                                  srb.CdbLength = 10;
                                  srb.TimeOutValue = 10;
                                  cdb->CDB10.OperationCode = 198;
                                  status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                }
                                if (!(status >= 0L))
                                {
                                  {
                                  }
                                  goto SetStatusAndReturn;
                                }
                                else
                                {
                                }

                                {
                                  deviceExtension->PlayActive = 0;
                                  deviceExtension->Paused = 1;
                                  deviceExtension->PausedM = *(SubQPtr + 9);
                                  deviceExtension->PausedS = *(SubQPtr + 10);
                                  deviceExtension->PausedF = *(SubQPtr + 11);
                                }
                                goto switch_20_break;
                                switch_20_exp_65:
                                Irp->IoStatus.Information = 0;

                                if (((int) deviceExtension->Paused) == 0)
                                {
                                  status = -1073741823L;
                                  goto SetStatusAndReturn;
                                }
                                else
                                {
                                }

                                {
                                  srb.CdbLength = 10;
                                  srb.TimeOutValue = 10;
                                  cdb->PLAY_AUDIO_MSF.OperationCode = 71;
                                  cdb->PLAY_AUDIO_MSF.StartingM = deviceExtension->PausedM;
                                  cdb->PLAY_AUDIO_MSF.StartingS = deviceExtension->PausedS;
                                  cdb->PLAY_AUDIO_MSF.StartingF = deviceExtension->PausedF;
                                  cdb->PLAY_AUDIO_MSF.EndingM = deviceExtension->LastEndM;
                                  cdb->PLAY_AUDIO_MSF.EndingS = deviceExtension->LastEndS;
                                  cdb->PLAY_AUDIO_MSF.EndingF = deviceExtension->LastEndF;
                                  status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                }
                                if (status >= 0L)
                                {
                                  deviceExtension->PlayActive = 1;
                                  deviceExtension->Paused = 0;
                                }
                                else
                                {
                                }

                                goto switch_20_break;
                                switch_20_exp_66:
                                {
                                  userPtr = Irp->AssociatedIrp.SystemBuffer;
                                  tmp___2 = ExAllocatePoolWithTag(4, sizeof(SUB_Q_CHANNEL_DATA), 541156419UL);
                                  SubQPtr___0 = tmp___2;
                                }

                                if (currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < ((ULONG) (sizeof(SUB_Q_CURRENT_POSITION))))
                                {
                                  status = -1073741789L;
                                  Irp->IoStatus.Information = 0;
                                  if (SubQPtr___0)
                                  {
                                    {
                                    }
                                  }
                                  else
                                  {
                                  }

                                  goto switch_20_break;
                                }
                                else
                                {
                                }

                                if (((unsigned int) SubQPtr___0) == ((unsigned int) ((void *) 0)))
                                {
                                  {
                                    memset(userPtr, 0, sizeof(SUB_Q_CURRENT_POSITION));
                                    status = -1073741670L;
                                    Irp->IoStatus.Information = 0;
                                  }
                                  goto SetStatusAndReturn;
                                }
                                else
                                {
                                }

                                if (((int) ((struct _CDROM_SUB_Q_DATA_FORMAT *) userPtr)->Format) != 1)
                                {
                                  {
                                    memset(userPtr, 0, sizeof(SUB_Q_CURRENT_POSITION));
                                    status = -1073741823L;
                                    Irp->IoStatus.Information = 0;
                                  }
                                  goto SetStatusAndReturn;
                                }
                                else
                                {
                                }

                                {
                                  srb.CdbLength = 10;
                                  srb.TimeOutValue = 10;
                                  cdb->SUBCHANNEL.OperationCode = 66;
                                  cdb->SUBCHANNEL.Msf = 1;
                                  cdb->SUBCHANNEL.SubQ = 1;
                                  cdb->SUBCHANNEL.AllocationLength[1] = sizeof(SUB_Q_CHANNEL_DATA);
                                  status = SendSrbSynchronous(deviceExtension, &srb, SubQPtr___0, sizeof(SUB_Q_CHANNEL_DATA));
                                }
                                if (status >= 0L)
                                {
                                  userPtr->Header.Reserved = 0;
                                  if (((int) deviceExtension->Paused) == 1)
                                  {
                                    deviceExtension->PlayActive = 0;
                                    userPtr->Header.AudioStatus = 18;
                                  }
                                  else
                                  {
                                    if (((int) (*(SubQPtr___0 + 1))) == 17)
                                    {
                                      deviceExtension->PlayActive = 1;
                                      userPtr->Header.AudioStatus = 17;
                                    }
                                    else
                                    {
                                      deviceExtension->PlayActive = 0;
                                      userPtr->Header.AudioStatus = 19;
                                    }

                                  }

                                  userPtr->Header.DataLength[0] = 0;
                                  userPtr->Header.DataLength[1] = 12;
                                  userPtr->FormatCode = 1;
                                  userPtr->Control = *(SubQPtr___0 + 5);
                                  userPtr->ADR = 0;
                                  userPtr->TrackNumber = (((((int) (*(SubQPtr___0 + 6))) & 240) >> 4) * 10) + (((int) (*(SubQPtr___0 + 6))) & 15);
                                  userPtr->IndexNumber = (((((int) (*(SubQPtr___0 + 7))) & 240) >> 4) * 10) + (((int) (*(SubQPtr___0 + 7))) & 15);
                                  userPtr->AbsoluteAddress[0] = 0;
                                  userPtr->AbsoluteAddress[1] = *(SubQPtr___0 + 9);
                                  userPtr->AbsoluteAddress[2] = *(SubQPtr___0 + 10);
                                  userPtr->AbsoluteAddress[3] = *(SubQPtr___0 + 11);
                                  userPtr->TrackRelativeAddress[0] = 0;
                                  userPtr->TrackRelativeAddress[1] = *(SubQPtr___0 + 13);
                                  userPtr->TrackRelativeAddress[2] = *(SubQPtr___0 + 14);
                                  userPtr->TrackRelativeAddress[3] = *(SubQPtr___0 + 15);
                                  Irp->IoStatus.Information = sizeof(SUB_Q_CURRENT_POSITION);
                                }
                                else
                                {
                                  Irp->IoStatus.Information = 0;
                                }

                                {
                                }
                                goto switch_20_break;
                                switch_20_exp_67:
                                {
                                  Irp->IoStatus.Information = 0;
                                  srb.CdbLength = 10;
                                  srb.TimeOutValue = 10;
                                  cdb->CDB10.OperationCode = 192;
                                  status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
                                  deviceExtension->Paused = 0;
                                  deviceExtension->PausedM = 0;
                                  deviceExtension->PausedS = 0;
                                  deviceExtension->PausedF = 0;
                                  deviceExtension->LastEndM = 0;
                                  deviceExtension->LastEndS = 0;
                                  deviceExtension->LastEndF = 0;
                                }

                                goto switch_20_break;
                                switch_20_exp_68:
                                ;

                                switch_20_exp_69:
                                ;

                                switch_20_exp_70:
                                Irp->IoStatus.Information = 0;

                                status = -1073741808L;
                                goto switch_20_break;
                                switch_20_exp_71:
                                {
                                  tmp___4 = CdAudioIsPlayActive(DeviceObject);
                                }

                                if (((int) tmp___4) == 1)
                                {
                                  deviceExtension->PlayActive = 1;
                                  status = 0L;
                                  Irp->IoStatus.Information = 0;
                                  goto SetStatusAndReturn;
                                }
                                else
                                {
                                  {
                                    deviceExtension->PlayActive = 0;
                                    tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
                                  }
                                  return tmp___3;
                                }

                                goto switch_20_break;
                                switch_20_default:
                                {
                                  tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
                                }

                                return tmp___5;
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

    SetStatusAndReturn:
    if (status == (-2147483626L))
    {
      {
        Irp->IoStatus.Information = 0;
      }
    }
    else
    {
    }


    {
      Irp->IoStatus.__annonCompField4.Status = status;
      myStatus = status;
      IofCompleteRequest(Irp, 0);
    }
    return status;
  }
}

NTSTATUS CdAudioAtapiDeviceControl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  NTSTATUS status;
  PCD_DEVICE_EXTENSION deviceExtension;
  PIO_STACK_LOCATION currentIrpStack;
  SCSI_PASS_THROUGH srb;
  PHITACHICDB cdb;
  NTSTATUS tmp;
  {
    deviceExtension = DeviceObject->DeviceExtension;
    currentIrpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
    cdb = (union _HITACHICDB *) srb.Cdb;
    if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == ((ULONG) (((2 << 16) | (1 << 14)) | (2 << 2))))
    {
      {
        Irp->IoStatus.Information = 0;
        deviceExtension->PlayActive = 0;
        memset(&srb, 0, sizeof(SCSI_PASS_THROUGH));
        cdb->STOP_PLAY.OperationCode = 78;
        srb.CdbLength = 12;
        srb.TimeOutValue = 10;
        status = SendSrbSynchronous(deviceExtension, &srb, (void *) 0, 0);
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

    }
    else
    {
      {
        tmp = CdAudioSendToNextDriver(DeviceObject, Irp);
      }
      return tmp;
    }

    {
      Irp->IoStatus.__annonCompField4.Status = status;
      myStatus = status;
      IofCompleteRequest(Irp, 0);
    }
    return status;
  }
}

void HpCdrProcessLastSession(PCDROM_TOC Toc)
{
  ULONG index;
  {
    index = Toc->FirstTrack;
    if (index)
    {
      index -= 1UL;
      Toc->FirstTrack = Toc->TrackData[0].Reserved;
      Toc->LastTrack = Toc->TrackData[index].Reserved;
      Toc->TrackData[0] = Toc->TrackData[index];
    }
    else
    {
      Toc->LastTrack = 0;
      Toc->FirstTrack = Toc->LastTrack;
    }

    return;
  }
}

NTSTATUS HPCdrCompletion(PDEVICE_OBJECT DeviceObject, PIRP Irp, PVOID Context)
{
  {
    if (myIrp_PendingReturned)
    {
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
    }
    else
    {
    }

    if (((long) myStatus) >= 0L)
    {
      {
        HpCdrProcessLastSession((struct _CDROM_TOC *) Irp->AssociatedIrp.SystemBuffer);
      }
    }
    else
    {
    }

    return myStatus;
  }
}

NTSTATUS CdAudioHPCdrDeviceControl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PIO_STACK_LOCATION currentIrpStack;
  PIO_STACK_LOCATION nextIrpStack;
  PCD_DEVICE_EXTENSION deviceExtension;
  PIO_STACK_LOCATION irpSp;
  PIO_STACK_LOCATION nextIrpSp;
  PIO_STACK_LOCATION irpSp___0;
  NTSTATUS tmp;
  NTSTATUS tmp___0;
  {
    currentIrpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
    nextIrpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
    deviceExtension = DeviceObject->DeviceExtension;
    if (currentIrpStack->Parameters.DeviceIoControl.IoControlCode == ((ULONG) (((2 << 16) | (1 << 14)) | (14 << 2))))
    {
      {
        irpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
        nextIrpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
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
          routine = 0;
          compFptr = &HPCdrCompletion;
        }

      }

      {
        irpSp___0 = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
        irpSp___0->CompletionRoutine = &HPCdrCompletion;
        irpSp___0->Context = deviceExtension;
        irpSp___0->Control = 0;
        irpSp___0->Control = 64;
        irpSp___0->Control = ((int) irpSp___0->Control) | 128;
        irpSp___0->Control = ((int) irpSp___0->Control) | 32;
        tmp = IofCallDriver(deviceExtension->TargetDeviceObject, Irp);
      }
      return tmp;
    }
    else
    {
      {
        tmp___0 = CdAudioSendToNextDriver(DeviceObject, Irp);
      }
      return tmp___0;
    }

    return -1073741823L;
  }
}

NTSTATUS CdAudioForwardIrpSynchronous(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PCD_DEVICE_EXTENSION deviceExtension;
  KEVENT event;
  NTSTATUS status;
  PIO_STACK_LOCATION irpSp;
  PIO_STACK_LOCATION nextIrpSp;
  PIO_STACK_LOCATION irpSp___0;
  {
    {
      deviceExtension = (struct _CD_DEVICE_EXTENSION *) DeviceObject->DeviceExtension;
      irpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
      nextIrpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
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
        routine = 1;
        compFptr = &CdAudioSignalCompletion;
      }

    }

    {
      irpSp___0 = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
      irpSp___0->CompletionRoutine = &CdAudioSignalCompletion;
      irpSp___0->Context = &event;
      irpSp___0->Control = 0;
      irpSp___0->Control = 64;
      irpSp___0->Control = ((int) irpSp___0->Control) | 128;
      irpSp___0->Control = ((int) irpSp___0->Control) | 32;
      status = IofCallDriver(deviceExtension->TargetDeviceObject, Irp);
      status = 259L;
    }
    if (status)
    {
      {
        KeWaitForSingleObject(&event, 0, 0, 0, (void *) 0);
        status = Irp->IoStatus.__annonCompField4.Status;
        status = myStatus;
      }
    }
    else
    {
    }

    return status;
  }
}

void CdAudioUnload(PDRIVER_OBJECT DriverObject)
{
  {
    return;
  }
}

NTSTATUS CdAudioPower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PCD_DEVICE_EXTENSION deviceExtension;
  NTSTATUS tmp;
  {
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
      deviceExtension = (struct _CD_DEVICE_EXTENSION *) DeviceObject->DeviceExtension;
      tmp = PoCallDriver(deviceExtension->TargetDeviceObject, Irp);
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
  IRP irp;
  int we_should_unload = __VERIFIER_nondet_int("we_should_unload");
  int __BLAST_NONDET___0 = __VERIFIER_nondet_int("__BLAST_NONDET___0");
  int irp_choice = __VERIFIER_nondet_int("irp_choice");
  DEVICE_OBJECT devobj;
  devobj.DeviceExtension = malloc(sizeof(CD_DEVICE_EXTENSION));
  irp.Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation = malloc(4 * (sizeof(IO_STACK_LOCATION)));
  irp.Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation += 3;
  irp.AssociatedIrp.SystemBuffer = malloc(sizeof(CDROM_TOC));
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

      if (__BLAST_NONDET___0 == 2)
      {
        goto switch_22_2;
      }
      else
      {
        if (__BLAST_NONDET___0 == 3)
        {
          goto switch_22_3;
        }
        else
        {
          if (__BLAST_NONDET___0 == 4)
          {
            goto switch_22_4;
          }
          else
          {
            {
              goto switch_22_default;
              if (0)
              {
                switch_22_2:
                {
                  status = CdAudioDeviceControl(&devobj, pirp);
                }

                goto switch_22_break;
                switch_22_3:
                {
                  status = CdAudioPnp(&devobj, pirp);
                }

                goto switch_22_break;
                switch_22_4:
                {
                  status = CdAudioPower(&devobj, pirp);
                }

                goto switch_22_break;
                switch_22_default:
                ;

                return -1;
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
char *nondet_malloc(int i)
{
  int __BLAST_NONDET___0 = __VERIFIER_nondet_int("__BLAST_NONDET___0");
  int tmp;
  {
    if (__BLAST_NONDET___0)
    {
      return (char *) 0;
    }
    else
    {
      {
        tmp = malloc(i);
      }
      return (char *) tmp;
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
      tmp = nondet_malloc(NumberOfBytes);
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
  int __BLAST_NONDET___0 = __VERIFIER_nondet_int("__BLAST_NONDET___0");
  char *tmp;
  {
    if (__BLAST_NONDET___0 == 0)
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
          {
            tmp = nondet_malloc(sizeof(MDL));
          }

          return (void *) tmp;
          switch_23_default:
          ;

          return (void *) 0;
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

PDEVICE_OBJECT IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice);
PDEVICE_OBJECT IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  int __BLAST_NONDET___0 = __VERIFIER_nondet_int("__BLAST_NONDET___0");
  {
    if (__BLAST_NONDET___0 == 0)
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

          return TargetDevice;
          switch_24_default:
          ;

          return (void *) 0;
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

PIRP IoBuildAsynchronousFsdRequest(ULONG MajorFunction, PDEVICE_OBJECT DeviceObject, PVOID Buffer, ULONG Length, PLARGE_INTEGER StartingOffset, PIO_STATUS_BLOCK IoStatusBlock);
PIRP IoBuildAsynchronousFsdRequest(ULONG MajorFunction, PDEVICE_OBJECT DeviceObject, PVOID Buffer, ULONG Length, PLARGE_INTEGER StartingOffset, PIO_STATUS_BLOCK IoStatusBlock)
{
  int __BLAST_NONDET___0 = __VERIFIER_nondet_int("__BLAST_NONDET___0");
  int tmp;
  {
    customIrp = 1;
    if (__BLAST_NONDET___0 == 0)
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
          {
            tmp = malloc(sizeof(IRP));
          }

          return (void *) tmp;
          switch_25_default:
          ;

          return (void *) 0;
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

PIRP IoBuildDeviceIoControlRequest(ULONG IoControlCode, PDEVICE_OBJECT DeviceObject, PVOID InputBuffer, ULONG InputBufferLength, PVOID OutputBuffer, ULONG OutputBufferLength, BOOLEAN InternalDeviceIoControl, PKEVENT Event, PIO_STATUS_BLOCK IoStatusBlock);
PIRP IoBuildDeviceIoControlRequest(ULONG IoControlCode, PDEVICE_OBJECT DeviceObject, PVOID InputBuffer, ULONG InputBufferLength, PVOID OutputBuffer, ULONG OutputBufferLength, BOOLEAN InternalDeviceIoControl, PKEVENT Event, PIO_STATUS_BLOCK IoStatusBlock)
{
  int __BLAST_NONDET___0 = __VERIFIER_nondet_int("__BLAST_NONDET___0");
  int tmp;
  {
    customIrp = 1;
    if (__BLAST_NONDET___0 == 0)
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
          {
            tmp = malloc(sizeof(IRP));
          }

          return (void *) tmp;
          switch_26_default:
          ;

          return (void *) 0;
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

NTSTATUS IoCreateDevice(PDRIVER_OBJECT DriverObject, ULONG DeviceExtensionSize, PUNICODE_STRING DeviceName, ULONG DeviceType, ULONG DeviceCharacteristics, BOOLEAN Exclusive, PDEVICE_OBJECT *DeviceObject);
NTSTATUS IoCreateDevice(PDRIVER_OBJECT DriverObject, ULONG DeviceExtensionSize, PUNICODE_STRING DeviceName, ULONG DeviceType, ULONG DeviceCharacteristics, BOOLEAN Exclusive, PDEVICE_OBJECT *DeviceObject)
{
  int __BLAST_NONDET___0 = __VERIFIER_nondet_int("__BLAST_NONDET___0");
  int tmp;
  {
    if (__BLAST_NONDET___0 == 0)
    {
      goto switch_27_0;
    }
    else
    {
      {
        goto switch_27_default;
        if (0)
        {
          switch_27_0:
          {
            tmp = malloc(sizeof(DEVICE_OBJECT));
            *DeviceObject = (void *) tmp;
          }

          return 0L;
          switch_27_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_27_break:
          ;

        }

      }
    }

  }
}

NTSTATUS IoCreateSymbolicLink(PUNICODE_STRING SymbolicLinkName, PUNICODE_STRING DeviceName);
NTSTATUS IoCreateSymbolicLink(PUNICODE_STRING SymbolicLinkName, PUNICODE_STRING DeviceName)
{
  int __BLAST_NONDET___0 = __VERIFIER_nondet_int("__BLAST_NONDET___0");
  {
    if (__BLAST_NONDET___0 == 0)
    {
      goto switch_28_0;
    }
    else
    {
      {
        goto switch_28_default;
        if (0)
        {
          switch_28_0:
          ;

          return 0L;
          switch_28_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_28_break:
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
  int __BLAST_NONDET___0 = __VERIFIER_nondet_int("__BLAST_NONDET___0");
  {
    if (__BLAST_NONDET___0 == 0)
    {
      goto switch_29_0;
    }
    else
    {
      {
        goto switch_29_default;
        if (0)
        {
          switch_29_0:
          ;

          return 0L;
          switch_29_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_29_break:
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
      tmp = nondet_malloc(sizeof(CONFIGURATION_INFORMATION));
    }
    return (void *) tmp;
  }
}

NTSTATUS IoQueryDeviceDescription(PINTERFACE_TYPE BusType, PULONG BusNumber, PCONFIGURATION_TYPE ControllerType, PULONG ControllerNumber, PCONFIGURATION_TYPE PeripheralType, PULONG PeripheralNumber, NTSTATUS (*CalloutRoutine)(PVOID Context, PUNICODE_STRING PathName, INTERFACE_TYPE BusType, ULONG BusNumber, PKEY_VALUE_FULL_INFORMATION *BusInformation, CONFIGURATION_TYPE ControllerType, ULONG ControllerNumber, PKEY_VALUE_FULL_INFORMATION *ControllerInformation, CONFIGURATION_TYPE PeripheralType, ULONG PeripheralNumber, PKEY_VALUE_FULL_INFORMATION *PeripheralInformation), PVOID Context);
NTSTATUS IoQueryDeviceDescription(PINTERFACE_TYPE BusType, PULONG BusNumber, PCONFIGURATION_TYPE ControllerType, PULONG ControllerNumber, PCONFIGURATION_TYPE PeripheralType, PULONG PeripheralNumber, NTSTATUS (*CalloutRoutine)(PVOID Context, PUNICODE_STRING PathName, INTERFACE_TYPE BusType, ULONG BusNumber, PKEY_VALUE_FULL_INFORMATION *BusInformation, CONFIGURATION_TYPE ControllerType, ULONG ControllerNumber, PKEY_VALUE_FULL_INFORMATION *ControllerInformation, CONFIGURATION_TYPE PeripheralType, ULONG PeripheralNumber, PKEY_VALUE_FULL_INFORMATION *PeripheralInformation), PVOID Context)
{
  int __BLAST_NONDET___0 = __VERIFIER_nondet_int("__BLAST_NONDET___0");
  {
    if (__BLAST_NONDET___0 == 0)
    {
      goto switch_30_0;
    }
    else
    {
      {
        goto switch_30_default;
        if (0)
        {
          switch_30_0:
          ;

          return 0L;
          switch_30_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_30_break:
          ;

        }

      }
    }

  }
}

NTSTATUS IoRegisterDeviceInterface(PDEVICE_OBJECT PhysicalDeviceObject, const GUID *InterfaceClassGuid, PUNICODE_STRING ReferenceString, PUNICODE_STRING SymbolicLinkName);
NTSTATUS IoRegisterDeviceInterface(PDEVICE_OBJECT PhysicalDeviceObject, const GUID *InterfaceClassGuid, PUNICODE_STRING ReferenceString, PUNICODE_STRING SymbolicLinkName)
{
  int __BLAST_NONDET___0 = __VERIFIER_nondet_int("__BLAST_NONDET___0");
  {
    if (__BLAST_NONDET___0 == 0)
    {
      goto switch_31_0;
    }
    else
    {
      {
        goto switch_31_default;
        if (0)
        {
          switch_31_0:
          ;

          return 0L;
          switch_31_default:
          ;

          return -1073741808L;
        }
        else
        {
          switch_31_break:
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
  int __BLAST_NONDET___0 = __VERIFIER_nondet_int("__BLAST_NONDET___0");
  {
    if (__BLAST_NONDET___0 == 0)
    {
      goto switch_32_0;
    }
    else
    {
      {
        goto switch_32_default;
        if (0)
        {
          switch_32_0:
          ;

          return 0L;
          switch_32_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_32_break:
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
  int __BLAST_NONDET___0 = __VERIFIER_nondet_int("__BLAST_NONDET___0");
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
          tmp = HPCdrCompletion(DeviceObject, Irp, lcontext);
          compRetStatus = tmp;
        }
      }
      else
      {
        if (routine == 1)
        {
          {
            tmp___0 = CdAudioSignalCompletion(DeviceObject, Irp, lcontext);
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

    if (myIrp_PendingReturned)
    {
      returnVal2 = 259L;
    }
    else
    {
      if (__BLAST_NONDET___0 == 0)
      {
        goto switch_33_0;
      }
      else
      {
        if (__BLAST_NONDET___0 == 1)
        {
          goto switch_33_1;
        }
        else
        {
          {
            goto switch_33_default;
            if (0)
            {
              switch_33_0:
              returnVal2 = 0L;

              goto switch_33_break;
              switch_33_1:
              returnVal2 = -1073741823L;

              goto switch_33_break;
              switch_33_default:
              returnVal2 = 259L;

              goto switch_33_break;
            }
            else
            {
              switch_33_break:
              ;

            }

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
  int __BLAST_NONDET___0 = __VERIFIER_nondet_int("__BLAST_NONDET___0");
  {
    if (__BLAST_NONDET___0 == 0)
    {
      goto switch_34_0;
    }
    else
    {
      {
        goto switch_34_default;
        if (0)
        {
          switch_34_0:
          ;

          return 0L;
          switch_34_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_34_break:
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
  int __BLAST_NONDET___0 = __VERIFIER_nondet_int("__BLAST_NONDET___0");
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

    if (__BLAST_NONDET___0 == 0)
    {
      goto switch_35_0;
    }
    else
    {
      {
        goto switch_35_default;
        if (0)
        {
          switch_35_0:
          ;

          return 0L;
          switch_35_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_35_break:
          ;

        }

      }
    }

  }
}

PVOID MmAllocateContiguousMemory(SIZE_T NumberOfBytes, PHYSICAL_ADDRESS HighestAcceptableAddress);
PVOID MmAllocateContiguousMemory(SIZE_T NumberOfBytes, PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  int __BLAST_NONDET___0 = __VERIFIER_nondet_int("__BLAST_NONDET___0");
  int tmp;
  {
    if (__BLAST_NONDET___0 == 0)
    {
      goto switch_36_0;
    }
    else
    {
      if (__BLAST_NONDET___0 == 1)
      {
        goto switch_36_1;
      }
      else
      {
        if (0)
        {
          switch_36_0:
          {
            tmp = malloc(NumberOfBytes);
          }

          return tmp;
          switch_36_1:
          ;

          return (void *) 0;
        }
        else
        {
          switch_36_break:
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
  int __BLAST_NONDET___0 = __VERIFIER_nondet_int("__BLAST_NONDET___0");
  {
    if (__BLAST_NONDET___0 == 0)
    {
      goto switch_37_0;
    }
    else
    {
      {
        goto switch_37_default;
        if (0)
        {
          switch_37_0:
          ;

          return 0L;
          switch_37_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_37_break:
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
  int __BLAST_NONDET___0 = __VERIFIER_nondet_int("__BLAST_NONDET___0");
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
          tmp = HPCdrCompletion(DeviceObject, Irp, lcontext);
          compRetStatus = tmp;
        }
      }
      else
      {
        if (routine == 1)
        {
          {
            tmp___0 = CdAudioSignalCompletion(DeviceObject, Irp, lcontext);
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

    if (__BLAST_NONDET___0 == 0)
    {
      goto switch_38_0;
    }
    else
    {
      if (__BLAST_NONDET___0 == 1)
      {
        goto switch_38_1;
      }
      else
      {
        {
          goto switch_38_default;
          if (0)
          {
            switch_38_0:
            returnVal = 0L;

            goto switch_38_break;
            switch_38_1:
            returnVal = -1073741823L;

            goto switch_38_break;
            switch_38_default:
            returnVal = 259L;

            goto switch_38_break;
          }
          else
          {
            switch_38_break:
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
  int __BLAST_NONDET___0 = __VERIFIER_nondet_int("__BLAST_NONDET___0");
  {
    if (__BLAST_NONDET___0 == 0)
    {
      goto switch_39_0;
    }
    else
    {
      {
        goto switch_39_default;
        if (0)
        {
          switch_39_0:
          ;

          return 0L;
          switch_39_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_39_break:
          ;

        }

      }
    }

  }
}

NTSTATUS PsTerminateSystemThread(NTSTATUS ExitStatus);
NTSTATUS PsTerminateSystemThread(NTSTATUS ExitStatus)
{
  int __BLAST_NONDET___0 = __VERIFIER_nondet_int("__BLAST_NONDET___0");
  {
    if (__BLAST_NONDET___0 == 0)
    {
      goto switch_40_0;
    }
    else
    {
      {
        goto switch_40_default;
        if (0)
        {
          switch_40_0:
          ;

          return 0L;
          switch_40_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_40_break:
          ;

        }

      }
    }

  }
}

NTSTATUS RtlAnsiStringToUnicodeString(PUNICODE_STRING DestinationString, PANSI_STRING SourceString, BOOLEAN AllocateDestinationString);
NTSTATUS RtlAnsiStringToUnicodeString(PUNICODE_STRING DestinationString, PANSI_STRING SourceString, BOOLEAN AllocateDestinationString)
{
  int __BLAST_NONDET___0 = __VERIFIER_nondet_int("__BLAST_NONDET___0");
  {
    if (__BLAST_NONDET___0 == 0)
    {
      goto switch_41_0;
    }
    else
    {
      {
        goto switch_41_default;
        if (0)
        {
          switch_41_0:
          ;

          return 0L;
          switch_41_default:
          ;

          return -1073741823L;
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
  int __BLAST_NONDET___0 = __VERIFIER_nondet_int("__BLAST_NONDET___0");
  {
    if (__BLAST_NONDET___0 == 0)
    {
      goto switch_42_0;
    }
    else
    {
      {
        goto switch_42_default;
        if (0)
        {
          switch_42_0:
          ;

          return 0L;
          switch_42_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_42_break:
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
  int __BLAST_NONDET___0 = __VERIFIER_nondet_int("__BLAST_NONDET___0");
  {
    if (__BLAST_NONDET___0 == 0)
    {
      goto switch_43_0;
    }
    else
    {
      {
        goto switch_43_default;
        if (0)
        {
          switch_43_0:
          ;

          return 0L;
          switch_43_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_43_break:
          ;

        }

      }
    }

  }
}

NTSTATUS ZwClose(HANDLE Handle);
NTSTATUS ZwClose(HANDLE Handle)
{
  int __BLAST_NONDET___0 = __VERIFIER_nondet_int("__BLAST_NONDET___0");
  {
    if (__BLAST_NONDET___0 == 0)
    {
      goto switch_44_0;
    }
    else
    {
      {
        goto switch_44_default;
        if (0)
        {
          switch_44_0:
          ;

          return 0L;
          switch_44_default:
          ;

          return -1073741823L;
        }
        else
        {
          switch_44_break:
          ;

        }

      }
    }

  }
}

