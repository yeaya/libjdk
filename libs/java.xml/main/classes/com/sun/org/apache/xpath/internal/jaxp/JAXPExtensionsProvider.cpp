#include <com/sun/org/apache/xpath/internal/jaxp/JAXPExtensionsProvider.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncExtFunction.h>
#include <com/sun/org/apache/xpath/internal/objects/XNodeSet.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/transform/TransformerException.h>
#include <javax/xml/xpath/XPathException.h>
#include <javax/xml/xpath/XPathExpressionException.h>
#include <javax/xml/xpath/XPathFunction.h>
#include <javax/xml/xpath/XPathFunctionException.h>
#include <javax/xml/xpath/XPathFunctionResolver.h>
#include <jdk/xml/internal/JdkXmlFeatures$XmlFeature.h>
#include <jdk/xml/internal/JdkXmlFeatures.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

#undef ENABLE_EXTENSION_FUNCTION
#undef ER_ARG_CANNOT_BE_NULL
#undef ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED

using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $FuncExtFunction = ::com::sun::org::apache::xpath::internal::functions::FuncExtFunction;
using $XNodeSet = ::com::sun::org::apache::xpath::internal::objects::XNodeSet;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $QName = ::javax::xml::namespace$::QName;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $XPathException = ::javax::xml::xpath::XPathException;
using $XPathExpressionException = ::javax::xml::xpath::XPathExpressionException;
using $XPathFunction = ::javax::xml::xpath::XPathFunction;
using $XPathFunctionException = ::javax::xml::xpath::XPathFunctionException;
using $XPathFunctionResolver = ::javax::xml::xpath::XPathFunctionResolver;
using $JdkXmlFeatures = ::jdk::xml::internal::JdkXmlFeatures;
using $JdkXmlFeatures$XmlFeature = ::jdk::xml::internal::JdkXmlFeatures$XmlFeature;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace jaxp {

$FieldInfo _JAXPExtensionsProvider_FieldInfo_[] = {
	{"resolver", "Ljavax/xml/xpath/XPathFunctionResolver;", nullptr, $PRIVATE | $FINAL, $field(JAXPExtensionsProvider, resolver)},
	{"extensionInvocationDisabled", "Z", nullptr, $PRIVATE, $field(JAXPExtensionsProvider, extensionInvocationDisabled)},
	{}
};

$MethodInfo _JAXPExtensionsProvider_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/xpath/XPathFunctionResolver;)V", nullptr, $PUBLIC, $method(JAXPExtensionsProvider, init$, void, $XPathFunctionResolver*)},
	{"<init>", "(Ljavax/xml/xpath/XPathFunctionResolver;ZLjdk/xml/internal/JdkXmlFeatures;)V", nullptr, $PUBLIC, $method(JAXPExtensionsProvider, init$, void, $XPathFunctionResolver*, bool, $JdkXmlFeatures*)},
	{"elementAvailable", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(JAXPExtensionsProvider, elementAvailable, bool, $String*, $String*), "javax.xml.transform.TransformerException"},
	{"extFunction", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/List<Lcom/sun/org/apache/xpath/internal/objects/XObject;>;Ljava/lang/Object;)Ljava/lang/Object;", $PUBLIC, $virtualMethod(JAXPExtensionsProvider, extFunction, $Object*, $String*, $String*, $List*, Object$*), "javax.xml.transform.TransformerException"},
	{"extFunction", "(Lcom/sun/org/apache/xpath/internal/functions/FuncExtFunction;Ljava/util/List;)Ljava/lang/Object;", "(Lcom/sun/org/apache/xpath/internal/functions/FuncExtFunction;Ljava/util/List<Lcom/sun/org/apache/xpath/internal/objects/XObject;>;)Ljava/lang/Object;", $PUBLIC, $virtualMethod(JAXPExtensionsProvider, extFunction, $Object*, $FuncExtFunction*, $List*), "javax.xml.transform.TransformerException"},
	{"functionAvailable", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(JAXPExtensionsProvider, functionAvailable, bool, $String*, $String*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _JAXPExtensionsProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.jaxp.JAXPExtensionsProvider",
	"java.lang.Object",
	"com.sun.org.apache.xpath.internal.ExtensionsProvider",
	_JAXPExtensionsProvider_FieldInfo_,
	_JAXPExtensionsProvider_MethodInfo_
};

$Object* allocate$JAXPExtensionsProvider($Class* clazz) {
	return $of($alloc(JAXPExtensionsProvider));
}

void JAXPExtensionsProvider::init$($XPathFunctionResolver* resolver) {
	this->extensionInvocationDisabled = false;
	$set(this, resolver, resolver);
	this->extensionInvocationDisabled = false;
}

void JAXPExtensionsProvider::init$($XPathFunctionResolver* resolver, bool featureSecureProcessing, $JdkXmlFeatures* featureManager) {
	this->extensionInvocationDisabled = false;
	$set(this, resolver, resolver);
	$init($JdkXmlFeatures$XmlFeature);
	if (featureSecureProcessing && !$nc(featureManager)->getFeature($JdkXmlFeatures$XmlFeature::ENABLE_EXTENSION_FUNCTION)) {
		this->extensionInvocationDisabled = true;
	}
}

bool JAXPExtensionsProvider::functionAvailable($String* ns, $String* funcName) {
	$useLocalCurrentObjectStackCache();
	try {
		if (funcName == nullptr) {
			$init($XPATHErrorResources);
			$var($String, fmsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_ARG_CANNOT_BE_NULL, $$new($ObjectArray, {$of("Function Name"_s)})));
			$throwNew($NullPointerException, fmsg);
		}
		$var($QName, myQName, $new($QName, ns, funcName));
		$var($XPathFunction, xpathFunction, $nc(this->resolver)->resolveFunction(myQName, 0));
		if (xpathFunction == nullptr) {
			return false;
		}
		return true;
	} catch ($Exception& e) {
		return false;
	}
	$shouldNotReachHere();
}

