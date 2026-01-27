#include <com/sun/org/apache/xerces/internal/util/HTTPInputSource.h>

#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _HTTPInputSource_FieldInfo_[] = {
	{"fFollowRedirects", "Z", nullptr, $PROTECTED, $field(HTTPInputSource, fFollowRedirects)},
	{"fHTTPRequestProperties", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PROTECTED, $field(HTTPInputSource, fHTTPRequestProperties)},
	{}
};

$MethodInfo _HTTPInputSource_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(HTTPInputSource, init$, void, $String*, $String*, $String*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;)V", nullptr, $PUBLIC, $method(HTTPInputSource, init$, void, $XMLResourceIdentifier*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/io/InputStream;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(HTTPInputSource, init$, void, $String*, $String*, $String*, $InputStream*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/io/Reader;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(HTTPInputSource, init$, void, $String*, $String*, $String*, $Reader*, $String*)},
	{"getFollowHTTPRedirects", "()Z", nullptr, $PUBLIC, $method(HTTPInputSource, getFollowHTTPRedirects, bool)},
	{"getHTTPRequestProperties", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;", $PUBLIC, $method(HTTPInputSource, getHTTPRequestProperties, $Iterator*)},
	{"getHTTPRequestProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $method(HTTPInputSource, getHTTPRequestProperty, $String*, $String*)},
	{"setFollowHTTPRedirects", "(Z)V", nullptr, $PUBLIC, $method(HTTPInputSource, setFollowHTTPRedirects, void, bool)},
	{"setHTTPRequestProperty", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(HTTPInputSource, setHTTPRequestProperty, void, $String*, $String*)},
	{}
};

$ClassInfo _HTTPInputSource_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.HTTPInputSource",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLInputSource",
	nullptr,
	_HTTPInputSource_FieldInfo_,
	_HTTPInputSource_MethodInfo_
};

$Object* allocate$HTTPInputSource($Class* clazz) {
	return $of($alloc(HTTPInputSource));
}

void HTTPInputSource::init$($String* publicId, $String* systemId, $String* baseSystemId) {
	$XMLInputSource::init$(publicId, systemId, baseSystemId, false);
	this->fFollowRedirects = true;
	$set(this, fHTTPRequestProperties, $new($HashMap));
}

void HTTPInputSource::init$($XMLResourceIdentifier* resourceIdentifier) {
	$XMLInputSource::init$(resourceIdentifier);
	this->fFollowRedirects = true;
	$set(this, fHTTPRequestProperties, $new($HashMap));
}

void HTTPInputSource::init$($String* publicId, $String* systemId, $String* baseSystemId, $InputStream* byteStream, $String* encoding) {
	$XMLInputSource::init$(publicId, systemId, baseSystemId, byteStream, encoding);
	this->fFollowRedirects = true;
	$set(this, fHTTPRequestProperties, $new($HashMap));
}

void HTTPInputSource::init$($String* publicId, $String* systemId, $String* baseSystemId, $Reader* charStream, $String* encoding) {
	$XMLInputSource::init$(publicId, systemId, baseSystemId, charStream, encoding);
	this->fFollowRedirects = true;
	$set(this, fHTTPRequestProperties, $new($HashMap));
}

bool HTTPInputSource::getFollowHTTPRedirects() {
	return this->fFollowRedirects;
}

void HTTPInputSource::setFollowHTTPRedirects(bool followRedirects) {
	this->fFollowRedirects = followRedirects;
}

$String* HTTPInputSource::getHTTPRequestProperty($String* key) {
	return $cast($String, $nc(this->fHTTPRequestProperties)->get(key));
}

$Iterator* HTTPInputSource::getHTTPRequestProperties() {
	return $nc($($nc(this->fHTTPRequestProperties)->entrySet()))->iterator();
}

void HTTPInputSource::setHTTPRequestProperty($String* key, $String* value) {
	if (value != nullptr) {
		$nc(this->fHTTPRequestProperties)->put(key, value);
	} else {
		$nc(this->fHTTPRequestProperties)->remove(key);
	}
}

HTTPInputSource::HTTPInputSource() {
}

$Class* HTTPInputSource::load$($String* name, bool initialize) {
	$loadClass(HTTPInputSource, name, initialize, &_HTTPInputSource_ClassInfo_, allocate$HTTPInputSource);
	return class$;
}

$Class* HTTPInputSource::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com