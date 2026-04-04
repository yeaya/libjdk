#include <com/sun/tools/javac/code/Types$SignatureGenerator$InvalidSignatureException.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$SignatureGenerator.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
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

void Types$SignatureGenerator$InvalidSignatureException::init$($Type* type) {
	$RuntimeException::init$();
	$set(this, type$, type);
}

$Type* Types$SignatureGenerator$InvalidSignatureException::type() {
	return this->type$;
}

Types$SignatureGenerator$InvalidSignatureException::Types$SignatureGenerator$InvalidSignatureException() {
}

Types$SignatureGenerator$InvalidSignatureException::Types$SignatureGenerator$InvalidSignatureException(const Types$SignatureGenerator$InvalidSignatureException& e) : $RuntimeException(e) {
}

void Types$SignatureGenerator$InvalidSignatureException::throw$() {
	throw *this;
}

$Class* Types$SignatureGenerator$InvalidSignatureException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Types$SignatureGenerator$InvalidSignatureException, serialVersionUID)},
		{"type", "Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(Types$SignatureGenerator$InvalidSignatureException, type$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(Types$SignatureGenerator$InvalidSignatureException, init$, void, $Type*)},
		{"type", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types$SignatureGenerator$InvalidSignatureException, type, $Type*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$SignatureGenerator", "com.sun.tools.javac.code.Types", "SignatureGenerator", $PUBLIC | $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.code.Types$SignatureGenerator$InvalidSignatureException", "com.sun.tools.javac.code.Types$SignatureGenerator", "InvalidSignatureException", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.code.Types$SignatureGenerator$InvalidSignatureException",
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
	$loadClass(Types$SignatureGenerator$InvalidSignatureException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$SignatureGenerator$InvalidSignatureException);
	});
	return class$;
}

$Class* Types$SignatureGenerator$InvalidSignatureException::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com