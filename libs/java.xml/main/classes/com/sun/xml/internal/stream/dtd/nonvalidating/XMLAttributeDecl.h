#ifndef _com_sun_xml_internal_stream_dtd_nonvalidating_XMLAttributeDecl_h_
#define _com_sun_xml_internal_stream_dtd_nonvalidating_XMLAttributeDecl_h_
//$ class com.sun.xml.internal.stream.dtd.nonvalidating.XMLAttributeDecl
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class QName;
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
					namespace dtd {
						namespace nonvalidating {
							class XMLSimpleType;
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
					namespace dtd {
						namespace nonvalidating {

class XMLAttributeDecl : public ::java::lang::Object {
	$class(XMLAttributeDecl, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLAttributeDecl();
	void init$();
	virtual void clear();
	virtual void setValues(::com::sun::org::apache::xerces::internal::xni::QName* name, ::com::sun::xml::internal::stream::dtd::nonvalidating::XMLSimpleType* simpleType, bool optional);
	::com::sun::org::apache::xerces::internal::xni::QName* name = nullptr;
	::com::sun::xml::internal::stream::dtd::nonvalidating::XMLSimpleType* simpleType = nullptr;
	bool optional = false;
};

						} // nonvalidating
					} // dtd
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_dtd_nonvalidating_XMLAttributeDecl_h_