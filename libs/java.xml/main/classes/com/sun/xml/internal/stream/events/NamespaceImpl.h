#ifndef _com_sun_xml_internal_stream_events_NamespaceImpl_h_
#define _com_sun_xml_internal_stream_events_NamespaceImpl_h_
//$ class com.sun.xml.internal.stream.events.NamespaceImpl
//$ extends com.sun.xml.internal.stream.events.AttributeImpl
//$ implements javax.xml.stream.events.Namespace

#include <com/sun/xml/internal/stream/events/AttributeImpl.h>
#include <javax/xml/stream/events/Namespace.h>

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {

class NamespaceImpl : public ::com::sun::xml::internal::stream::events::AttributeImpl, public ::javax::xml::stream::events::Namespace {
	$class(NamespaceImpl, $NO_CLASS_INIT, ::com::sun::xml::internal::stream::events::AttributeImpl, ::javax::xml::stream::events::Namespace)
public:
	NamespaceImpl();
	virtual ::javax::xml::stream::events::Characters* asCharacters() override;
	virtual ::javax::xml::stream::events::EndElement* asEndElement() override;
	virtual ::javax::xml::stream::events::StartElement* asStartElement() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $String* getDTDType() override;
	virtual ::javax::xml::stream::Location* getLocation() override;
	virtual ::javax::xml::namespace$::QName* getName() override;
	virtual ::javax::xml::namespace$::QName* getSchemaType() override;
	virtual $String* getValue() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($String* namespaceURI);
	void init$($String* prefix, $String* namespaceURI);
	virtual int32_t getEventType() override;
	virtual $String* getNamespaceURI() override;
	virtual $String* getPrefix() override;
	virtual void init() override;
	virtual bool isAttribute() override;
	virtual bool isCharacters() override;
	virtual bool isDefaultNamespaceDeclaration() override;
	virtual bool isEndDocument() override;
	virtual bool isEndElement() override;
	virtual bool isEntityReference() override;
	virtual bool isNamespace() override;
	virtual bool isProcessingInstruction() override;
	virtual bool isSpecified() override;
	virtual bool isStartDocument() override;
	virtual bool isStartElement() override;
	virtual void setNamespaceURI($String* uri);
	virtual void setPrefix($String* prefix);
	virtual $String* toString() override;
	virtual void writeAsEncodedUnicode(::java::io::Writer* writer) override;
};

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_events_NamespaceImpl_h_