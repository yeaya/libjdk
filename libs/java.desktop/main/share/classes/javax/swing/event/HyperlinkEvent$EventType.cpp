#include <javax/swing/event/HyperlinkEvent$EventType.h>
#include <javax/swing/event/HyperlinkEvent.h>
#include <jcpp.h>

#undef ACTIVATED
#undef ENTERED
#undef EXITED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace event {

HyperlinkEvent$EventType* HyperlinkEvent$EventType::ENTERED = nullptr;
HyperlinkEvent$EventType* HyperlinkEvent$EventType::EXITED = nullptr;
HyperlinkEvent$EventType* HyperlinkEvent$EventType::ACTIVATED = nullptr;

void HyperlinkEvent$EventType::init$($String* s) {
	$set(this, typeString, s);
}

$String* HyperlinkEvent$EventType::toString() {
	return this->typeString;
}

void HyperlinkEvent$EventType::clinit$($Class* clazz) {
	$assignStatic(HyperlinkEvent$EventType::ENTERED, $new(HyperlinkEvent$EventType, "ENTERED"_s));
	$assignStatic(HyperlinkEvent$EventType::EXITED, $new(HyperlinkEvent$EventType, "EXITED"_s));
	$assignStatic(HyperlinkEvent$EventType::ACTIVATED, $new(HyperlinkEvent$EventType, "ACTIVATED"_s));
}

HyperlinkEvent$EventType::HyperlinkEvent$EventType() {
}

$Class* HyperlinkEvent$EventType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ENTERED", "Ljavax/swing/event/HyperlinkEvent$EventType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HyperlinkEvent$EventType, ENTERED)},
		{"EXITED", "Ljavax/swing/event/HyperlinkEvent$EventType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HyperlinkEvent$EventType, EXITED)},
		{"ACTIVATED", "Ljavax/swing/event/HyperlinkEvent$EventType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HyperlinkEvent$EventType, ACTIVATED)},
		{"typeString", "Ljava/lang/String;", nullptr, $PRIVATE, $field(HyperlinkEvent$EventType, typeString)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(HyperlinkEvent$EventType, init$, void, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HyperlinkEvent$EventType, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.event.HyperlinkEvent$EventType", "javax.swing.event.HyperlinkEvent", "EventType", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.swing.event.HyperlinkEvent$EventType",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.event.HyperlinkEvent"
	};
	$loadClass(HyperlinkEvent$EventType, name, initialize, &classInfo$$, HyperlinkEvent$EventType::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HyperlinkEvent$EventType);
	});
	return class$;
}

$Class* HyperlinkEvent$EventType::class$ = nullptr;

		} // event
	} // swing
} // javax