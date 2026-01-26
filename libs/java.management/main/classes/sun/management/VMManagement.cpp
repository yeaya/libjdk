#include <sun/management/VMManagement.h>

#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace sun {
	namespace management {

$MethodInfo _VMManagement_MethodInfo_[] = {
	{"getAvailableProcessors", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getAvailableProcessors, int32_t)},
	{"getBootClassPath", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getBootClassPath, $String*)},
	{"getClassInitializationTime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getClassInitializationTime, int64_t)},
	{"getClassLoadingTime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getClassLoadingTime, int64_t)},
	{"getClassPath", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getClassPath, $String*)},
	{"getClassVerificationTime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getClassVerificationTime, int64_t)},
	{"getCompilerName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getCompilerName, $String*)},
	{"getDaemonThreadCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getDaemonThreadCount, int32_t)},
	{"getInitializedClassCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getInitializedClassCount, int64_t)},
	{"getInternalCounters", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Lsun/management/counter/Counter;>;", $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getInternalCounters, $List*, $String*)},
	{"getLibraryPath", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getLibraryPath, $String*)},
	{"getLiveThreadCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getLiveThreadCount, int32_t)},
	{"getLoadedClassCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getLoadedClassCount, int32_t)},
	{"getLoadedClassSize", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getLoadedClassSize, int64_t)},
	{"getManagementVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getManagementVersion, $String*)},
	{"getMethodDataSize", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getMethodDataSize, int64_t)},
	{"getOsArch", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getOsArch, $String*)},
	{"getOsName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getOsName, $String*)},
	{"getOsVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getOsVersion, $String*)},
	{"getPeakThreadCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getPeakThreadCount, int32_t)},
	{"getSafepointCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getSafepointCount, int64_t)},
	{"getSafepointSyncTime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getSafepointSyncTime, int64_t)},
	{"getStartupTime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getStartupTime, int64_t)},
	{"getTotalApplicationNonStoppedTime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getTotalApplicationNonStoppedTime, int64_t)},
	{"getTotalClassCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getTotalClassCount, int64_t)},
	{"getTotalCompileTime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getTotalCompileTime, int64_t)},
	{"getTotalSafepointTime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getTotalSafepointTime, int64_t)},
	{"getTotalThreadCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getTotalThreadCount, int64_t)},
	{"getUnloadedClassCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getUnloadedClassCount, int64_t)},
	{"getUnloadedClassSize", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getUnloadedClassSize, int64_t)},
	{"getUptime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getUptime, int64_t)},
	{"getVerboseClass", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getVerboseClass, bool)},
	{"getVerboseGC", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getVerboseGC, bool)},
	{"getVmArguments", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getVmArguments, $List*)},
	{"getVmId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getVmId, $String*)},
	{"getVmName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getVmName, $String*)},
	{"getVmSpecName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getVmSpecName, $String*)},
	{"getVmSpecVendor", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getVmSpecVendor, $String*)},
	{"getVmSpecVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getVmSpecVersion, $String*)},
	{"getVmVendor", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getVmVendor, $String*)},
	{"getVmVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, getVmVersion, $String*)},
	{"isBootClassPathSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, isBootClassPathSupported, bool)},
	{"isCompilationTimeMonitoringSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, isCompilationTimeMonitoringSupported, bool)},
	{"isCurrentThreadCpuTimeSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, isCurrentThreadCpuTimeSupported, bool)},
	{"isGcNotificationSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, isGcNotificationSupported, bool)},
	{"isObjectMonitorUsageSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, isObjectMonitorUsageSupported, bool)},
	{"isOtherThreadCpuTimeSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, isOtherThreadCpuTimeSupported, bool)},
	{"isRemoteDiagnosticCommandsSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, isRemoteDiagnosticCommandsSupported, bool)},
	{"isSynchronizerUsageSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, isSynchronizerUsageSupported, bool)},
	{"isThreadAllocatedMemoryEnabled", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, isThreadAllocatedMemoryEnabled, bool)},
	{"isThreadAllocatedMemorySupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, isThreadAllocatedMemorySupported, bool)},
	{"isThreadContentionMonitoringEnabled", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, isThreadContentionMonitoringEnabled, bool)},
	{"isThreadContentionMonitoringSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, isThreadContentionMonitoringSupported, bool)},
	{"isThreadCpuTimeEnabled", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMManagement, isThreadCpuTimeEnabled, bool)},
	{}
};

$ClassInfo _VMManagement_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.management.VMManagement",
	nullptr,
	nullptr,
	nullptr,
	_VMManagement_MethodInfo_
};

$Object* allocate$VMManagement($Class* clazz) {
	return $of($alloc(VMManagement));
}

$Class* VMManagement::load$($String* name, bool initialize) {
	$loadClass(VMManagement, name, initialize, &_VMManagement_ClassInfo_, allocate$VMManagement);
	return class$;
}

$Class* VMManagement::class$ = nullptr;

	} // management
} // sun