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

$MethodInfo _XSGrammar_MethodInfo_[] = {
	{"toXSModel", "()Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSGrammar, toXSModel, $XSModel*)},
	{"toXSModel", "([Lcom/sun/org/apache/xerces/internal/xni/grammars/XSGrammar;)Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSGrammar, toXSModel, $XSModel*, $XSGrammarArray*)},
	{}
};

$ClassInfo _XSGrammar_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.grammars.XSGrammar",
	nullptr,
	"com.sun.org.apache.xerces.internal.xni.grammars.Grammar",
	nullptr,
	_XSGrammar_MethodInfo_
};

$Object* allocate$XSGrammar($Class* clazz) {
	return $of($alloc(XSGrammar));
}

$Class* XSGrammar::load$($String* name, bool initialize) {
	$loadClass(XSGrammar, name, initialize, &_XSGrammar_ClassInfo_, allocate$XSGrammar);
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