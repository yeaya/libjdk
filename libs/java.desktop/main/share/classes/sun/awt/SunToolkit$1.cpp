#include <sun/awt/SunToolkit$1.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <sun/awt/AWTAccessor$AWTEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace sun {
	namespace awt {

void SunToolkit$1::init$($AWTEvent* val$e) {
	$set(this, val$e, val$e);
}

void SunToolkit$1::run() {
	$useLocalObjectStack();
	$$nc($AWTAccessor::getAWTEventAccessor())->setPosted(this->val$e);
	$$sure($Component, $nc(this->val$e)->getSource())->dispatchEvent(this->val$e);
}

SunToolkit$1::SunToolkit$1() {
}

$Class* SunToolkit$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$e", "Ljava/awt/AWTEvent;", nullptr, $FINAL | $SYNTHETIC, $field(SunToolkit$1, val$e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/AWTEvent;)V", "()V", 0, $method(SunToolkit$1, init$, void, $AWTEvent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SunToolkit$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.SunToolkit",
		"postPriorityEvent",
		"(Ljava/awt/AWTEvent;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.SunToolkit$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.SunToolkit$1",
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
		"sun.awt.SunToolkit"
	};
	$loadClass(SunToolkit$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunToolkit$1);
	});
	return class$;
}

$Class* SunToolkit$1::class$ = nullptr;

	} // awt
} // sun