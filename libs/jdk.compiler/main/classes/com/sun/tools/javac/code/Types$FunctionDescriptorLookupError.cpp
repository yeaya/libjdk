#include <com/sun/tools/javac/code/Types$FunctionDescriptorLookupError.h>
#include <com/sun/tools/javac/code/Types.h>
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
				namespace code {

void Types$FunctionDescriptorLookupError::init$() {
	$RuntimeException::init$();
	$set(this, diagnostic, nullptr);
}

Types$FunctionDescriptorLookupError* Types$FunctionDescriptorLookupError::setMessage($JCDiagnostic* diag) {
	$set(this, diagnostic, diag);
	return this;
}

$JCDiagnostic* Types$FunctionDescriptorLookupError::getDiagnostic() {
	return this->diagnostic;
}

Types$FunctionDescriptorLookupError::Types$FunctionDescriptorLookupError() {
}

Types$FunctionDescriptorLookupError::Types$FunctionDescriptorLookupError(const Types$FunctionDescriptorLookupError& e) : $RuntimeException(e) {
}

void Types$FunctionDescriptorLookupError::throw$() {
	throw *this;
}

$Class* Types$FunctionDescriptorLookupError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Types$FunctionDescriptorLookupError, serialVersionUID)},
		{"diagnostic", "Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $TRANSIENT, $field(Types$FunctionDescriptorLookupError, diagnostic)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Types$FunctionDescriptorLookupError, init$, void)},
		{"getDiagnostic", "()Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC, $virtualMethod(Types$FunctionDescriptorLookupError, getDiagnostic, $JCDiagnostic*)},
		{"setMessage", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/code/Types$FunctionDescriptorLookupError;", nullptr, 0, $virtualMethod(Types$FunctionDescriptorLookupError, setMessage, Types$FunctionDescriptorLookupError*, $JCDiagnostic*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$FunctionDescriptorLookupError", "com.sun.tools.javac.code.Types", "FunctionDescriptorLookupError", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.code.Types$FunctionDescriptorLookupError",
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
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$FunctionDescriptorLookupError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$FunctionDescriptorLookupError);
	});
	return class$;
}

$Class* Types$FunctionDescriptorLookupError::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com