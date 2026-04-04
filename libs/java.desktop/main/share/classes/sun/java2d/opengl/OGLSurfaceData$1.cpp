#include <sun/java2d/opengl/OGLSurfaceData$1.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;

namespace sun {
	namespace java2d {
		namespace opengl {

void OGLSurfaceData$1::init$($OGLSurfaceData* this$0, int32_t val$width, int32_t val$height) {
	$set(this, this$0, this$0);
	this->val$width = val$width;
	this->val$height = val$height;
}

void OGLSurfaceData$1::run() {
	this->this$0->initSurfaceNow(this->val$width, this->val$height);
}

OGLSurfaceData$1::OGLSurfaceData$1() {
}

$Class* OGLSurfaceData$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/java2d/opengl/OGLSurfaceData;", nullptr, $FINAL | $SYNTHETIC, $field(OGLSurfaceData$1, this$0)},
		{"val$height", "I", nullptr, $FINAL | $SYNTHETIC, $field(OGLSurfaceData$1, val$height)},
		{"val$width", "I", nullptr, $FINAL | $SYNTHETIC, $field(OGLSurfaceData$1, val$width)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/opengl/OGLSurfaceData;II)V", "()V", 0, $method(OGLSurfaceData$1, init$, void, $OGLSurfaceData*, int32_t, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(OGLSurfaceData$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.opengl.OGLSurfaceData",
		"initSurface",
		"(II)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.OGLSurfaceData$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.opengl.OGLSurfaceData$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.opengl.OGLSurfaceData"
	};
	$loadClass(OGLSurfaceData$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OGLSurfaceData$1);
	});
	return class$;
}

$Class* OGLSurfaceData$1::class$ = nullptr;

		} // opengl
	} // java2d
} // sun