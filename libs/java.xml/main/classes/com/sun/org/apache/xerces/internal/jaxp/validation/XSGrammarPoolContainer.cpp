#include <com/sun/org/apache/xerces/internal/jaxp/validation/XSGrammarPoolContainer.h>

#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <jcpp.h>

using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$MethodInfo _XSGrammarPoolContainer_MethodInfo_[] = {
	{"getFeature", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSGrammarPoolContainer, getFeature, $Boolean*, $String*)},
	{"getGrammarPool", "()Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSGrammarPoolContainer, getGrammarPool, $XMLGrammarPool*)},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSGrammarPoolContainer, getProperty, $Object*, $String*)},
	{"isFullyComposed", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSGrammarPoolContainer, isFullyComposed, bool)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSGrammarPoolContainer, setFeature, void, $String*, bool)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSGrammarPoolContainer, setProperty, void, $String*, Object$*)},
	{}
};

$ClassInfo _XSGrammarPoolContainer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.jaxp.validation.XSGrammarPoolContainer",
	nullptr,
	nullptr,
	nullptr,
	_XSGrammarPoolContainer_MethodInfo_
};

$Object* allocate$XSGrammarPoolContainer($Class* clazz) {
	return $of($alloc(XSGrammarPoolContainer));
}

$Class* XSGrammarPoolContainer::load$($String* name, bool initialize) {
	$loadClass(XSGrammarPoolContainer, name, initialize, &_XSGrammarPoolContainer_ClassInfo_, allocate$XSGrammarPoolContainer);
	return class$;
}

$Class* XSGrammarPoolContainer::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com