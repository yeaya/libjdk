#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_DOMValidatorHelper$DOMNamespaceContext_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_DOMValidatorHelper$DOMNamespaceContext_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.validation.DOMValidatorHelper$DOMNamespaceContext
//$ extends com.sun.org.apache.xerces.internal.xni.NamespaceContext

#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {
								class DOMValidatorHelper;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

class DOMValidatorHelper$DOMNamespaceContext : public ::com::sun::org::apache::xerces::internal::xni::NamespaceContext {
	$class(DOMValidatorHelper$DOMNamespaceContext, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::NamespaceContext)
public:
	DOMValidatorHelper$DOMNamespaceContext();
	void init$(::com::sun::org::apache::xerces::internal::jaxp::validation::DOMValidatorHelper* this$0);
	virtual bool declarePrefix($String* prefix, $String* uri) override;
	void declarePrefix0($String* prefix, $String* uri);
	void fillNamespaceContext();
	virtual ::java::util::Enumeration* getAllPrefixes() override;
	virtual $String* getDeclaredPrefixAt(int32_t index) override;
	virtual int32_t getDeclaredPrefixCount() override;
	virtual $String* getPrefix($String* uri) override;
	virtual $String* getURI($String* prefix) override;
	$String* getURI0($String* prefix);
	virtual void popContext() override;
	virtual void pushContext() override;
	virtual void reset() override;
	::com::sun::org::apache::xerces::internal::jaxp::validation::DOMValidatorHelper* this$0 = nullptr;
	$StringArray* fNamespace = nullptr;
	int32_t fNamespaceSize = 0;
	bool fDOMContextBuilt = false;
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_DOMValidatorHelper$DOMNamespaceContext_h_