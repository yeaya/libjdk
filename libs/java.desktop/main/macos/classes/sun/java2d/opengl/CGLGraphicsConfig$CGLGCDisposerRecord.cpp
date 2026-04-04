#include <sun/java2d/opengl/CGLGraphicsConfig$CGLGCDisposerRecord.h>
#include <sun/java2d/opengl/CGLGraphicsConfig.h>
#include <sun/java2d/opengl/OGLRenderQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OGLRenderQueue = ::sun::java2d::opengl::OGLRenderQueue;

namespace sun {
	namespace java2d {
		namespace opengl {

void CGLGraphicsConfig$CGLGCDisposerRecord::init$(int64_t pCfgInfo) {
	this->pCfgInfo = pCfgInfo;
}

void CGLGraphicsConfig$CGLGCDisposerRecord::dispose() {
	if (this->pCfgInfo != 0) {
		$OGLRenderQueue::disposeGraphicsConfig(this->pCfgInfo);
		this->pCfgInfo = 0;
	}
}

CGLGraphicsConfig$CGLGCDisposerRecord::CGLGraphicsConfig$CGLGCDisposerRecord() {
}

$Class* CGLGraphicsConfig$CGLGCDisposerRecord::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pCfgInfo", "J", nullptr, $PRIVATE, $field(CGLGraphicsConfig$CGLGCDisposerRecord, pCfgInfo)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, $PUBLIC, $method(CGLGraphicsConfig$CGLGCDisposerRecord, init$, void, int64_t)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(CGLGraphicsConfig$CGLGCDisposerRecord, dispose, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.CGLGraphicsConfig$CGLGCDisposerRecord", "sun.java2d.opengl.CGLGraphicsConfig", "CGLGCDisposerRecord", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.opengl.CGLGraphicsConfig$CGLGCDisposerRecord",
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
		"sun.java2d.opengl.CGLGraphicsConfig"
	};
	$loadClass(CGLGraphicsConfig$CGLGCDisposerRecord, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CGLGraphicsConfig$CGLGCDisposerRecord);
	});
	return class$;
}

$Class* CGLGraphicsConfig$CGLGCDisposerRecord::class$ = nullptr;

		} // opengl
	} // java2d
} // sun