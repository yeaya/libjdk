#include <com/sun/org/apache/xerces/internal/dom/DOMOutputImpl.h>

#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _DOMOutputImpl_FieldInfo_[] = {
	{"fCharStream", "Ljava/io/Writer;", nullptr, $PROTECTED, $field(DOMOutputImpl, fCharStream)},
	{"fByteStream", "Ljava/io/OutputStream;", nullptr, $PROTECTED, $field(DOMOutputImpl, fByteStream)},
	{"fSystemId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DOMOutputImpl, fSystemId)},
	{"fEncoding", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DOMOutputImpl, fEncoding)},
	{}
};

$MethodInfo _DOMOutputImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DOMOutputImpl, init$, void)},
	{"getByteStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(DOMOutputImpl, getByteStream, $OutputStream*)},
	{"getCharacterStream", "()Ljava/io/Writer;", nullptr, $PUBLIC, $virtualMethod(DOMOutputImpl, getCharacterStream, $Writer*)},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMOutputImpl, getEncoding, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMOutputImpl, getSystemId, $String*)},
	{"setByteStream", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(DOMOutputImpl, setByteStream, void, $OutputStream*)},
	{"setCharacterStream", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $virtualMethod(DOMOutputImpl, setCharacterStream, void, $Writer*)},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DOMOutputImpl, setEncoding, void, $String*)},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DOMOutputImpl, setSystemId, void, $String*)},
	{}
};

$ClassInfo _DOMOutputImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DOMOutputImpl",
	"java.lang.Object",
	"org.w3c.dom.ls.LSOutput",
	_DOMOutputImpl_FieldInfo_,
	_DOMOutputImpl_MethodInfo_
};

$Object* allocate$DOMOutputImpl($Class* clazz) {
	return $of($alloc(DOMOutputImpl));
}

void DOMOutputImpl::init$() {
	$set(this, fCharStream, nullptr);
	$set(this, fByteStream, nullptr);
	$set(this, fSystemId, nullptr);
	$set(this, fEncoding, nullptr);
}

$Writer* DOMOutputImpl::getCharacterStream() {
	return this->fCharStream;
}

void DOMOutputImpl::setCharacterStream($Writer* characterStream) {
	$set(this, fCharStream, characterStream);
}

$OutputStream* DOMOutputImpl::getByteStream() {
	return this->fByteStream;
}

void DOMOutputImpl::setByteStream($OutputStream* byteStream) {
	$set(this, fByteStream, byteStream);
}

$String* DOMOutputImpl::getSystemId() {
	return this->fSystemId;
}

void DOMOutputImpl::setSystemId($String* systemId) {
	$set(this, fSystemId, systemId);
}

$String* DOMOutputImpl::getEncoding() {
	return this->fEncoding;
}

void DOMOutputImpl::setEncoding($String* encoding) {
	$set(this, fEncoding, encoding);
}

DOMOutputImpl::DOMOutputImpl() {
}

$Class* DOMOutputImpl::load$($String* name, bool initialize) {
	$loadClass(DOMOutputImpl, name, initialize, &_DOMOutputImpl_ClassInfo_, allocate$DOMOutputImpl);
	return class$;
}

$Class* DOMOutputImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com