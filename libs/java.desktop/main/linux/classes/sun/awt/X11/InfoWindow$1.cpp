#include <sun/awt/X11/InfoWindow$1.h>
#include <java/awt/Container.h>
#include <java/awt/Insets.h>
#include <sun/awt/X11/InfoWindow.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InfoWindow = ::sun::awt::X11::InfoWindow;

namespace sun {
	namespace awt {
		namespace X11 {

void InfoWindow$1::init$($InfoWindow* this$0) {
	$set(this, this$0, this$0);
	$Container::init$();
}

$Insets* InfoWindow$1::getInsets() {
	return $new($Insets, 1, 1, 1, 1);
}

InfoWindow$1::InfoWindow$1() {
}

$Class* InfoWindow$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/InfoWindow;", nullptr, $FINAL | $SYNTHETIC, $field(InfoWindow$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/InfoWindow;)V", nullptr, 0, $method(InfoWindow$1, init$, void, $InfoWindow*)},
		{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(InfoWindow$1, getInsets, $Insets*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.InfoWindow",
		"<init>",
		"(Ljava/awt/Frame;Ljava/awt/Color;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.InfoWindow$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.InfoWindow$1",
		"java.awt.Container",
		nullptr,
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
	$loadClass(InfoWindow$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(InfoWindow$1));
	});
	return class$;
}

$Class* InfoWindow$1::class$ = nullptr;

		} // X11
	} // awt
} // sun