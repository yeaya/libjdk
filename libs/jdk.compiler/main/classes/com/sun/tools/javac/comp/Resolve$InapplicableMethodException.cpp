#include <com/sun/tools/javac/comp/Resolve$InapplicableMethodException.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Resolve$InapplicableMethodException::init$($JCDiagnostic* diag) {
	$RuntimeException::init$();
	$set(this, diagnostic, diag);
}

$JCDiagnostic* Resolve$InapplicableMethodException::getDiagnostic() {
	return this->diagnostic;
}

Resolve$InapplicableMethodException::Resolve$InapplicableMethodException() {
}

Resolve$InapplicableMethodException::Resolve$InapplicableMethodException(const Resolve$InapplicableMethodException& e) : $RuntimeException(e) {
}

void Resolve$InapplicableMethodException::throw$() {
	throw *this;
}

$Class* Resolve$InapplicableMethodException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Resolve$InapplicableMethodException, serialVersionUID)},
		{"diagnostic", "Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $TRANSIENT, $field(Resolve$InapplicableMethodException, diagnostic)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, 0, $method(Resolve$InapplicableMethodException, init$, void, $JCDiagnostic*)},
		{"getDiagnostic", "()Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC, $virtualMethod(Resolve$InapplicableMethodException, getDiagnostic, $JCDiagnostic*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$InapplicableMethodException", "com.sun.tools.javac.comp.Resolve", "InapplicableMethodException", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$InapplicableMethodException",
		"java.lang.RuntimeException",
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
	$loadClass(Resolve$InapplicableMethodException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$InapplicableMethodException);
	});
	return class$;
}

$Class* Resolve$InapplicableMethodException::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com