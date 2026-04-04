#include <com/sun/tools/javac/comp/AttrRecover$RecoveryErrorType.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/AttrRecover.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void AttrRecover$RecoveryErrorType::init$($Type$ErrorType* original, $Symbol* candidateSymbol) {
	$Type$ErrorType::init$($($nc(original)->getOriginalType()), $nc(original)->tsym);
	$set(this, candidateSymbol, candidateSymbol);
}

AttrRecover$RecoveryErrorType::AttrRecover$RecoveryErrorType() {
}

$Class* AttrRecover$RecoveryErrorType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"candidateSymbol", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC | $FINAL, $field(AttrRecover$RecoveryErrorType, candidateSymbol)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Type$ErrorType;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(AttrRecover$RecoveryErrorType, init$, void, $Type$ErrorType*, $Symbol*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.AttrRecover$RecoveryErrorType", "com.sun.tools.javac.comp.AttrRecover", "RecoveryErrorType", $PRIVATE | $STATIC},
		{"com.sun.tools.javac.code.Type$ErrorType", "com.sun.tools.javac.code.Type", "ErrorType", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.AttrRecover$RecoveryErrorType",
		"com.sun.tools.javac.code.Type$ErrorType",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.AttrRecover"
	};
	$loadClass(AttrRecover$RecoveryErrorType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AttrRecover$RecoveryErrorType));
	});
	return class$;
}

$Class* AttrRecover$RecoveryErrorType::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com