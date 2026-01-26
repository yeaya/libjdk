#include <javax/xml/crypto/OctetStreamData.h>

#include <java/io/InputStream.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace javax {
	namespace xml {
		namespace crypto {

$FieldInfo _OctetStreamData_FieldInfo_[] = {
	{"octetStream", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(OctetStreamData, octetStream)},
	{"uri", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OctetStreamData, uri)},
	{"mimeType", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OctetStreamData, mimeType)},
	{}
};

$MethodInfo _OctetStreamData_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(OctetStreamData, init$, void, $InputStream*)},
	{"<init>", "(Ljava/io/InputStream;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(OctetStreamData, init$, void, $InputStream*, $String*, $String*)},
	{"getMimeType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OctetStreamData, getMimeType, $String*)},
	{"getOctetStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(OctetStreamData, getOctetStream, $InputStream*)},
	{"getURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OctetStreamData, getURI, $String*)},
	{}
};

$ClassInfo _OctetStreamData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.crypto.OctetStreamData",
	"java.lang.Object",
	"javax.xml.crypto.Data",
	_OctetStreamData_FieldInfo_,
	_OctetStreamData_MethodInfo_
};

$Object* allocate$OctetStreamData($Class* clazz) {
	return $of($alloc(OctetStreamData));
}

void OctetStreamData::init$($InputStream* octetStream) {
	if (octetStream == nullptr) {
		$throwNew($NullPointerException, "octetStream is null"_s);
	}
	$set(this, octetStream, octetStream);
}

void OctetStreamData::init$($InputStream* octetStream, $String* uri, $String* mimeType) {
	if (octetStream == nullptr) {
		$throwNew($NullPointerException, "octetStream is null"_s);
	}
	$set(this, octetStream, octetStream);
	$set(this, uri, uri);
	$set(this, mimeType, mimeType);
}

$InputStream* OctetStreamData::getOctetStream() {
	return this->octetStream;
}

$String* OctetStreamData::getURI() {
	return this->uri;
}

$String* OctetStreamData::getMimeType() {
	return this->mimeType;
}

OctetStreamData::OctetStreamData() {
}

$Class* OctetStreamData::load$($String* name, bool initialize) {
	$loadClass(OctetStreamData, name, initialize, &_OctetStreamData_ClassInfo_, allocate$OctetStreamData);
	return class$;
}

$Class* OctetStreamData::class$ = nullptr;

		} // crypto
	} // xml
} // javax