#include <sun/management/VMManagementImpl.h>
#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/AccessController.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <jdk/internal/perf/Perf$GetPerfAction.h>
#include <jdk/internal/perf/Perf.h>
#include <sun/management/VMManagementImpl$1.h>
#include <sun/management/counter/perf/PerfInstrumentation.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $InetAddress = ::java::net::InetAddress;
using $UnknownHostException = ::java::net::UnknownHostException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AccessController = ::java::security::AccessController;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $Perf = ::jdk::internal::perf::Perf;
using $Perf$GetPerfAction = ::jdk::internal::perf::Perf$GetPerfAction;
using $VMManagementImpl$1 = ::sun::management::VMManagementImpl$1;
using $PerfInstrumentation = ::sun::management::counter::perf::PerfInstrumentation;

namespace sun {
	namespace management {

$String* VMManagementImpl::version = nullptr;
bool VMManagementImpl::compTimeMonitoringSupport = false;
bool VMManagementImpl::threadContentionMonitoringSupport = false;
bool VMManagementImpl::currentThreadCpuTimeSupport = false;
bool VMManagementImpl::otherThreadCpuTimeSupport = false;
bool VMManagementImpl::objectMonitorUsageSupport = false;
bool VMManagementImpl::synchronizerUsageSupport = false;
bool VMManagementImpl::threadAllocatedMemorySupport = false;
bool VMManagementImpl::gcNotificationSupport = false;
bool VMManagementImpl::remoteDiagnosticCommandsSupport = false;

void VMManagementImpl::init$() {
	$set(this, vmArgs, nullptr);
	$set(this, perfInstr, nullptr);
	this->noPerfData = false;
}

$String* VMManagementImpl::getVersion0() {
	$init(VMManagementImpl);
	$prepareNativeStatic(getVersion0, $String*);
	$var($String, $ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

void VMManagementImpl::initOptionalSupportFields() {
	$init(VMManagementImpl);
	$prepareNativeStatic(initOptionalSupportFields, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

bool VMManagementImpl::isCompilationTimeMonitoringSupported() {
	return VMManagementImpl::compTimeMonitoringSupport;
}

bool VMManagementImpl::isThreadContentionMonitoringSupported() {
	return VMManagementImpl::threadContentionMonitoringSupport;
}

bool VMManagementImpl::isCurrentThreadCpuTimeSupported() {
	return VMManagementImpl::currentThreadCpuTimeSupport;
}

bool VMManagementImpl::isOtherThreadCpuTimeSupported() {
	return VMManagementImpl::otherThreadCpuTimeSupport;
}

bool VMManagementImpl::isBootClassPathSupported() {
	return false;
}

bool VMManagementImpl::isObjectMonitorUsageSupported() {
	return VMManagementImpl::objectMonitorUsageSupport;
}

bool VMManagementImpl::isSynchronizerUsageSupported() {
	return VMManagementImpl::synchronizerUsageSupport;
}

bool VMManagementImpl::isThreadAllocatedMemorySupported() {
	return VMManagementImpl::threadAllocatedMemorySupport;
}

bool VMManagementImpl::isGcNotificationSupported() {
	$beforeCallerSensitive();
	bool isSupported = true;
	try {
		$Class::forName("com.sun.management.GarbageCollectorMXBean"_s);
	} catch ($ClassNotFoundException& x) {
		isSupported = false;
	}
	return isSupported;
}

bool VMManagementImpl::isRemoteDiagnosticCommandsSupported() {
	return VMManagementImpl::remoteDiagnosticCommandsSupport;
}

bool VMManagementImpl::isThreadContentionMonitoringEnabled() {
	$prepareNative(isThreadContentionMonitoringEnabled, bool);
	bool $ret = $invokeNative();
	$finishNative();
	return $ret;
}

bool VMManagementImpl::isThreadCpuTimeEnabled() {
	$prepareNative(isThreadCpuTimeEnabled, bool);
	bool $ret = $invokeNative();
	$finishNative();
	return $ret;
}

bool VMManagementImpl::isThreadAllocatedMemoryEnabled() {
	$prepareNative(isThreadAllocatedMemoryEnabled, bool);
	bool $ret = $invokeNative();
	$finishNative();
	return $ret;
}

int32_t VMManagementImpl::getLoadedClassCount() {
	int64_t var$0 = getTotalClassCount();
	int64_t count = var$0 - getUnloadedClassCount();
	return (int32_t)count;
}

int64_t VMManagementImpl::getTotalClassCount() {
	$prepareNative(getTotalClassCount, int64_t);
	int64_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getUnloadedClassCount() {
	$prepareNative(getUnloadedClassCount, int64_t);
	int64_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

bool VMManagementImpl::getVerboseClass() {
	$prepareNative(getVerboseClass, bool);
	bool $ret = $invokeNative();
	$finishNative();
	return $ret;
}

bool VMManagementImpl::getVerboseGC() {
	$prepareNative(getVerboseGC, bool);
	bool $ret = $invokeNative();
	$finishNative();
	return $ret;
}

$String* VMManagementImpl::getManagementVersion() {
	return VMManagementImpl::version;
}

$String* VMManagementImpl::getVmId() {
	$useLocalObjectStack();
	int32_t pid = getProcessId();
	$var($String, hostname, "localhost"_s);
	try {
		$assign(hostname, $$nc($InetAddress::getLocalHost())->getHostName());
	} catch ($UnknownHostException& e) {
	}
	return $str({$$str(pid), "@"_s, hostname});
}

int32_t VMManagementImpl::getProcessId() {
	$prepareNative(getProcessId, int32_t);
	int32_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

$String* VMManagementImpl::getVmName() {
	return $System::getProperty("java.vm.name"_s);
}

$String* VMManagementImpl::getVmVendor() {
	return $System::getProperty("java.vm.vendor"_s);
}

$String* VMManagementImpl::getVmVersion() {
	return $System::getProperty("java.vm.version"_s);
}

$String* VMManagementImpl::getVmSpecName() {
	return $System::getProperty("java.vm.specification.name"_s);
}

$String* VMManagementImpl::getVmSpecVendor() {
	return $System::getProperty("java.vm.specification.vendor"_s);
}

$String* VMManagementImpl::getVmSpecVersion() {
	return $System::getProperty("java.vm.specification.version"_s);
}

$String* VMManagementImpl::getClassPath() {
	return $System::getProperty("java.class.path"_s);
}

$String* VMManagementImpl::getLibraryPath() {
	return $System::getProperty("java.library.path"_s);
}

$String* VMManagementImpl::getBootClassPath() {
	$throwNew($UnsupportedOperationException, "Boot class path mechanism is not supported"_s);
	$shouldNotReachHere();
}

int64_t VMManagementImpl::getUptime() {
	return getUptime0();
}

$List* VMManagementImpl::getVmArguments() {
	$synchronized(this) {
		$useLocalObjectStack();
		if (this->vmArgs == nullptr) {
			$var($StringArray, args, getVmArguments0());
			$var($List, l, (args != nullptr && args->length != 0) ? $Arrays::asList(args) : $Collections::emptyList());
			$set(this, vmArgs, $Collections::unmodifiableList(l));
		}
		return this->vmArgs;
	}
}

$StringArray* VMManagementImpl::getVmArguments0() {
	$prepareNative(getVmArguments0, $StringArray*);
	$var($StringArray, $ret, $invokeNativeObject());
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getStartupTime() {
	$prepareNative(getStartupTime, int64_t);
	int64_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getUptime0() {
	$prepareNative(getUptime0, int64_t);
	int64_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

int32_t VMManagementImpl::getAvailableProcessors() {
	$prepareNative(getAvailableProcessors, int32_t);
	int32_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

$String* VMManagementImpl::getCompilerName() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, name, $cast($String, $AccessController::doPrivileged($$new($VMManagementImpl$1, this))));
	return name;
}

int64_t VMManagementImpl::getTotalCompileTime() {
	$prepareNative(getTotalCompileTime, int64_t);
	int64_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getTotalThreadCount() {
	$prepareNative(getTotalThreadCount, int64_t);
	int64_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

int32_t VMManagementImpl::getLiveThreadCount() {
	$prepareNative(getLiveThreadCount, int32_t);
	int32_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

int32_t VMManagementImpl::getPeakThreadCount() {
	$prepareNative(getPeakThreadCount, int32_t);
	int32_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

int32_t VMManagementImpl::getDaemonThreadCount() {
	$prepareNative(getDaemonThreadCount, int32_t);
	int32_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

$String* VMManagementImpl::getOsName() {
	return $System::getProperty("os.name"_s);
}

$String* VMManagementImpl::getOsArch() {
	return $System::getProperty("os.arch"_s);
}

$String* VMManagementImpl::getOsVersion() {
	return $System::getProperty("os.version"_s);
}

int64_t VMManagementImpl::getSafepointCount() {
	$prepareNative(getSafepointCount, int64_t);
	int64_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getTotalSafepointTime() {
	$prepareNative(getTotalSafepointTime, int64_t);
	int64_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getSafepointSyncTime() {
	$prepareNative(getSafepointSyncTime, int64_t);
	int64_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getTotalApplicationNonStoppedTime() {
	$prepareNative(getTotalApplicationNonStoppedTime, int64_t);
	int64_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getLoadedClassSize() {
	$prepareNative(getLoadedClassSize, int64_t);
	int64_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getUnloadedClassSize() {
	$prepareNative(getUnloadedClassSize, int64_t);
	int64_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getClassLoadingTime() {
	$prepareNative(getClassLoadingTime, int64_t);
	int64_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getMethodDataSize() {
	$prepareNative(getMethodDataSize, int64_t);
	int64_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getInitializedClassCount() {
	$prepareNative(getInitializedClassCount, int64_t);
	int64_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getClassInitializationTime() {
	$prepareNative(getClassInitializationTime, int64_t);
	int64_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

int64_t VMManagementImpl::getClassVerificationTime() {
	$prepareNative(getClassVerificationTime, int64_t);
	int64_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

$PerfInstrumentation* VMManagementImpl::getPerfInstrumentation() {
	$synchronized(this) {
		$useLocalObjectStack();
		$beforeCallerSensitive();
		if (this->noPerfData || this->perfInstr != nullptr) {
			return this->perfInstr;
		}
		$var($Perf, perf, $cast($Perf, $AccessController::doPrivileged($$new($Perf$GetPerfAction))));
		try {
			$var($ByteBuffer, bb, $nc(perf)->attach(0, "r"_s));
			if ($nc(bb)->capacity() == 0) {
				this->noPerfData = true;
				return nullptr;
			}
			$set(this, perfInstr, $new($PerfInstrumentation, bb));
		} catch ($IllegalArgumentException& e) {
			this->noPerfData = true;
		} catch ($IOException& e) {
			$throwNew($AssertionError, $of(e));
		}
		return this->perfInstr;
	}
}

$List* VMManagementImpl::getInternalCounters($String* pattern) {
	$var($PerfInstrumentation, perf, getPerfInstrumentation());
	if (perf != nullptr) {
		return perf->findByPattern(pattern);
	} else {
		return $Collections::emptyList();
	}
}

void VMManagementImpl::clinit$($Class* clazz) {
	{
		$assignStatic(VMManagementImpl::version, VMManagementImpl::getVersion0());
		if (VMManagementImpl::version == nullptr) {
			$throwNew($AssertionError, $of("Invalid Management Version"_s));
		}
		VMManagementImpl::initOptionalSupportFields();
	}
}

VMManagementImpl::VMManagementImpl() {
}

$Class* VMManagementImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"version", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(VMManagementImpl, version)},
		{"compTimeMonitoringSupport", "Z", nullptr, $PRIVATE | $STATIC, $staticField(VMManagementImpl, compTimeMonitoringSupport)},
		{"threadContentionMonitoringSupport", "Z", nullptr, $PRIVATE | $STATIC, $staticField(VMManagementImpl, threadContentionMonitoringSupport)},
		{"currentThreadCpuTimeSupport", "Z", nullptr, $PRIVATE | $STATIC, $staticField(VMManagementImpl, currentThreadCpuTimeSupport)},
		{"otherThreadCpuTimeSupport", "Z", nullptr, $PRIVATE | $STATIC, $staticField(VMManagementImpl, otherThreadCpuTimeSupport)},
		{"objectMonitorUsageSupport", "Z", nullptr, $PRIVATE | $STATIC, $staticField(VMManagementImpl, objectMonitorUsageSupport)},
		{"synchronizerUsageSupport", "Z", nullptr, $PRIVATE | $STATIC, $staticField(VMManagementImpl, synchronizerUsageSupport)},
		{"threadAllocatedMemorySupport", "Z", nullptr, $PRIVATE | $STATIC, $staticField(VMManagementImpl, threadAllocatedMemorySupport)},
		{"gcNotificationSupport", "Z", nullptr, $PRIVATE | $STATIC, $staticField(VMManagementImpl, gcNotificationSupport)},
		{"remoteDiagnosticCommandsSupport", "Z", nullptr, $PRIVATE | $STATIC, $staticField(VMManagementImpl, remoteDiagnosticCommandsSupport)},
		{"vmArgs", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(VMManagementImpl, vmArgs)},
		{"perfInstr", "Lsun/management/counter/perf/PerfInstrumentation;", nullptr, $PRIVATE, $field(VMManagementImpl, perfInstr)},
		{"noPerfData", "Z", nullptr, $PRIVATE, $field(VMManagementImpl, noPerfData)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(VMManagementImpl, init$, void)},
		{"getAvailableProcessors", "()I", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, getAvailableProcessors, int32_t)},
		{"getBootClassPath", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, getBootClassPath, $String*)},
		{"getClassInitializationTime", "()J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, getClassInitializationTime, int64_t)},
		{"getClassLoadingTime", "()J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, getClassLoadingTime, int64_t)},
		{"getClassPath", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, getClassPath, $String*)},
		{"getClassVerificationTime", "()J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, getClassVerificationTime, int64_t)},
		{"getCompilerName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, getCompilerName, $String*)},
		{"getDaemonThreadCount", "()I", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, getDaemonThreadCount, int32_t)},
		{"getInitializedClassCount", "()J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, getInitializedClassCount, int64_t)},
		{"getInternalCounters", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Lsun/management/counter/Counter;>;", $PUBLIC, $virtualMethod(VMManagementImpl, getInternalCounters, $List*, $String*)},
		{"getLibraryPath", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, getLibraryPath, $String*)},
		{"getLiveThreadCount", "()I", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, getLiveThreadCount, int32_t)},
		{"getLoadedClassCount", "()I", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, getLoadedClassCount, int32_t)},
		{"getLoadedClassSize", "()J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, getLoadedClassSize, int64_t)},
		{"getManagementVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, getManagementVersion, $String*)},
		{"getMethodDataSize", "()J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, getMethodDataSize, int64_t)},
		{"getOsArch", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, getOsArch, $String*)},
		{"getOsName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, getOsName, $String*)},
		{"getOsVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, getOsVersion, $String*)},
		{"getPeakThreadCount", "()I", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, getPeakThreadCount, int32_t)},
		{"getPerfInstrumentation", "()Lsun/management/counter/perf/PerfInstrumentation;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(VMManagementImpl, getPerfInstrumentation, $PerfInstrumentation*)},
		{"getProcessId", "()I", nullptr, $PRIVATE | $NATIVE, $method(VMManagementImpl, getProcessId, int32_t)},
		{"getSafepointCount", "()J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, getSafepointCount, int64_t)},
		{"getSafepointSyncTime", "()J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, getSafepointSyncTime, int64_t)},
		{"getStartupTime", "()J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, getStartupTime, int64_t)},
		{"getTotalApplicationNonStoppedTime", "()J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, getTotalApplicationNonStoppedTime, int64_t)},
		{"getTotalClassCount", "()J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, getTotalClassCount, int64_t)},
		{"getTotalCompileTime", "()J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, getTotalCompileTime, int64_t)},
		{"getTotalSafepointTime", "()J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, getTotalSafepointTime, int64_t)},
		{"getTotalThreadCount", "()J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, getTotalThreadCount, int64_t)},
		{"getUnloadedClassCount", "()J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, getUnloadedClassCount, int64_t)},
		{"getUnloadedClassSize", "()J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, getUnloadedClassSize, int64_t)},
		{"getUptime", "()J", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, getUptime, int64_t)},
		{"getUptime0", "()J", nullptr, $PRIVATE | $NATIVE, $method(VMManagementImpl, getUptime0, int64_t)},
		{"getVerboseClass", "()Z", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, getVerboseClass, bool)},
		{"getVerboseGC", "()Z", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, getVerboseGC, bool)},
		{"getVersion0", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(VMManagementImpl, getVersion0, $String*)},
		{"getVmArguments", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $SYNCHRONIZED, $virtualMethod(VMManagementImpl, getVmArguments, $List*)},
		{"getVmArguments0", "()[Ljava/lang/String;", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, getVmArguments0, $StringArray*)},
		{"getVmId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, getVmId, $String*)},
		{"getVmName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, getVmName, $String*)},
		{"getVmSpecName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, getVmSpecName, $String*)},
		{"getVmSpecVendor", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, getVmSpecVendor, $String*)},
		{"getVmSpecVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, getVmSpecVersion, $String*)},
		{"getVmVendor", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, getVmVendor, $String*)},
		{"getVmVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, getVmVersion, $String*)},
		{"initOptionalSupportFields", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(VMManagementImpl, initOptionalSupportFields, void)},
		{"isBootClassPathSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, isBootClassPathSupported, bool)},
		{"isCompilationTimeMonitoringSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, isCompilationTimeMonitoringSupported, bool)},
		{"isCurrentThreadCpuTimeSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, isCurrentThreadCpuTimeSupported, bool)},
		{"isGcNotificationSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, isGcNotificationSupported, bool)},
		{"isObjectMonitorUsageSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, isObjectMonitorUsageSupported, bool)},
		{"isOtherThreadCpuTimeSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, isOtherThreadCpuTimeSupported, bool)},
		{"isRemoteDiagnosticCommandsSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, isRemoteDiagnosticCommandsSupported, bool)},
		{"isSynchronizerUsageSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, isSynchronizerUsageSupported, bool)},
		{"isThreadAllocatedMemoryEnabled", "()Z", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, isThreadAllocatedMemoryEnabled, bool)},
		{"isThreadAllocatedMemorySupported", "()Z", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, isThreadAllocatedMemorySupported, bool)},
		{"isThreadContentionMonitoringEnabled", "()Z", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, isThreadContentionMonitoringEnabled, bool)},
		{"isThreadContentionMonitoringSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(VMManagementImpl, isThreadContentionMonitoringSupported, bool)},
		{"isThreadCpuTimeEnabled", "()Z", nullptr, $PUBLIC | $NATIVE, $virtualMethod(VMManagementImpl, isThreadCpuTimeEnabled, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.management.VMManagementImpl$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.management.VMManagementImpl",
		"java.lang.Object",
		"sun.management.VMManagement",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.management.VMManagementImpl$1"
	};
	$loadClass(VMManagementImpl, name, initialize, &classInfo$$, VMManagementImpl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VMManagementImpl);
	});
	return class$;
}

$Class* VMManagementImpl::class$ = nullptr;

	} // management
} // sun