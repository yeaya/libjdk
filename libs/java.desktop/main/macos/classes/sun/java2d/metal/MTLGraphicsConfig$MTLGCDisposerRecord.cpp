#include <sun/java2d/metal/MTLGraphicsConfig$MTLGCDisposerRecord.h>
#include <sun/java2d/metal/MTLGraphicsConfig.h>
#include <sun/java2d/metal/MTLRenderQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MTLRenderQueue = ::sun::java2d::metal::MTLRenderQueue;

namespace sun {
	namespace java2d {
		namespace metal {

void MTLGraphicsConfig$MTLGCDisposerRecord::init$(int64_t pCfgInfo) {
	this->pCfgInfo = pCfgInfo;
}

void MTLGraphicsConfig$MTLGCDisposerRecord::dispose() {
	if (this->pCfgInfo != 0) {
		$MTLRenderQueue::disposeGraphicsConfig(this->pCfgInfo);
		this->pCfgInfo = 0;
	}
}

MTLGraphicsConfig$MTLGCDisposerRecord::MTLGraphicsConfig$MTLGCDisposerRecord() {
}

$Class* MTLGraphicsConfig$MTLGCDisposerRecord::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pCfgInfo", "J", nullptr, $PRIVATE, $field(MTLGraphicsConfig$MTLGCDisposerRecord, pCfgInfo)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, $PUBLIC, $method(MTLGraphicsConfig$MTLGCDisposerRecord, init$, void, int64_t)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(MTLGraphicsConfig$MTLGCDisposerRecord, dispose, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.metal.MTLGraphicsConfig$MTLGCDisposerRecord", "sun.java2d.metal.MTLGraphicsConfig", "MTLGCDisposerRecord", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.metal.MTLGraphicsConfig$MTLGCDisposerRecord",
		"java.lang.Object",
		"sun.java2d.DisposerRecord",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.metal.MTLGraphicsConfig"
	};
	$loadClass(MTLGraphicsConfig$MTLGCDisposerRecord, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MTLGraphicsConfig$MTLGCDisposerRecord);
	});
	return class$;
}

$Class* MTLGraphicsConfig$MTLGCDisposerRecord::class$ = nullptr;

		} // metal
	} // java2d
} // sun