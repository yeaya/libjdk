#include <com/sun/org/apache/xpath/internal/objects/XMLStringFactoryImpl.h>

#include <com/sun/org/apache/xml/internal/utils/FastStringBuffer.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <com/sun/org/apache/xpath/internal/objects/XStringForChars.h>
#include <com/sun/org/apache/xpath/internal/objects/XStringForFSB.h>
#include <jcpp.h>

#undef EMPTYSTRING

using $FastStringBuffer = ::com::sun::org::apache::xml::internal::utils::FastStringBuffer;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $XMLStringFactory = ::com::sun::org::apache::xml::internal::utils::XMLStringFactory;
using $XString = ::com::sun::org::apache::xpath::internal::objects::XString;
using $XStringForChars = ::com::sun::org::apache::xpath::internal::objects::XStringForChars;
using $XStringForFSB = ::com::sun::org::apache::xpath::internal::objects::XStringForFSB;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {

$FieldInfo _XMLStringFactoryImpl_FieldInfo_[] = {
	{"m_xstringfactory", "Lcom/sun/org/apache/xml/internal/utils/XMLStringFactory;", nullptr, $PRIVATE | $STATIC, $staticField(XMLStringFactoryImpl, m_xstringfactory)},
	{}
};

$MethodInfo _XMLStringFactoryImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLStringFactoryImpl, init$, void)},
	{"emptystr", "()Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC, $virtualMethod(XMLStringFactoryImpl, emptystr, $XMLString*)},
	{"getFactory", "()Lcom/sun/org/apache/xml/internal/utils/XMLStringFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLStringFactoryImpl, getFactory, $XMLStringFactory*)},
	{"newstr", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC, $virtualMethod(XMLStringFactoryImpl, newstr, $XMLString*, $String*)},
	{"newstr", "(Lcom/sun/org/apache/xml/internal/utils/FastStringBuffer;II)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC, $virtualMethod(XMLStringFactoryImpl, newstr, $XMLString*, $FastStringBuffer*, int32_t, int32_t)},
	{"newstr", "([CII)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC, $virtualMethod(XMLStringFactoryImpl, newstr, $XMLString*, $chars*, int32_t, int32_t)},
	{}
};

$ClassInfo _XMLStringFactoryImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.objects.XMLStringFactoryImpl",
	"com.sun.org.apache.xml.internal.utils.XMLStringFactory",
	nullptr,
	_XMLStringFactoryImpl_FieldInfo_,
	_XMLStringFactoryImpl_MethodInfo_
};

$Object* allocate$XMLStringFactoryImpl($Class* clazz) {
	return $of($alloc(XMLStringFactoryImpl));
}

$XMLStringFactory* XMLStringFactoryImpl::m_xstringfactory = nullptr;

void XMLStringFactoryImpl::init$() {
	$XMLStringFactory::init$();
}

$XMLStringFactory* XMLStringFactoryImpl::getFactory() {
	$init(XMLStringFactoryImpl);
	return XMLStringFactoryImpl::m_xstringfactory;
}

$XMLString* XMLStringFactoryImpl::newstr($String* string) {
	return $new($XString, string);
}

$XMLString* XMLStringFactoryImpl::newstr($FastStringBuffer* fsb, int32_t start, int32_t length) {
	return $new($XStringForFSB, fsb, start, length);
}

$XMLString* XMLStringFactoryImpl::newstr($chars* string, int32_t start, int32_t length) {
	return $new($XStringForChars, string, start, length);
}

$XMLString* XMLStringFactoryImpl::emptystr() {
	$init($XString);
	return $XString::EMPTYSTRING;
}

void clinit$XMLStringFactoryImpl($Class* class$) {
	$assignStatic(XMLStringFactoryImpl::m_xstringfactory, $new(XMLStringFactoryImpl));
}

XMLStringFactoryImpl::XMLStringFactoryImpl() {
}

$Class* XMLStringFactoryImpl::load$($String* name, bool initialize) {
	$loadClass(XMLStringFactoryImpl, name, initialize, &_XMLStringFactoryImpl_ClassInfo_, clinit$XMLStringFactoryImpl, allocate$XMLStringFactoryImpl);
	return class$;
}

$Class* XMLStringFactoryImpl::class$ = nullptr;

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com