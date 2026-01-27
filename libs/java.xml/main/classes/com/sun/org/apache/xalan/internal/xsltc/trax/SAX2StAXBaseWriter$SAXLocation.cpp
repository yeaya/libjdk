#include <com/sun/org/apache/xalan/internal/xsltc/trax/SAX2StAXBaseWriter$SAXLocation.h>

#include <com/sun/org/apache/xalan/internal/xsltc/trax/SAX2StAXBaseWriter.h>
#include <org/xml/sax/Locator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locator = ::org::xml::sax::Locator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

$FieldInfo _SAX2StAXBaseWriter$SAXLocation_FieldInfo_[] = {
	{"lineNumber", "I", nullptr, $PRIVATE, $field(SAX2StAXBaseWriter$SAXLocation, lineNumber)},
	{"columnNumber", "I", nullptr, $PRIVATE, $field(SAX2StAXBaseWriter$SAXLocation, columnNumber)},
	{"publicId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SAX2StAXBaseWriter$SAXLocation, publicId)},
	{"systemId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SAX2StAXBaseWriter$SAXLocation, systemId)},
	{}
};

$MethodInfo _SAX2StAXBaseWriter$SAXLocation_MethodInfo_[] = {
	{"<init>", "(Lorg/xml/sax/Locator;)V", nullptr, $PRIVATE, $method(SAX2StAXBaseWriter$SAXLocation, init$, void, $Locator*)},
	{"getCharacterOffset", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter$SAXLocation, getCharacterOffset, int32_t)},
	{"getColumnNumber", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter$SAXLocation, getColumnNumber, int32_t)},
	{"getLineNumber", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter$SAXLocation, getLineNumber, int32_t)},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter$SAXLocation, getPublicId, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAX2StAXBaseWriter$SAXLocation, getSystemId, $String*)},
	{}
};

$InnerClassInfo _SAX2StAXBaseWriter$SAXLocation_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.trax.SAX2StAXBaseWriter$SAXLocation", "com.sun.org.apache.xalan.internal.xsltc.trax.SAX2StAXBaseWriter", "SAXLocation", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SAX2StAXBaseWriter$SAXLocation_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.trax.SAX2StAXBaseWriter$SAXLocation",
	"java.lang.Object",
	"javax.xml.stream.Location",
	_SAX2StAXBaseWriter$SAXLocation_FieldInfo_,
	_SAX2StAXBaseWriter$SAXLocation_MethodInfo_,
	nullptr,
	nullptr,
	_SAX2StAXBaseWriter$SAXLocation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.trax.SAX2StAXBaseWriter"
};

$Object* allocate$SAX2StAXBaseWriter$SAXLocation($Class* clazz) {
	return $of($alloc(SAX2StAXBaseWriter$SAXLocation));
}

void SAX2StAXBaseWriter$SAXLocation::init$($Locator* locator) {
	this->lineNumber = $nc(locator)->getLineNumber();
	this->columnNumber = locator->getColumnNumber();
	$set(this, publicId, locator->getPublicId());
	$set(this, systemId, locator->getSystemId());
}

int32_t SAX2StAXBaseWriter$SAXLocation::getLineNumber() {
	return this->lineNumber;
}

int32_t SAX2StAXBaseWriter$SAXLocation::getColumnNumber() {
	return this->columnNumber;
}

int32_t SAX2StAXBaseWriter$SAXLocation::getCharacterOffset() {
	return -1;
}

$String* SAX2StAXBaseWriter$SAXLocation::getPublicId() {
	return this->publicId;
}

$String* SAX2StAXBaseWriter$SAXLocation::getSystemId() {
	return this->systemId;
}

SAX2StAXBaseWriter$SAXLocation::SAX2StAXBaseWriter$SAXLocation() {
}

$Class* SAX2StAXBaseWriter$SAXLocation::load$($String* name, bool initialize) {
	$loadClass(SAX2StAXBaseWriter$SAXLocation, name, initialize, &_SAX2StAXBaseWriter$SAXLocation_ClassInfo_, allocate$SAX2StAXBaseWriter$SAXLocation);
	return class$;
}

$Class* SAX2StAXBaseWriter$SAXLocation::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com