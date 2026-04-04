#include <com/sun/org/apache/xml/internal/security/signature/reference/ReferenceOctetStreamData.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {
								namespace reference {

void ReferenceOctetStreamData::init$($InputStream* octetStream) {
	if (octetStream == nullptr) {
		$throwNew($NullPointerException, "octetStream is null"_s);
	}
	$set(this, octetStream, octetStream);
}

void ReferenceOctetStreamData::init$($InputStream* octetStream, $String* uri, $String* mimeType) {
	if (octetStream == nullptr) {
		$throwNew($NullPointerException, "octetStream is null"_s);
	}
	$set(this, octetStream, octetStream);
	$set(this, uri, uri);
	$set(this, mimeType, mimeType);
}

$InputStream* ReferenceOctetStreamData::getOctetStream() {
	return this->octetStream;
}

$String* ReferenceOctetStreamData::getURI() {
	return this->uri;
}

$String* ReferenceOctetStreamData::getMimeType() {
	return this->mimeType;
}

ReferenceOctetStreamData::ReferenceOctetStreamData() {
}

$Class* ReferenceOctetStreamData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"octetStream", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(ReferenceOctetStreamData, octetStream)},
		{"uri", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ReferenceOctetStreamData, uri)},
		{"mimeType", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ReferenceOctetStreamData, mimeType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(ReferenceOctetStreamData, init$, void, $InputStream*)},
		{"<init>", "(Ljava/io/InputStream;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ReferenceOctetStreamData, init$, void, $InputStream*, $String*, $String*)},
		{"getMimeType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ReferenceOctetStreamData, getMimeType, $String*)},
		{"getOctetStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(ReferenceOctetStreamData, getOctetStream, $InputStream*)},
		{"getURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ReferenceOctetStreamData, getURI, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.signature.reference.ReferenceOctetStreamData",
		"java.lang.Object",
		"com.sun.org.apache.xml.internal.security.signature.reference.ReferenceData",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ReferenceOctetStreamData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferenceOctetStreamData);
	});
	return class$;
}

$Class* ReferenceOctetStreamData::class$ = nullptr;

								} // reference
							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com