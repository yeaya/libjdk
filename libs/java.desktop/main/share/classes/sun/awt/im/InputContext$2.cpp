#include <sun/awt/im/InputContext$2.h>
#include <java/awt/AWTKeyStroke.h>
#include <java/util/prefs/Preferences.h>
#include <sun/awt/im/InputContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Preferences = ::java::util::prefs::Preferences;
using $InputContext = ::sun::awt::im::InputContext;

namespace sun {
	namespace awt {
		namespace im {

void InputContext$2::init$($InputContext* this$0) {
	$set(this, this$0, this$0);
}

$Object* InputContext$2::run() {
	$var($Preferences, root, $Preferences::userRoot());
	$init($InputContext);
	$assignStatic($InputContext::inputMethodSelectionKey, this->this$0->getInputMethodSelectionKeyStroke(root));
	if ($InputContext::inputMethodSelectionKey == nullptr) {
		$assign(root, $Preferences::systemRoot());
		$assignStatic($InputContext::inputMethodSelectionKey, this->this$0->getInputMethodSelectionKeyStroke(root));
	}
	return nullptr;
}

InputContext$2::InputContext$2() {
}

$Class* InputContext$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/im/InputContext;", nullptr, $FINAL | $SYNTHETIC, $field(InputContext$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/im/InputContext;)V", nullptr, 0, $method(InputContext$2, init$, void, $InputContext*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(InputContext$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.im.InputContext",
		"initializeInputMethodSelectionKey",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.im.InputContext$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.im.InputContext$2",
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
		"sun.awt.im.InputContext"
	};
	$loadClass(InputContext$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InputContext$2);
	});
	return class$;
}

$Class* InputContext$2::class$ = nullptr;

		} // im
	} // awt
} // sun