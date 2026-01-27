#include <com/sun/org/apache/xml/internal/serializer/SerializerTrace.h>

#include <org/xml/sax/Attributes.h>
#include <jcpp.h>

#undef EVENTTYPE_CDATA
#undef EVENTTYPE_CHARACTERS
#undef EVENTTYPE_COMMENT
#undef EVENTTYPE_ENDDOCUMENT
#undef EVENTTYPE_ENDELEMENT
#undef EVENTTYPE_ENTITYREF
#undef EVENTTYPE_IGNORABLEWHITESPACE
#undef EVENTTYPE_OUTPUT_CHARACTERS
#undef EVENTTYPE_OUTPUT_PSEUDO_CHARACTERS
#undef EVENTTYPE_PI
#undef EVENTTYPE_STARTDOCUMENT
#undef EVENTTYPE_STARTELEMENT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attributes = ::org::xml::sax::Attributes;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _SerializerTrace_FieldInfo_[] = {
	{"EVENTTYPE_STARTDOCUMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SerializerTrace, EVENTTYPE_STARTDOCUMENT)},
	{"EVENTTYPE_ENDDOCUMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SerializerTrace, EVENTTYPE_ENDDOCUMENT)},
	{"EVENTTYPE_STARTELEMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SerializerTrace, EVENTTYPE_STARTELEMENT)},
	{"EVENTTYPE_ENDELEMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SerializerTrace, EVENTTYPE_ENDELEMENT)},
	{"EVENTTYPE_CHARACTERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SerializerTrace, EVENTTYPE_CHARACTERS)},
	{"EVENTTYPE_IGNORABLEWHITESPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SerializerTrace, EVENTTYPE_IGNORABLEWHITESPACE)},
	{"EVENTTYPE_PI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SerializerTrace, EVENTTYPE_PI)},
	{"EVENTTYPE_COMMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SerializerTrace, EVENTTYPE_COMMENT)},
	{"EVENTTYPE_ENTITYREF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SerializerTrace, EVENTTYPE_ENTITYREF)},
	{"EVENTTYPE_CDATA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SerializerTrace, EVENTTYPE_CDATA)},
	{"EVENTTYPE_OUTPUT_PSEUDO_CHARACTERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SerializerTrace, EVENTTYPE_OUTPUT_PSEUDO_CHARACTERS)},
	{"EVENTTYPE_OUTPUT_CHARACTERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SerializerTrace, EVENTTYPE_OUTPUT_CHARACTERS)},
	{}
};

$MethodInfo _SerializerTrace_MethodInfo_[] = {
	{"fireGenerateEvent", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SerializerTrace, fireGenerateEvent, void, int32_t)},
	{"fireGenerateEvent", "(ILjava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SerializerTrace, fireGenerateEvent, void, int32_t, $String*, $Attributes*)},
	{"fireGenerateEvent", "(I[CII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SerializerTrace, fireGenerateEvent, void, int32_t, $chars*, int32_t, int32_t)},
	{"fireGenerateEvent", "(ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SerializerTrace, fireGenerateEvent, void, int32_t, $String*, $String*)},
	{"fireGenerateEvent", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SerializerTrace, fireGenerateEvent, void, int32_t, $String*)},
	{"hasTraceListeners", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SerializerTrace, hasTraceListeners, bool)},
	{}
};

$ClassInfo _SerializerTrace_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.serializer.SerializerTrace",
	nullptr,
	nullptr,
	_SerializerTrace_FieldInfo_,
	_SerializerTrace_MethodInfo_
};

$Object* allocate$SerializerTrace($Class* clazz) {
	return $of($alloc(SerializerTrace));
}

$Class* SerializerTrace::load$($String* name, bool initialize) {
	$loadClass(SerializerTrace, name, initialize, &_SerializerTrace_ClassInfo_, allocate$SerializerTrace);
	return class$;
}

$Class* SerializerTrace::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com