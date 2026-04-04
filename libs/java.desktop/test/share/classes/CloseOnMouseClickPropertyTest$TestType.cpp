#include <CloseOnMouseClickPropertyTest$TestType.h>
#include <CloseOnMouseClickPropertyTest.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CHECK_BOX_MENU_ITEM
#undef MENU_ITEM
#undef RADIO_BUTTON_MENU_ITEM

using $CloseOnMouseClickPropertyTest$TestTypeArray = $Array<CloseOnMouseClickPropertyTest$TestType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

CloseOnMouseClickPropertyTest$TestType* CloseOnMouseClickPropertyTest$TestType::MENU_ITEM = nullptr;
CloseOnMouseClickPropertyTest$TestType* CloseOnMouseClickPropertyTest$TestType::CHECK_BOX_MENU_ITEM = nullptr;
CloseOnMouseClickPropertyTest$TestType* CloseOnMouseClickPropertyTest$TestType::RADIO_BUTTON_MENU_ITEM = nullptr;
$CloseOnMouseClickPropertyTest$TestTypeArray* CloseOnMouseClickPropertyTest$TestType::$VALUES = nullptr;

$CloseOnMouseClickPropertyTest$TestTypeArray* CloseOnMouseClickPropertyTest$TestType::$values() {
	$init(CloseOnMouseClickPropertyTest$TestType);
	return $new($CloseOnMouseClickPropertyTest$TestTypeArray, {
		CloseOnMouseClickPropertyTest$TestType::MENU_ITEM,
		CloseOnMouseClickPropertyTest$TestType::CHECK_BOX_MENU_ITEM,
		CloseOnMouseClickPropertyTest$TestType::RADIO_BUTTON_MENU_ITEM
	});
}

$CloseOnMouseClickPropertyTest$TestTypeArray* CloseOnMouseClickPropertyTest$TestType::values() {
	$init(CloseOnMouseClickPropertyTest$TestType);
	return $cast($CloseOnMouseClickPropertyTest$TestTypeArray, CloseOnMouseClickPropertyTest$TestType::$VALUES->clone());
}

CloseOnMouseClickPropertyTest$TestType* CloseOnMouseClickPropertyTest$TestType::valueOf($String* name) {
	$init(CloseOnMouseClickPropertyTest$TestType);
	return $cast(CloseOnMouseClickPropertyTest$TestType, $Enum::valueOf(CloseOnMouseClickPropertyTest$TestType::class$, name));
}

void CloseOnMouseClickPropertyTest$TestType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void CloseOnMouseClickPropertyTest$TestType::clinit$($Class* clazz) {
	$assignStatic(CloseOnMouseClickPropertyTest$TestType::MENU_ITEM, $new(CloseOnMouseClickPropertyTest$TestType, "MENU_ITEM"_s, 0));
	$assignStatic(CloseOnMouseClickPropertyTest$TestType::CHECK_BOX_MENU_ITEM, $new(CloseOnMouseClickPropertyTest$TestType, "CHECK_BOX_MENU_ITEM"_s, 1));
	$assignStatic(CloseOnMouseClickPropertyTest$TestType::RADIO_BUTTON_MENU_ITEM, $new(CloseOnMouseClickPropertyTest$TestType, "RADIO_BUTTON_MENU_ITEM"_s, 2));
	$assignStatic(CloseOnMouseClickPropertyTest$TestType::$VALUES, CloseOnMouseClickPropertyTest$TestType::$values());
}

CloseOnMouseClickPropertyTest$TestType::CloseOnMouseClickPropertyTest$TestType() {
}

$Class* CloseOnMouseClickPropertyTest$TestType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MENU_ITEM", "LCloseOnMouseClickPropertyTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CloseOnMouseClickPropertyTest$TestType, MENU_ITEM)},
		{"CHECK_BOX_MENU_ITEM", "LCloseOnMouseClickPropertyTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CloseOnMouseClickPropertyTest$TestType, CHECK_BOX_MENU_ITEM)},
		{"RADIO_BUTTON_MENU_ITEM", "LCloseOnMouseClickPropertyTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CloseOnMouseClickPropertyTest$TestType, RADIO_BUTTON_MENU_ITEM)},
		{"$VALUES", "[LCloseOnMouseClickPropertyTest$TestType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CloseOnMouseClickPropertyTest$TestType, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[LCloseOnMouseClickPropertyTest$TestType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CloseOnMouseClickPropertyTest$TestType, $values, $CloseOnMouseClickPropertyTest$TestTypeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(CloseOnMouseClickPropertyTest$TestType, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)LCloseOnMouseClickPropertyTest$TestType;", nullptr, $PUBLIC | $STATIC, $staticMethod(CloseOnMouseClickPropertyTest$TestType, valueOf, CloseOnMouseClickPropertyTest$TestType*, $String*)},
		{"values", "()[LCloseOnMouseClickPropertyTest$TestType;", nullptr, $PUBLIC | $STATIC, $staticMethod(CloseOnMouseClickPropertyTest$TestType, values, $CloseOnMouseClickPropertyTest$TestTypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CloseOnMouseClickPropertyTest$TestType", "CloseOnMouseClickPropertyTest", "TestType", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"CloseOnMouseClickPropertyTest$TestType",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<LCloseOnMouseClickPropertyTest$TestType;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"CloseOnMouseClickPropertyTest"
	};
	$loadClass(CloseOnMouseClickPropertyTest$TestType, name, initialize, &classInfo$$, CloseOnMouseClickPropertyTest$TestType::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(CloseOnMouseClickPropertyTest$TestType));
	});
	return class$;
}

$Class* CloseOnMouseClickPropertyTest$TestType::class$ = nullptr;