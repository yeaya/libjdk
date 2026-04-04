#include <sun/lwawt/LWComponentPeer$3.h>
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

void LWComponentPeer$3::init$($LWComponentPeer* this$0, $AWTEventListener* val$listener) {
	$set(this, this$0, this$0);
	$set(this, val$listener, val$listener);
}

$Object* LWComponentPeer$3::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	try {
		$var($Field, field, $Toolkit::class$->getDeclaredField("eventListener"_s));
		$nc(field)->setAccessible(true);
		field->set(toolkit, this->val$listener);
	} catch ($Exception& e) {
		$throwNew($InternalError, $(e->toString()));
	}
	return nullptr;
}

LWComponentPeer$3::LWComponentPeer$3() {
}

$Class* LWComponentPeer$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/LWComponentPeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWComponentPeer$3, this$0)},
		{"val$listener", "Ljava/awt/event/AWTEventListener;", nullptr, $FINAL | $SYNTHETIC, $field(LWComponentPeer$3, val$listener)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/LWComponentPeer;Ljava/awt/event/AWTEventListener;)V", "()V", 0, $method(LWComponentPeer$3, init$, void, $LWComponentPeer*, $AWTEventListener*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(LWComponentPeer$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.LWComponentPeer",
		"setToolkitAWTEventListener",
		"(Ljava/awt/event/AWTEventListener;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.LWComponentPeer$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.LWComponentPeer$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.LWComponentPeer"
	};
	$loadClass(LWComponentPeer$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LWComponentPeer$3);
	});
	return class$;
}

$Class* LWComponentPeer$3::class$ = nullptr;

	} // lwawt
} // sun