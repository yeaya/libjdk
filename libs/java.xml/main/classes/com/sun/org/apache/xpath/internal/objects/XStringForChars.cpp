#include <com/sun/org/apache/xpath/internal/objects/XStringForChars.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xml/internal/utils/FastStringBuffer.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <jcpp.h>

#undef ER_FASTSTRINGBUFFER_CANNOT_BE_NULL
#undef ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS
#undef ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING

using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $FastStringBuffer = ::com::sun::org::apache::xml::internal::utils::FastStringBuffer;
using $XString = ::com::sun::org::apache::xpath::internal::objects::XString;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {

$FieldInfo _XStringForChars_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XStringForChars, serialVersionUID)},
	{"m_start", "I", nullptr, 0, $field(XStringForChars, m_start)},
	{"m_length", "I", nullptr, 0, $field(XStringForChars, m_length)},
	{"m_strCache", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XStringForChars, m_strCache)},
	{}
};

$MethodInfo _XStringForChars_MethodInfo_[] = {
	{"<init>", "([CII)V", nullptr, $PUBLIC, $method(XStringForChars, init$, void, $chars*, int32_t, int32_t)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(XStringForChars, init$, void, $String*)},
	{"appendToFsb", "(Lcom/sun/org/apache/xml/internal/utils/FastStringBuffer;)V", nullptr, $PUBLIC, $virtualMethod(XStringForChars, appendToFsb, void, $FastStringBuffer*)},
	{"charAt", "(I)C", nullptr, $PUBLIC, $virtualMethod(XStringForChars, charAt, char16_t, int32_t)},
	{"dispatchAsComment", "(Lorg/xml/sax/ext/LexicalHandler;)V", nullptr, $PUBLIC, $virtualMethod(XStringForChars, dispatchAsComment, void, $LexicalHandler*), "org.xml.sax.SAXException"},
	{"dispatchCharactersEvents", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(XStringForChars, dispatchCharactersEvents, void, $ContentHandler*), "org.xml.sax.SAXException"},
	{"fsb", "()Lcom/sun/org/apache/xml/internal/utils/FastStringBuffer;", nullptr, $PUBLIC, $virtualMethod(XStringForChars, fsb, $FastStringBuffer*)},
	{"getChars", "(II[CI)V", nullptr, $PUBLIC, $virtualMethod(XStringForChars, getChars, void, int32_t, int32_t, $chars*, int32_t)},
	{"hasString", "()Z", nullptr, $PUBLIC, $virtualMethod(XStringForChars, hasString, bool)},
	{"length", "()I", nullptr, $PUBLIC, $virtualMethod(XStringForChars, length, int32_t)},
	{"object", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XStringForChars, object, $Object*)},
	{"str", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XStringForChars, str, $String*)},
	{}
};

$ClassInfo _XStringForChars_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.objects.XStringForChars",
	"com.sun.org.apache.xpath.internal.objects.XString",
	nullptr,
	_XStringForChars_FieldInfo_,
	_XStringForChars_MethodInfo_
};

$Object* allocate$XStringForChars($Class* clazz) {
	return $of($alloc(XStringForChars));
}

void XStringForChars::init$($chars* val, int32_t start, int32_t length) {
	$XString::init$($of(val));
	$set(this, m_strCache, nullptr);
	this->m_start = start;
	this->m_length = length;
	if (nullptr == val) {
		$init($XPATHErrorResources);
		$throwNew($IllegalArgumentException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_FASTSTRINGBUFFER_CANNOT_BE_NULL, nullptr)));
	}
}

void XStringForChars::init$($String* val) {
	$XString::init$(val);
	$set(this, m_strCache, nullptr);
	$init($XPATHErrorResources);
	$throwNew($IllegalArgumentException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING, nullptr)));
}

$FastStringBuffer* XStringForChars::fsb() {
	$init($XPATHErrorResources);
	$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS, nullptr)));
	$shouldNotReachHere();
}

void XStringForChars::appendToFsb($FastStringBuffer* fsb) {
	$nc(fsb)->append($cast($chars, this->m_obj), this->m_start, this->m_length);
}

bool XStringForChars::hasString() {
	return (nullptr != this->m_strCache);
}

$String* XStringForChars::str() {
	if (nullptr == this->m_strCache) {
		$set(this, m_strCache, $new($String, $cast($chars, this->m_obj), this->m_start, this->m_length));
	}
	return this->m_strCache;
}

$Object* XStringForChars::object() {
	return $of(str());
}

void XStringForChars::dispatchCharactersEvents($ContentHandler* ch) {
	$nc(ch)->characters($cast($chars, this->m_obj), this->m_start, this->m_length);
}

void XStringForChars::dispatchAsComment($LexicalHandler* lh) {
	$nc(lh)->comment($cast($chars, this->m_obj), this->m_start, this->m_length);
}

int32_t XStringForChars::length() {
	return this->m_length;
}

char16_t XStringForChars::charAt(int32_t index) {
	return $nc(($cast($chars, this->m_obj)))->get(index + this->m_start);
}

void XStringForChars::getChars(int32_t srcBegin, int32_t srcEnd, $chars* dst, int32_t dstBegin) {
	$System::arraycopy($cast($chars, this->m_obj), this->m_start + srcBegin, dst, dstBegin, srcEnd);
}

XStringForChars::XStringForChars() {
}

$Class* XStringForChars::load$($String* name, bool initialize) {
	$loadClass(XStringForChars, name, initialize, &_XStringForChars_ClassInfo_, allocate$XStringForChars);
	return class$;
}

$Class* XStringForChars::class$ = nullptr;

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com