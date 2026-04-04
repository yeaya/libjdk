#include <java/awt/DefaultKeyboardFocusManager$4.h>
#include <java/awt/DefaultKeyboardFocusManager.h>
#include <java/awt/SentEvent.h>
#include <java/lang/InterruptedException.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $SentEvent = ::java::awt::SentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AppContext = ::sun::awt::AppContext;

namespace java {
	namespace awt {

void DefaultKeyboardFocusManager$4::init$($SentEvent* val$se, $AppContext* val$targetAppContext) {
	$set(this, val$se, val$se);
	$set(this, val$targetAppContext, val$targetAppContext);
	$Thread::init$();
}

void DefaultKeyboardFocusManager$4::run() {
	while (!$nc(this->val$se)->dispatched$ && !$nc(this->val$targetAppContext)->isDisposed()) {
		try {
			$Thread::sleep(100);
		} catch ($InterruptedException& e) {
			break;
		}
	}
}

DefaultKeyboardFocusManager$4::DefaultKeyboardFocusManager$4() {
}

$Class* DefaultKeyboardFocusManager$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$targetAppContext", "Lsun/awt/AppContext;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultKeyboardFocusManager$4, val$targetAppContext)},
		{"val$se", "Ljava/awt/SentEvent;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultKeyboardFocusManager$4, val$se)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/SentEvent;Lsun/awt/AppContext;)V", nullptr, 0, $method(DefaultKeyboardFocusManager$4, init$, void, $SentEvent*, $AppContext*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultKeyboardFocusManager$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.DefaultKeyboardFocusManager",
		"sendMessage",
		"(Ljava/awt/Component;Ljava/awt/AWTEvent;)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.DefaultKeyboardFocusManager$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.DefaultKeyboardFocusManager$4",
		"java.lang.Thread",
		nullptr,
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
	$loadClass(DefaultKeyboardFocusManager$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultKeyboardFocusManager$4);
	});
	return class$;
}

$Class* DefaultKeyboardFocusManager$4::class$ = nullptr;

	} // awt
} // java