#ifndef _com_sun_org_apache_xml_internal_serializer_AttributesImplSerializer_h_
#define _com_sun_org_apache_xml_internal_serializer_AttributesImplSerializer_h_
//$ class com.sun.org.apache.xml.internal.serializer.AttributesImplSerializer
//$ extends org.xml.sax.helpers.AttributesImpl

#include <org/xml/sax/helpers/AttributesImpl.h>

#pragma push_macro("MAX")
#undef MAX

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

class AttributesImplSerializer : public ::org::xml::sax::helpers::AttributesImpl {
	$class(AttributesImplSerializer, $NO_CLASS_INIT, ::org::xml::sax::helpers::AttributesImpl)
public:
	AttributesImplSerializer();
	void init$();
	virtual void addAttribute($String* uri, $String* local, $String* qname, $String* type, $String* val) override;
	virtual void clear() override;
	virtual int32_t getIndex($String* qname) override;
	virtual int32_t getIndex($String* uri, $String* localName) override;
	virtual void setAttributes(::org::xml::sax::Attributes* atts) override;
	void switchOverToHash(int32_t numAtts);
	::java::util::Map* m_indexFromQName = nullptr;
	::java::lang::StringBuffer* m_buff = nullptr;
	static const int32_t MAX = 12;
	static const int32_t MAXMinus1 = 11; // MAX - 1
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("MAX")

#endif // _com_sun_org_apache_xml_internal_serializer_AttributesImplSerializer_h_