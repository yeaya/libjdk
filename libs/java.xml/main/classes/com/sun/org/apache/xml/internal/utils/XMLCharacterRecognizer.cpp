#include <com/sun/org/apache/xml/internal/utils/XMLCharacterRecognizer.h>

#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$MethodInfo _XMLCharacterRecognizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLCharacterRecognizer, init$, void)},
	{"isWhiteSpace", "(C)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLCharacterRecognizer, isWhiteSpace, bool, char16_t)},
	{"isWhiteSpace", "([CII)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLCharacterRecognizer, isWhiteSpace, bool, $chars*, int32_t, int32_t)},
	{"isWhiteSpace", "(Ljava/lang/StringBuffer;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLCharacterRecognizer, isWhiteSpace, bool, $StringBuffer*)},
	{"isWhiteSpace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLCharacterRecognizer, isWhiteSpace, bool, $String*)},
	{}
};

$ClassInfo _XMLCharacterRecognizer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.XMLCharacterRecognizer",
	"java.lang.Object",
	nullptr,
	nullptr,
	_XMLCharacterRecognizer_MethodInfo_
};

$Object* allocate$XMLCharacterRecognizer($Class* clazz) {
	return $of($alloc(XMLCharacterRecognizer));
}

void XMLCharacterRecognizer::init$() {
}

bool XMLCharacterRecognizer::isWhiteSpace(char16_t ch) {
	return (ch == 32) || (ch == 9) || (ch == 13) || (ch == 10);
}

bool XMLCharacterRecognizer::isWhiteSpace($chars* ch, int32_t start, int32_t length) {
	int32_t end = start + length;
	for (int32_t s = start; s < end; ++s) {
		if (!isWhiteSpace($nc(ch)->get(s))) {
			return false;
		}
	}
	return true;
}

bool XMLCharacterRecognizer::isWhiteSpace($StringBuffer* buf) {
	int32_t n = $nc(buf)->length();
	for (int32_t i = 0; i < n; ++i) {
		if (!isWhiteSpace(buf->charAt(i))) {
			return false;
		}
	}
	return true;
}

bool XMLCharacterRecognizer::isWhiteSpace($String* s) {
	if (nullptr != s) {
		int32_t n = s->length();
		for (int32_t i = 0; i < n; ++i) {
			if (!isWhiteSpace(s->charAt(i))) {
				return false;
			}
		}
	}
	return true;
}

XMLCharacterRecognizer::XMLCharacterRecognizer() {
}

$Class* XMLCharacterRecognizer::load$($String* name, bool initialize) {
	$loadClass(XMLCharacterRecognizer, name, initialize, &_XMLCharacterRecognizer_ClassInfo_, allocate$XMLCharacterRecognizer);
	return class$;
}

$Class* XMLCharacterRecognizer::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com