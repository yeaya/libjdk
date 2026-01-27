#include <com/sun/org/apache/xpath/internal/objects/XStringForFSB.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xml/internal/utils/FastStringBuffer.h>
#include <com/sun/org/apache/xml/internal/utils/XMLCharacterRecognizer.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>
#include <com/sun/org/apache/xpath/internal/objects/XMLStringFactoryImpl.h>
#include <com/sun/org/apache/xpath/internal/objects/XNodeSet.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/lang/Math.h>
#include <java/lang/NumberFormatException.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <jcpp.h>

#undef CLASS_NUMBER
#undef EMPTYSTRING
#undef ER_FASTSTRINGBUFFER_CANNOT_BE_NULL
#undef ER_FSB_CANNOT_TAKE_STRING

using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $FastStringBuffer = ::com::sun::org::apache::xml::internal::utils::FastStringBuffer;
using $XMLCharacterRecognizer = ::com::sun::org::apache::xml::internal::utils::XMLCharacterRecognizer;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $XMLStringFactory = ::com::sun::org::apache::xml::internal::utils::XMLStringFactory;
using $XMLStringFactoryImpl = ::com::sun::org::apache::xpath::internal::objects::XMLStringFactoryImpl;
using $XNodeSet = ::com::sun::org::apache::xpath::internal::objects::XNodeSet;
using $XNumber = ::com::sun::org::apache::xpath::internal::objects::XNumber;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XString = ::com::sun::org::apache::xpath::internal::objects::XString;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {

$FieldInfo _XStringForFSB_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XStringForFSB, serialVersionUID)},
	{"m_start", "I", nullptr, 0, $field(XStringForFSB, m_start)},
	{"m_length", "I", nullptr, 0, $field(XStringForFSB, m_length)},
	{"m_strCache", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XStringForFSB, m_strCache)},
	{"m_hash", "I", nullptr, $PROTECTED, $field(XStringForFSB, m_hash)},
	{}
};

$MethodInfo _XStringForFSB_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/utils/FastStringBuffer;II)V", nullptr, $PUBLIC, $method(XStringForFSB, init$, void, $FastStringBuffer*, int32_t, int32_t)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(XStringForFSB, init$, void, $String*)},
	{"appendToFsb", "(Lcom/sun/org/apache/xml/internal/utils/FastStringBuffer;)V", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, appendToFsb, void, $FastStringBuffer*)},
	{"charAt", "(I)C", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, charAt, char16_t, int32_t)},
	{"compareTo", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;)I", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, compareTo, int32_t, $XMLString*)},
	{"compareToIgnoreCase", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;)I", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, compareToIgnoreCase, int32_t, $XMLString*)},
	{"concat", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, concat, $XMLString*, $String*)},
	{"dispatchAsComment", "(Lorg/xml/sax/ext/LexicalHandler;)V", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, dispatchAsComment, void, $LexicalHandler*), "org.xml.sax.SAXException"},
	{"dispatchCharactersEvents", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, dispatchCharactersEvents, void, $ContentHandler*), "org.xml.sax.SAXException"},
	{"equals", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;)Z", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, equals, bool, $XMLString*)},
	{"equals", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Z", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, equals, bool, $XObject*)},
	{"equals", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, equals, bool, $String*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, equals, bool, Object$*)},
	{"equalsIgnoreCase", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, equalsIgnoreCase, bool, $String*)},
	{"fixWhiteSpace", "(ZZZ)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, fixWhiteSpace, $XMLString*, bool, bool, bool)},
	{"fsb", "()Lcom/sun/org/apache/xml/internal/utils/FastStringBuffer;", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, fsb, $FastStringBuffer*)},
	{"getChars", "(II[CI)V", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, getChars, void, int32_t, int32_t, $chars*, int32_t)},
	{"hasString", "()Z", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, hasString, bool)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, hashCode, int32_t)},
	{"indexOf", "(I)I", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, indexOf, int32_t, int32_t)},
	{"indexOf", "(II)I", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, indexOf, int32_t, int32_t, int32_t)},
	{"isSpace", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(XStringForFSB, isSpace, bool, char16_t)},
	{"length", "()I", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, length, int32_t)},
	{"object", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, object, $Object*)},
	{"startsWith", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;I)Z", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, startsWith, bool, $XMLString*, int32_t)},
	{"startsWith", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;)Z", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, startsWith, bool, $XMLString*)},
	{"str", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, str, $String*)},
	{"substring", "(I)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, substring, $XMLString*, int32_t)},
	{"substring", "(II)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, substring, $XMLString*, int32_t, int32_t)},
	{"toDouble", "()D", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, toDouble, double)},
	{"trim", "()Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC, $virtualMethod(XStringForFSB, trim, $XMLString*)},
	{}
};

$ClassInfo _XStringForFSB_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.objects.XStringForFSB",
	"com.sun.org.apache.xpath.internal.objects.XString",
	nullptr,
	_XStringForFSB_FieldInfo_,
	_XStringForFSB_MethodInfo_
};

