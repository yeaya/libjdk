#include <javax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type.h>
#include <java/lang/Enum.h>
#include <javax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator.h>
#include <javax/swing/MultiUIDefaults.h>
#include <jcpp.h>

#undef ELEMENTS
#undef KEYS

using $MultiUIDefaults$MultiUIDefaultsEnumerator$TypeArray = $Array<::javax::swing::MultiUIDefaults$MultiUIDefaultsEnumerator$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

MultiUIDefaults$MultiUIDefaultsEnumerator$Type* MultiUIDefaults$MultiUIDefaultsEnumerator$Type::KEYS = nullptr;
MultiUIDefaults$MultiUIDefaultsEnumerator$Type* MultiUIDefaults$MultiUIDefaultsEnumerator$Type::ELEMENTS = nullptr;
$MultiUIDefaults$MultiUIDefaultsEnumerator$TypeArray* MultiUIDefaults$MultiUIDefaultsEnumerator$Type::$VALUES = nullptr;

$MultiUIDefaults$MultiUIDefaultsEnumerator$TypeArray* MultiUIDefaults$MultiUIDefaultsEnumerator$Type::$values() {
	$init(MultiUIDefaults$MultiUIDefaultsEnumerator$Type);
	return $new($MultiUIDefaults$MultiUIDefaultsEnumerator$TypeArray, {
		MultiUIDefaults$MultiUIDefaultsEnumerator$Type::KEYS,
		MultiUIDefaults$MultiUIDefaultsEnumerator$Type::ELEMENTS
	});
}

$MultiUIDefaults$MultiUIDefaultsEnumerator$TypeArray* MultiUIDefaults$MultiUIDefaultsEnumerator$Type::values() {
	$init(MultiUIDefaults$MultiUIDefaultsEnumerator$Type);
	return $cast($MultiUIDefaults$MultiUIDefaultsEnumerator$TypeArray, MultiUIDefaults$MultiUIDefaultsEnumerator$Type::$VALUES->clone());
}

MultiUIDefaults$MultiUIDefaultsEnumerator$Type* MultiUIDefaults$MultiUIDefaultsEnumerator$Type::valueOf($String* name) {
	$init(MultiUIDefaults$MultiUIDefaultsEnumerator$Type);
	return $cast(MultiUIDefaults$MultiUIDefaultsEnumerator$Type, $Enum::valueOf(MultiUIDefaults$MultiUIDefaultsEnumerator$Type::class$, name));
}

void MultiUIDefaults$MultiUIDefaultsEnumerator$Type::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void MultiUIDefaults$MultiUIDefaultsEnumerator$Type::clinit$($Class* clazz) {
	$assignStatic(MultiUIDefaults$MultiUIDefaultsEnumerator$Type::KEYS, $new(MultiUIDefaults$MultiUIDefaultsEnumerator$Type, "KEYS"_s, 0));
	$assignStatic(MultiUIDefaults$MultiUIDefaultsEnumerator$Type::ELEMENTS, $new(MultiUIDefaults$MultiUIDefaultsEnumerator$Type, "ELEMENTS"_s, 1));
	$assignStatic(MultiUIDefaults$MultiUIDefaultsEnumerator$Type::$VALUES, MultiUIDefaults$MultiUIDefaultsEnumerator$Type::$values());
}

MultiUIDefaults$MultiUIDefaultsEnumerator$Type::MultiUIDefaults$MultiUIDefaultsEnumerator$Type() {
}

$Class* MultiUIDefaults$MultiUIDefaultsEnumerator$Type::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"KEYS", "Ljavax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MultiUIDefaults$MultiUIDefaultsEnumerator$Type, KEYS)},
		{"ELEMENTS", "Ljavax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MultiUIDefaults$MultiUIDefaultsEnumerator$Type, ELEMENTS)},
		{"$VALUES", "[Ljavax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MultiUIDefaults$MultiUIDefaultsEnumerator$Type, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljavax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MultiUIDefaults$MultiUIDefaultsEnumerator$Type, $values, $MultiUIDefaults$MultiUIDefaultsEnumerator$TypeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(MultiUIDefaults$MultiUIDefaultsEnumerator$Type, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljavax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(MultiUIDefaults$MultiUIDefaultsEnumerator$Type, valueOf, MultiUIDefaults$MultiUIDefaultsEnumerator$Type*, $String*)},
		{"values", "()[Ljavax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(MultiUIDefaults$MultiUIDefaultsEnumerator$Type, values, $MultiUIDefaults$MultiUIDefaultsEnumerator$TypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.MultiUIDefaults$MultiUIDefaultsEnumerator", "javax.swing.MultiUIDefaults", "MultiUIDefaultsEnumerator", $PRIVATE | $STATIC},
		{"javax.swing.MultiUIDefaults$MultiUIDefaultsEnumerator$Type", "javax.swing.MultiUIDefaults$MultiUIDefaultsEnumerator", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"javax.swing.MultiUIDefaults$MultiUIDefaultsEnumerator$Type",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljavax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.MultiUIDefaults"
	};
	$loadClass(MultiUIDefaults$MultiUIDefaultsEnumerator$Type, name, initialize, &classInfo$$, MultiUIDefaults$MultiUIDefaultsEnumerator$Type::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(MultiUIDefaults$MultiUIDefaultsEnumerator$Type));
	});
	return class$;
}

$Class* MultiUIDefaults$MultiUIDefaultsEnumerator$Type::class$ = nullptr;

	} // swing
} // javax