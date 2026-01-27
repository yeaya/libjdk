#ifndef _com_sun_org_apache_xerces_internal_xni_parser_XMLDTDFilter_h_
#define _com_sun_org_apache_xerces_internal_xni_parser_XMLDTDFilter_h_
//$ interface com.sun.org.apache.xerces.internal.xni.parser.XMLDTDFilter
//$ extends com.sun.org.apache.xerces.internal.xni.XMLDTDHandler,com.sun.org.apache.xerces.internal.xni.parser.XMLDTDSource

#include <com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {

class XMLDTDFilter : public ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler, public ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource {
	$interface(XMLDTDFilter, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler, ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource)
public:
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_parser_XMLDTDFilter_h_