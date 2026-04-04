#include <sun/lwawt/macosx/CAccessibility$36.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/awt/peer/ComponentPeer.h>
#include <javax/accessibility/Accessible.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/PlatformWindow.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <sun/lwawt/macosx/CPlatformView.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessibility$36::init$($Accessible* val$ax) {
	$set(this, val$ax, val$ax);
}

$Object* CAccessibility$36::call() {
	$useLocalObjectStack();
	$var($Component, cont, $cast($Component, this->val$ax));
	while (cont != nullptr && !($instanceOf($Window, cont))) {
		$assign(cont, cont->getParent());
	}
	if (cont != nullptr) {
		$var($LWWindowPeer, peer, $cast($LWWindowPeer, $$nc($AWTAccessor::getComponentAccessor())->getPeer(cont)));
		if (peer != nullptr) {
			return $of($Long::valueOf($$nc($$sure($CPlatformWindow, peer->getPlatformWindow())->getContentView())->getAWTView()));
		}
	}
	return $of($Long::valueOf((int64_t)0));
}

CAccessibility$36::CAccessibility$36() {
}

$Class* CAccessibility$36::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$ax", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibility$36, val$ax)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/accessibility/Accessible;)V", "()V", 0, $method(CAccessibility$36, init$, void, $Accessible*)},
		{"call", "()Ljava/lang/Long;", nullptr, $PUBLIC, $virtualMethod(CAccessibility$36, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CAccessibility",
		"getAWTView",
		"(Ljavax/accessibility/Accessible;)J"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessibility$36", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessibility$36",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Long;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CAccessibility"
	};
	$loadClass(CAccessibility$36, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CAccessibility$36);
	});
	return class$;
}

$Class* CAccessibility$36::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun