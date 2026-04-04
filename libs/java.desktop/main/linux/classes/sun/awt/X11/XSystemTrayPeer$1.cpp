#include <sun/awt/X11/XSystemTrayPeer$1.h>
#include <java/awt/SystemTray.h>
#include <sun/awt/AWTAccessor$SystemTrayAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/X11/XSystemTrayPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $XSystemTrayPeer = ::sun::awt::X11::XSystemTrayPeer;

namespace sun {
	namespace awt {
		namespace X11 {

void XSystemTrayPeer$1::init$($XSystemTrayPeer* this$0, $String* val$propertyName, Object$* val$oldValue, Object$* val$newValue) {
	$set(this, this$0, this$0);
	$set(this, val$propertyName, val$propertyName);
	$set(this, val$oldValue, val$oldValue);
	$set(this, val$newValue, val$newValue);
}

void XSystemTrayPeer$1::run() {
	$$nc($AWTAccessor::getSystemTrayAccessor())->firePropertyChange(this->this$0->target, this->val$propertyName, this->val$oldValue, this->val$newValue);
}

XSystemTrayPeer$1::XSystemTrayPeer$1() {
}

$Class* XSystemTrayPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XSystemTrayPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XSystemTrayPeer$1, this$0)},
		{"val$newValue", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(XSystemTrayPeer$1, val$newValue)},
		{"val$oldValue", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(XSystemTrayPeer$1, val$oldValue)},
		{"val$propertyName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(XSystemTrayPeer$1, val$propertyName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XSystemTrayPeer;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", "()V", 0, $method(XSystemTrayPeer$1, init$, void, $XSystemTrayPeer*, $String*, Object$*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XSystemTrayPeer$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XSystemTrayPeer",
		"firePropertyChange",
		"(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XSystemTrayPeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XSystemTrayPeer$1",
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
		"sun.awt.X11.XSystemTrayPeer"
	};
	$loadClass(XSystemTrayPeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSystemTrayPeer$1);
	});
	return class$;
}

$Class* XSystemTrayPeer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun