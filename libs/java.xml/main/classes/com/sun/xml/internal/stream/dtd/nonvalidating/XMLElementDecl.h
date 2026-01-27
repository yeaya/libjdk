#ifndef _com_sun_xml_internal_stream_dtd_nonvalidating_XMLElementDecl_h_
#define _com_sun_xml_internal_stream_dtd_nonvalidating_XMLElementDecl_h_
//$ class com.sun.xml.internal.stream.dtd.nonvalidating.XMLElementDecl
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("TYPE_ANY")
#undef TYPE_ANY
#pragma push_macro("TYPE_CHILDREN")
#undef TYPE_CHILDREN
#pragma push_macro("TYPE_EMPTY")
#undef TYPE_EMPTY
#pragma push_macro("TYPE_MIXED")
#undef TYPE_MIXED
#pragma push_macro("TYPE_SIMPLE")
#undef TYPE_SIMPLE

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

class XMLElementDecl : public ::java::lang::Object {
	$class(XMLElementDecl, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLElementDecl();
	void init$();
	virtual void clear();
	virtual void setValues(::com::sun::org::apache::xerces::internal::xni::QName* name, int32_t scope, int16_t type, ::com::sun::xml::internal::stream::dtd::nonvalidating::XMLSimpleType* simpleType);
	static const int16_t TYPE_ANY = 0;
	static const int16_t TYPE_EMPTY = 1;
	static const int16_t TYPE_MIXED = 2;
	static const int16_t TYPE_CHILDREN = 3;
	static const int16_t TYPE_SIMPLE = 4;
	::com::sun::org::apache::xerces::internal::xni::QName* name = nullptr;
	int32_t scope = 0;
	int16_t type = 0;
	::com::sun::xml::internal::stream::dtd::nonvalidating::XMLSimpleType* simpleType = nullptr;
};

						} // nonvalidating
					} // dtd
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#pragma pop_macro("TYPE_ANY")
#pragma pop_macro("TYPE_CHILDREN")
#pragma pop_macro("TYPE_EMPTY")
#pragma pop_macro("TYPE_MIXED")
#pragma pop_macro("TYPE_SIMPLE")

#endif // _com_sun_xml_internal_stream_dtd_nonvalidating_XMLElementDecl_h_