#ifndef _com_sun_org_apache_xerces_internal_xni_parser_XMLDocumentFilter_h_
#define _com_sun_org_apache_xerces_internal_xni_parser_XMLDocumentFilter_h_
//$ interface com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentFilter
//$ extends com.sun.org.apache.xerces.internal.xni.XMLDocumentHandler,com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentSource

#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {

class XMLDocumentFilter : public ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler, public ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource {
	$interface(XMLDocumentFilter, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler, ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource)
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

#endif // _com_sun_org_apache_xerces_internal_xni_parser_XMLDocumentFilter_h_