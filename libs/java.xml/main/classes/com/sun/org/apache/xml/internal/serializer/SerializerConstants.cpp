#include <com/sun/org/apache/xml/internal/serializer/SerializerConstants.h>

#include <jcpp.h>

#undef CDATA_CONTINUE
#undef CDATA_DELIMITER_CLOSE
#undef CDATA_DELIMITER_OPEN
#undef DEFAULT_SAX_SERIALIZER
#undef EMPTYSTRING
#undef ENTITY_AMP
#undef ENTITY_CRLF
#undef ENTITY_GT
#undef ENTITY_LT
#undef ENTITY_QUOT
#undef XMLNS_PREFIX
#undef XMLNS_URI
#undef XMLVERSION10
#undef XMLVERSION11
#undef XML_PREFIX

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _SerializerConstants_FieldInfo_[] = {
	{"CDATA_CONTINUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SerializerConstants, CDATA_CONTINUE)},
	{"CDATA_DELIMITER_CLOSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SerializerConstants, CDATA_DELIMITER_CLOSE)},
	{"CDATA_DELIMITER_OPEN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SerializerConstants, CDATA_DELIMITER_OPEN)},
	{"EMPTYSTRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SerializerConstants, EMPTYSTRING)},
	{"ENTITY_AMP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SerializerConstants, ENTITY_AMP)},
	{"ENTITY_CRLF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SerializerConstants, ENTITY_CRLF)},
	{"ENTITY_GT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SerializerConstants, ENTITY_GT)},
	{"ENTITY_LT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SerializerConstants, ENTITY_LT)},
	{"ENTITY_QUOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SerializerConstants, ENTITY_QUOT)},
	{"XML_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SerializerConstants, XML_PREFIX)},
	{"XMLNS_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SerializerConstants, XMLNS_PREFIX)},
	{"XMLNS_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SerializerConstants, XMLNS_URI)},
	{"DEFAULT_SAX_SERIALIZER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SerializerConstants, DEFAULT_SAX_SERIALIZER)},
	{"XMLVERSION11", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SerializerConstants, XMLVERSION11)},
	{"XMLVERSION10", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SerializerConstants, XMLVERSION10)},
	{}
};

$ClassInfo _SerializerConstants_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.serializer.SerializerConstants",
	nullptr,
	nullptr,
	_SerializerConstants_FieldInfo_
};

$Object* allocate$SerializerConstants($Class* clazz) {
	return $of($alloc(SerializerConstants));
}

$String* SerializerConstants::CDATA_CONTINUE = nullptr;
$String* SerializerConstants::CDATA_DELIMITER_CLOSE = nullptr;
$String* SerializerConstants::CDATA_DELIMITER_OPEN = nullptr;
$String* SerializerConstants::EMPTYSTRING = nullptr;
$String* SerializerConstants::ENTITY_AMP = nullptr;
$String* SerializerConstants::ENTITY_CRLF = nullptr;
$String* SerializerConstants::ENTITY_GT = nullptr;
$String* SerializerConstants::ENTITY_LT = nullptr;
$String* SerializerConstants::ENTITY_QUOT = nullptr;
$String* SerializerConstants::XML_PREFIX = nullptr;
$String* SerializerConstants::XMLNS_PREFIX = nullptr;
$String* SerializerConstants::XMLNS_URI = nullptr;
$String* SerializerConstants::DEFAULT_SAX_SERIALIZER = nullptr;
$String* SerializerConstants::XMLVERSION11 = nullptr;
$String* SerializerConstants::XMLVERSION10 = nullptr;

void clinit$SerializerConstants($Class* class$) {
	$assignStatic(SerializerConstants::CDATA_CONTINUE, "]]]]><![CDATA[>"_s);
	$assignStatic(SerializerConstants::CDATA_DELIMITER_CLOSE, "]]>"_s);
	$assignStatic(SerializerConstants::CDATA_DELIMITER_OPEN, "<![CDATA["_s);
	$assignStatic(SerializerConstants::EMPTYSTRING, ""_s);
	$assignStatic(SerializerConstants::ENTITY_AMP, "&amp;"_s);
	$assignStatic(SerializerConstants::ENTITY_CRLF, "&#xA;"_s);
	$assignStatic(SerializerConstants::ENTITY_GT, "&gt;"_s);
	$assignStatic(SerializerConstants::ENTITY_LT, "&lt;"_s);
	$assignStatic(SerializerConstants::ENTITY_QUOT, "&quot;"_s);
	$assignStatic(SerializerConstants::XML_PREFIX, "xml"_s);
	$assignStatic(SerializerConstants::XMLNS_PREFIX, "xmlns"_s);
	$assignStatic(SerializerConstants::XMLNS_URI, "http://www.w3.org/2000/xmlns/"_s);
	$assignStatic(SerializerConstants::DEFAULT_SAX_SERIALIZER, "com.sun.org.apache.xml.internal.serializer.ToXMLSAXHandler"_s);
	$assignStatic(SerializerConstants::XMLVERSION11, "1.1"_s);
	$assignStatic(SerializerConstants::XMLVERSION10, "1.0"_s);
}

$Class* SerializerConstants::load$($String* name, bool initialize) {
	$loadClass(SerializerConstants, name, initialize, &_SerializerConstants_ClassInfo_, clinit$SerializerConstants, allocate$SerializerConstants);
	return class$;
}

$Class* SerializerConstants::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com