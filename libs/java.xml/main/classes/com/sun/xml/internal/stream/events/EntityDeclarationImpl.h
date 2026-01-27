#ifndef _com_sun_xml_internal_stream_events_EntityDeclarationImpl_h_
#define _com_sun_xml_internal_stream_events_EntityDeclarationImpl_h_
//$ class com.sun.xml.internal.stream.events.EntityDeclarationImpl
//$ extends com.sun.xml.internal.stream.events.DummyEvent
//$ implements javax.xml.stream.events.EntityDeclaration

#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <javax/xml/stream/events/EntityDeclaration.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class XMLResourceIdentifier;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class Writer;
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {

class EntityDeclarationImpl : public ::com::sun::xml::internal::stream::events::DummyEvent, public ::javax::xml::stream::events::EntityDeclaration {
	$class(EntityDeclarationImpl, $NO_CLASS_INIT, ::com::sun::xml::internal::stream::events::DummyEvent, ::javax::xml::stream::events::EntityDeclaration)
public:
	EntityDeclarationImpl();
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
	void init$($String* entityName, $String* replacementText);
	void init$($String* entityName, $String* replacementText, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* resourceIdentifier);
	virtual $String* getBaseURI() override;
	virtual $String* getEntityName();
	virtual $String* getName() override;
	virtual $String* getNotationName() override;
	virtual $String* getPublicId() override;
	virtual $String* getReplacementText() override;
	virtual $String* getSystemId() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* getXMLResourceIdentifier();
	virtual void init();
	virtual bool isAttribute() override;
	virtual bool isCharacters() override;
	virtual bool isEndDocument() override;
	virtual bool isEndElement() override;
	virtual bool isEntityReference() override;
	virtual bool isNamespace() override;
	virtual bool isProcessingInstruction() override;
	virtual bool isStartDocument() override;
	virtual bool isStartElement() override;
	virtual void setEntityName($String* entityName);
	virtual void setEntityReplacementText($String* replacementText);
	virtual void setNotationName($String* notationName);
	virtual void setXMLResourceIdentifier(::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* resourceIdentifier);
	virtual $String* toString() override;
	virtual void writeAsEncodedUnicode(::java::io::Writer* writer) override;
	virtual void writeAsEncodedUnicodeEx(::java::io::Writer* writer) override;
	::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* fXMLResourceIdentifier = nullptr;
	$String* fEntityName = nullptr;
	$String* fReplacementText = nullptr;
	$String* fNotationName = nullptr;
};

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_events_EntityDeclarationImpl_h_