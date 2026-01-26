#include <sun/management/HotspotCompilationMBean.h>

#include <java/util/List.h>
#include <sun/management/MethodInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $1MethodInfo = ::sun::management::MethodInfo;

namespace sun {
	namespace management {

$CompoundAttribute _HotspotCompilationMBean_MethodAnnotations_getCompilerThreadStats4[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _HotspotCompilationMBean_MethodInfo_[] = {
	{"getBailoutCompileCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HotspotCompilationMBean, getBailoutCompileCount, int64_t)},
	{"getCompiledMethodCodeSize", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HotspotCompilationMBean, getCompiledMethodCodeSize, int64_t)},
	{"getCompiledMethodSize", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HotspotCompilationMBean, getCompiledMethodSize, int64_t)},
	{"getCompilerThreadCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HotspotCompilationMBean, getCompilerThreadCount, int32_t)},
	{"getCompilerThreadStats", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/CompilerThreadStat;>;", $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(HotspotCompilationMBean, getCompilerThreadStats, $List*), nullptr, nullptr, _HotspotCompilationMBean_MethodAnnotations_getCompilerThreadStats4},
	{"getFailedCompile", "()Lsun/management/MethodInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HotspotCompilationMBean, getFailedCompile, $1MethodInfo*)},
	{"getInternalCompilerCounters", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/counter/Counter;>;", $PUBLIC | $ABSTRACT, $virtualMethod(HotspotCompilationMBean, getInternalCompilerCounters, $List*)},
	{"getInvalidatedCompile", "()Lsun/management/MethodInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HotspotCompilationMBean, getInvalidatedCompile, $1MethodInfo*)},
	{"getInvalidatedCompileCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HotspotCompilationMBean, getInvalidatedCompileCount, int64_t)},
	{"getLastCompile", "()Lsun/management/MethodInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HotspotCompilationMBean, getLastCompile, $1MethodInfo*)},
	{"getTotalCompileCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HotspotCompilationMBean, getTotalCompileCount, int64_t)},
	{}
};

$ClassInfo _HotspotCompilationMBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.management.HotspotCompilationMBean",
	nullptr,
	nullptr,
	nullptr,
	_HotspotCompilationMBean_MethodInfo_
};

$Object* allocate$HotspotCompilationMBean($Class* clazz) {
	return $of($alloc(HotspotCompilationMBean));
}

$Class* HotspotCompilationMBean::load$($String* name, bool initialize) {
	$loadClass(HotspotCompilationMBean, name, initialize, &_HotspotCompilationMBean_ClassInfo_, allocate$HotspotCompilationMBean);
	return class$;
}

$Class* HotspotCompilationMBean::class$ = nullptr;

	} // management
} // sun