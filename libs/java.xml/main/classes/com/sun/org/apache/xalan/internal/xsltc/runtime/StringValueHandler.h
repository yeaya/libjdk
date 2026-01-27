#ifndef _com_sun_org_apache_xalan_internal_xsltc_runtime_StringValueHandler_h_
#define _com_sun_org_apache_xalan_internal_xsltc_runtime_StringValueHandler_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.runtime.StringValueHandler
//$ extends com.sun.org.apache.xml.internal.serializer.EmptySerializer

#include <com/sun/org/apache/xml/internal/serializer/EmptySerializer.h>
#include <java/lang/Array.h>

#pragma push_macro("EMPTY_STR")
#undef EMPTY_STR

namespace java {
	namespace lang {
		class StringBuilder;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {

class StringValueHandler : public ::com::sun::org::apache::xml::internal::serializer::EmptySerializer {
	$class(StringValueHandler, 0, ::com::sun::org::apache::xml::internal::serializer::EmptySerializer)
public:
	StringValueHandler();
	using ::com::sun::org::apache::xml::internal::serializer::EmptySerializer::endElement;
	using ::com::sun::org::apache::xml::internal::serializer::EmptySerializer::characters;
	void init$();
	virtual void characters($chars* ch, int32_t off, int32_t len) override;
	virtual void characters($String* characters) override;
	virtual void endElement($String* qname) override;
	$String* getValue();
	$String* getValueOfPI();
	virtual bool setEscaping(bool bool$) override;
	using ::com::sun::org::apache::xml::internal::serializer::EmptySerializer::startElement;
	virtual void startElement($String* qname) override;
	::java::lang::StringBuilder* _buffer = nullptr;
	$String* _str = nullptr;
	static $String* EMPTY_STR;
	bool m_escaping = false;
	int32_t _nestedLevel = 0;
};

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EMPTY_STR")

#endif // _com_sun_org_apache_xalan_internal_xsltc_runtime_StringValueHandler_h_