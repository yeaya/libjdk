#include <java/awt/event/FocusEvent$1.h>
#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

void FocusEvent$1::init$($FocusEvent* this$0) {
	$set(this, this$0, this$0);
	$Component::init$();
}

FocusEvent$1::FocusEvent$1() {
}

$Class* FocusEvent$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/event/FocusEvent;", nullptr, $FINAL | $SYNTHETIC, $field(FocusEvent$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/event/FocusEvent;)V", nullptr, 0, $method(FocusEvent$1, init$, void, $FocusEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.event.FocusEvent",
		"readResolve",
		"()Ljava/lang/Object;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.event.FocusEvent$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.event.FocusEvent$1",
		"java.awt.Component",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.event.FocusEvent"
	};
	$loadClass(FocusEvent$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FocusEvent$1));
	});
	return class$;
}

$Class* FocusEvent$1::class$ = nullptr;

		} // event
	} // awt
} // java