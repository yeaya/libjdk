#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <jcpp.h>

using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
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

$Class* Grammar::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getGrammarDescription", "()Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Grammar, getGrammarDescription, $XMLGrammarDescription*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xni.grammars.Grammar",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Grammar, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Grammar);
	});
	return class$;
}

$Class* Grammar::class$ = nullptr;

							} // grammars
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com