#include <javax/xml/stream/XMLStreamConstants.h>

#include <jcpp.h>

#undef ATTRIBUTE
#undef CDATA
#undef CHARACTERS
#undef COMMENT
#undef DTD
#undef END_DOCUMENT
#undef END_ELEMENT
#undef ENTITY_DECLARATION
#undef ENTITY_REFERENCE
#undef NAMESPACE
#undef NOTATION_DECLARATION
#undef PROCESSING_INSTRUCTION
#undef SPACE
#undef START_DOCUMENT
#undef START_ELEMENT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace javax {
	namespace xml {
		namespace stream {

$FieldInfo _XMLStreamConstants_FieldInfo_[] = {
	{"START_ELEMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLStreamConstants, START_ELEMENT)},
	{"END_ELEMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLStreamConstants, END_ELEMENT)},
	{"PROCESSING_INSTRUCTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLStreamConstants, PROCESSING_INSTRUCTION)},
	{"CHARACTERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLStreamConstants, CHARACTERS)},
	{"COMMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLStreamConstants, COMMENT)},
	{"SPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLStreamConstants, SPACE)},
	{"START_DOCUMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLStreamConstants, START_DOCUMENT)},
	{"END_DOCUMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLStreamConstants, END_DOCUMENT)},
	{"ENTITY_REFERENCE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLStreamConstants, ENTITY_REFERENCE)},
	{"ATTRIBUTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLStreamConstants, ATTRIBUTE)},
	{"DTD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLStreamConstants, DTD)},
	{"CDATA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLStreamConstants, CDATA)},
	{"NAMESPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLStreamConstants, NAMESPACE)},
	{"NOTATION_DECLARATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLStreamConstants, NOTATION_DECLARATION)},
	{"ENTITY_DECLARATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLStreamConstants, ENTITY_DECLARATION)},
	{}
};

$ClassInfo _XMLStreamConstants_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.XMLStreamConstants",
	nullptr,
	nullptr,
	_XMLStreamConstants_FieldInfo_
};

$Object* allocate$XMLStreamConstants($Class* clazz) {
	return $of($alloc(XMLStreamConstants));
}

$Class* XMLStreamConstants::load$($String* name, bool initialize) {
	$loadClass(XMLStreamConstants, name, initialize, &_XMLStreamConstants_ClassInfo_, allocate$XMLStreamConstants);
	return class$;
}

$Class* XMLStreamConstants::class$ = nullptr;

		} // stream
	} // xml
} // javax