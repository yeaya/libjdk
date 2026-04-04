#include <java/awt/KeyboardFocusManager$LightweightFocusRequest.h>
#include <java/awt/Component.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void KeyboardFocusManager$LightweightFocusRequest::init$($Component* component, bool temporary, $FocusEvent$Cause* cause) {
	$set(this, component, component);
	this->temporary = temporary;
	$set(this, cause, cause);
}

$String* KeyboardFocusManager$LightweightFocusRequest::toString() {
	return $str({"LightweightFocusRequest[component="_s, this->component, ",temporary="_s, $$str(this->temporary), ", cause="_s, this->cause, "]"_s});
}

KeyboardFocusManager$LightweightFocusRequest::KeyboardFocusManager$LightweightFocusRequest() {
}

$Class* KeyboardFocusManager$LightweightFocusRequest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"component", "Ljava/awt/Component;", nullptr, $FINAL, $field(KeyboardFocusManager$LightweightFocusRequest, component)},
		{"temporary", "Z", nullptr, $FINAL, $field(KeyboardFocusManager$LightweightFocusRequest, temporary)},
		{"cause", "Ljava/awt/event/FocusEvent$Cause;", nullptr, $FINAL, $field(KeyboardFocusManager$LightweightFocusRequest, cause)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Component;ZLjava/awt/event/FocusEvent$Cause;)V", nullptr, 0, $method(KeyboardFocusManager$LightweightFocusRequest, init$, void, $Component*, bool, $FocusEvent$Cause*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(KeyboardFocusManager$LightweightFocusRequest, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.KeyboardFocusManager$LightweightFocusRequest", "java.awt.KeyboardFocusManager", "LightweightFocusRequest", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.awt.KeyboardFocusManager$LightweightFocusRequest",
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
		"java.awt.KeyboardFocusManager"
	};
	$loadClass(KeyboardFocusManager$LightweightFocusRequest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyboardFocusManager$LightweightFocusRequest);
	});
	return class$;
}

$Class* KeyboardFocusManager$LightweightFocusRequest::class$ = nullptr;

	} // awt
} // java