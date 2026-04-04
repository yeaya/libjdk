#include <sun/java2d/opengl/GLXGraphicsConfig$1.h>
#include <sun/java2d/opengl/GLXGraphicsConfig.h>
#include <sun/java2d/opengl/OGLContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OGLContext = ::sun::java2d::opengl::OGLContext;

namespace sun {
	namespace java2d {
		namespace opengl {

void GLXGraphicsConfig$1::init$($StringArray* val$ids) {
	$set(this, val$ids, val$ids);
}

void GLXGraphicsConfig$1::run() {
	$nc(this->val$ids)->set(0, $($OGLContext::getOGLIdString()));
}

GLXGraphicsConfig$1::GLXGraphicsConfig$1() {
}

$Class* GLXGraphicsConfig$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$ids", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(GLXGraphicsConfig$1, val$ids)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/lang/String;)V", "()V", 0, $method(GLXGraphicsConfig$1, init$, void, $StringArray*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(GLXGraphicsConfig$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.opengl.GLXGraphicsConfig",
		"getConfig",
		"(Lsun/awt/X11GraphicsDevice;I)Lsun/java2d/opengl/GLXGraphicsConfig;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.GLXGraphicsConfig$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.opengl.GLXGraphicsConfig$1",
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
		"sun.java2d.opengl.GLXGraphicsConfig"
	};
	$loadClass(GLXGraphicsConfig$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GLXGraphicsConfig$1);
	});
	return class$;
}

$Class* GLXGraphicsConfig$1::class$ = nullptr;

		} // opengl
	} // java2d
} // sun