$Object* allocate$XStringForFSB($Class* clazz) {
	return $of($alloc(XStringForFSB));
}

void XStringForFSB::init$($FastStringBuffer* val, int32_t start, int32_t length) {
	$XString::init$($of(val));
	$set(this, m_strCache, nullptr);
	this->m_hash = 0;
	this->m_start = start;
	this->m_length = length;
	if (nullptr == val) {
		$init($XPATHErrorResources);
		$throwNew($IllegalArgumentException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_FASTSTRINGBUFFER_CANNOT_BE_NULL, nullptr)));
	}
}

void XStringForFSB::init$($String* val) {
	$XString::init$(val);
	$set(this, m_strCache, nullptr);
	this->m_hash = 0;
	$init($XPATHErrorResources);
	$throwNew($IllegalArgumentException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_FSB_CANNOT_TAKE_STRING, nullptr)));
}

$FastStringBuffer* XStringForFSB::fsb() {
	return ($cast($FastStringBuffer, this->m_obj));
}

void XStringForFSB::appendToFsb($FastStringBuffer* fsb) {
	$nc(fsb)->append($(str()));
}

bool XStringForFSB::hasString() {
	return (nullptr != this->m_strCache);
}

$Object* XStringForFSB::object() {
	return $of(str());
}

$String* XStringForFSB::str() {
	if (nullptr == this->m_strCache) {
		$set(this, m_strCache, $nc($(fsb()))->getString(this->m_start, this->m_length));
	}
	return this->m_strCache;
}

void XStringForFSB::dispatchCharactersEvents($ContentHandler* ch) {
	$nc($(fsb()))->sendSAXcharacters(ch, this->m_start, this->m_length);
}

void XStringForFSB::dispatchAsComment($LexicalHandler* lh) {
	$nc($(fsb()))->sendSAXComment(lh, this->m_start, this->m_length);
}

int32_t XStringForFSB::length() {
	return this->m_length;
}

char16_t XStringForFSB::charAt(int32_t index) {
	return $nc($(fsb()))->charAt(this->m_start + index);
}

void XStringForFSB::getChars(int32_t srcBegin, int32_t srcEnd, $chars* dst, int32_t dstBegin) {
	int32_t n = srcEnd - srcBegin;
	if (n > this->m_length) {
		n = this->m_length;
	}
	if (n > ($nc(dst)->length - dstBegin)) {
		n = (dst->length - dstBegin);
	}
	int32_t end = srcBegin + this->m_start + n;
	int32_t d = dstBegin;
	$var($FastStringBuffer, fsb, this->fsb());
	for (int32_t i = srcBegin + this->m_start; i < end; ++i) {
		$nc(dst)->set(d++, $nc(fsb)->charAt(i));
	}
}

bool XStringForFSB::equals($XMLString* obj2) {
	if ($equals(this, obj2)) {
		return true;
	}
	int32_t n = this->m_length;
	if (n == $nc(obj2)->length()) {
		$var($FastStringBuffer, fsb, this->fsb());
		int32_t i = this->m_start;
		int32_t j = 0;
		while (n-- != 0) {
			char16_t var$0 = $nc(fsb)->charAt(i);
			if (var$0 != obj2->charAt(j)) {
				return false;
			}
			++i;
			++j;
		}
		return true;
	}
	return false;
}

bool XStringForFSB::equals($XObject* obj2) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, obj2)) {
		return true;
	}
	if ($nc(obj2)->getType() == $XObject::CLASS_NUMBER) {
		return obj2->equals(static_cast<$XObject*>(this));
	}
	$var($String, str, $nc(obj2)->str());
	int32_t n = this->m_length;
	if (n == $nc(str)->length()) {
		$var($FastStringBuffer, fsb, this->fsb());
		int32_t i = this->m_start;
		int32_t j = 0;
		while (n-- != 0) {
			char16_t var$0 = $nc(fsb)->charAt(i);
			if (var$0 != str->charAt(j)) {
				return false;
			}
			++i;
			++j;
		}
		return true;
	}
	return false;
}

