#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_XMLDTDValidatorFilter_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_XMLDTDValidatorFilter_h_
//$ interface com.sun.org.apache.xerces.internal.impl.dtd.XMLDTDValidatorFilter
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentFilter

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentFilter.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

class XMLDTDValidatorFilter : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentFilter {
	$interface(XMLDTDValidatorFilter, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentFilter)
public:
	virtual bool hasGrammar() {return false;}
	virtual bool validate() {return false;}
};

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_XMLDTDValidatorFilter_h_