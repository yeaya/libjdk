#include <sun/java2d/opengl/WGLGraphicsConfig$WGLGCDisposerRecord.h>
#include <sun/java2d/opengl/OGLRenderQueue.h>
#include <sun/java2d/opengl/WGLGraphicsConfig.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OGLRenderQueue = ::sun::java2d::opengl::OGLRenderQueue;

namespace sun {
	namespace java2d {
		namespace opengl {

void WGLGraphicsConfig$WGLGCDisposerRecord::init$(int64_t pCfgInfo) {
	this->pCfgInfo = pCfgInfo;
}

void WGLGraphicsConfig$WGLGCDisposerRecord::dispose() {
	if (this->pCfgInfo != 0) {
		$OGLRenderQueue::disposeGraphicsConfig(this->pCfgInfo);
		this->pCfgInfo = 0;
	}
}

WGLGraphicsConfig$WGLGCDisposerRecord::WGLGraphicsConfig$WGLGCDisposerRecord() {
}

$Class* WGLGraphicsConfig$WGLGCDisposerRecord::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pCfgInfo", "J", nullptr, $PRIVATE, $field(WGLGraphicsConfig$WGLGCDisposerRecord, pCfgInfo)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, $PUBLIC, $method(WGLGraphicsConfig$WGLGCDisposerRecord, init$, void, int64_t)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(WGLGraphicsConfig$WGLGCDisposerRecord, dispose, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.WGLGraphicsConfig$WGLGCDisposerRecord", "sun.java2d.opengl.WGLGraphicsConfig", "WGLGCDisposerRecord", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.opengl.WGLGraphicsConfig$WGLGCDisposerRecord",
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
		"sun.java2d.opengl.WGLGraphicsConfig"
	};
	$loadClass(WGLGraphicsConfig$WGLGCDisposerRecord, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WGLGraphicsConfig$WGLGCDisposerRecord);
	});
	return class$;
}

$Class* WGLGraphicsConfig$WGLGCDisposerRecord::class$ = nullptr;

		} // opengl
	} // java2d
} // sun