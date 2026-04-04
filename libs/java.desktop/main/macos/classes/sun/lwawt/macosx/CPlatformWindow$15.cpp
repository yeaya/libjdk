#include <sun/lwawt/macosx/CPlatformWindow$15.h>
#include <com/apple/laf/ClientPropertyApplicator.h>
#include <java/awt/Component.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JRootPane.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <jcpp.h>

#undef CLIENT_PROPERTY_APPLICATOR

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JRootPane = ::javax::swing::JRootPane;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CPlatformWindow$15::init$($CPlatformWindow* this$0, $JRootPane* val$rootpane) {
	$set(this, this$0, this$0);
	$set(this, val$rootpane, val$rootpane);
}

void CPlatformWindow$15::propertyChange($PropertyChangeEvent* evt) {
	$init($CPlatformWindow);
	$nc($CPlatformWindow::CLIENT_PROPERTY_APPLICATOR)->attachAndApplyClientProperties(this->val$rootpane);
	$nc(this->val$rootpane)->removePropertyChangeListener("ancestor"_s, this);
}

CPlatformWindow$15::CPlatformWindow$15() {
}

$Class* CPlatformWindow$15::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/macosx/CPlatformWindow;", nullptr, $FINAL | $SYNTHETIC, $field(CPlatformWindow$15, this$0)},
		{"val$rootpane", "Ljavax/swing/JRootPane;", nullptr, $FINAL | $SYNTHETIC, $field(CPlatformWindow$15, val$rootpane)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/macosx/CPlatformWindow;Ljavax/swing/JRootPane;)V", "()V", 0, $method(CPlatformWindow$15, init$, void, $CPlatformWindow*, $JRootPane*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(CPlatformWindow$15, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CPlatformWindow",
		"initialize",
		"(Ljava/awt/Window;Lsun/lwawt/LWWindowPeer;Lsun/lwawt/PlatformWindow;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CPlatformWindow$15", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CPlatformWindow$15",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CPlatformWindow"
	};
	$loadClass(CPlatformWindow$15, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CPlatformWindow$15);
	});
	return class$;
}

$Class* CPlatformWindow$15::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun