#include <sun/awt/im/ExecutableInputMethodManager$4.h>
#include <java/util/prefs/Preferences.h>
#include <sun/awt/im/ExecutableInputMethodManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Preferences = ::java::util::prefs::Preferences;
using $ExecutableInputMethodManager = ::sun::awt::im::ExecutableInputMethodManager;

namespace sun {
	namespace awt {
		namespace im {

void ExecutableInputMethodManager$4::init$($ExecutableInputMethodManager* this$0) {
	$set(this, this$0, this$0);
}

$Object* ExecutableInputMethodManager$4::run() {
	return $Preferences::userRoot();
}

ExecutableInputMethodManager$4::ExecutableInputMethodManager$4() {
}

$Class* ExecutableInputMethodManager$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/im/ExecutableInputMethodManager;", nullptr, $FINAL | $SYNTHETIC, $field(ExecutableInputMethodManager$4, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/im/ExecutableInputMethodManager;)V", nullptr, 0, $method(ExecutableInputMethodManager$4, init$, void, $ExecutableInputMethodManager*)},
		{"run", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC, $virtualMethod(ExecutableInputMethodManager$4, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.im.ExecutableInputMethodManager",
		"getUserRoot",
		"()Ljava/util/prefs/Preferences;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.im.ExecutableInputMethodManager$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.im.ExecutableInputMethodManager$4",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/prefs/Preferences;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.im.ExecutableInputMethodManager"
	};
	$loadClass(ExecutableInputMethodManager$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExecutableInputMethodManager$4);
	});
	return class$;
}

$Class* ExecutableInputMethodManager$4::class$ = nullptr;

		} // im
	} // awt
} // sun