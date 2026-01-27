#include <com/sun/org/apache/xml/internal/serialize/EncodingInfo.h>

#include <com/sun/org/apache/xerces/internal/util/EncodingMap.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Writer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <jcpp.h>

using $EncodingMap = ::com::sun::org::apache::xerces::internal::util::EncodingMap;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

$CompoundAttribute _EncodingInfo_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _EncodingInfo_FieldInfo_[] = {
	{"ianaName", "Ljava/lang/String;", nullptr, 0, $field(EncodingInfo, ianaName)},
	{"javaName", "Ljava/lang/String;", nullptr, 0, $field(EncodingInfo, javaName)},
	{"lastPrintable", "I", nullptr, 0, $field(EncodingInfo, lastPrintable)},
	{"fCharsetEncoder", "Ljava/nio/charset/CharsetEncoder;", nullptr, 0, $field(EncodingInfo, fCharsetEncoder)},
	{"fHaveTriedCharsetEncoder", "Z", nullptr, 0, $field(EncodingInfo, fHaveTriedCharsetEncoder)},
	{}
};

$MethodInfo _EncodingInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(EncodingInfo, init$, void, $String*, $String*, int32_t)},
	{"getIANAName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EncodingInfo, getIANAName, $String*)},
	{"getWriter", "(Ljava/io/OutputStream;)Ljava/io/Writer;", nullptr, $PUBLIC, $virtualMethod(EncodingInfo, getWriter, $Writer*, $OutputStream*), "java.io.UnsupportedEncodingException"},
	{"isPrintable", "(C)Z", nullptr, $PUBLIC, $virtualMethod(EncodingInfo, isPrintable, bool, char16_t)},
	{"isPrintable0", "(C)Z", nullptr, $PRIVATE, $method(EncodingInfo, isPrintable0, bool, char16_t)},
	{"testJavaEncodingName", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(EncodingInfo, testJavaEncodingName, void, $String*), "java.io.UnsupportedEncodingException"},
	{}
};

$ClassInfo _EncodingInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serialize.EncodingInfo",
	"java.lang.Object",
	nullptr,
	_EncodingInfo_FieldInfo_,
	_EncodingInfo_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_EncodingInfo_Annotations_
};

$Object* allocate$EncodingInfo($Class* clazz) {
	return $of($alloc(EncodingInfo));
}

void EncodingInfo::init$($String* ianaName, $String* javaName, int32_t lastPrintable) {
	$set(this, fCharsetEncoder, nullptr);
	this->fHaveTriedCharsetEncoder = false;
	$set(this, ianaName, ianaName);
	$set(this, javaName, $EncodingMap::getIANA2JavaMapping(ianaName));
	this->lastPrintable = lastPrintable;
}

$String* EncodingInfo::getIANAName() {
	return this->ianaName;
}

$Writer* EncodingInfo::getWriter($OutputStream* output) {
	if (this->javaName != nullptr) {
		return $new($OutputStreamWriter, output, this->javaName);
	}
	$set(this, javaName, $EncodingMap::getIANA2JavaMapping(this->ianaName));
	if (this->javaName == nullptr) {
		return $new($OutputStreamWriter, output, "UTF8"_s);
	}
	return $new($OutputStreamWriter, output, this->javaName);
}

bool EncodingInfo::isPrintable(char16_t ch) {
	if (ch <= this->lastPrintable) {
		return true;
	}
	return isPrintable0(ch);
}

bool EncodingInfo::isPrintable0(char16_t ch) {
	if (this->fCharsetEncoder == nullptr && !this->fHaveTriedCharsetEncoder) {
		try {
			$var($Charset, charset, $Charset::forName(this->javaName));
			if ($nc(charset)->canEncode()) {
				$set(this, fCharsetEncoder, charset->newEncoder());
			} else {
				this->fHaveTriedCharsetEncoder = true;
			}
		} catch ($Exception& e) {
			this->fHaveTriedCharsetEncoder = true;
		}
	}
	if (this->fCharsetEncoder != nullptr) {
		try {
			return $nc(this->fCharsetEncoder)->canEncode(ch);
		} catch ($Exception& e) {
			$set(this, fCharsetEncoder, nullptr);
			this->fHaveTriedCharsetEncoder = false;
		}
	}
	return false;
}

void EncodingInfo::testJavaEncodingName($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, bTest, $new($bytes, {
		(int8_t)u'v',
		(int8_t)u'a',
		(int8_t)u'l',
		(int8_t)u'i',
		(int8_t)u'd'
	}));
	$var($String, s, $new($String, bTest, name));
}

EncodingInfo::EncodingInfo() {
}

$Class* EncodingInfo::load$($String* name, bool initialize) {
	$loadClass(EncodingInfo, name, initialize, &_EncodingInfo_ClassInfo_, allocate$EncodingInfo);
	return class$;
}

$Class* EncodingInfo::class$ = nullptr;

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com