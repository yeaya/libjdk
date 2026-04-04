#include <com/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntryKind.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ARRAY
#undef INNER_TYPE
#undef TYPE_ARGUMENT
#undef WILDCARD

using $TypeAnnotationPosition$TypePathEntryKindArray = $Array<::com::sun::tools::javac::code::TypeAnnotationPosition$TypePathEntryKind>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

TypeAnnotationPosition$TypePathEntryKind* TypeAnnotationPosition$TypePathEntryKind::ARRAY = nullptr;
TypeAnnotationPosition$TypePathEntryKind* TypeAnnotationPosition$TypePathEntryKind::INNER_TYPE = nullptr;
TypeAnnotationPosition$TypePathEntryKind* TypeAnnotationPosition$TypePathEntryKind::WILDCARD = nullptr;
TypeAnnotationPosition$TypePathEntryKind* TypeAnnotationPosition$TypePathEntryKind::TYPE_ARGUMENT = nullptr;
$TypeAnnotationPosition$TypePathEntryKindArray* TypeAnnotationPosition$TypePathEntryKind::$VALUES = nullptr;

$TypeAnnotationPosition$TypePathEntryKindArray* TypeAnnotationPosition$TypePathEntryKind::$values() {
	$init(TypeAnnotationPosition$TypePathEntryKind);
	return $new($TypeAnnotationPosition$TypePathEntryKindArray, {
		TypeAnnotationPosition$TypePathEntryKind::ARRAY,
		TypeAnnotationPosition$TypePathEntryKind::INNER_TYPE,
		TypeAnnotationPosition$TypePathEntryKind::WILDCARD,
		TypeAnnotationPosition$TypePathEntryKind::TYPE_ARGUMENT
	});
}

$TypeAnnotationPosition$TypePathEntryKindArray* TypeAnnotationPosition$TypePathEntryKind::values() {
	$init(TypeAnnotationPosition$TypePathEntryKind);
	return $cast($TypeAnnotationPosition$TypePathEntryKindArray, TypeAnnotationPosition$TypePathEntryKind::$VALUES->clone());
}

TypeAnnotationPosition$TypePathEntryKind* TypeAnnotationPosition$TypePathEntryKind::valueOf($String* name) {
	$init(TypeAnnotationPosition$TypePathEntryKind);
	return $cast(TypeAnnotationPosition$TypePathEntryKind, $Enum::valueOf(TypeAnnotationPosition$TypePathEntryKind::class$, name));
}

void TypeAnnotationPosition$TypePathEntryKind::init$($String* $enum$name, int32_t $enum$ordinal, int32_t tag) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->tag = tag;
}

void TypeAnnotationPosition$TypePathEntryKind::clinit$($Class* clazz) {
	$assignStatic(TypeAnnotationPosition$TypePathEntryKind::ARRAY, $new(TypeAnnotationPosition$TypePathEntryKind, "ARRAY"_s, 0, 0));
	$assignStatic(TypeAnnotationPosition$TypePathEntryKind::INNER_TYPE, $new(TypeAnnotationPosition$TypePathEntryKind, "INNER_TYPE"_s, 1, 1));
	$assignStatic(TypeAnnotationPosition$TypePathEntryKind::WILDCARD, $new(TypeAnnotationPosition$TypePathEntryKind, "WILDCARD"_s, 2, 2));
	$assignStatic(TypeAnnotationPosition$TypePathEntryKind::TYPE_ARGUMENT, $new(TypeAnnotationPosition$TypePathEntryKind, "TYPE_ARGUMENT"_s, 3, 3));
	$assignStatic(TypeAnnotationPosition$TypePathEntryKind::$VALUES, TypeAnnotationPosition$TypePathEntryKind::$values());
}

TypeAnnotationPosition$TypePathEntryKind::TypeAnnotationPosition$TypePathEntryKind() {
}

$Class* TypeAnnotationPosition$TypePathEntryKind::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ARRAY", "Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntryKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeAnnotationPosition$TypePathEntryKind, ARRAY)},
		{"INNER_TYPE", "Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntryKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeAnnotationPosition$TypePathEntryKind, INNER_TYPE)},
		{"WILDCARD", "Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntryKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeAnnotationPosition$TypePathEntryKind, WILDCARD)},
		{"TYPE_ARGUMENT", "Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntryKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeAnnotationPosition$TypePathEntryKind, TYPE_ARGUMENT)},
		{"$VALUES", "[Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntryKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(TypeAnnotationPosition$TypePathEntryKind, $VALUES)},
		{"tag", "I", nullptr, $PUBLIC | $FINAL, $field(TypeAnnotationPosition$TypePathEntryKind, tag)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntryKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TypeAnnotationPosition$TypePathEntryKind, $values, $TypeAnnotationPosition$TypePathEntryKindArray*)},
		{"<init>", "(Ljava/lang/String;II)V", "(I)V", $PRIVATE, $method(TypeAnnotationPosition$TypePathEntryKind, init$, void, $String*, int32_t, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntryKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(TypeAnnotationPosition$TypePathEntryKind, valueOf, TypeAnnotationPosition$TypePathEntryKind*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntryKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(TypeAnnotationPosition$TypePathEntryKind, values, $TypeAnnotationPosition$TypePathEntryKindArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.TypeAnnotationPosition$TypePathEntryKind", "com.sun.tools.javac.code.TypeAnnotationPosition", "TypePathEntryKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.code.TypeAnnotationPosition$TypePathEntryKind",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntryKind;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.TypeAnnotationPosition"
	};
	$loadClass(TypeAnnotationPosition$TypePathEntryKind, name, initialize, &classInfo$$, TypeAnnotationPosition$TypePathEntryKind::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(TypeAnnotationPosition$TypePathEntryKind));
	});
	return class$;
}

$Class* TypeAnnotationPosition$TypePathEntryKind::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com