#include <java/awt/LightweightDispatcher$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LightweightDispatcher.h>
#include <java/awt/Toolkit.h>
#include <jcpp.h>

using $LightweightDispatcher = ::java::awt::LightweightDispatcher;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void LightweightDispatcher$2::init$($LightweightDispatcher* this$0) {
	$set(this, this$0, this$0);
}

$Object* LightweightDispatcher$2::run() {
	$$nc($nc(this->this$0->nativeContainer)->getToolkit())->removeAWTEventListener(this->this$0);
	return nullptr;
}

LightweightDispatcher$2::LightweightDispatcher$2() {
}

$Class* LightweightDispatcher$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/LightweightDispatcher;", nullptr, $FINAL | $SYNTHETIC, $field(LightweightDispatcher$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/LightweightDispatcher;)V", nullptr, 0, $method(LightweightDispatcher$2, init$, void, $LightweightDispatcher*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LightweightDispatcher$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.LightweightDispatcher",
		"stopListeningForOtherDrags",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.LightweightDispatcher$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.LightweightDispatcher$2",
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
	$loadClass(LightweightDispatcher$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LightweightDispatcher$2);
	});
	return class$;
}

$Class* LightweightDispatcher$2::class$ = nullptr;

	} // awt
} // java