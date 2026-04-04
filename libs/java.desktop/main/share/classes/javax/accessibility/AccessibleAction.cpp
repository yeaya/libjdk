#include <javax/accessibility/AccessibleAction.h>
#include <jcpp.h>

#undef CLICK
#undef DECREMENT
#undef INCREMENT
#undef TOGGLE_EXPAND
#undef TOGGLE_POPUP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace accessibility {

$String* AccessibleAction::TOGGLE_EXPAND = nullptr;
$String* AccessibleAction::INCREMENT = nullptr;
$String* AccessibleAction::DECREMENT = nullptr;
$String* AccessibleAction::CLICK = nullptr;
$String* AccessibleAction::TOGGLE_POPUP = nullptr;

void AccessibleAction::clinit$($Class* clazz) {
	$assignStatic(AccessibleAction::TOGGLE_EXPAND, $new($String, "toggleexpand"_s));
	$assignStatic(AccessibleAction::INCREMENT, $new($String, "increment"_s));
	$assignStatic(AccessibleAction::DECREMENT, $new($String, "decrement"_s));
	$assignStatic(AccessibleAction::CLICK, $new($String, "click"_s));
	$assignStatic(AccessibleAction::TOGGLE_POPUP, $new($String, "toggle popup"_s));
}

$Class* AccessibleAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TOGGLE_EXPAND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleAction, TOGGLE_EXPAND)},
		{"INCREMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleAction, INCREMENT)},
		{"DECREMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleAction, DECREMENT)},
		{"CLICK", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleAction, CLICK)},
		{"TOGGLE_POPUP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleAction, TOGGLE_POPUP)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"doAccessibleAction", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleAction, doAccessibleAction, bool, int32_t)},
		{"getAccessibleActionCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleAction, getAccessibleActionCount, int32_t)},
		{"getAccessibleActionDescription", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleAction, getAccessibleActionDescription, $String*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.accessibility.AccessibleAction",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AccessibleAction, name, initialize, &classInfo$$, AccessibleAction::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AccessibleAction);
	});
	return class$;
}

$Class* AccessibleAction::class$ = nullptr;

	} // accessibility
} // javax