#include <java/awt/LightweightDispatcher$1.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LightweightDispatcher.h>
#include <java/awt/Toolkit.h>
#include <jcpp.h>

#undef MOUSE_EVENT_MASK
#undef MOUSE_MOTION_EVENT_MASK

using $AWTEvent = ::java::awt::AWTEvent;
using $LightweightDispatcher = ::java::awt::LightweightDispatcher;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void LightweightDispatcher$1::init$($LightweightDispatcher* this$0) {
	$set(this, this$0, this$0);
}

$Object* LightweightDispatcher$1::run() {
	$$nc($nc(this->this$0->nativeContainer)->getToolkit())->addAWTEventListener(this->this$0, $AWTEvent::MOUSE_EVENT_MASK | $AWTEvent::MOUSE_MOTION_EVENT_MASK);
	return nullptr;
}

LightweightDispatcher$1::LightweightDispatcher$1() {
}

$Class* LightweightDispatcher$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/LightweightDispatcher;", nullptr, $FINAL | $SYNTHETIC, $field(LightweightDispatcher$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/LightweightDispatcher;)V", nullptr, 0, $method(LightweightDispatcher$1, init$, void, $LightweightDispatcher*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LightweightDispatcher$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.LightweightDispatcher",
		"startListeningForOtherDrags",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.LightweightDispatcher$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.LightweightDispatcher$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.LightweightDispatcher"
	};
	$loadClass(LightweightDispatcher$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LightweightDispatcher$1);
	});
	return class$;
}

$Class* LightweightDispatcher$1::class$ = nullptr;

	} // awt
} // java