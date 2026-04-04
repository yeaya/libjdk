#include <com/sun/tools/javac/code/TypeMetadata$Entry$Kind.h>
#include <com/sun/tools/javac/code/TypeMetadata$Entry.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ANNOTATIONS

using $TypeMetadata$Entry$KindArray = $Array<::com::sun::tools::javac::code::TypeMetadata$Entry$Kind>;
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

TypeMetadata$Entry$Kind* TypeMetadata$Entry$Kind::ANNOTATIONS = nullptr;
$TypeMetadata$Entry$KindArray* TypeMetadata$Entry$Kind::$VALUES = nullptr;

$TypeMetadata$Entry$KindArray* TypeMetadata$Entry$Kind::$values() {
	$init(TypeMetadata$Entry$Kind);
	return $new($TypeMetadata$Entry$KindArray, {TypeMetadata$Entry$Kind::ANNOTATIONS});
}

$TypeMetadata$Entry$KindArray* TypeMetadata$Entry$Kind::values() {
	$init(TypeMetadata$Entry$Kind);
	return $cast($TypeMetadata$Entry$KindArray, TypeMetadata$Entry$Kind::$VALUES->clone());
}

TypeMetadata$Entry$Kind* TypeMetadata$Entry$Kind::valueOf($String* name) {
	$init(TypeMetadata$Entry$Kind);
	return $cast(TypeMetadata$Entry$Kind, $Enum::valueOf(TypeMetadata$Entry$Kind::class$, name));
}

void TypeMetadata$Entry$Kind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void TypeMetadata$Entry$Kind::clinit$($Class* clazz) {
	$assignStatic(TypeMetadata$Entry$Kind::ANNOTATIONS, $new(TypeMetadata$Entry$Kind, "ANNOTATIONS"_s, 0));
	$assignStatic(TypeMetadata$Entry$Kind::$VALUES, TypeMetadata$Entry$Kind::$values());
}

TypeMetadata$Entry$Kind::TypeMetadata$Entry$Kind() {
}

$Class* TypeMetadata$Entry$Kind::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ANNOTATIONS", "Lcom/sun/tools/javac/code/TypeMetadata$Entry$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeMetadata$Entry$Kind, ANNOTATIONS)},
		{"$VALUES", "[Lcom/sun/tools/javac/code/TypeMetadata$Entry$Kind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(TypeMetadata$Entry$Kind, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/code/TypeMetadata$Entry$Kind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TypeMetadata$Entry$Kind, $values, $TypeMetadata$Entry$KindArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(TypeMetadata$Entry$Kind, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/TypeMetadata$Entry$Kind;", nullptr, $PUBLIC | $STATIC, $staticMethod(TypeMetadata$Entry$Kind, valueOf, TypeMetadata$Entry$Kind*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/code/TypeMetadata$Entry$Kind;", nullptr, $PUBLIC | $STATIC, $staticMethod(TypeMetadata$Entry$Kind, values, $TypeMetadata$Entry$KindArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.TypeMetadata$Entry", "com.sun.tools.javac.code.TypeMetadata", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.code.TypeMetadata$Entry$Kind", "com.sun.tools.javac.code.TypeMetadata$Entry", "Kind", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.code.TypeMetadata$Entry$Kind",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/code/TypeMetadata$Entry$Kind;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.TypeMetadata"
	};
	$loadClass(TypeMetadata$Entry$Kind, name, initialize, &classInfo$$, TypeMetadata$Entry$Kind::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(TypeMetadata$Entry$Kind));
	});
	return class$;
}

$Class* TypeMetadata$Entry$Kind::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com