#include <com/sun/tools/javac/comp/Resolve$AbstractMethodCheck$SharedInapplicableMethodException.h>
#include <com/sun/tools/javac/comp/Resolve$AbstractMethodCheck.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableMethodException.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

using $Resolve$AbstractMethodCheck = ::com::sun::tools::javac::comp::Resolve$AbstractMethodCheck;
using $Resolve$InapplicableMethodException = ::com::sun::tools::javac::comp::Resolve$InapplicableMethodException;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Resolve$AbstractMethodCheck$SharedInapplicableMethodException::init$($Resolve$AbstractMethodCheck* this$1) {
	$set(this, this$1, this$1);
	$Resolve$InapplicableMethodException::init$(nullptr);
}

Resolve$AbstractMethodCheck$SharedInapplicableMethodException* Resolve$AbstractMethodCheck$SharedInapplicableMethodException::setMessage($JCDiagnostic* details) {
	$set(this, diagnostic, details);
	return this;
}

Resolve$AbstractMethodCheck$SharedInapplicableMethodException::Resolve$AbstractMethodCheck$SharedInapplicableMethodException() {
}

Resolve$AbstractMethodCheck$SharedInapplicableMethodException::Resolve$AbstractMethodCheck$SharedInapplicableMethodException(const Resolve$AbstractMethodCheck$SharedInapplicableMethodException& e) : $Resolve$InapplicableMethodException(e) {
}

void Resolve$AbstractMethodCheck$SharedInapplicableMethodException::throw$() {
	throw *this;
}

$Class* Resolve$AbstractMethodCheck$SharedInapplicableMethodException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/tools/javac/comp/Resolve$AbstractMethodCheck;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$AbstractMethodCheck$SharedInapplicableMethodException, this$1)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Resolve$AbstractMethodCheck$SharedInapplicableMethodException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve$AbstractMethodCheck;)V", nullptr, 0, $method(Resolve$AbstractMethodCheck$SharedInapplicableMethodException, init$, void, $Resolve$AbstractMethodCheck*)},
		{"setMessage", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/comp/Resolve$AbstractMethodCheck$SharedInapplicableMethodException;", nullptr, 0, $virtualMethod(Resolve$AbstractMethodCheck$SharedInapplicableMethodException, setMessage, Resolve$AbstractMethodCheck$SharedInapplicableMethodException*, $JCDiagnostic*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$AbstractMethodCheck", "com.sun.tools.javac.comp.Resolve", "AbstractMethodCheck", $ABSTRACT},
		{"com.sun.tools.javac.comp.Resolve$AbstractMethodCheck$SharedInapplicableMethodException", "com.sun.tools.javac.comp.Resolve$AbstractMethodCheck", "SharedInapplicableMethodException", 0},
		{"com.sun.tools.javac.comp.Resolve$InapplicableMethodException", "com.sun.tools.javac.comp.Resolve", "InapplicableMethodException", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$AbstractMethodCheck$SharedInapplicableMethodException",
		"com.sun.tools.javac.comp.Resolve$InapplicableMethodException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Resolve"
	};
	$loadClass(Resolve$AbstractMethodCheck$SharedInapplicableMethodException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$AbstractMethodCheck$SharedInapplicableMethodException);
	});
	return class$;
}

$Class* Resolve$AbstractMethodCheck$SharedInapplicableMethodException::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com