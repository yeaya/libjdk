#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Closure.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase.h>
#include <jcpp.h>

using $VariableRefBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase;
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

$Class* Closure::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addVariable", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Closure, addVariable, void, $VariableRefBase*)},
		{"getInnerClassName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Closure, getInnerClassName, $String*)},
		{"getParentClosure", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Closure;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Closure, getParentClosure, Closure*)},
		{"inInnerClass", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Closure, inInnerClass, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.Closure",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Closure, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Closure);
	});
	return class$;
}

$Class* Closure::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com