#include <sun/awt/X11GraphicsEnvironment$1.h>
#include <java/awt/GraphicsEnvironment.h>
#include <sun/awt/X11GraphicsEnvironment.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <jcpp.h>

using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $X11GraphicsEnvironment = ::sun::awt::X11GraphicsEnvironment;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;

namespace sun {
	namespace awt {

void X11GraphicsEnvironment$1::init$() {
}

$Object* X11GraphicsEnvironment$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$System::loadLibrary("awt"_s);
	if (!$GraphicsEnvironment::isHeadless()) {
		bool glxRequested = false;
		$var($String, prop, $System::getProperty("sun.java2d.opengl"_s));
		if (prop != nullptr) {
			bool var$0 = prop->equals("true"_s);
			if (var$0 || prop->equals("t"_s)) {
				glxRequested = true;
			} else {
				bool var$1 = prop->equals("True"_s);
				if (var$1 || prop->equals("T"_s)) {
					glxRequested = true;
					$init($X11GraphicsEnvironment);
					$X11GraphicsEnvironment::glxVerbose = true;
				}
			}
		}
		bool xRenderRequested = true;
		bool xRenderIgnoreLinuxVersion = false;
		$var($String, xProp, $System::getProperty("sun.java2d.xrender"_s));
		if (xProp != nullptr) {
			bool var$2 = xProp->equals("false"_s);
			if (var$2 || xProp->equals("f"_s)) {
				xRenderRequested = false;
			} else {
				bool var$3 = xProp->equals("True"_s);
				if (var$3 || xProp->equals("T"_s)) {
					xRenderRequested = true;
					$init($X11GraphicsEnvironment);
					$X11GraphicsEnvironment::xRenderVerbose = true;
				}
			}
			bool var$4 = xProp->equalsIgnoreCase("t"_s);
			if (var$4 || xProp->equalsIgnoreCase("true"_s)) {
				xRenderIgnoreLinuxVersion = true;
			}
		}
		$X11GraphicsEnvironment::initDisplay(glxRequested);
		if (glxRequested) {
			$X11GraphicsEnvironment::glxAvailable = $X11GraphicsEnvironment::initGLX();
			if ($X11GraphicsEnvironment::glxVerbose && !$X11GraphicsEnvironment::glxAvailable) {
				$nc($System::out)->println("Could not enable OpenGL pipeline (GLX 1.3 not available)"_s);
			}
		}
		if (xRenderRequested) {
			$X11GraphicsEnvironment::xRenderAvailable = $X11GraphicsEnvironment::initXRender($X11GraphicsEnvironment::xRenderVerbose, xRenderIgnoreLinuxVersion);
			if ($X11GraphicsEnvironment::xRenderVerbose && !$X11GraphicsEnvironment::xRenderAvailable) {
				$nc($System::out)->println("Could not enable XRender pipeline"_s);
			}
		}
		if ($X11GraphicsEnvironment::xRenderAvailable) {
			$XRSurfaceData::initXRSurfaceData();
		}
	}
	return nullptr;
}

X11GraphicsEnvironment$1::X11GraphicsEnvironment$1() {
}

$Class* X11GraphicsEnvironment$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(X11GraphicsEnvironment$1, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(X11GraphicsEnvironment$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11GraphicsEnvironment",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11GraphicsEnvironment$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11GraphicsEnvironment$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11GraphicsEnvironment"
	};
	$loadClass(X11GraphicsEnvironment$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X11GraphicsEnvironment$1);
	});
	return class$;
}

$Class* X11GraphicsEnvironment$1::class$ = nullptr;

	} // awt
} // sun