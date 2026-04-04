#include <sun/awt/CausedFocusEvent$2.h>
#include <java/awt/event/FocusEvent.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/reflect/Field.h>
#include <sun/awt/CausedFocusEvent.h>
#include <jcpp.h>

using $FocusEvent = ::java::awt::event::FocusEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;
using $CausedFocusEvent = ::sun::awt::CausedFocusEvent;

namespace sun {
	namespace awt {

void CausedFocusEvent$2::init$($CausedFocusEvent* this$0, $Field* val$consumedField, $FocusEvent* val$focusEvent) {
	$set(this, this$0, this$0);
	$set(this, val$consumedField, val$consumedField);
	$set(this, val$focusEvent, val$focusEvent);
}

$Object* CausedFocusEvent$2::run() {
	$beforeCallerSensitive();
	$nc(this->val$consumedField)->setAccessible(true);
	try {
		this->val$consumedField->set(this->val$focusEvent, $($Boolean::valueOf($CausedFocusEvent::access$000(this->this$0))));
	} catch ($IllegalAccessException& e) {
	}
	return nullptr;
}

CausedFocusEvent$2::CausedFocusEvent$2() {
}

$Class* CausedFocusEvent$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/CausedFocusEvent;", nullptr, $FINAL | $SYNTHETIC, $field(CausedFocusEvent$2, this$0)},
		{"val$focusEvent", "Ljava/awt/event/FocusEvent;", nullptr, $FINAL | $SYNTHETIC, $field(CausedFocusEvent$2, val$focusEvent)},
		{"val$consumedField", "Ljava/lang/reflect/Field;", nullptr, $FINAL | $SYNTHETIC, $field(CausedFocusEvent$2, val$consumedField)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/CausedFocusEvent;Ljava/lang/reflect/Field;Ljava/awt/event/FocusEvent;)V", "()V", 0, $method(CausedFocusEvent$2, init$, void, $CausedFocusEvent*, $Field*, $FocusEvent*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CausedFocusEvent$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.CausedFocusEvent",
		"readResolve",
		"()Ljava/lang/Object;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.CausedFocusEvent$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.CausedFocusEvent$2",
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
		"sun.awt.CausedFocusEvent"
	};
	$loadClass(CausedFocusEvent$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CausedFocusEvent$2);
	});
	return class$;
}

$Class* CausedFocusEvent$2::class$ = nullptr;

	} // awt
} // sun