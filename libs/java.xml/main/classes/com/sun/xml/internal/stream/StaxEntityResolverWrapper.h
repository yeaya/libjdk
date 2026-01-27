#ifndef _com_sun_xml_internal_stream_StaxEntityResolverWrapper_h_
#define _com_sun_xml_internal_stream_StaxEntityResolverWrapper_h_
//$ class com.sun.xml.internal.stream.StaxEntityResolverWrapper
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					class StaxXMLInputSource;
				}
			}
		}
	}
}
namespace javax {
	namespace xml {
		namespace stream {
			class XMLResolver;
		}
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

class StaxEntityResolverWrapper : public ::java::lang::Object {
	$class(StaxEntityResolverWrapper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StaxEntityResolverWrapper();
	void init$(::javax::xml::stream::XMLResolver* resolver);
	virtual ::javax::xml::stream::XMLResolver* getStaxEntityResolver();
	virtual ::com::sun::xml::internal::stream::StaxXMLInputSource* getStaxInputSource(Object$* object);
	virtual ::com::sun::xml::internal::stream::StaxXMLInputSource* resolveEntity(::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* resourceIdentifier);
	virtual void setStaxEntityResolver(::javax::xml::stream::XMLResolver* resolver);
	::javax::xml::stream::XMLResolver* fStaxResolver = nullptr;
};

				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_StaxEntityResolverWrapper_h_