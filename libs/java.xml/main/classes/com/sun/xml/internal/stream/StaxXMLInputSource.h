#ifndef _com_sun_xml_internal_stream_StaxXMLInputSource_h_
#define _com_sun_xml_internal_stream_StaxXMLInputSource_h_
//$ class com.sun.xml.internal.stream.StaxXMLInputSource
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {
								class XMLInputSource;
							}
						}
					}
				}
			}
		}
	}
}
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
		namespace xml {
			namespace internal {
				namespace stream {

class StaxXMLInputSource : public ::java::lang::Object {
	$class(StaxXMLInputSource, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StaxXMLInputSource();
	void init$(::javax::xml::stream::XMLStreamReader* streamReader, bool byResolver);
	void init$(::javax::xml::stream::XMLEventReader* eventReader, bool byResolver);
	void init$(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* inputSource, bool byResolver);
	virtual ::javax::xml::stream::XMLEventReader* getXMLEventReader();
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* getXMLInputSource();
	virtual ::javax::xml::stream::XMLStreamReader* getXMLStreamReader();
	virtual bool hasXMLStreamOrXMLEventReader();
	virtual bool isCreatedByResolver();
	::javax::xml::stream::XMLStreamReader* fStreamReader = nullptr;
	::javax::xml::stream::XMLEventReader* fEventReader = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* fInputSource = nullptr;
	bool fIsCreatedByResolver = false;
};

				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_StaxXMLInputSource_h_