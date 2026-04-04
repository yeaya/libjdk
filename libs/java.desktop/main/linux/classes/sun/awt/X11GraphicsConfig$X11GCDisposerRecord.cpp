#include <sun/awt/X11GraphicsConfig$X11GCDisposerRecord.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;

namespace sun {
	namespace awt {

void X11GraphicsConfig$X11GCDisposerRecord::init$(int64_t x11CfgData) {
	this->x11ConfigData = x11CfgData;
}

void X11GraphicsConfig$X11GCDisposerRecord::dispose() {
	$synchronized(this) {
		if (this->x11ConfigData != 0) {
			$X11GraphicsConfig::dispose(this->x11ConfigData);
			this->x11ConfigData = 0;
		}
	}
}

X11GraphicsConfig$X11GCDisposerRecord::X11GraphicsConfig$X11GCDisposerRecord() {
}

$Class* X11GraphicsConfig$X11GCDisposerRecord::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"x11ConfigData", "J", nullptr, $PRIVATE, $field(X11GraphicsConfig$X11GCDisposerRecord, x11ConfigData)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, $PUBLIC, $method(X11GraphicsConfig$X11GCDisposerRecord, init$, void, int64_t)},
		{"dispose", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(X11GraphicsConfig$X11GCDisposerRecord, dispose, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11GraphicsConfig$X11GCDisposerRecord", "sun.awt.X11GraphicsConfig", "X11GCDisposerRecord", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11GraphicsConfig$X11GCDisposerRecord",
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
		"sun.awt.X11GraphicsConfig"
	};
	$loadClass(X11GraphicsConfig$X11GCDisposerRecord, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X11GraphicsConfig$X11GCDisposerRecord);
	});
	return class$;
}

$Class* X11GraphicsConfig$X11GCDisposerRecord::class$ = nullptr;

	} // awt
} // sun