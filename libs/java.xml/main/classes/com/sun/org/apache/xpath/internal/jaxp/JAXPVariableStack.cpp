#include <com/sun/org/apache/xpath/internal/jaxp/JAXPVariableStack.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xml/internal/utils/QName.h>
#include <com/sun/org/apache/xpath/internal/VariableStack.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/transform/TransformerException.h>
#include <javax/xml/xpath/XPathVariableResolver.h>
#include <jcpp.h>

#undef ER_ARG_CANNOT_BE_NULL
#undef ER_RESOLVE_VARIABLE_RETURNS_NULL

using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $QName = ::com::sun::org::apache::xml::internal::utils::QName;
using $VariableStack = ::com::sun::org::apache::xpath::internal::VariableStack;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $1QName = ::javax::xml::namespace$::QName;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $XPathVariableResolver = ::javax::xml::xpath::XPathVariableResolver;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace jaxp {

$FieldInfo _JAXPVariableStack_FieldInfo_[] = {
	{"resolver", "Ljavax/xml/xpath/XPathVariableResolver;", nullptr, $PRIVATE | $FINAL, $field(JAXPVariableStack, resolver)},
	{}
};

$MethodInfo _JAXPVariableStack_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/xpath/XPathVariableResolver;)V", nullptr, $PUBLIC, $method(JAXPVariableStack, init$, void, $XPathVariableResolver*)},
	{"getVariableOrParam", "(Lcom/sun/org/apache/xpath/internal/XPathContext;Lcom/sun/org/apache/xml/internal/utils/QName;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(JAXPVariableStack, getVariableOrParam, $XObject*, $XPathContext*, $QName*), "javax.xml.transform.TransformerException,java.lang.IllegalArgumentException"},
	{}
};

$ClassInfo _JAXPVariableStack_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.jaxp.JAXPVariableStack",
	"com.sun.org.apache.xpath.internal.VariableStack",
	nullptr,
	_JAXPVariableStack_FieldInfo_,
	_JAXPVariableStack_MethodInfo_
};

$Object* allocate$JAXPVariableStack($Class* clazz) {
	return $of($alloc(JAXPVariableStack));
}

void JAXPVariableStack::init$($XPathVariableResolver* resolver) {
	$VariableStack::init$();
	$set(this, resolver, resolver);
}

$XObject* JAXPVariableStack::getVariableOrParam($XPathContext* xctxt, $QName* qname) {
	$useLocalCurrentObjectStackCache();
	if (qname == nullptr) {
		$init($XPATHErrorResources);
		$var($String, fmsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_ARG_CANNOT_BE_NULL, $$new($ObjectArray, {$of("Variable qname"_s)})));
		$throwNew($IllegalArgumentException, fmsg);
	}
	$var($String, var$0, $nc(qname)->getNamespace());
	$var($1QName, name, $new($1QName, var$0, $(qname->getLocalPart())));
	$var($Object, varValue, $nc(this->resolver)->resolveVariable(name));
	if (varValue == nullptr) {
		$init($XPATHErrorResources);
		$var($String, fmsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_RESOLVE_VARIABLE_RETURNS_NULL, $$new($ObjectArray, {$($of(name->toString()))})));
		$throwNew($TransformerException, fmsg);
	}
	return $XObject::create(varValue, xctxt);
}

JAXPVariableStack::JAXPVariableStack() {
}

$Class* JAXPVariableStack::load$($String* name, bool initialize) {
	$loadClass(JAXPVariableStack, name, initialize, &_JAXPVariableStack_ClassInfo_, allocate$JAXPVariableStack);
	return class$;
}

$Class* JAXPVariableStack::class$ = nullptr;

						} // jaxp
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com