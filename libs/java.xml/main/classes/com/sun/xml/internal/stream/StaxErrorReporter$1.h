#ifndef _com_sun_xml_internal_stream_StaxErrorReporter$1_h_
#define _com_sun_xml_internal_stream_StaxErrorReporter$1_h_
//$ class com.sun.xml.internal.stream.StaxErrorReporter$1
//$ extends javax.xml.stream.Location

#include <javax/xml/stream/Location.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class XMLLocator;
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					class StaxErrorReporter;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

class StaxErrorReporter$1 : public ::javax::xml::stream::Location {
	$class(StaxErrorReporter$1, $NO_CLASS_INIT, ::javax::xml::stream::Location)
public:
	StaxErrorReporter$1();
	void init$(::com::sun::xml::internal::stream::StaxErrorReporter* this$0, ::com::sun::org::apache::xerces::internal::xni::XMLLocator* val$location);
	virtual int32_t getCharacterOffset() override;
	virtual int32_t getColumnNumber() override;
	virtual int32_t getLineNumber() override;
	virtual $String* getLocationURI();
	virtual $String* getPublicId() override;
	virtual $String* getSystemId() override;
	::com::sun::xml::internal::stream::StaxErrorReporter* this$0 = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLLocator* val$location = nullptr;
};

				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_StaxErrorReporter$1_h_