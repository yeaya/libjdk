#include <com/sun/org/apache/xerces/internal/impl/XMLStreamReaderImpl$1.h>

#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLStreamReaderImpl.h>
#include <jcpp.h>

using $XMLEntityScanner = ::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner;
using $XMLStreamReaderImpl = ::com::sun::org::apache::xerces::internal::impl::XMLStreamReaderImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _XMLStreamReaderImpl$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/XMLStreamReaderImpl;", nullptr, $FINAL | $SYNTHETIC, $field(XMLStreamReaderImpl$1, this$0)},
	{"_systemId", "Ljava/lang/String;", nullptr, 0, $field(XMLStreamReaderImpl$1, _systemId)},
	{"_publicId", "Ljava/lang/String;", nullptr, 0, $field(XMLStreamReaderImpl$1, _publicId)},
	{"_offset", "I", nullptr, 0, $field(XMLStreamReaderImpl$1, _offset)},
	{"_columnNumber", "I", nullptr, 0, $field(XMLStreamReaderImpl$1, _columnNumber)},
	{"_lineNumber", "I", nullptr, 0, $field(XMLStreamReaderImpl$1, _lineNumber)},
	{}
};

$MethodInfo _XMLStreamReaderImpl$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/XMLStreamReaderImpl;)V", nullptr, 0, $method(XMLStreamReaderImpl$1, init$, void, $XMLStreamReaderImpl*)},
	{"getCharacterOffset", "()I", nullptr, $PUBLIC, $virtualMethod(XMLStreamReaderImpl$1, getCharacterOffset, int32_t)},
	{"getColumnNumber", "()I", nullptr, $PUBLIC, $virtualMethod(XMLStreamReaderImpl$1, getColumnNumber, int32_t)},
	{"getLineNumber", "()I", nullptr, $PUBLIC, $virtualMethod(XMLStreamReaderImpl$1, getLineNumber, int32_t)},
	{"getLocationURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLStreamReaderImpl$1, getLocationURI, $String*)},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLStreamReaderImpl$1, getPublicId, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLStreamReaderImpl$1, getSystemId, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLStreamReaderImpl$1, toString, $String*)},
	{}
};

$EnclosingMethodInfo _XMLStreamReaderImpl$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xerces.internal.impl.XMLStreamReaderImpl",
	"getLocation",
	"()Ljavax/xml/stream/Location;"
};

$InnerClassInfo _XMLStreamReaderImpl$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XMLStreamReaderImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XMLStreamReaderImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XMLStreamReaderImpl$1",
	"java.lang.Object",
	"javax.xml.stream.Location",
	_XMLStreamReaderImpl$1_FieldInfo_,
	_XMLStreamReaderImpl$1_MethodInfo_,
	nullptr,
	&_XMLStreamReaderImpl$1_EnclosingMethodInfo_,
	_XMLStreamReaderImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XMLStreamReaderImpl"
};

$Object* allocate$XMLStreamReaderImpl$1($Class* clazz) {
	return $of($alloc(XMLStreamReaderImpl$1));
}

void XMLStreamReaderImpl$1::init$($XMLStreamReaderImpl* this$0) {
	$set(this, this$0, this$0);
	$set(this, _systemId, $nc(this->this$0->fEntityScanner)->getExpandedSystemId());
	$set(this, _publicId, $nc(this->this$0->fEntityScanner)->getPublicId());
	this->_offset = $nc(this->this$0->fEntityScanner)->getCharacterOffset();
	this->_columnNumber = $nc(this->this$0->fEntityScanner)->getColumnNumber();
	this->_lineNumber = $nc(this->this$0->fEntityScanner)->getLineNumber();
}

$String* XMLStreamReaderImpl$1::getLocationURI() {
	return this->_systemId;
}

int32_t XMLStreamReaderImpl$1::getCharacterOffset() {
	return this->_offset;
}

int32_t XMLStreamReaderImpl$1::getColumnNumber() {
	return this->_columnNumber;
}

int32_t XMLStreamReaderImpl$1::getLineNumber() {
	return this->_lineNumber;
}

$String* XMLStreamReaderImpl$1::getPublicId() {
	return this->_publicId;
}

$String* XMLStreamReaderImpl$1::getSystemId() {
	return this->_systemId;
}

$String* XMLStreamReaderImpl$1::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sbuffer, $new($StringBuilder));
	sbuffer->append($$str({"Line number = "_s, $$str(getLineNumber())}));
	sbuffer->append("\n"_s);
	sbuffer->append($$str({"Column number = "_s, $$str(getColumnNumber())}));
	sbuffer->append("\n"_s);
	sbuffer->append($$str({"System Id = "_s, $(getSystemId())}));
	sbuffer->append("\n"_s);
	sbuffer->append($$str({"Public Id = "_s, $(getPublicId())}));
	sbuffer->append("\n"_s);
	sbuffer->append($$str({"Location Uri= "_s, $(getLocationURI())}));
	sbuffer->append("\n"_s);
	sbuffer->append($$str({"CharacterOffset = "_s, $$str(getCharacterOffset())}));
	sbuffer->append("\n"_s);
	return sbuffer->toString();
}

XMLStreamReaderImpl$1::XMLStreamReaderImpl$1() {
}

$Class* XMLStreamReaderImpl$1::load$($String* name, bool initialize) {
	$loadClass(XMLStreamReaderImpl$1, name, initialize, &_XMLStreamReaderImpl$1_ClassInfo_, allocate$XMLStreamReaderImpl$1);
	return class$;
}

$Class* XMLStreamReaderImpl$1::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com