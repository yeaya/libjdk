#include <com/sun/org/apache/xml/internal/serializer/dom3/DOM3SerializerImpl.h>

#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/dom3/DOM3TreeWalker.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/WrappedRuntimeException.h>
#include <org/w3c/dom/DOMErrorHandler.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/ls/LSSerializerFilter.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
using $DOM3TreeWalker = ::com::sun::org::apache::xml::internal::serializer::dom3::DOM3TreeWalker;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::serializer::utils::WrappedRuntimeException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMErrorHandler = ::org::w3c::dom::DOMErrorHandler;
using $Node = ::org::w3c::dom::Node;
using $LSSerializerFilter = ::org::w3c::dom::ls::LSSerializerFilter;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace dom3 {

$FieldInfo _DOM3SerializerImpl_FieldInfo_[] = {
	{"fErrorHandler", "Lorg/w3c/dom/DOMErrorHandler;", nullptr, $PRIVATE, $field(DOM3SerializerImpl, fErrorHandler)},
	{"fSerializerFilter", "Lorg/w3c/dom/ls/LSSerializerFilter;", nullptr, $PRIVATE, $field(DOM3SerializerImpl, fSerializerFilter)},
	{"fNewLine", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DOM3SerializerImpl, fNewLine)},
	{"fSerializationHandler", "Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;", nullptr, $PRIVATE, $field(DOM3SerializerImpl, fSerializationHandler)},
	{}
};

$MethodInfo _DOM3SerializerImpl_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC, $method(DOM3SerializerImpl, init$, void, $SerializationHandler*)},
	{"getErrorHandler", "()Lorg/w3c/dom/DOMErrorHandler;", nullptr, $PUBLIC, $virtualMethod(DOM3SerializerImpl, getErrorHandler, $DOMErrorHandler*)},
	{"getNodeFilter", "()Lorg/w3c/dom/ls/LSSerializerFilter;", nullptr, $PUBLIC, $virtualMethod(DOM3SerializerImpl, getNodeFilter, $LSSerializerFilter*)},
	{"serializeDOM3", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(DOM3SerializerImpl, serializeDOM3, void, $Node*), "java.io.IOException"},
	{"setErrorHandler", "(Lorg/w3c/dom/DOMErrorHandler;)V", nullptr, $PUBLIC, $virtualMethod(DOM3SerializerImpl, setErrorHandler, void, $DOMErrorHandler*)},
	{"setNewLine", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DOM3SerializerImpl, setNewLine, void, $String*)},
	{"setNodeFilter", "(Lorg/w3c/dom/ls/LSSerializerFilter;)V", nullptr, $PUBLIC, $virtualMethod(DOM3SerializerImpl, setNodeFilter, void, $LSSerializerFilter*)},
	{"setSerializationHandler", "(Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC, $method(DOM3SerializerImpl, setSerializationHandler, void, $SerializationHandler*)},
	{}
};

$ClassInfo _DOM3SerializerImpl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.dom3.DOM3SerializerImpl",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.serializer.DOM3Serializer",
	_DOM3SerializerImpl_FieldInfo_,
	_DOM3SerializerImpl_MethodInfo_
};

$Object* allocate$DOM3SerializerImpl($Class* clazz) {
	return $of($alloc(DOM3SerializerImpl));
}

void DOM3SerializerImpl::init$($SerializationHandler* handler) {
	$set(this, fSerializationHandler, handler);
}

$DOMErrorHandler* DOM3SerializerImpl::getErrorHandler() {
	return this->fErrorHandler;
}

$LSSerializerFilter* DOM3SerializerImpl::getNodeFilter() {
	return this->fSerializerFilter;
}

void DOM3SerializerImpl::serializeDOM3($Node* node) {
	try {
		$var($DOM3TreeWalker, walker, $new($DOM3TreeWalker, this->fSerializationHandler, this->fErrorHandler, this->fSerializerFilter, this->fNewLine));
		walker->traverse(node);
	} catch ($SAXException& se) {
		$throwNew($WrappedRuntimeException, se);
	}
}

void DOM3SerializerImpl::setErrorHandler($DOMErrorHandler* handler) {
	$set(this, fErrorHandler, handler);
}

void DOM3SerializerImpl::setNodeFilter($LSSerializerFilter* filter) {
	$set(this, fSerializerFilter, filter);
}

void DOM3SerializerImpl::setSerializationHandler($SerializationHandler* handler) {
	$set(this, fSerializationHandler, handler);
}

void DOM3SerializerImpl::setNewLine($String* newLine) {
	$set(this, fNewLine, newLine);
}

DOM3SerializerImpl::DOM3SerializerImpl() {
}

$Class* DOM3SerializerImpl::load$($String* name, bool initialize) {
	$loadClass(DOM3SerializerImpl, name, initialize, &_DOM3SerializerImpl_ClassInfo_, allocate$DOM3SerializerImpl);
	return class$;
}

$Class* DOM3SerializerImpl::class$ = nullptr;

							} // dom3
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com