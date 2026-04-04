#include <sun/awt/X11/XToolkit$2.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

void XToolkit$2::init$() {
}

void XToolkit$2::displayChanged() {
	$init($XToolkit);
	$XToolkit::maxWindowWidthInPixels = -1;
	$XToolkit::maxWindowHeightInPixels = -1;
}

void XToolkit$2::paletteChanged() {
}

XToolkit$2::XToolkit$2() {
}

$Class* XToolkit$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XToolkit$2, init$, void)},
		{"displayChanged", "()V", nullptr, $PUBLIC, $virtualMethod(XToolkit$2, displayChanged, void)},
		{"paletteChanged", "()V", nullptr, $PUBLIC, $virtualMethod(XToolkit$2, paletteChanged, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XToolkit",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XToolkit$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XToolkit$2",
		"java.lang.Object",
		"sun.awt.DisplayChangedListener",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XToolkit"
	};
	$loadClass(XToolkit$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XToolkit$2);
	});
	return class$;
}

$Class* XToolkit$2::class$ = nullptr;

		} // X11
	} // awt
} // sun