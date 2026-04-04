#include <com/sun/org/apache/xalan/internal/xsltc/compiler/KeyPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/IdKeyPattern.h>
#include <jcpp.h>

using $IdKeyPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::IdKeyPattern;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

void KeyPattern::init$($String* index, $String* value) {
	$IdKeyPattern::init$(index, value);
}

KeyPattern::KeyPattern() {
}

$Class* KeyPattern::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(KeyPattern, init$, void, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.KeyPattern",
		"com.sun.org.apache.xalan.internal.xsltc.compiler.IdKeyPattern",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(KeyPattern, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyPattern);
	});
	return class$;
}

$Class* KeyPattern::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com