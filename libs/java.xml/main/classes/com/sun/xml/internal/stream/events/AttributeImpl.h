#ifndef _com_sun_xml_internal_stream_events_AttributeImpl_h_
#define _com_sun_xml_internal_stream_events_AttributeImpl_h_
//$ class com.sun.xml.internal.stream.events.AttributeImpl
//$ extends com.sun.xml.internal.stream.events.DummyEvent
//$ implements javax.xml.stream.events.Attribute

#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <javax/xml/stream/events/Attribute.h>

namespace java {
	namespace io {
		class Writer;
	}
}
namespace javax {
	namespace xml {
		namespace namespace$ {
			class QName;
		}
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {

class AttributeImpl : public ::com::sun::xml::internal::stream::events::DummyEvent, public ::javax::xml::stream::events::Attribute {
	$class(AttributeImpl, $NO_CLASS_INIT, ::com::sun::xml::internal::stream::events::DummyEvent, ::javax::xml::stream::events::Attribute)
public:
	AttributeImpl();
	virtual ::javax::xml::stream::events::Characters* asCharacters() override;
	virtual ::javax::xml::stream::events::EndElement* asEndElement() override;
	virtual ::javax::xml::stream::events::StartElement* asStartElement() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t getEventType() override;
	virtual ::javax::xml::stream::Location* getLocation() override;
	virtual ::javax::xml::namespace$::QName* getSchemaType() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($String* name, $String* value);
	void init$($String* prefix, $String* name, $String* value);
	void init$($String* prefix, $String* uri, $String* localPart, $String* value, $String* type);
	void init$($String* prefix, $String* uri, $String* localPart, $String* value, $String* nonNormalizedvalue, $String* type, bool isSpecified);
	void init$(::javax::xml::namespace$::QName* qname, $String* value, $String* nonNormalizedvalue, $String* type, bool isSpecified);
	virtual $String* getDTDType() override;
	virtual ::javax::xml::namespace$::QName* getName() override;
	virtual $String* getNonNormalizedValue();
	virtual $String* getValue() override;
	virtual void init();
	virtual bool isAttribute() override;
	virtual bool isCharacters() override;
	virtual bool isEndDocument() override;
	virtual bool isEndElement() override;
	virtual bool isEntityReference() override;
	virtual bool isNamespace() override;
	virtual bool isProcessingInstruction() override;
	virtual bool isSpecified() override;
	virtual bool isStartDocument() override;
	virtual bool isStartElement() override;
	virtual void setAttributeType($String* attributeType);
	virtual void setName(::javax::xml::namespace$::QName* name);
	virtual void setNonNormalizedValue($String* nonNormalizedvalue);
	virtual void setSpecified(bool isSpecified);
	virtual void setValue($String* value);
	virtual $String* toString() override;
	virtual void writeAsEncodedUnicode(::java::io::Writer* writer) override;
	virtual void writeAsEncodedUnicodeEx(::java::io::Writer* writer) override;
	$String* fValue = nullptr;
	$String* fNonNormalizedvalue = nullptr;
	::javax::xml::namespace$::QName* fQName = nullptr;
	$String* fAttributeType = nullptr;
	bool fIsSpecified = false;
};

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_events_AttributeImpl_h_