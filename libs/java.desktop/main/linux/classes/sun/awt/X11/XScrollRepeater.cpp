#include <sun/awt/X11/XScrollRepeater.h>
#include <sun/awt/X11/XScrollbar.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XScrollbar = ::sun::awt::X11::XScrollbar;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

int32_t XScrollRepeater::beginPause = 0;
int32_t XScrollRepeater::repeatPause = 0;

void XScrollRepeater::init$($XScrollbar* sb) {
	this->setScrollbar(sb);
	this->newScroll = true;
}

void XScrollRepeater::start() {
	stop();
	this->shouldSkip = false;
	$XToolkit::schedule(this, XScrollRepeater::beginPause);
}

void XScrollRepeater::stop() {
	$synchronized(this) {
		this->shouldSkip = true;
	}
	$XToolkit::remove(this);
}

void XScrollRepeater::setScrollbar($XScrollbar* sb) {
	$synchronized(this) {
		$set(this, sb, sb);
		stop();
		this->newScroll = true;
	}
}

void XScrollRepeater::run() {
	$synchronized(this) {
		if (this->shouldSkip) {
			return;
		}
	}
	$nc(this->sb)->scroll();
	$XToolkit::schedule(this, XScrollRepeater::repeatPause);
}

void XScrollRepeater::clinit$($Class* clazz) {
	XScrollRepeater::beginPause = 500;
	XScrollRepeater::repeatPause = 100;
}

XScrollRepeater::XScrollRepeater() {
}

$Class* XScrollRepeater::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"beginPause", "I", nullptr, $STATIC, $staticField(XScrollRepeater, beginPause)},
		{"repeatPause", "I", nullptr, $STATIC, $staticField(XScrollRepeater, repeatPause)},
		{"sb", "Lsun/awt/X11/XScrollbar;", nullptr, 0, $field(XScrollRepeater, sb)},
		{"newScroll", "Z", nullptr, 0, $field(XScrollRepeater, newScroll)},
		{"shouldSkip", "Z", nullptr, 0, $field(XScrollRepeater, shouldSkip)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XScrollbar;)V", nullptr, 0, $method(XScrollRepeater, init$, void, $XScrollbar*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XScrollRepeater, run, void)},
		{"setScrollbar", "(Lsun/awt/X11/XScrollbar;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(XScrollRepeater, setScrollbar, void, $XScrollbar*)},
		{"start", "()V", nullptr, $PUBLIC, $virtualMethod(XScrollRepeater, start, void)},
		{"stop", "()V", nullptr, $PUBLIC, $virtualMethod(XScrollRepeater, stop, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XScrollRepeater",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XScrollRepeater, name, initialize, &classInfo$$, XScrollRepeater::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XScrollRepeater);
	});
	return class$;
}

$Class* XScrollRepeater::class$ = nullptr;

		} // X11
	} // awt
} // sun