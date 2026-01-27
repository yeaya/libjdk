#include <com/sun/org/apache/xpath/internal/jaxp/XPathExpressionImpl.h>

#include <com/sun/org/apache/xpath/internal/XPath.h>
#include <com/sun/org/apache/xpath/internal/jaxp/JAXPPrefixResolver.h>
#include <com/sun/org/apache/xpath/internal/jaxp/XPathImplUtil.h>
#include <com/sun/org/apache/xpath/internal/jaxp/XPathResultImpl.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/transform/TransformerException.h>
#include <javax/xml/xpath/XPathConstants.h>
#include <javax/xml/xpath/XPathEvaluationResult.h>
#include <javax/xml/xpath/XPathExpressionException.h>
#include <javax/xml/xpath/XPathFunctionException.h>
#include <javax/xml/xpath/XPathFunctionResolver.h>
#include <javax/xml/xpath/XPathVariableResolver.h>
#include <jdk/xml/internal/JdkXmlFeatures$XmlFeature.h>
#include <jdk/xml/internal/JdkXmlFeatures.h>
#include <org/w3c/dom/Document.h>
#include <org/xml/sax/InputSource.h>
#include <jcpp.h>

#undef JDK_OVERRIDE_PARSER
#undef STRING

using $XPath = ::com::sun::org::apache::xpath::internal::XPath;
using $JAXPPrefixResolver = ::com::sun::org::apache::xpath::internal::jaxp::JAXPPrefixResolver;
using $XPathImplUtil = ::com::sun::org::apache::xpath::internal::jaxp::XPathImplUtil;
using $XPathResultImpl = ::com::sun::org::apache::xpath::internal::jaxp::XPathResultImpl;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $QName = ::javax::xml::namespace$::QName;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $XPathConstants = ::javax::xml::xpath::XPathConstants;
using $XPathEvaluationResult = ::javax::xml::xpath::XPathEvaluationResult;
using $XPathExpressionException = ::javax::xml::xpath::XPathExpressionException;
using $XPathFunctionException = ::javax::xml::xpath::XPathFunctionException;
using $XPathFunctionResolver = ::javax::xml::xpath::XPathFunctionResolver;
using $XPathVariableResolver = ::javax::xml::xpath::XPathVariableResolver;
using $JdkXmlFeatures = ::jdk::xml::internal::JdkXmlFeatures;
using $JdkXmlFeatures$XmlFeature = ::jdk::xml::internal::JdkXmlFeatures$XmlFeature;
using $Document = ::org::w3c::dom::Document;
using $InputSource = ::org::xml::sax::InputSource;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace jaxp {

$FieldInfo _XPathExpressionImpl_FieldInfo_[] = {
	{"xpath", "Lcom/sun/org/apache/xpath/internal/XPath;", nullptr, $PRIVATE, $field(XPathExpressionImpl, xpath)},
	{}
};

$MethodInfo _XPathExpressionImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(XPathExpressionImpl, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/XPath;Lcom/sun/org/apache/xpath/internal/jaxp/JAXPPrefixResolver;Ljavax/xml/xpath/XPathFunctionResolver;Ljavax/xml/xpath/XPathVariableResolver;)V", nullptr, $PROTECTED, $method(XPathExpressionImpl, init$, void, $XPath*, $JAXPPrefixResolver*, $XPathFunctionResolver*, $XPathVariableResolver*)},
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/XPath;Lcom/sun/org/apache/xpath/internal/jaxp/JAXPPrefixResolver;Ljavax/xml/xpath/XPathFunctionResolver;Ljavax/xml/xpath/XPathVariableResolver;ZLjdk/xml/internal/JdkXmlFeatures;)V", nullptr, $PROTECTED, $method(XPathExpressionImpl, init$, void, $XPath*, $JAXPPrefixResolver*, $XPathFunctionResolver*, $XPathVariableResolver*, bool, $JdkXmlFeatures*)},
	{"eval", "(Ljava/lang/Object;Ljavax/xml/namespace/QName;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPathExpressionImpl, eval, $Object*, Object$*, $QName*), "javax.xml.transform.TransformerException"},
	{"evaluate", "(Ljava/lang/Object;Ljavax/xml/namespace/QName;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPathExpressionImpl, evaluate, $Object*, Object$*, $QName*), "javax.xml.xpath.XPathExpressionException"},
	{"evaluate", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XPathExpressionImpl, evaluate, $String*, Object$*), "javax.xml.xpath.XPathExpressionException"},
	{"evaluate", "(Lorg/xml/sax/InputSource;Ljavax/xml/namespace/QName;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPathExpressionImpl, evaluate, $Object*, $InputSource*, $QName*), "javax.xml.xpath.XPathExpressionException"},
	{"evaluate", "(Lorg/xml/sax/InputSource;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XPathExpressionImpl, evaluate, $String*, $InputSource*), "javax.xml.xpath.XPathExpressionException"},
	{"evaluateExpression", "(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Object;Ljava/lang/Class<TT;>;)TT;", $PUBLIC, $virtualMethod(XPathExpressionImpl, evaluateExpression, $Object*, Object$*, $Class*), "javax.xml.xpath.XPathExpressionException"},
	{"evaluateExpression", "(Ljava/lang/Object;)Ljavax/xml/xpath/XPathEvaluationResult;", "(Ljava/lang/Object;)Ljavax/xml/xpath/XPathEvaluationResult<*>;", $PUBLIC, $virtualMethod(XPathExpressionImpl, evaluateExpression, $XPathEvaluationResult*, Object$*), "javax.xml.xpath.XPathExpressionException"},
	{"evaluateExpression", "(Lorg/xml/sax/InputSource;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Lorg/xml/sax/InputSource;Ljava/lang/Class<TT;>;)TT;", $PUBLIC, $virtualMethod(XPathExpressionImpl, evaluateExpression, $Object*, $InputSource*, $Class*), "javax.xml.xpath.XPathExpressionException"},
	{"evaluateExpression", "(Lorg/xml/sax/InputSource;)Ljavax/xml/xpath/XPathEvaluationResult;", "(Lorg/xml/sax/InputSource;)Ljavax/xml/xpath/XPathEvaluationResult<*>;", $PUBLIC, $virtualMethod(XPathExpressionImpl, evaluateExpression, $XPathEvaluationResult*, $InputSource*), "javax.xml.xpath.XPathExpressionException"},
	{"setXPath", "(Lcom/sun/org/apache/xpath/internal/XPath;)V", nullptr, $PUBLIC, $virtualMethod(XPathExpressionImpl, setXPath, void, $XPath*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XPathExpressionImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.jaxp.XPathExpressionImpl",
	"com.sun.org.apache.xpath.internal.jaxp.XPathImplUtil",
	"javax.xml.xpath.XPathExpression",
	_XPathExpressionImpl_FieldInfo_,
	_XPathExpressionImpl_MethodInfo_
};

$Object* allocate$XPathExpressionImpl($Class* clazz) {
	return $of($alloc(XPathExpressionImpl));
}

int32_t XPathExpressionImpl::hashCode() {
	 return this->$XPathImplUtil::hashCode();
}

bool XPathExpressionImpl::equals(Object$* arg0) {
	 return this->$XPathImplUtil::equals(arg0);
}

$Object* XPathExpressionImpl::clone() {
	 return this->$XPathImplUtil::clone();
}

$String* XPathExpressionImpl::toString() {
	 return this->$XPathImplUtil::toString();
}

void XPathExpressionImpl::finalize() {
	this->$XPathImplUtil::finalize();
}

void XPathExpressionImpl::init$() {
	XPathExpressionImpl::init$(nullptr, nullptr, nullptr, nullptr, false, $$new($JdkXmlFeatures, false));
}

void XPathExpressionImpl::init$($XPath* xpath, $JAXPPrefixResolver* prefixResolver, $XPathFunctionResolver* functionResolver, $XPathVariableResolver* variableResolver) {
	XPathExpressionImpl::init$(xpath, prefixResolver, functionResolver, variableResolver, false, $$new($JdkXmlFeatures, false));
}

void XPathExpressionImpl::init$($XPath* xpath, $JAXPPrefixResolver* prefixResolver, $XPathFunctionResolver* functionResolver, $XPathVariableResolver* variableResolver, bool featureSecureProcessing, $JdkXmlFeatures* featureManager) {
	$XPathImplUtil::init$();
	$set(this, xpath, xpath);
	$set(this, prefixResolver, prefixResolver);
	$set(this, functionResolver, functionResolver);
	$set(this, variableResolver, variableResolver);
	this->featureSecureProcessing = featureSecureProcessing;
	$init($JdkXmlFeatures$XmlFeature);
	this->overrideDefaultParser = $nc(featureManager)->getFeature($JdkXmlFeatures$XmlFeature::JDK_OVERRIDE_PARSER);
	$set(this, featureManager, featureManager);
}

void XPathExpressionImpl::setXPath($XPath* xpath) {
	$set(this, xpath, xpath);
}

$Object* XPathExpressionImpl::eval(Object$* item, $QName* returnType) {
	$var($XObject, resultObject, eval(item, this->xpath));
	return $of(getResultAsType(resultObject, returnType));
}

$Object* XPathExpressionImpl::evaluate(Object$* item, $QName* returnType) {
	isSupported(returnType);
	try {
		return $of(eval(item, returnType));
	} catch ($NullPointerException& npe) {
		$throwNew($XPathExpressionException, static_cast<$Throwable*>(npe));
	} catch ($TransformerException& te) {
		$var($Throwable, nestedException, te->getException());
		if ($instanceOf($XPathFunctionException, nestedException)) {
			$throw($cast($XPathFunctionException, nestedException));
		} else {
			$throwNew($XPathExpressionException, static_cast<$Throwable*>(te));
		}
	}
	$shouldNotReachHere();
}

$String* XPathExpressionImpl::evaluate(Object$* item) {
	$init($XPathConstants);
	return $cast($String, this->evaluate(item, $XPathConstants::STRING));
}

$Object* XPathExpressionImpl::evaluate($InputSource* source, $QName* returnType) {
	isSupported(returnType);
	try {
		$var($Document, document, getDocument(source));
		return $of(eval($of(document), returnType));
	} catch ($TransformerException& e) {
		$throwNew($XPathExpressionException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$String* XPathExpressionImpl::evaluate($InputSource* source) {
	$init($XPathConstants);
	return $cast($String, this->evaluate(source, $XPathConstants::STRING));
}

$Object* XPathExpressionImpl::evaluateExpression(Object$* item, $Class* type) {
	isSupportedClassType(type);
	try {
		$var($XObject, resultObject, eval(item, this->xpath));
		$load($XPathEvaluationResult);
		if ($nc(type)->isAssignableFrom($XPathEvaluationResult::class$)) {
			return $of(getXPathResult(resultObject, type));
		} else {
			return $of($XPathResultImpl::getValue(resultObject, type));
		}
	} catch ($TransformerException& te) {
		$throwNew($XPathExpressionException, static_cast<$Throwable*>(te));
	}
	$shouldNotReachHere();
}

$XPathEvaluationResult* XPathExpressionImpl::evaluateExpression(Object$* item) {
	$load($XPathEvaluationResult);
	return $cast($XPathEvaluationResult, evaluateExpression(item, $XPathEvaluationResult::class$));
}

$Object* XPathExpressionImpl::evaluateExpression($InputSource* source, $Class* type) {
	$var($Document, document, getDocument(source));
	return $of(evaluateExpression($of(document), type));
}

$XPathEvaluationResult* XPathExpressionImpl::evaluateExpression($InputSource* source) {
	$load($XPathEvaluationResult);
	return $cast($XPathEvaluationResult, evaluateExpression(source, $XPathEvaluationResult::class$));
}

XPathExpressionImpl::XPathExpressionImpl() {
}

$Class* XPathExpressionImpl::load$($String* name, bool initialize) {
	$loadClass(XPathExpressionImpl, name, initialize, &_XPathExpressionImpl_ClassInfo_, allocate$XPathExpressionImpl);
	return class$;
}

$Class* XPathExpressionImpl::class$ = nullptr;

						} // jaxp
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com