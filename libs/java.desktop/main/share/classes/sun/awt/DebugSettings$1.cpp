#include <sun/awt/DebugSettings$1.h>
#include <sun/awt/DebugSettings.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DebugSettings = ::sun::awt::DebugSettings;

namespace sun {
	namespace awt {

void DebugSettings$1::init$($DebugSettings* this$0) {
	$set(this, this$0, this$0);
}

$Object* DebugSettings$1::run() {
	this->this$0->loadDefaultProperties();
	this->this$0->loadFileProperties();
	this->this$0->loadSystemProperties();
	return nullptr;
}

DebugSettings$1::DebugSettings$1() {
}

$Class* DebugSettings$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/DebugSettings;", nullptr, $FINAL | $SYNTHETIC, $field(DebugSettings$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/DebugSettings;)V", nullptr, 0, $method(DebugSettings$1, init$, void, $DebugSettings*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DebugSettings$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.DebugSettings",
		"loadProperties",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.DebugSettings$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.DebugSettings$1",
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
		"sun.awt.DebugSettings"
	};
	$loadClass(DebugSettings$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DebugSettings$1);
	});
	return class$;
}

$Class* DebugSettings$1::class$ = nullptr;

	} // awt
} // sun