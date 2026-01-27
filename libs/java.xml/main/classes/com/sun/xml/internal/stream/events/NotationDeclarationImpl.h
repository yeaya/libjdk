#ifndef _com_sun_xml_internal_stream_events_NotationDeclarationImpl_h_
#define _com_sun_xml_internal_stream_events_NotationDeclarationImpl_h_
//$ class com.sun.xml.internal.stream.events.NotationDeclarationImpl
//$ extends com.sun.xml.internal.stream.events.DummyEvent
//$ implements javax.xml.stream.events.NotationDeclaration

#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <javax/xml/stream/events/NotationDeclaration.h>

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace dtd {
						namespace nonvalidating {
							class XMLNotationDecl;
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

class NotationDeclarationImpl : public ::com::sun::xml::internal::stream::events::DummyEvent, public ::javax::xml::stream::events::NotationDeclaration {
	$class(NotationDeclarationImpl, $NO_CLASS_INIT, ::com::sun::xml::internal::stream::events::DummyEvent, ::javax::xml::stream::events::NotationDeclaration)
public:
	NotationDeclarationImpl();
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
	void init$($String* name, $String* publicId, $String* systemId);
	void init$(::com::sun::xml::internal::stream::dtd::nonvalidating::XMLNotationDecl* notation);
	virtual $String* getName() override;
	virtual $String* getPublicId() override;
	virtual $String* getSystemId() override;
	virtual bool isAttribute() override;
	virtual bool isCharacters() override;
	virtual bool isEndDocument() override;
	virtual bool isEndElement() override;
	virtual bool isEntityReference() override;
	virtual bool isNamespace() override;
	virtual bool isProcessingInstruction() override;
	virtual bool isStartDocument() override;
	virtual bool isStartElement() override;
	virtual void setName($String* name);
	virtual void setPublicId($String* publicId);
	virtual void setSystemId($String* systemId);
	virtual $String* toString() override;
	virtual void writeAsEncodedUnicode(::java::io::Writer* writer) override;
	virtual void writeAsEncodedUnicodeEx(::java::io::Writer* writer) override;
	$String* fName = nullptr;
	$String* fPublicId = nullptr;
	$String* fSystemId = nullptr;
};

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_events_NotationDeclarationImpl_h_