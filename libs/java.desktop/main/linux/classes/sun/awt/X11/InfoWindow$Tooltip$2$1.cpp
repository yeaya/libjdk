#include <sun/awt/X11/InfoWindow$Tooltip$2$1.h>
#include <java/awt/MouseInfo.h>
#include <java/awt/Point.h>
#include <java/awt/PointerInfo.h>
#include <java/awt/Rectangle.h>
#include <sun/awt/X11/InfoWindow$LiveArguments.h>
#include <sun/awt/X11/InfoWindow$Tooltip$2.h>
#include <sun/awt/X11/InfoWindow$Tooltip$LiveArguments.h>
#include <sun/awt/X11/InfoWindow$Tooltip.h>
#include <jcpp.h>

using $MouseInfo = ::java::awt::MouseInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InfoWindow$Tooltip$2 = ::sun::awt::X11::InfoWindow$Tooltip$2;

namespace sun {
	namespace awt {
		namespace X11 {

void InfoWindow$Tooltip$2$1::init$($InfoWindow$Tooltip$2* this$1) {
	$set(this, this$1, this$1);
}

$Object* InfoWindow$Tooltip$2$1::run() {
	$useLocalObjectStack();
	if (!$nc(this->this$1->this$0)->isPointerOverTrayIcon($($nc($nc(this->this$1->this$0)->liveArguments)->getBounds()))) {
		return nullptr;
	}
	return $of($$nc($MouseInfo::getPointerInfo())->getLocation());
}

InfoWindow$Tooltip$2$1::InfoWindow$Tooltip$2$1() {
}

$Class* InfoWindow$Tooltip$2$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lsun/awt/X11/InfoWindow$Tooltip$2;", nullptr, $FINAL | $SYNTHETIC, $field(InfoWindow$Tooltip$2$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/InfoWindow$Tooltip$2;)V", nullptr, 0, $method(InfoWindow$Tooltip$2$1, init$, void, $InfoWindow$Tooltip$2*)},
		{"run", "()Ljava/awt/Point;", nullptr, $PUBLIC, $virtualMethod(InfoWindow$Tooltip$2$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.InfoWindow$Tooltip$2",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.InfoWindow$Tooltip", "sun.awt.X11.InfoWindow", "Tooltip", $PUBLIC | $STATIC},
		{"sun.awt.X11.InfoWindow$Tooltip$2", nullptr, nullptr, 0},
		{"sun.awt.X11.InfoWindow$Tooltip$2$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.InfoWindow$Tooltip$2$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/awt/Point;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.InfoWindow"
	};
	$loadClass(InfoWindow$Tooltip$2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InfoWindow$Tooltip$2$1);
	});
	return class$;
}

$Class* InfoWindow$Tooltip$2$1::class$ = nullptr;

		} // X11
	} // awt
} // sun