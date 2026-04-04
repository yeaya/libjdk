#include <com/sun/tools/javac/comp/Infer$InferenceException.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableMethodException.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Resolve$InapplicableMethodException = ::com::sun::tools::javac::comp::Resolve$InapplicableMethodException;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Infer$InferenceException::init$() {
	$Resolve$InapplicableMethodException::init$(nullptr);
	$set(this, messages, $List::nil());
}

$JCDiagnostic* Infer$InferenceException::getDiagnostic() {
	return $cast($JCDiagnostic, $nc(this->messages)->head);
}

Infer$InferenceException::Infer$InferenceException() {
}

Infer$InferenceException::Infer$InferenceException(const Infer$InferenceException& e) : $Resolve$InapplicableMethodException(e) {
}

void Infer$InferenceException::throw$() {
	throw *this;
}

$Class* Infer$InferenceException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Infer$InferenceException, serialVersionUID)},
		{"messages", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/JCDiagnostic;>;", $TRANSIENT, $field(Infer$InferenceException, messages)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Infer$InferenceException, init$, void)},
		{"getDiagnostic", "()Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC, $virtualMethod(Infer$InferenceException, getDiagnostic, $JCDiagnostic*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Infer$InferenceException", "com.sun.tools.javac.comp.Infer", "InferenceException", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.comp.Resolve$InapplicableMethodException", "com.sun.tools.javac.comp.Resolve", "InapplicableMethodException", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.comp.Infer$InferenceException",
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
		"com.sun.tools.javac.comp.Infer"
	};
	$loadClass(Infer$InferenceException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Infer$InferenceException);
	});
	return class$;
}

$Class* Infer$InferenceException::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com