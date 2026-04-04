#include <java/awt/Dialog$ModalExclusionType.h>
#include <java/awt/Dialog.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef APPLICATION_EXCLUDE
#undef NO_EXCLUDE
#undef TOOLKIT_EXCLUDE

using $Dialog$ModalExclusionTypeArray = $Array<::java::awt::Dialog$ModalExclusionType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

Dialog$ModalExclusionType* Dialog$ModalExclusionType::NO_EXCLUDE = nullptr;
Dialog$ModalExclusionType* Dialog$ModalExclusionType::APPLICATION_EXCLUDE = nullptr;
Dialog$ModalExclusionType* Dialog$ModalExclusionType::TOOLKIT_EXCLUDE = nullptr;
$Dialog$ModalExclusionTypeArray* Dialog$ModalExclusionType::$VALUES = nullptr;

$Dialog$ModalExclusionTypeArray* Dialog$ModalExclusionType::$values() {
	$init(Dialog$ModalExclusionType);
	return $new($Dialog$ModalExclusionTypeArray, {
		Dialog$ModalExclusionType::NO_EXCLUDE,
		Dialog$ModalExclusionType::APPLICATION_EXCLUDE,
		Dialog$ModalExclusionType::TOOLKIT_EXCLUDE
	});
}

$Dialog$ModalExclusionTypeArray* Dialog$ModalExclusionType::values() {
	$init(Dialog$ModalExclusionType);
	return $cast($Dialog$ModalExclusionTypeArray, Dialog$ModalExclusionType::$VALUES->clone());
}

Dialog$ModalExclusionType* Dialog$ModalExclusionType::valueOf($String* name) {
	$init(Dialog$ModalExclusionType);
	return $cast(Dialog$ModalExclusionType, $Enum::valueOf(Dialog$ModalExclusionType::class$, name));
}

void Dialog$ModalExclusionType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void Dialog$ModalExclusionType::clinit$($Class* clazz) {
	$assignStatic(Dialog$ModalExclusionType::NO_EXCLUDE, $new(Dialog$ModalExclusionType, "NO_EXCLUDE"_s, 0));
	$assignStatic(Dialog$ModalExclusionType::APPLICATION_EXCLUDE, $new(Dialog$ModalExclusionType, "APPLICATION_EXCLUDE"_s, 1));
	$assignStatic(Dialog$ModalExclusionType::TOOLKIT_EXCLUDE, $new(Dialog$ModalExclusionType, "TOOLKIT_EXCLUDE"_s, 2));
	$assignStatic(Dialog$ModalExclusionType::$VALUES, Dialog$ModalExclusionType::$values());
}

Dialog$ModalExclusionType::Dialog$ModalExclusionType() {
}

$Class* Dialog$ModalExclusionType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NO_EXCLUDE", "Ljava/awt/Dialog$ModalExclusionType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Dialog$ModalExclusionType, NO_EXCLUDE)},
		{"APPLICATION_EXCLUDE", "Ljava/awt/Dialog$ModalExclusionType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Dialog$ModalExclusionType, APPLICATION_EXCLUDE)},
		{"TOOLKIT_EXCLUDE", "Ljava/awt/Dialog$ModalExclusionType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Dialog$ModalExclusionType, TOOLKIT_EXCLUDE)},
		{"$VALUES", "[Ljava/awt/Dialog$ModalExclusionType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Dialog$ModalExclusionType, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/awt/Dialog$ModalExclusionType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Dialog$ModalExclusionType, $values, $Dialog$ModalExclusionTypeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Dialog$ModalExclusionType, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljava/awt/Dialog$ModalExclusionType;", nullptr, $PUBLIC | $STATIC, $staticMethod(Dialog$ModalExclusionType, valueOf, Dialog$ModalExclusionType*, $String*)},
		{"values", "()[Ljava/awt/Dialog$ModalExclusionType;", nullptr, $PUBLIC | $STATIC, $staticMethod(Dialog$ModalExclusionType, values, $Dialog$ModalExclusionTypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Dialog$ModalExclusionType", "java.awt.Dialog", "ModalExclusionType", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"java.awt.Dialog$ModalExclusionType",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/awt/Dialog$ModalExclusionType;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Dialog"
	};
	$loadClass(Dialog$ModalExclusionType, name, initialize, &classInfo$$, Dialog$ModalExclusionType::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Dialog$ModalExclusionType));
	});
	return class$;
}

$Class* Dialog$ModalExclusionType::class$ = nullptr;

	} // awt
} // java