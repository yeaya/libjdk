#include <com/sun/org/apache/xerces/internal/xni/grammars/XSGrammar.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModel.h>
#include <jcpp.h>

using $XSGrammarArray = $Array<::com::sun::org::apache::xerces::internal::xni::grammars::XSGrammar>;
using $XSModel = ::com::sun::org::apache::xerces::internal::xs::XSModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace grammars {

$Class* XSGrammar::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"toXSModel", "()Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSGrammar, toXSModel, $XSModel*)},
		{"toXSModel", "([Lcom/sun/org/apache/xerces/internal/xni/grammars/XSGrammar;)Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSGrammar, toXSModel, $XSModel*, $XSGrammarArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xni.grammars.XSGrammar",
		nullptr,
		"com.sun.org.apache.xerces.internal.xni.grammars.Grammar",
		nullptr,
		methodInfos$$
	};
	$loadClass(XSGrammar, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSGrammar);
	});
	return class$;
}

$Class* XSGrammar::class$ = nullptr;

							} // grammars
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com