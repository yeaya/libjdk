#include <com/sun/org/apache/xml/internal/utils/XMLStringFactoryDefault.h>

#include <com/sun/org/apache/xml/internal/utils/FastStringBuffer.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xml/internal/utils/XMLStringDefault.h>
#include <com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>
#include <jcpp.h>

#undef EMPTY_STR

using $FastStringBuffer = ::com::sun::org::apache::xml::internal::utils::FastStringBuffer;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $XMLStringDefault = ::com::sun::org::apache::xml::internal::utils::XMLStringDefault;
using $XMLStringFactory = ::com::sun::org::apache::xml::internal::utils::XMLStringFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _XMLStringFactoryDefault_FieldInfo_[] = {
	{"EMPTY_STR", "Lcom/sun/org/apache/xml/internal/utils/XMLStringDefault;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLStringFactoryDefault, EMPTY_STR)},
	{}
};

$MethodInfo _XMLStringFactoryDefault_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLStringFactoryDefault, init$, void)},
	{"emptystr", "()Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC, $virtualMethod(XMLStringFactoryDefault, emptystr, $XMLString*)},
	{"newstr", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC, $virtualMethod(XMLStringFactoryDefault, newstr, $XMLString*, $String*)},
	{"newstr", "(Lcom/sun/org/apache/xml/internal/utils/FastStringBuffer;II)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC, $virtualMethod(XMLStringFactoryDefault, newstr, $XMLString*, $FastStringBuffer*, int32_t, int32_t)},
	{"newstr", "([CII)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC, $virtualMethod(XMLStringFactoryDefault, newstr, $XMLString*, $chars*, int32_t, int32_t)},
	{}
};

$ClassInfo _XMLStringFactoryDefault_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.XMLStringFactoryDefault",
	"com.sun.org.apache.xml.internal.utils.XMLStringFactory",
	nullptr,
	_XMLStringFactoryDefault_FieldInfo_,
	_XMLStringFactoryDefault_MethodInfo_
};

$Object* allocate$XMLStringFactoryDefault($Class* clazz) {
	return $of($alloc(XMLStringFactoryDefault));
}

$XMLStringDefault* XMLStringFactoryDefault::EMPTY_STR = nullptr;

void XMLStringFactoryDefault::init$() {
	$XMLStringFactory::init$();
}

$XMLString* XMLStringFactoryDefault::newstr($String* string) {
	return $new($XMLStringDefault, string);
}

$XMLString* XMLStringFactoryDefault::newstr($FastStringBuffer* fsb, int32_t start, int32_t length) {
	return $new($XMLStringDefault, $($nc(fsb)->getString(start, length)));
}

$XMLString* XMLStringFactoryDefault::newstr($chars* string, int32_t start, int32_t length) {
	return $new($XMLStringDefault, $$new($String, string, start, length));
}

$XMLString* XMLStringFactoryDefault::emptystr() {
	return XMLStringFactoryDefault::EMPTY_STR;
}

void clinit$XMLStringFactoryDefault($Class* class$) {
	$assignStatic(XMLStringFactoryDefault::EMPTY_STR, $new($XMLStringDefault, ""_s));
}

XMLStringFactoryDefault::XMLStringFactoryDefault() {
}

$Class* XMLStringFactoryDefault::load$($String* name, bool initialize) {
	$loadClass(XMLStringFactoryDefault, name, initialize, &_XMLStringFactoryDefault_ClassInfo_, clinit$XMLStringFactoryDefault, allocate$XMLStringFactoryDefault);
	return class$;
}

$Class* XMLStringFactoryDefault::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com