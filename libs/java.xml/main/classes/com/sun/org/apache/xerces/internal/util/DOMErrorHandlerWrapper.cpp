#include <com/sun/org/apache/xerces/internal/util/DOMErrorHandlerWrapper.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMErrorImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMLocatorImpl.h>
#include <com/sun/org/apache/xerces/internal/util/DOMErrorHandlerWrapper$DOMErrorTypeMap.h>
#include <com/sun/org/apache/xerces/internal/util/XMLErrorCode.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParseException.h>
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
using $XMLErrorHandler = ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler;
using $XMLParseException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
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
	$set(this, fOut, $new($PrintWriter, $System::err));
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
	$set(this->fDOMError, fException, exception);
	$set(this->fDOMError, fType, key);
	$set(this->fDOMError, fRelatedData, $set(this->fDOMError, fMessage, $nc(exception)->getMessage()));
	$var($DOMLocatorImpl, locator, this->fDOMError->fLocator);
	if (locator != nullptr) {
		locator->fColumnNumber = exception->getColumnNumber();
		locator->fLineNumber = exception->getLineNumber();
		locator->fUtf16Offset = exception->getCharacterOffset();
		$set(locator, fUri, exception->getExpandedSystemId());
		$set(locator, fRelatedNode, this->fCurrentNode);
	}
	if (this->fDomErrorHandler != nullptr) {
		this->fDomErrorHandler->handleError(this->fDOMError);
	}
}

void DOMErrorHandlerWrapper::error($String* domain, $String* key, $XMLParseException* exception) {
	$nc(this->fDOMError)->fSeverity = $DOMError::SEVERITY_ERROR;
	$set(this->fDOMError, fException, exception);
	$set(this->fDOMError, fType, key);
	$set(this->fDOMError, fRelatedData, $set(this->fDOMError, fMessage, $nc(exception)->getMessage()));
	$var($DOMLocatorImpl, locator, this->fDOMError->fLocator);
	if (locator != nullptr) {
		locator->fColumnNumber = exception->getColumnNumber();
		locator->fLineNumber = exception->getLineNumber();
		locator->fUtf16Offset = exception->getCharacterOffset();
		$set(locator, fUri, exception->getExpandedSystemId());
		$set(locator, fRelatedNode, this->fCurrentNode);
	}
	if (this->fDomErrorHandler != nullptr) {
		this->fDomErrorHandler->handleError(this->fDOMError);
	}
}

void DOMErrorHandlerWrapper::fatalError($String* domain, $String* key, $XMLParseException* exception) {
	$useLocalObjectStack();
	$nc(this->fDOMError)->fSeverity = $DOMError::SEVERITY_FATAL_ERROR;
	$set(this->fDOMError, fException, exception);
	$nc(this->fErrorCode)->setValues(domain, key);
	$var($String, domErrorType, $DOMErrorHandlerWrapper$DOMErrorTypeMap::getDOMErrorType(this->fErrorCode));
	$set(this->fDOMError, fType, (domErrorType != nullptr) ? domErrorType : key);
	$set(this->fDOMError, fRelatedData, $set(this->fDOMError, fMessage, $nc(exception)->getMessage()));
	$var($DOMLocatorImpl, locator, this->fDOMError->fLocator);
	if (locator != nullptr) {
		locator->fColumnNumber = exception->getColumnNumber();
		locator->fLineNumber = exception->getLineNumber();
		locator->fUtf16Offset = exception->getCharacterOffset();
		$set(locator, fUri, exception->getExpandedSystemId());
		$set(locator, fRelatedNode, this->fCurrentNode);
	}
	if (this->fDomErrorHandler != nullptr) {
		this->fDomErrorHandler->handleError(this->fDOMError);
	}
}

bool DOMErrorHandlerWrapper::handleError($DOMError* error) {
	printError(error);
	return this->eStatus;
}

void DOMErrorHandlerWrapper::printError($DOMError* error) {
	$useLocalObjectStack();
	int32_t severity = $nc(error)->getSeverity();
	$nc(this->fOut)->print("["_s);
	if (severity == $DOMError::SEVERITY_WARNING) {
		this->fOut->print("Warning"_s);
	} else if (severity == $DOMError::SEVERITY_ERROR) {
		this->fOut->print("Error"_s);
	} else {
		this->fOut->print("FatalError"_s);
		this->eStatus = false;
	}
	this->fOut->print("] "_s);
	$var($DOMLocator, locator, error->getLocation());
	if (locator != nullptr) {
		$nc(this->fOut)->print(locator->getLineNumber());
		$nc(this->fOut)->print(":"_s);
		this->fOut->print(locator->getColumnNumber());
		$nc(this->fOut)->print(":"_s);
		this->fOut->print(locator->getByteOffset());
		$nc(this->fOut)->print(","_s);
		this->fOut->print(locator->getUtf16Offset());
		$var($Node, node, locator->getRelatedNode());
		if (node != nullptr) {
			$nc(this->fOut)->print("["_s);
			this->fOut->print($(node->getNodeName()));
			$nc(this->fOut)->print("]"_s);
		}
		$var($String, systemId, locator->getUri());
		if (systemId != nullptr) {
			int32_t index = systemId->lastIndexOf(u'/');
			if (index != -1) {
				$assign(systemId, systemId->substring(index + 1));
			}
			$nc(this->fOut)->print(": "_s);
			this->fOut->print(systemId);
		}
	}
	$nc(this->fOut)->print(":"_s);
	this->fOut->print($(error->getMessage()));
	$nc(this->fOut)->println();
	this->fOut->flush();
}

DOMErrorHandlerWrapper::DOMErrorHandlerWrapper() {
}

$Class* DOMErrorHandlerWrapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fDomErrorHandler", "Lorg/w3c/dom/DOMErrorHandler;", nullptr, $PROTECTED, $field(DOMErrorHandlerWrapper, fDomErrorHandler)},
		{"eStatus", "Z", nullptr, 0, $field(DOMErrorHandlerWrapper, eStatus)},
		{"fOut", "Ljava/io/PrintWriter;", nullptr, $PROTECTED, $field(DOMErrorHandlerWrapper, fOut)},
		{"fCurrentNode", "Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $field(DOMErrorHandlerWrapper, fCurrentNode)},
		{"fErrorCode", "Lcom/sun/org/apache/xerces/internal/util/XMLErrorCode;", nullptr, $PROTECTED | $FINAL, $field(DOMErrorHandlerWrapper, fErrorCode)},
		{"fDOMError", "Lcom/sun/org/apache/xerces/internal/dom/DOMErrorImpl;", nullptr, $PROTECTED | $FINAL, $field(DOMErrorHandlerWrapper, fDOMError)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
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
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.util.DOMErrorHandlerWrapper$DOMErrorTypeMap", "com.sun.org.apache.xerces.internal.util.DOMErrorHandlerWrapper", "DOMErrorTypeMap", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.util.DOMErrorHandlerWrapper",
		"java.lang.Object",
		"com.sun.org.apache.xerces.internal.xni.parser.XMLErrorHandler,org.w3c.dom.DOMErrorHandler",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.util.DOMErrorHandlerWrapper$DOMErrorTypeMap"
	};
	$loadClass(DOMErrorHandlerWrapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DOMErrorHandlerWrapper));
	});
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