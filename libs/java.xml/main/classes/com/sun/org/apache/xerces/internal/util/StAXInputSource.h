#ifndef _com_sun_org_apache_xerces_internal_util_StAXInputSource_h_
#define _com_sun_org_apache_xerces_internal_util_StAXInputSource_h_
//$ class com.sun.org.apache.xerces.internal.util.StAXInputSource
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLInputSource

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>

namespace javax {
	namespace xml {
		namespace stream {
			class XMLEventReader;
			class XMLStreamReader;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class StAXInputSource : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource {
	$class(StAXInputSource, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource)
public:
	StAXInputSource();
	void init$(::javax::xml::stream::XMLStreamReader* source);
	void init$(::javax::xml::stream::XMLStreamReader* source, bool consumeRemainingContent);
	void init$(::javax::xml::stream::XMLEventReader* source);
	void init$(::javax::xml::stream::XMLEventReader* source, bool consumeRemainingContent);
	static $String* getEventReaderSystemId(::javax::xml::stream::XMLEventReader* reader);
	::javax::xml::stream::XMLEventReader* getXMLEventReader();
	::javax::xml::stream::XMLStreamReader* getXMLStreamReader();
	virtual void setSystemId($String* systemId) override;
	bool shouldConsumeRemainingContent();
	::javax::xml::stream::XMLStreamReader* fStreamReader = nullptr;
	::javax::xml::stream::XMLEventReader* fEventReader = nullptr;
	bool fConsumeRemainingContent = false;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_StAXInputSource_h_