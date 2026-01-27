#include <com/sun/xml/internal/stream/XMLEntityReader.h>

#include <com/sun/org/apache/xerces/internal/util/XMLStringBuffer.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/xml/internal/stream/XMLBufferListener.h>
#include <jcpp.h>

using $XMLStringBuffer = ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XMLBufferListener = ::com::sun::xml::internal::stream::XMLBufferListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

$MethodInfo _XMLEntityReader_MethodInfo_[] = {
	{"getCharacterOffset", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLEntityReader, init$, void)},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEntityReader, getVersion, $String*)},
	{"isExternal", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEntityReader, isExternal, bool)},
	{"peekChar", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEntityReader, peekChar, int32_t), "java.io.IOException"},
	{"registerListener", "(Lcom/sun/xml/internal/stream/XMLBufferListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEntityReader, registerListener, void, $XMLBufferListener*)},
	{"scanChar", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEntityReader, scanChar, int32_t), "java.io.IOException"},
	{"scanContent", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEntityReader, scanContent, int32_t, $XMLString*), "java.io.IOException"},
	{"scanData", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEntityReader, scanData, bool, $String*, $XMLStringBuffer*), "java.io.IOException"},
	{"scanLiteral", "(ILcom/sun/org/apache/xerces/internal/xni/XMLString;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEntityReader, scanLiteral, int32_t, int32_t, $XMLString*), "java.io.IOException"},
	{"scanName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEntityReader, scanName, $String*), "java.io.IOException"},
	{"scanNmtoken", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEntityReader, scanNmtoken, $String*), "java.io.IOException"},
	{"scanQName", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEntityReader, scanQName, bool, $QName*), "java.io.IOException"},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEntityReader, setEncoding, void, $String*), "java.io.IOException"},
	{"setVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEntityReader, setVersion, void, $String*)},
	{"skipChar", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEntityReader, skipChar, bool, int32_t), "java.io.IOException"},
	{"skipSpaces", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEntityReader, skipSpaces, bool), "java.io.IOException"},
	{"skipString", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEntityReader, skipString, bool, $String*), "java.io.IOException"},
	{}
};

$ClassInfo _XMLEntityReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.xml.internal.stream.XMLEntityReader",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.XMLLocator",
	nullptr,
	_XMLEntityReader_MethodInfo_
};

$Object* allocate$XMLEntityReader($Class* clazz) {
	return $of($alloc(XMLEntityReader));
}

void XMLEntityReader::init$() {
}

XMLEntityReader::XMLEntityReader() {
}

$Class* XMLEntityReader::load$($String* name, bool initialize) {
	$loadClass(XMLEntityReader, name, initialize, &_XMLEntityReader_ClassInfo_, allocate$XMLEntityReader);
	return class$;
}

$Class* XMLEntityReader::class$ = nullptr;

				} // stream
			} // internal
		} // xml
	} // sun
} // com