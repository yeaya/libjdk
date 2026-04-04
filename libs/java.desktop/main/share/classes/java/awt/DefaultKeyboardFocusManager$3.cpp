#include <java/awt/DefaultKeyboardFocusManager$3.h>
#include <java/awt/DefaultKeyboardFocusManager.h>
#include <java/awt/SentEvent.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $SentEvent = ::java::awt::SentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AppContext = ::sun::awt::AppContext;

namespace java {
	namespace awt {

void DefaultKeyboardFocusManager$3::init$($SentEvent* val$se, $AppContext* val$targetAppContext) {
	$set(this, val$se, val$se);
	$set(this, val$targetAppContext, val$targetAppContext);
}

bool DefaultKeyboardFocusManager$3::evaluate() {
	return !$nc(this->val$se)->dispatched$ && !$nc(this->val$targetAppContext)->isDisposed();
}

DefaultKeyboardFocusManager$3::DefaultKeyboardFocusManager$3() {
}

$Class* DefaultKeyboardFocusManager$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$targetAppContext", "Lsun/awt/AppContext;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultKeyboardFocusManager$3, val$targetAppContext)},
		{"val$se", "Ljava/awt/SentEvent;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultKeyboardFocusManager$3, val$se)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/SentEvent;Lsun/awt/AppContext;)V", "()V", 0, $method(DefaultKeyboardFocusManager$3, init$, void, $SentEvent*, $AppContext*)},
		{"evaluate", "()Z", nullptr, $PUBLIC, $virtualMethod(DefaultKeyboardFocusManager$3, evaluate, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.DefaultKeyboardFocusManager",
		"sendMessage",
		"(Ljava/awt/Component;Ljava/awt/AWTEvent;)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.DefaultKeyboardFocusManager$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.DefaultKeyboardFocusManager$3",
		"java.lang.Object",
		"java.awt.Conditional",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.DefaultKeyboardFocusManager"
	};
	$loadClass(DefaultKeyboardFocusManager$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultKeyboardFocusManager$3);
	});
	return class$;
}

$Class* DefaultKeyboardFocusManager$3::class$ = nullptr;

	} // awt
} // java