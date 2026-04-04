#include <sun/java2d/opengl/GLXGraphicsConfig$GLXGetConfigInfo.h>
#include <sun/java2d/opengl/GLXGraphicsConfig.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GLXGraphicsConfig = ::sun::java2d::opengl::GLXGraphicsConfig;

namespace sun {
	namespace java2d {
		namespace opengl {

void GLXGraphicsConfig$GLXGetConfigInfo::init$(int32_t screen, int32_t visual) {
	this->screen = screen;
	this->visual = visual;
}

void GLXGraphicsConfig$GLXGetConfigInfo::run() {
	this->cfginfo = $GLXGraphicsConfig::getGLXConfigInfo(this->screen, this->visual);
}

int64_t GLXGraphicsConfig$GLXGetConfigInfo::getConfigInfo() {
	return this->cfginfo;
}

GLXGraphicsConfig$GLXGetConfigInfo::GLXGraphicsConfig$GLXGetConfigInfo() {
}

$Class* GLXGraphicsConfig$GLXGetConfigInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"screen", "I", nullptr, $PRIVATE, $field(GLXGraphicsConfig$GLXGetConfigInfo, screen)},
		{"visual", "I", nullptr, $PRIVATE, $field(GLXGraphicsConfig$GLXGetConfigInfo, visual)},
		{"cfginfo", "J", nullptr, $PRIVATE, $field(GLXGraphicsConfig$GLXGetConfigInfo, cfginfo)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, $PRIVATE, $method(GLXGraphicsConfig$GLXGetConfigInfo, init$, void, int32_t, int32_t)},
		{"getConfigInfo", "()J", nullptr, $PUBLIC, $virtualMethod(GLXGraphicsConfig$GLXGetConfigInfo, getConfigInfo, int64_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(GLXGraphicsConfig$GLXGetConfigInfo, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.GLXGraphicsConfig$GLXGetConfigInfo", "sun.java2d.opengl.GLXGraphicsConfig", "GLXGetConfigInfo", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.opengl.GLXGraphicsConfig$GLXGetConfigInfo",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.opengl.GLXGraphicsConfig"
	};
	$loadClass(GLXGraphicsConfig$GLXGetConfigInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GLXGraphicsConfig$GLXGetConfigInfo);
	});
	return class$;
}

$Class* GLXGraphicsConfig$GLXGetConfigInfo::class$ = nullptr;

		} // opengl
	} // java2d
} // sun