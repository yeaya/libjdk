#include <sun/awt/X11/XAWTXSettings$1.h>
#include <java/awt/Toolkit.h>
#include <java/util/Map.h>
#include <sun/awt/X11/XAWTXSettings.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $XAWTXSettings = ::sun::awt::X11::XAWTXSettings;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

void XAWTXSettings$1::init$($XAWTXSettings* this$0, $Map* val$updatedSettings) {
	$set(this, this$0, this$0);
	$set(this, val$updatedSettings, val$updatedSettings);
}

void XAWTXSettings$1::run() {
	$$sure($XToolkit, $Toolkit::getDefaultToolkit())->parseXSettings(0, this->val$updatedSettings);
}

XAWTXSettings$1::XAWTXSettings$1() {
}

$Class* XAWTXSettings$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XAWTXSettings;", nullptr, $FINAL | $SYNTHETIC, $field(XAWTXSettings$1, this$0)},
		{"val$updatedSettings", "Ljava/util/Map;", nullptr, $FINAL | $SYNTHETIC, $field(XAWTXSettings$1, val$updatedSettings)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XAWTXSettings;Ljava/util/Map;)V", "()V", 0, $method(XAWTXSettings$1, init$, void, $XAWTXSettings*, $Map*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XAWTXSettings$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XAWTXSettings",
		"updateXSettings",
		"(IJ)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XAWTXSettings$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XAWTXSettings$1",
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
		"sun.awt.X11.XAWTXSettings"
	};
	$loadClass(XAWTXSettings$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XAWTXSettings$1);
	});
	return class$;
}

$Class* XAWTXSettings$1::class$ = nullptr;

		} // X11
	} // awt
} // sun