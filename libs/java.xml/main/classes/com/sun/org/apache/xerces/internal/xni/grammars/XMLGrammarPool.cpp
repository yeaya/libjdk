#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <jcpp.h>

using $GrammarArray = $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>;
using $Grammar = ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar;
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

$Class* XMLGrammarPool::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"cacheGrammars", "(Ljava/lang/String;[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGrammarPool, cacheGrammars, void, $String*, $GrammarArray*)},
		{"clear", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGrammarPool, clear, void)},
		{"lockPool", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGrammarPool, lockPool, void)},
		{"retrieveGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGrammarPool, retrieveGrammar, $Grammar*, $XMLGrammarDescription*)},
		{"retrieveInitialGrammarSet", "(Ljava/lang/String;)[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGrammarPool, retrieveInitialGrammarSet, $GrammarArray*, $String*)},
		{"unlockPool", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGrammarPool, unlockPool, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarPool",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XMLGrammarPool, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLGrammarPool);
	});
	return class$;
}

$Class* XMLGrammarPool::class$ = nullptr;

							} // grammars
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com