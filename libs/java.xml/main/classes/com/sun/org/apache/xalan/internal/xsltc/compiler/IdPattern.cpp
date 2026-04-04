#include <com/sun/org/apache/xalan/internal/xsltc/compiler/IdPattern.h>
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

void IdPattern::init$($String* id) {
	$IdKeyPattern::init$("##id"_s, id);
}

IdPattern::IdPattern() {
}

$Class* IdPattern::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IdPattern, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.IdPattern",
		"com.sun.org.apache.xalan.internal.xsltc.compiler.IdKeyPattern",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(IdPattern, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IdPattern);
	});
	return class$;
}

$Class* IdPattern::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com