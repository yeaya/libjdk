#include <sun/awt/X11/InfoWindow$Tooltip$1.h>
#include <sun/awt/X11/InfoWindow$Tooltip.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InfoWindow$Tooltip = ::sun::awt::X11::InfoWindow$Tooltip;

namespace sun {
	namespace awt {
		namespace X11 {

void InfoWindow$Tooltip$1::init$($InfoWindow$Tooltip* this$0) {
	$set(this, this$0, this$0);
}

void InfoWindow$Tooltip$1::run() {
	this->this$0->display();
}

InfoWindow$Tooltip$1::InfoWindow$Tooltip$1() {
}

$Class* InfoWindow$Tooltip$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/InfoWindow$Tooltip;", nullptr, $FINAL | $SYNTHETIC, $field(InfoWindow$Tooltip$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/InfoWindow$Tooltip;)V", nullptr, 0, $method(InfoWindow$Tooltip$1, init$, void, $InfoWindow$Tooltip*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(InfoWindow$Tooltip$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.InfoWindow$Tooltip",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.InfoWindow$Tooltip", "sun.awt.X11.InfoWindow", "Tooltip", $PUBLIC | $STATIC},
		{"sun.awt.X11.InfoWindow$Tooltip$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.InfoWindow$Tooltip$1",
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
		"sun.awt.X11.InfoWindow"
	};
	$loadClass(InfoWindow$Tooltip$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InfoWindow$Tooltip$1);
	});
	return class$;
}

$Class* InfoWindow$Tooltip$1::class$ = nullptr;

		} // X11
	} // awt
} // sun