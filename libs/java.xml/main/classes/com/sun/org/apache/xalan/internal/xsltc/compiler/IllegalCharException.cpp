#include <com/sun/org/apache/xalan/internal/xsltc/compiler/IllegalCharException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

void IllegalCharException::init$($String* s) {
	$Exception::init$(s);
}

IllegalCharException::IllegalCharException() {
}

IllegalCharException::IllegalCharException(const IllegalCharException& e) : $Exception(e) {
}

void IllegalCharException::throw$() {
	throw *this;
}

$Class* IllegalCharException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(IllegalCharException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IllegalCharException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.IllegalCharException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IllegalCharException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IllegalCharException);
	});
	return class$;
}

$Class* IllegalCharException::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com