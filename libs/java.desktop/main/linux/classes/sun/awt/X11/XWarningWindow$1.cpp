#include <sun/awt/X11/XWarningWindow$1.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XWarningWindow.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XWarningWindow = ::sun::awt::X11::XWarningWindow;

namespace sun {
	namespace awt {
		namespace X11 {

void XWarningWindow$1::init$($XWarningWindow* this$0) {
	$set(this, this$0, this$0);
}

bool XWarningWindow$1::isDisposed() {
	return this->this$0->isDisposed();
}

$Rectangle* XWarningWindow$1::getBounds() {
	return this->this$0->getBounds();
}

$String* XWarningWindow$1::getTooltipString() {
	return $nc(this->this$0->ownerWindow)->getWarningString();
}

XWarningWindow$1::XWarningWindow$1() {
}

$Class* XWarningWindow$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XWarningWindow;", nullptr, $FINAL | $SYNTHETIC, $field(XWarningWindow$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XWarningWindow;)V", nullptr, 0, $method(XWarningWindow$1, init$, void, $XWarningWindow*)},
		{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(XWarningWindow$1, getBounds, $Rectangle*)},
		{"getTooltipString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XWarningWindow$1, getTooltipString, $String*)},
		{"isDisposed", "()Z", nullptr, $PUBLIC, $virtualMethod(XWarningWindow$1, isDisposed, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XWarningWindow",
		"<init>",
		"(Ljava/awt/Window;JLsun/awt/X11/XWindowPeer;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XWarningWindow$1", nullptr, nullptr, 0},
		{"sun.awt.X11.InfoWindow$Tooltip", "sun.awt.X11.InfoWindow", "Tooltip", $PUBLIC | $STATIC},
		{"sun.awt.X11.InfoWindow$Tooltip$LiveArguments", "sun.awt.X11.InfoWindow$Tooltip", "LiveArguments", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XWarningWindow$1",
		"java.lang.Object",
		"sun.awt.X11.InfoWindow$Tooltip$LiveArguments",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XWarningWindow"
	};
	$loadClass(XWarningWindow$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XWarningWindow$1);
	});
	return class$;
}

$Class* XWarningWindow$1::class$ = nullptr;

		} // X11
	} // awt
} // sun