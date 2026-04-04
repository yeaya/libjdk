#include <com/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind$2.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Infer$IncorporationBinaryOpKind = ::com::sun::tools::javac::comp::Infer$IncorporationBinaryOpKind;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Infer$IncorporationBinaryOpKind$2::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Infer$IncorporationBinaryOpKind::init$($enum$name, $enum$ordinal);
}

bool Infer$IncorporationBinaryOpKind$2::apply($Type* op1, $Type* op2, $Warner* warn, $Types* types) {
	return $nc(types)->isSameType(op1, op2);
}

Infer$IncorporationBinaryOpKind$2::Infer$IncorporationBinaryOpKind$2() {
}

$Class* Infer$IncorporationBinaryOpKind$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(Infer$IncorporationBinaryOpKind$2, init$, void, $String*, int32_t)},
		{"apply", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;Lcom/sun/tools/javac/code/Types;)Z", nullptr, 0, $virtualMethod(Infer$IncorporationBinaryOpKind$2, apply, bool, $Type*, $Type*, $Warner*, $Types*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind", "com.sun.tools.javac.comp.Infer", "IncorporationBinaryOpKind", $STATIC | $ABSTRACT | $ENUM},
		{"com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind$2", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind$2",
		"com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Infer"
	};
	$loadClass(Infer$IncorporationBinaryOpKind$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Infer$IncorporationBinaryOpKind$2));
	});
	return class$;
}

$Class* Infer$IncorporationBinaryOpKind$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com