#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_StAXValidatorHelper_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_StAXValidatorHelper_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.validation.StAXValidatorHelper
//$ extends com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHelper

#include <com/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHelper.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {
								class ValidatorHandlerImpl;
								class XMLSchemaValidatorComponentManager;
							}
						}
					}
				}
			}
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class Result;
			class Source;
			class Transformer;
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			namespace sax {
				class TransformerHandler;
			}
		}
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

class StAXValidatorHelper : public ::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHelper {
	$class(StAXValidatorHelper, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHelper)
public:
	StAXValidatorHelper();
	void init$(::com::sun::org::apache::xerces::internal::jaxp::validation::XMLSchemaValidatorComponentManager* componentManager);
	virtual void validate(::javax::xml::transform::Source* source, ::javax::xml::transform::Result* result) override;
	::com::sun::org::apache::xerces::internal::jaxp::validation::XMLSchemaValidatorComponentManager* fComponentManager = nullptr;
	::javax::xml::transform::Transformer* identityTransformer1 = nullptr;
	::javax::xml::transform::sax::TransformerHandler* identityTransformer2 = nullptr;
	::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHandlerImpl* handler = nullptr;
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_StAXValidatorHelper_h_