bool JAXPExtensionsProvider::elementAvailable($String* ns, $String* elemName) {
	return false;
}

$Object* JAXPExtensionsProvider::extFunction($String* ns, $String* funcName, $List* argVec, Object$* methodKey) {
	$useLocalCurrentObjectStackCache();
	try {
		if (funcName == nullptr) {
			$init($XPATHErrorResources);
			$var($String, fmsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_ARG_CANNOT_BE_NULL, $$new($ObjectArray, {$of("Function Name"_s)})));
			$throwNew($NullPointerException, fmsg);
		}
		$var($QName, myQName, $new($QName, ns, funcName));
		if (this->extensionInvocationDisabled) {
			$init($XPATHErrorResources);
			$var($String, fmsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED, $$new($ObjectArray, {$($of(myQName->toString()))})));
			$throwNew($XPathFunctionException, fmsg);
		}
		int32_t arity = $nc(argVec)->size();
		$var($XPathFunction, xpathFunction, $nc(this->resolver)->resolveFunction(myQName, arity));
		$var($List, argList, $new($ArrayList, arity));
		for (int32_t i = 0; i < arity; ++i) {
			$var($XObject, argument, $cast($XObject, argVec->get(i)));
			if ($instanceOf($XNodeSet, argument)) {
				argList->add(i, $($nc(($cast($XNodeSet, argument)))->nodelist()));
			} else if ($instanceOf($XObject, argument)) {
				$var($Object, passedArgument, $nc(argument)->object());
				argList->add(i, passedArgument);
			} else {
				argList->add(i, argument);
			}
		}
		return $of(($nc(xpathFunction)->evaluate(argList)));
	} catch ($XPathFunctionException& xfe) {
		$throwNew($WrappedRuntimeException, xfe);
	} catch ($Exception& e) {
		$throwNew($TransformerException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$Object* JAXPExtensionsProvider::extFunction($FuncExtFunction* extFunction, $List* argVec) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, namespace$, $nc(extFunction)->getNamespace());
		$var($String, functionName, extFunction->getFunctionName());
		int32_t arity = extFunction->getArgCount();
		$var($QName, myQName, $new($QName, namespace$, functionName));
		if (this->extensionInvocationDisabled) {
			$init($XPATHErrorResources);
			$var($String, fmsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED, $$new($ObjectArray, {$($of(myQName->toString()))})));
			$throwNew($XPathFunctionException, fmsg);
		}
		$var($XPathFunction, xpathFunction, $nc(this->resolver)->resolveFunction(myQName, arity));
		$var($List, argList, $new($ArrayList, arity));
		for (int32_t i = 0; i < arity; ++i) {
			$var($XObject, argument, $cast($XObject, $nc(argVec)->get(i)));
			if ($instanceOf($XNodeSet, argument)) {
				argList->add(i, $($nc(($cast($XNodeSet, argument)))->nodelist()));
			} else if ($instanceOf($XObject, argument)) {
				$var($Object, passedArgument, $nc(argument)->object());
				argList->add(i, passedArgument);
			} else {
				argList->add(i, argument);
			}
		}
		return $of(($nc(xpathFunction)->evaluate(argList)));
	} catch ($XPathFunctionException& xfe) {
		$throwNew($WrappedRuntimeException, xfe);
	} catch ($Exception& e) {
		$throwNew($TransformerException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

JAXPExtensionsProvider::JAXPExtensionsProvider() {
}

$Class* JAXPExtensionsProvider::load$($String* name, bool initialize) {
	$loadClass(JAXPExtensionsProvider, name, initialize, &_JAXPExtensionsProvider_ClassInfo_, allocate$JAXPExtensionsProvider);
	return class$;
}

$Class* JAXPExtensionsProvider::class$ = nullptr;

						} // jaxp
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com