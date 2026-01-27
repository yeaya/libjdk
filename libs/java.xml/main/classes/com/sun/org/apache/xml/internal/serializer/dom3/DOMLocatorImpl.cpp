#include <com/sun/org/apache/xml/internal/serializer/dom3/DOMLocatorImpl.h>

#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace dom3 {

$FieldInfo _DOMLocatorImpl_FieldInfo_[] = {
	{"fColumnNumber", "I", nullptr, $PRIVATE | $FINAL, $field(DOMLocatorImpl, fColumnNumber)},
	{"fLineNumber", "I", nullptr, $PRIVATE | $FINAL, $field(DOMLocatorImpl, fLineNumber)},
	{"fRelatedNode", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE | $FINAL, $field(DOMLocatorImpl, fRelatedNode)},
	{"fUri", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DOMLocatorImpl, fUri)},
	{"fByteOffset", "I", nullptr, $PRIVATE | $FINAL, $field(DOMLocatorImpl, fByteOffset)},
	{"fUtf16Offset", "I", nullptr, $PRIVATE | $FINAL, $field(DOMLocatorImpl, fUtf16Offset)},
	{}
};

$MethodInfo _DOMLocatorImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(DOMLocatorImpl, init$, void)},
	{"<init>", "(IILjava/lang/String;)V", nullptr, 0, $method(DOMLocatorImpl, init$, void, int32_t, int32_t, $String*)},
	{"<init>", "(IIILjava/lang/String;)V", nullptr, 0, $method(DOMLocatorImpl, init$, void, int32_t, int32_t, int32_t, $String*)},
	{"<init>", "(IIILorg/w3c/dom/Node;Ljava/lang/String;)V", nullptr, 0, $method(DOMLocatorImpl, init$, void, int32_t, int32_t, int32_t, $Node*, $String*)},
	{"<init>", "(IIILorg/w3c/dom/Node;Ljava/lang/String;I)V", nullptr, 0, $method(DOMLocatorImpl, init$, void, int32_t, int32_t, int32_t, $Node*, $String*, int32_t)},
	{"getByteOffset", "()I", nullptr, $PUBLIC, $virtualMethod(DOMLocatorImpl, getByteOffset, int32_t)},
	{"getColumnNumber", "()I", nullptr, $PUBLIC, $virtualMethod(DOMLocatorImpl, getColumnNumber, int32_t)},
	{"getLineNumber", "()I", nullptr, $PUBLIC, $virtualMethod(DOMLocatorImpl, getLineNumber, int32_t)},
	{"getRelatedNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DOMLocatorImpl, getRelatedNode, $Node*)},
	{"getUri", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMLocatorImpl, getUri, $String*)},
	{"getUtf16Offset", "()I", nullptr, $PUBLIC, $virtualMethod(DOMLocatorImpl, getUtf16Offset, int32_t)},
	{}
};

$ClassInfo _DOMLocatorImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.dom3.DOMLocatorImpl",
	"java.lang.Object",
	"org.w3c.dom.DOMLocator",
	_DOMLocatorImpl_FieldInfo_,
	_DOMLocatorImpl_MethodInfo_
};

$Object* allocate$DOMLocatorImpl($Class* clazz) {
	return $of($alloc(DOMLocatorImpl));
}

void DOMLocatorImpl::init$() {
	this->fColumnNumber = -1;
	this->fLineNumber = -1;
	$set(this, fRelatedNode, nullptr);
	$set(this, fUri, nullptr);
	this->fByteOffset = -1;
	this->fUtf16Offset = -1;
}

void DOMLocatorImpl::init$(int32_t lineNumber, int32_t columnNumber, $String* uri) {
	this->fLineNumber = lineNumber;
	this->fColumnNumber = columnNumber;
	$set(this, fUri, uri);
	$set(this, fRelatedNode, nullptr);
	this->fByteOffset = -1;
	this->fUtf16Offset = -1;
}

void DOMLocatorImpl::init$(int32_t lineNumber, int32_t columnNumber, int32_t utf16Offset, $String* uri) {
	this->fLineNumber = lineNumber;
	this->fColumnNumber = columnNumber;
	$set(this, fUri, uri);
	this->fUtf16Offset = utf16Offset;
	$set(this, fRelatedNode, nullptr);
	this->fByteOffset = -1;
}

void DOMLocatorImpl::init$(int32_t lineNumber, int32_t columnNumber, int32_t byteoffset, $Node* relatedData, $String* uri) {
	this->fLineNumber = lineNumber;
	this->fColumnNumber = columnNumber;
	this->fByteOffset = byteoffset;
	$set(this, fRelatedNode, relatedData);
	$set(this, fUri, uri);
	this->fUtf16Offset = -1;
}

void DOMLocatorImpl::init$(int32_t lineNumber, int32_t columnNumber, int32_t byteoffset, $Node* relatedData, $String* uri, int32_t utf16Offset) {
	this->fLineNumber = lineNumber;
	this->fColumnNumber = columnNumber;
	this->fByteOffset = byteoffset;
	$set(this, fRelatedNode, relatedData);
	$set(this, fUri, uri);
	this->fUtf16Offset = utf16Offset;
}

int32_t DOMLocatorImpl::getLineNumber() {
	return this->fLineNumber;
}

int32_t DOMLocatorImpl::getColumnNumber() {
	return this->fColumnNumber;
}

$String* DOMLocatorImpl::getUri() {
	return this->fUri;
}

$Node* DOMLocatorImpl::getRelatedNode() {
	return this->fRelatedNode;
}

int32_t DOMLocatorImpl::getByteOffset() {
	return this->fByteOffset;
}

int32_t DOMLocatorImpl::getUtf16Offset() {
	return this->fUtf16Offset;
}

DOMLocatorImpl::DOMLocatorImpl() {
}

$Class* DOMLocatorImpl::load$($String* name, bool initialize) {
	$loadClass(DOMLocatorImpl, name, initialize, &_DOMLocatorImpl_ClassInfo_, allocate$DOMLocatorImpl);
	return class$;
}

$Class* DOMLocatorImpl::class$ = nullptr;

							} // dom3
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com