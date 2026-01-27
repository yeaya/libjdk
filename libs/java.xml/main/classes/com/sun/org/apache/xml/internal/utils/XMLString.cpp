#include <com/sun/org/apache/xml/internal/utils/XMLString.h>

#include <java/util/Locale.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$MethodInfo _XMLString_MethodInfo_[] = {
	{"charAt", "(I)C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, charAt, char16_t, int32_t)},
	{"compareTo", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, compareTo, int32_t, XMLString*)},
	{"compareToIgnoreCase", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, compareToIgnoreCase, int32_t, XMLString*)},
	{"concat", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, concat, XMLString*, $String*)},
	{"dispatchAsComment", "(Lorg/xml/sax/ext/LexicalHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, dispatchAsComment, void, $LexicalHandler*), "org.xml.sax.SAXException"},
	{"dispatchCharactersEvents", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, dispatchCharactersEvents, void, $ContentHandler*), "org.xml.sax.SAXException"},
	{"endsWith", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, endsWith, bool, $String*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"equals", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, equals, bool, XMLString*)},
	{"equals", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, equals, bool, $String*)},
	{"equalsIgnoreCase", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, equalsIgnoreCase, bool, $String*)},
	{"fixWhiteSpace", "(ZZZ)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, fixWhiteSpace, XMLString*, bool, bool, bool)},
	{"getChars", "(II[CI)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, getChars, void, int32_t, int32_t, $chars*, int32_t)},
	{"hasString", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, hasString, bool)},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"indexOf", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, indexOf, int32_t, int32_t)},
	{"indexOf", "(II)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, indexOf, int32_t, int32_t, int32_t)},
	{"indexOf", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, indexOf, int32_t, $String*)},
	{"indexOf", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, indexOf, int32_t, XMLString*)},
	{"indexOf", "(Ljava/lang/String;I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, indexOf, int32_t, $String*, int32_t)},
	{"lastIndexOf", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, lastIndexOf, int32_t, int32_t)},
	{"lastIndexOf", "(II)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, lastIndexOf, int32_t, int32_t, int32_t)},
	{"lastIndexOf", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, lastIndexOf, int32_t, $String*)},
	{"lastIndexOf", "(Ljava/lang/String;I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, lastIndexOf, int32_t, $String*, int32_t)},
	{"length", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, length, int32_t)},
	{"startsWith", "(Ljava/lang/String;I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, startsWith, bool, $String*, int32_t)},
	{"startsWith", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, startsWith, bool, XMLString*, int32_t)},
	{"startsWith", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, startsWith, bool, $String*)},
	{"startsWith", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, startsWith, bool, XMLString*)},
	{"substring", "(I)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, substring, XMLString*, int32_t)},
	{"substring", "(II)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, substring, XMLString*, int32_t, int32_t)},
	{"toDouble", "()D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, toDouble, double)},
	{"toLowerCase", "(Ljava/util/Locale;)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, toLowerCase, XMLString*, $Locale*)},
	{"toLowerCase", "()Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, toLowerCase, XMLString*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"toUpperCase", "(Ljava/util/Locale;)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, toUpperCase, XMLString*, $Locale*)},
	{"toUpperCase", "()Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, toUpperCase, XMLString*)},
	{"trim", "()Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLString, trim, XMLString*)},
	{}
};

$ClassInfo _XMLString_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.utils.XMLString",
	nullptr,
	nullptr,
	nullptr,
	_XMLString_MethodInfo_
};

$Object* allocate$XMLString($Class* clazz) {
	return $of($alloc(XMLString));
}

bool XMLString::equals(Object$* anObject) {
	 return this->$Object::equals(anObject);
}

int32_t XMLString::hashCode() {
	 return this->$Object::hashCode();
}

$String* XMLString::toString() {
	 return this->$Object::toString();
}

$Class* XMLString::load$($String* name, bool initialize) {
	$loadClass(XMLString, name, initialize, &_XMLString_ClassInfo_, allocate$XMLString);
	return class$;
}

$Class* XMLString::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com