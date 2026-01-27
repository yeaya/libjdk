#include <com/sun/org/apache/xerces/internal/util/DOMErrorHandlerWrapper.h>

#include <com/sun/org/apache/xerces/internal/dom/DOMErrorImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMLocatorImpl.h>
#include <com/sun/org/apache/xerces/internal/util/DOMErrorHandlerWrapper$DOMErrorTypeMap.h>
#include <com/sun/org/apache/xerces/internal/util/XMLErrorCode.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParseException.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <org/w3c/dom/DOMError.h>
#include <org/w3c/dom/DOMErrorHandler.h>
#include <org/w3c/dom/DOMLocator.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef SEVERITY_ERROR
#undef SEVERITY_FATAL_ERROR
#undef SEVERITY_WARNING

using $DOMErrorImpl = ::com::sun::org::apache::xerces::internal::dom::DOMErrorImpl;
using $DOMLocatorImpl = ::com::sun::org::apache::xerces::internal::dom::DOMLocatorImpl;
using $DOMErrorHandlerWrapper$DOMErrorTypeMap = ::com::sun::org::apache::xerces::internal::util::DOMErrorHandlerWrapper$DOMErrorTypeMap;
using $XMLErrorCode = ::com::sun::org::apache::xerces::internal::util::XMLErrorCode;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLErrorHandler = ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler;
using $XMLParseException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DOMError = ::org::w3c::dom::DOMError;
using $DOMErrorHandler = ::org::w3c::dom::DOMErrorHandler;
using $DOMLocator = ::org::w3c::dom::DOMLocator;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _DOMErrorHandlerWrapper_FieldInfo_[] = {
	{"fDomErrorHandler", "Lorg/w3c/dom/DOMErrorHandler;", nullptr, $PROTECTED, $field(DOMErrorHandlerWrapper, fDomErrorHandler)},
	{"eStatus", "Z", nullptr, 0, $field(DOMErrorHandlerWrapper, eStatus)},
	{"fOut", "Ljava/io/PrintWriter;", nullptr, $PROTECTED, $field(DOMErrorHandlerWrapper, fOut)},
	{"fCurrentNode", "Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $field(DOMErrorHandlerWrapper, fCurrentNode)},
	{"fErrorCode", "Lcom/sun/org/apache/xerces/internal/util/XMLErrorCode;", nullptr, $PROTECTED | $FINAL, $field(DOMErrorHandlerWrapper, fErrorCode)},
	{"fDOMError", "Lcom/sun/org/apache/xerces/internal/dom/DOMErrorImpl;", nullptr, $PROTECTED | $FINAL, $field(DOMErrorHandlerWrapper, fDOMError)},
	{}
};

$MethodInfo _DOMErrorHandlerWrapper_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(DOMErrorHandlerWrapper, init$, void)},
	{"<init>", "(Lorg/w3c/dom/DOMErrorHandler;)V", nullptr, $PUBLIC, $method(DOMErrorHandlerWrapper, init$, void, $DOMErrorHandler*)},
	{"error", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC, $virtualMethod(DOMErrorHandlerWrapper, error, void, $String*, $String*, $XMLParseException*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"fatalError", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC, $virtualMethod(DOMErrorHandlerWrapper, fatalError, void, $String*, $String*, $XMLParseException*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getErrorHandler", "()Lorg/w3c/dom/DOMErrorHandler;", nullptr, $PUBLIC, $virtualMethod(DOMErrorHandlerWrapper, getErrorHandler, $DOMErrorHandler*)},
	{"handleError", "(Lorg/w3c/dom/DOMError;)Z", nullptr, $PUBLIC, $virtualMethod(DOMErrorHandlerWrapper, handleError, bool, $DOMError*)},
	{"printError", "(Lorg/w3c/dom/DOMError;)V", nullptr, $PRIVATE, $method(DOMErrorHandlerWrapper, printError, void, $DOMError*)},
	{"setErrorHandler", "(Lorg/w3c/dom/DOMErrorHandler;)V", nullptr, $PUBLIC, $virtualMethod(DOMErrorHandlerWrapper, setErrorHandler, void, $DOMErrorHandler*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"warning", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC, $virtualMethod(DOMErrorHandlerWrapper, warning, void, $String*, $String*, $XMLParseException*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$InnerClassInfo _DOMErrorHandlerWrapper_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.util.DOMErrorHandlerWrapper$DOMErrorTypeMap", "com.sun.org.apache.xerces.internal.util.DOMErrorHandlerWrapper", "DOMErrorTypeMap", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DOMErrorHandlerWrapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.DOMErrorHandlerWrapper",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLErrorHandler,org.w3c.dom.DOMErrorHandler",
	_DOMErrorHandlerWrapper_FieldInfo_,
	_DOMErrorHandlerWrapper_MethodInfo_,
	nullptr,
	nullptr,
	_DOMErrorHandlerWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.util.DOMErrorHandlerWrapper$DOMErrorTypeMap"
};

$Object* allocate$DOMErrorHandlerWrapper($Class* clazz) {
	return $of($alloc(DOMErrorHandlerWrapper));
}

int32_t DOMErrorHandlerWrapper::hashCode() {
	 return this->$XMLErrorHandler::hashCode();
}

bool DOMErrorHandlerWrapper::equals(Object$* arg0) {
	 return this->$XMLErrorHandler::equals(arg0);
}

$Object* DOMErrorHandlerWrapper::clone() {
	 return this->$XMLErrorHandler::clone();
}

$String* DOMErrorHandlerWrapper::toString() {
	 return this->$XMLErrorHandler::toString();
}

void DOMErrorHandlerWrapper::finalize() {
	this->$XMLErrorHandler::finalize();
}

void DOMErrorHandlerWrapper::init$() {
	this->eStatus = true;
	$set(this, fErrorCode, $new($XMLErrorCode, nullptr, nullptr));
	$set(this, fDOMError, $new($DOMErrorImpl));
	$set(this, fOut, $new($PrintWriter, static_cast<$OutputStream*>($System::err)));
}

void DOMErrorHandlerWrapper::init$($DOMErrorHandler* domErrorHandler) {
	this->eStatus = true;
	$set(this, fErrorCode, $new($XMLErrorCode, nullptr, nullptr));
	$set(this, fDOMError, $new($DOMErrorImpl));
	$set(this, fDomErrorHandler, domErrorHandler);
}

void DOMErrorHandlerWrapper::setErrorHandler($DOMErrorHandler* errorHandler) {
	$set(this, fDomErrorHandler, errorHandler);
}

$DOMErrorHandler* DOMErrorHandlerWrapper::getErrorHandler() {
	return this->fDomErrorHandler;
}

void DOMErrorHandlerWrapper::warning($String* domain, $String* key, $XMLParseException* exception) {
	$nc(this->fDOMError)->fSeverity = $DOMError::SEVERITY_WARNING;
	$set($nc(this->fDOMError), fException, exception);
	$set($nc(this->fDOMError), fType, key);
	$set($nc(this->fDOMError), fRelatedData, ($set($nc(this->fDOMError), fMessage, $nc(exception)->getMessage())));
	$var($DOMLocatorImpl, locator, $nc(this->fDOMError)->fLocator);
	if (locator != nullptr) {
		locator->fColumnNumber = exception->getColumnNumber();
		locator->fLineNumber = exception->getLineNumber();
		locator->fUtf16Offset = exception->getCharacterOffset();
		$set(locator, fUri, exception->getExpandedSystemId());
		$set(locator, fRelatedNode, this->fCurrentNode);
	}
	if (this->fDomErrorHandler != nullptr) {
		$nc(this->fDomErrorHandler)->handleError(this->fDOMError);
	}
}

void DOMErrorHandlerWrapper::error($String* domain, $String* key, $XMLParseException* exception) {
	$nc(this->fDOMError)->fSeverity = $DOMError::SEVERITY_ERROR;
	$set($nc(this->fDOMError), fException, exception);
	$set($nc(this->fDOMError), fType, key);
	$set($nc(this->fDOMError), fRelatedData, ($set($nc(this->fDOMError), fMessage, $nc(exception)->getMessage())));
	$var($DOMLocatorImpl, locator, $nc(this->fDOMError)->fLocator);
	if (locator != nullptr) {
		locator->fColumnNumber = exception->getColumnNumber();
		locator->fLineNumber = exception->getLineNumber();
		locator->fUtf16Offset = exception->getCharacterOffset();
		$set(locator, fUri, exception->getExpandedSystemId());
		$set(locator, fRelatedNode, this->fCurrentNode);
	}
	if (this->fDomErrorHandler != nullptr) {
		$nc(this->fDomErrorHandler)->handleError(this->fDOMError);
	}
}

void DOMErrorHandlerWrapper::fatalError($String* domain, $String* key, $XMLParseException* exception) {
	$useLocalCurrentObjectStackCache();
	$nc(this->fDOMError)->fSeverity = $DOMError::SEVERITY_FATAL_ERROR;
	$set($nc(this->fDOMError), fException, exception);
	$nc(this->fErrorCode)->setValues(domain, key);
	$var($String, domErrorType, $DOMErrorHandlerWrapper$DOMErrorTypeMap::getDOMErrorType(this->fErrorCode));
	$set($nc(this->fDOMError), fType, (domErrorType != nullptr) ? domErrorType : key);
	$set($nc(this->fDOMError), fRelatedData, ($set($nc(this->fDOMError), fMessage, $nc(exception)->getMessage())));
	$var($DOMLocatorImpl, locator, $nc(this->fDOMError)->fLocator);
	if (locator != nullptr) {
		locator->fColumnNumber = exception->getColumnNumber();
		locator->fLineNumber = exception->getLineNumber();
		locator->fUtf16Offset = exception->getCharacterOffset();
		$set(locator, fUri, exception->getExpandedSystemId());
		$set(locator, fRelatedNode, this->fCurrentNode);
	}
	if (this->fDomErrorHandler != nullptr) {
		$nc(this->fDomErrorHandler)->handleError(this->fDOMError);
	}
}

bool DOMErrorHandlerWrapper::handleError($DOMError* error) {
	printError(error);
	return this->eStatus;
}

void DOMErrorHandlerWrapper::printError($DOMError* error) {
	$useLocalCurrentObjectStackCache();
	int32_t severity = $nc(error)->getSeverity();
	$nc(this->fOut)->print("["_s);
	if (severity == $DOMError::SEVERITY_WARNING) {
		$nc(this->fOut)->print("Warning"_s);
	} else if (severity == $DOMError::SEVERITY_ERROR) {
		$nc(this->fOut)->print("Error"_s);
	} else {
		$nc(this->fOut)->print("FatalError"_s);
		this->eStatus = false;
	}
	$nc(this->fOut)->print("] "_s);
	$var($DOMLocator, locator, error->getLocation());
	if (locator != nullptr) {
		$nc(this->fOut)->print(locator->getLineNumber());
		$nc(this->fOut)->print(":"_s);
		$nc(this->fOut)->print(locator->getColumnNumber());
		$nc(this->fOut)->print(":"_s);
		$nc(this->fOut)->print(locator->getByteOffset());
		$nc(this->fOut)->print(","_s);
		$nc(this->fOut)->print(locator->getUtf16Offset());
		$var($Node, node, locator->getRelatedNode());
		if (node != nullptr) {
			$nc(this->fOut)->print("["_s);
			$nc(this->fOut)->print($(node->getNodeName()));
			$nc(this->fOut)->print("]"_s);
		}
		$var($String, systemId, locator->getUri());
		if (systemId != nullptr) {
			int32_t index = systemId->lastIndexOf((int32_t)u'/');
			if (index != -1) {
				$assign(systemId, systemId->substring(index + 1));
			}
			$nc(this->fOut)->print(": "_s);
			$nc(this->fOut)->print(systemId);
		}
	}
	$nc(this->fOut)->print(":"_s);
	$nc(this->fOut)->print($(error->getMessage()));
	$nc(this->fOut)->println();
	$nc(this->fOut)->flush();
}

DOMErrorHandlerWrapper::DOMErrorHandlerWrapper() {
}

$Class* DOMErrorHandlerWrapper::load$($String* name, bool initialize) {
	$loadClass(DOMErrorHandlerWrapper, name, initialize, &_DOMErrorHandlerWrapper_ClassInfo_, allocate$DOMErrorHandlerWrapper);
	return class$;
}

$Class* DOMErrorHandlerWrapper::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com