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

$MethodInfo _Grammar_MethodInfo_[] = {
	{"getGrammarDescription", "()Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Grammar, getGrammarDescription, $XMLGrammarDescription*)},
	{}
};

$ClassInfo _Grammar_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.grammars.Grammar",
	nullptr,
	nullptr,
	nullptr,
	_Grammar_MethodInfo_
};

$Object* allocate$Grammar($Class* clazz) {
	return $of($alloc(Grammar));
}

$Class* Grammar::load$($String* name, bool initialize) {
	$loadClass(Grammar, name, initialize, &_Grammar_ClassInfo_, allocate$Grammar);
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