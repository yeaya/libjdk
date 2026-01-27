#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_XMLSchemaFactory$XMLGrammarPoolImplExtension_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_XMLSchemaFactory$XMLGrammarPoolImplExtension_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.validation.XMLSchemaFactory$XMLGrammarPoolImplExtension
//$ extends com.sun.org.apache.xerces.internal.util.XMLGrammarPoolImpl

#include <com/sun/org/apache/xerces/internal/util/XMLGrammarPoolImpl.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

class XMLSchemaFactory$XMLGrammarPoolImplExtension : public ::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl {
	$class(XMLSchemaFactory$XMLGrammarPoolImplExtension, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl)
public:
	XMLSchemaFactory$XMLGrammarPoolImplExtension();
	using ::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl::equals;
	using ::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl::hashCode;
	void init$();
	void init$(int32_t initialCapacity);
	virtual int32_t getGrammarCount();
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_XMLSchemaFactory$XMLGrammarPoolImplExtension_h_