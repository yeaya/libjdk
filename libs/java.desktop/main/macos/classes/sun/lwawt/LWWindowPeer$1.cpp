#include <sun/lwawt/LWWindowPeer$1.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsConfiguration.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;

namespace sun {
	namespace lwawt {

void LWWindowPeer$1::init$($LWWindowPeer* this$0, $GraphicsConfiguration* val$newGC) {
	$set(this, this$0, this$0);
	$set(this, val$newGC, val$newGC);
}

void LWWindowPeer$1::run() {
	$useLocalObjectStack();
	$$nc($AWTAccessor::getComponentAccessor())->setGraphicsConfiguration($(this->this$0->getTarget()), this->val$newGC);
}

LWWindowPeer$1::LWWindowPeer$1() {
}

$Class* LWWindowPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/LWWindowPeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWWindowPeer$1, this$0)},
		{"val$newGC", "Ljava/awt/GraphicsConfiguration;", nullptr, $FINAL | $SYNTHETIC, $field(LWWindowPeer$1, val$newGC)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/LWWindowPeer;Ljava/awt/GraphicsConfiguration;)V", "()V", 0, $method(LWWindowPeer$1, init$, void, $LWWindowPeer*, $GraphicsConfiguration*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LWWindowPeer$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.LWWindowPeer",
		"updateGraphicsDevice",
		"()Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.LWWindowPeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.LWWindowPeer$1",
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
		"sun.lwawt.LWWindowPeer"
	};
	$loadClass(LWWindowPeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LWWindowPeer$1);
	});
	return class$;
}

$Class* LWWindowPeer$1::class$ = nullptr;

	} // lwawt
} // sun