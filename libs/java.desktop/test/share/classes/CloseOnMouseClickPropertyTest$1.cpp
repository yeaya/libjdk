#include <CloseOnMouseClickPropertyTest$1.h>
#include <CloseOnMouseClickPropertyTest$TestType.h>
#include <CloseOnMouseClickPropertyTest.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef CHECK_BOX_MENU_ITEM
#undef MENU_ITEM
#undef RADIO_BUTTON_MENU_ITEM

using $CloseOnMouseClickPropertyTest$TestType = ::CloseOnMouseClickPropertyTest$TestType;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

$ints* CloseOnMouseClickPropertyTest$1::$SwitchMap$CloseOnMouseClickPropertyTest$TestType = nullptr;

void CloseOnMouseClickPropertyTest$1::clinit$($Class* clazz) {
	$assignStatic(CloseOnMouseClickPropertyTest$1::$SwitchMap$CloseOnMouseClickPropertyTest$TestType, $new($ints, $($CloseOnMouseClickPropertyTest$TestType::values())->length));
	{
		try {
			CloseOnMouseClickPropertyTest$1::$SwitchMap$CloseOnMouseClickPropertyTest$TestType->set($CloseOnMouseClickPropertyTest$TestType::MENU_ITEM->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CloseOnMouseClickPropertyTest$1::$SwitchMap$CloseOnMouseClickPropertyTest$TestType->set($CloseOnMouseClickPropertyTest$TestType::CHECK_BOX_MENU_ITEM->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CloseOnMouseClickPropertyTest$1::$SwitchMap$CloseOnMouseClickPropertyTest$TestType->set($CloseOnMouseClickPropertyTest$TestType::RADIO_BUTTON_MENU_ITEM->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

CloseOnMouseClickPropertyTest$1::CloseOnMouseClickPropertyTest$1() {
}

$Class* CloseOnMouseClickPropertyTest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$CloseOnMouseClickPropertyTest$TestType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CloseOnMouseClickPropertyTest$1, $SwitchMap$CloseOnMouseClickPropertyTest$TestType)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"CloseOnMouseClickPropertyTest",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CloseOnMouseClickPropertyTest$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"CloseOnMouseClickPropertyTest$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"CloseOnMouseClickPropertyTest"
	};
	$loadClass(CloseOnMouseClickPropertyTest$1, name, initialize, &classInfo$$, CloseOnMouseClickPropertyTest$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CloseOnMouseClickPropertyTest$1);
	});
	return class$;
}

$Class* CloseOnMouseClickPropertyTest$1::class$ = nullptr;