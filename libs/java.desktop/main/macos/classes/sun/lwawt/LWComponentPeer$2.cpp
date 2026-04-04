#include <sun/lwawt/LWComponentPeer$2.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/AWTEventListener.h>
#include <java/lang/InternalError.h>
#include <java/lang/reflect/Field.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <jcpp.h>

using $Toolkit = ::java::awt::Toolkit;
using $AWTEventListener = ::java::awt::event::AWTEventListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;

namespace sun {
	namespace lwawt {

void LWComponentPeer$2::init$($LWComponentPeer* this$0) {
	$set(this, this$0, this$0);
}

$Object* LWComponentPeer$2::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	try {
		$var($Field, field, $Toolkit::class$->getDeclaredField("eventListener"_s));
		$nc(field)->setAccessible(true);
		return $cast($AWTEventListener, field->get(toolkit));
	} catch ($Exception& e) {
		$throwNew($InternalError, $(e->toString()));
	}
	$shouldNotReachHere();
}

LWComponentPeer$2::LWComponentPeer$2() {
}

$Class* LWComponentPeer$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/LWComponentPeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWComponentPeer$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/LWComponentPeer;)V", nullptr, 0, $method(LWComponentPeer$2, init$, void, $LWComponentPeer*)},
		{"run", "()Ljava/awt/event/AWTEventListener;", nullptr, $PUBLIC, $virtualMethod(LWComponentPeer$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.LWComponentPeer",
		"getToolkitAWTEventListener",
		"()Ljava/awt/event/AWTEventListener;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.LWComponentPeer$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.LWComponentPeer$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/awt/event/AWTEventListener;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.LWComponentPeer"
	};
	$loadClass(LWComponentPeer$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LWComponentPeer$2);
	});
	return class$;
}

$Class* LWComponentPeer$2::class$ = nullptr;

	} // lwawt
} // sun