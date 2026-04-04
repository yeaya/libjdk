#include <com/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind$1.h>
#include <com/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind$2.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef IS_SAME_TYPE
#undef IS_SUBTYPE

using $Infer$IncorporationBinaryOpKindArray = $Array<::com::sun::tools::javac::comp::Infer$IncorporationBinaryOpKind>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Infer$IncorporationBinaryOpKind$1 = ::com::sun::tools::javac::comp::Infer$IncorporationBinaryOpKind$1;
using $Infer$IncorporationBinaryOpKind$2 = ::com::sun::tools::javac::comp::Infer$IncorporationBinaryOpKind$2;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

Infer$IncorporationBinaryOpKind* Infer$IncorporationBinaryOpKind::IS_SUBTYPE = nullptr;
Infer$IncorporationBinaryOpKind* Infer$IncorporationBinaryOpKind::IS_SAME_TYPE = nullptr;
$Infer$IncorporationBinaryOpKindArray* Infer$IncorporationBinaryOpKind::$VALUES = nullptr;

$Infer$IncorporationBinaryOpKindArray* Infer$IncorporationBinaryOpKind::$values() {
	$init(Infer$IncorporationBinaryOpKind);
	return $new($Infer$IncorporationBinaryOpKindArray, {
		Infer$IncorporationBinaryOpKind::IS_SUBTYPE,
		Infer$IncorporationBinaryOpKind::IS_SAME_TYPE
	});
}

$Infer$IncorporationBinaryOpKindArray* Infer$IncorporationBinaryOpKind::values() {
	$init(Infer$IncorporationBinaryOpKind);
	return $cast($Infer$IncorporationBinaryOpKindArray, Infer$IncorporationBinaryOpKind::$VALUES->clone());
}

Infer$IncorporationBinaryOpKind* Infer$IncorporationBinaryOpKind::valueOf($String* name) {
	$init(Infer$IncorporationBinaryOpKind);
	return $cast(Infer$IncorporationBinaryOpKind, $Enum::valueOf(Infer$IncorporationBinaryOpKind::class$, name));
}

void Infer$IncorporationBinaryOpKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void Infer$IncorporationBinaryOpKind::clinit$($Class* clazz) {
	$assignStatic(Infer$IncorporationBinaryOpKind::IS_SUBTYPE, $new($Infer$IncorporationBinaryOpKind$1, "IS_SUBTYPE"_s, 0));
	$assignStatic(Infer$IncorporationBinaryOpKind::IS_SAME_TYPE, $new($Infer$IncorporationBinaryOpKind$2, "IS_SAME_TYPE"_s, 1));
	$assignStatic(Infer$IncorporationBinaryOpKind::$VALUES, Infer$IncorporationBinaryOpKind::$values());
}

Infer$IncorporationBinaryOpKind::Infer$IncorporationBinaryOpKind() {
}

$Class* Infer$IncorporationBinaryOpKind::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"IS_SUBTYPE", "Lcom/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Infer$IncorporationBinaryOpKind, IS_SUBTYPE)},
		{"IS_SAME_TYPE", "Lcom/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Infer$IncorporationBinaryOpKind, IS_SAME_TYPE)},
		{"$VALUES", "[Lcom/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Infer$IncorporationBinaryOpKind, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Infer$IncorporationBinaryOpKind, $values, $Infer$IncorporationBinaryOpKindArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Infer$IncorporationBinaryOpKind, init$, void, $String*, int32_t)},
		{"apply", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;Lcom/sun/tools/javac/code/Types;)Z", nullptr, $ABSTRACT, $virtualMethod(Infer$IncorporationBinaryOpKind, apply, bool, $Type*, $Type*, $Warner*, $Types*)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(Infer$IncorporationBinaryOpKind, valueOf, Infer$IncorporationBinaryOpKind*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(Infer$IncorporationBinaryOpKind, values, $Infer$IncorporationBinaryOpKindArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind", "com.sun.tools.javac.comp.Infer", "IncorporationBinaryOpKind", $STATIC | $ABSTRACT | $ENUM},
		{"com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind$2", nullptr, nullptr, $FINAL | $ENUM},
		{"com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind$1", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT | $ENUM,
		"com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Infer"
	};
	$loadClass(Infer$IncorporationBinaryOpKind, name, initialize, &classInfo$$, Infer$IncorporationBinaryOpKind::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Infer$IncorporationBinaryOpKind));
	});
	return class$;
}

$Class* Infer$IncorporationBinaryOpKind::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com