#ifndef _com_sun_org_apache_xalan_internal_xsltc_DOMEnhancedForDTM_h_
#define _com_sun_org_apache_xalan_internal_xsltc_DOMEnhancedForDTM_h_
//$ interface com.sun.org.apache.xalan.internal.xsltc.DOMEnhancedForDTM
//$ extends com.sun.org.apache.xalan.internal.xsltc.DOM

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {

class DOMEnhancedForDTM : public ::com::sun::org::apache::xalan::internal::xsltc::DOM {
	$interface(DOMEnhancedForDTM, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::DOM)
public:
	using ::com::sun::org::apache::xalan::internal::xsltc::DOM::getDocumentURI;
	virtual $String* getDocumentURI() {return nullptr;}
	virtual int32_t getElementById($String* idString) {return 0;}
	virtual int32_t getExpandedTypeID2(int32_t nodeHandle) {return 0;}
	virtual $shorts* getMapping($StringArray* names, $StringArray* uris, $ints* types) {return nullptr;}
	virtual $shorts* getNamespaceMapping($StringArray* namespaces) {return nullptr;}
	virtual $ints* getReverseMapping($StringArray* names, $StringArray* uris, $ints* types) {return nullptr;}
	virtual $shorts* getReverseNamespaceMapping($StringArray* namespaces) {return nullptr;}
	virtual bool hasDOMSource() {return false;}
	virtual void setDocumentURI($String* uri) {}
};

						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_DOMEnhancedForDTM_h_