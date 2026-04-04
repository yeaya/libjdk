#include <java/awt/PopupMenu$1.h>
#include <java/awt/PopupMenu.h>
#include <jcpp.h>

using $PopupMenu = ::java::awt::PopupMenu;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void PopupMenu$1::init$() {
}

bool PopupMenu$1::isTrayIconPopup($PopupMenu* popupMenu) {
	return $nc(popupMenu)->isTrayIconPopup;
}

PopupMenu$1::PopupMenu$1() {
}

$Class* PopupMenu$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(PopupMenu$1, init$, void)},
		{"isTrayIconPopup", "(Ljava/awt/PopupMenu;)Z", nullptr, $PUBLIC, $virtualMethod(PopupMenu$1, isTrayIconPopup, bool, $PopupMenu*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.PopupMenu",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.PopupMenu$1", nullptr, nullptr, 0},
		{"sun.awt.AWTAccessor$PopupMenuAccessor", "sun.awt.AWTAccessor", "PopupMenuAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.PopupMenu$1",
		"java.lang.Object",
		"sun.awt.AWTAccessor$PopupMenuAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.PopupMenu"
	};
	$loadClass(PopupMenu$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PopupMenu$1);
	});
	return class$;
}

$Class* PopupMenu$1::class$ = nullptr;

	} // awt
} // java