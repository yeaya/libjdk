#ifndef _com_sun_xml_internal_stream_StaxErrorReporter_h_
#define _com_sun_xml_internal_stream_StaxErrorReporter_h_
//$ class com.sun.xml.internal.stream.StaxErrorReporter
//$ extends com.sun.org.apache.xerces.internal.impl.XMLErrorReporter

#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class PropertyManager;
						}
					}
				}
			}
		}
	}
}
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
namespace javax {
	namespace xml {
		namespace stream {
			class Location;
			class XMLReporter;
		}
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

class StaxErrorReporter : public ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter {
	$class(StaxErrorReporter, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter)
public:
	StaxErrorReporter();
	void init$(::com::sun::org::apache::xerces::internal::impl::PropertyManager* propertyManager);
	void init$();
	virtual ::javax::xml::stream::Location* convertToStaxLocation(::com::sun::org::apache::xerces::internal::xni::XMLLocator* location);
	using ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter::reportError;
	virtual $String* reportError(::com::sun::org::apache::xerces::internal::xni::XMLLocator* location, $String* domain, $String* key, $ObjectArray* arguments, int16_t severity) override;
	using ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter::reset;
	virtual void reset(::com::sun::org::apache::xerces::internal::impl::PropertyManager* propertyManager);
	::javax::xml::stream::XMLReporter* fXMLReporter = nullptr;
};

				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_StaxErrorReporter_h_