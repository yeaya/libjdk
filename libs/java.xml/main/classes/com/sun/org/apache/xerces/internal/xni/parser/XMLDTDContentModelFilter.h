#ifndef _com_sun_org_apache_xerces_internal_xni_parser_XMLDTDContentModelFilter_h_
#define _com_sun_org_apache_xerces_internal_xni_parser_XMLDTDContentModelFilter_h_
//$ interface com.sun.org.apache.xerces.internal.xni.parser.XMLDTDContentModelFilter
//$ extends com.sun.org.apache.xerces.internal.xni.XMLDTDContentModelHandler,com.sun.org.apache.xerces.internal.xni.parser.XMLDTDContentModelSource

#include <com/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {

class XMLDTDContentModelFilter : public ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler, public ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelSource {
	$interface(XMLDTDContentModelFilter, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler, ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelSource)
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

#endif // _com_sun_org_apache_xerces_internal_xni_parser_XMLDTDContentModelFilter_h_