bool XStringForFSB::equals($String* anotherString) {
	int32_t n = this->m_length;
	if (n == $nc(anotherString)->length()) {
		$var($FastStringBuffer, fsb, this->fsb());
		int32_t i = this->m_start;
		int32_t j = 0;
		while (n-- != 0) {
			char16_t var$0 = $nc(fsb)->charAt(i);
			if (var$0 != anotherString->charAt(j)) {
				return false;
			}
			++i;
			++j;
		}
		return true;
	}
	return false;
}

bool XStringForFSB::equals(Object$* obj2) {
	if (nullptr == obj2) {
		return false;
	}
	if ($instanceOf($XNumber, obj2)) {
		return $nc($of(obj2))->equals(this);
	} else if ($instanceOf($XNodeSet, obj2)) {
		return $nc($of(obj2))->equals(this);
	} else if ($instanceOf(XStringForFSB, obj2)) {
		return equals($cast($XMLString, obj2));
	} else {
		return equals($($nc($of(obj2))->toString()));
	}
}

bool XStringForFSB::equalsIgnoreCase($String* anotherString) {
	return (this->m_length == $nc(anotherString)->length()) ? $nc($(str()))->equalsIgnoreCase(anotherString) : false;
}

int32_t XStringForFSB::compareTo($XMLString* xstr) {
	int32_t len1 = this->m_length;
	int32_t len2 = $nc(xstr)->length();
	int32_t n = $Math::min(len1, len2);
	$var($FastStringBuffer, fsb, this->fsb());
	int32_t i = this->m_start;
	int32_t j = 0;
	while (n-- != 0) {
		char16_t c1 = $nc(fsb)->charAt(i);
		char16_t c2 = xstr->charAt(j);
		if (c1 != c2) {
			return c1 - c2;
		}
		++i;
		++j;
	}
	return len1 - len2;
}

int32_t XStringForFSB::compareToIgnoreCase($XMLString* xstr) {
	int32_t len1 = this->m_length;
	int32_t len2 = $nc(xstr)->length();
	int32_t n = $Math::min(len1, len2);
	$var($FastStringBuffer, fsb, this->fsb());
	int32_t i = this->m_start;
	int32_t j = 0;
	while (n-- != 0) {
		char16_t c1 = $Character::toLowerCase($nc(fsb)->charAt(i));
		char16_t c2 = $Character::toLowerCase(xstr->charAt(j));
		if (c1 != c2) {
			return c1 - c2;
		}
		++i;
		++j;
	}
	return len1 - len2;
}

int32_t XStringForFSB::hashCode() {
	return $XString::hashCode();
}

bool XStringForFSB::startsWith($XMLString* prefix, int32_t toffset) {
	$var($FastStringBuffer, fsb, this->fsb());
	int32_t to = this->m_start + toffset;
	int32_t tlim = this->m_start + this->m_length;
	int32_t po = 0;
	int32_t pc = $nc(prefix)->length();
	if ((toffset < 0) || (toffset > this->m_length - pc)) {
		return false;
	}
	while (--pc >= 0) {
		char16_t var$0 = $nc(fsb)->charAt(to);
		if (var$0 != prefix->charAt(po)) {
			return false;
		}
		++to;
		++po;
	}
	return true;
}

bool XStringForFSB::startsWith($XMLString* prefix) {
	return startsWith(prefix, 0);
}

int32_t XStringForFSB::indexOf(int32_t ch) {
	return indexOf(ch, 0);
}

int32_t XStringForFSB::indexOf(int32_t ch, int32_t fromIndex) {
	int32_t max = this->m_start + this->m_length;
	$var($FastStringBuffer, fsb, this->fsb());
	if (fromIndex < 0) {
		fromIndex = 0;
	} else if (fromIndex >= this->m_length) {
		return -1;
	}
	for (int32_t i = this->m_start + fromIndex; i < max; ++i) {
		if ($nc(fsb)->charAt(i) == ch) {
			return i - this->m_start;
		}
	}
	return -1;
}

