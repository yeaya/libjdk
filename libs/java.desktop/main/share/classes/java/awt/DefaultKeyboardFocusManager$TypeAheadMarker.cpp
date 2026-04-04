#include <java/awt/DefaultKeyboardFocusManager$TypeAheadMarker.h>
#include <java/awt/Component.h>
#include <java/awt/DefaultKeyboardFocusManager.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void DefaultKeyboardFocusManager$TypeAheadMarker::init$(int64_t after, $Component* untilFocused) {
	this->after = after;
	$set(this, untilFocused, untilFocused);
}

$String* DefaultKeyboardFocusManager$TypeAheadMarker::toString() {
	return $str({">>> Marker after "_s, $$str(this->after), " on "_s, this->untilFocused});
}

DefaultKeyboardFocusManager$TypeAheadMarker::DefaultKeyboardFocusManager$TypeAheadMarker() {
}

$Class* DefaultKeyboardFocusManager$TypeAheadMarker::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"after", "J", nullptr, 0, $field(DefaultKeyboardFocusManager$TypeAheadMarker, after)},
		{"untilFocused", "Ljava/awt/Component;", nullptr, 0, $field(DefaultKeyboardFocusManager$TypeAheadMarker, untilFocused)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JLjava/awt/Component;)V", nullptr, 0, $method(DefaultKeyboardFocusManager$TypeAheadMarker, init$, void, int64_t, $Component*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultKeyboardFocusManager$TypeAheadMarker, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.DefaultKeyboardFocusManager$TypeAheadMarker", "java.awt.DefaultKeyboardFocusManager", "TypeAheadMarker", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.DefaultKeyboardFocusManager$TypeAheadMarker",
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
		"java.awt.DefaultKeyboardFocusManager"
	};
	$loadClass(DefaultKeyboardFocusManager$TypeAheadMarker, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultKeyboardFocusManager$TypeAheadMarker);
	});
	return class$;
}

$Class* DefaultKeyboardFocusManager$TypeAheadMarker::class$ = nullptr;

	} // awt
} // java