$XMLString* XStringForFSB::substring(int32_t beginIndex) {
	int32_t len = this->m_length - beginIndex;
	if (len <= 0) {
		$init($XString);
		return $XString::EMPTYSTRING;
	} else {
		int32_t start = this->m_start + beginIndex;
		return $new(XStringForFSB, $(fsb()), start, len);
	}
}

$XMLString* XStringForFSB::substring(int32_t beginIndex, int32_t endIndex) {
	int32_t len = endIndex - beginIndex;
	if (len > this->m_length) {
		len = this->m_length;
	}
	if (len <= 0) {
		$init($XString);
		return $XString::EMPTYSTRING;
	} else {
		int32_t start = this->m_start + beginIndex;
		return $new(XStringForFSB, $(fsb()), start, len);
	}
}

$XMLString* XStringForFSB::concat($String* str) {
	$useLocalCurrentObjectStackCache();
	return $new($XString, $($nc($(this->str()))->concat(str)));
}

$XMLString* XStringForFSB::trim() {
	return fixWhiteSpace(true, true, false);
}

bool XStringForFSB::isSpace(char16_t ch) {
	$init(XStringForFSB);
	return $XMLCharacterRecognizer::isWhiteSpace(ch);
}

$XMLString* XStringForFSB::fixWhiteSpace(bool trimHead, bool trimTail, bool doublePunctuationSpaces) {
	$useLocalCurrentObjectStackCache();
	int32_t end = this->m_length + this->m_start;
	$var($chars, buf, $new($chars, this->m_length));
	$var($FastStringBuffer, fsb, this->fsb());
	bool edit = false;
	int32_t d = 0;
	bool pres = false;
	for (int32_t s = this->m_start; s < end; ++s) {
		char16_t c = $nc(fsb)->charAt(s);
		if (isSpace(c)) {
			if (!pres) {
				if (u' ' != c) {
					edit = true;
				}
				buf->set(d++, u' ');
				if (doublePunctuationSpaces && (d != 0)) {
					char16_t prevChar = buf->get(d - 1);
					if (!((prevChar == u'.') || (prevChar == u'!') || (prevChar == u'?'))) {
						pres = true;
					}
				} else {
					pres = true;
				}
			} else {
				edit = true;
				pres = true;
			}
		} else {
			buf->set(d++, c);
			pres = false;
		}
	}
	if (trimTail && 1 <= d && u' ' == buf->get(d - 1)) {
		edit = true;
		--d;
	}
	int32_t start = 0;
	if (trimHead && 0 < d && u' ' == buf->get(0)) {
		edit = true;
		++start;
	}
	$var($XMLStringFactory, xsf, $XMLStringFactoryImpl::getFactory());
	return edit ? $nc(xsf)->newstr(buf, start, d - start) : static_cast<$XMLString*>(this);
}

double XStringForFSB::toDouble() {
	$useLocalCurrentObjectStackCache();
	if (this->m_length == 0) {
		$init($Double);
		return $Double::NaN;
	}
	int32_t i = 0;
	char16_t c = 0;
	$var($String, valueString, $nc($(fsb()))->getString(this->m_start, this->m_length));
	for (i = 0; i < this->m_length; ++i) {
		if (!$XMLCharacterRecognizer::isWhiteSpace($nc(valueString)->charAt(i))) {
			break;
		}
	}
	if (i == this->m_length) {
		$init($Double);
		return $Double::NaN;
	}
	if ($nc(valueString)->charAt(i) == u'-') {
		++i;
	}
	for (; i < this->m_length; ++i) {
		c = $nc(valueString)->charAt(i);
		if (c != u'.' && (c < u'0' || c > u'9')) {
			break;
		}
	}
	for (; i < this->m_length; ++i) {
		if (!$XMLCharacterRecognizer::isWhiteSpace($nc(valueString)->charAt(i))) {
			break;
		}
	}
	if (i != this->m_length) {
		$init($Double);
		return $Double::NaN;
	}
	try {
		return $Double::parseDouble(valueString);
	} catch ($NumberFormatException& nfe) {
		$init($Double);
		return $Double::NaN;
	}
	$shouldNotReachHere();
}

XStringForFSB::XStringForFSB() {
}

$Class* XStringForFSB::load$($String* name, bool initialize) {
	$loadClass(XStringForFSB, name, initialize, &_XStringForFSB_ClassInfo_, allocate$XStringForFSB);
	return class$;
}

$Class* XStringForFSB::class$ = nullptr;

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com