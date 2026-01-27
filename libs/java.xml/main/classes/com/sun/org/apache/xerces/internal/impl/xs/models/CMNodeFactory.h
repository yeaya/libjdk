#ifndef _com_sun_org_apache_xerces_internal_impl_xs_models_CMNodeFactory_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_models_CMNodeFactory_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.models.CMNodeFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
#pragma push_macro("MULTIPLICITY")
#undef MULTIPLICITY
#pragma push_macro("SECURITY_MANAGER")
#undef SECURITY_MANAGER

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class XMLErrorReporter;
						}
					}
				}
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
						namespace impl {
							namespace dtd {
								namespace models {
									class CMNode;
								}
							}
						}
					}
				}
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
						namespace utils {
							class XMLSecurityManager;
						}
					}
				}
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
						namespace xni {
							namespace parser {
								class XMLComponentManager;
							}
						}
					}
				}
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
						namespace impl {
							namespace xs {
								namespace models {

class CMNodeFactory : public ::java::lang::Object {
	$class(CMNodeFactory, 0, ::java::lang::Object)
public:
	CMNodeFactory();
	void init$();
	virtual ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* getCMBinOpNode(int32_t type, ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* leftNode, ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* rightNode);
	virtual ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* getCMLeafNode(int32_t type, Object$* leaf, int32_t id, int32_t position);
	virtual ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* getCMRepeatingLeafNode(int32_t type, Object$* leaf, int32_t minOccurs, int32_t maxOccurs, int32_t id, int32_t position);
	virtual ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* getCMUniOpNode(int32_t type, ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* childNode);
	virtual void nodeCountCheck();
	virtual void reset(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* componentManager);
	virtual void reset();
	virtual void resetNodeCount();
	virtual void setProperty($String* propertyId, Object$* value);
	static $String* ERROR_REPORTER;
	static $String* SECURITY_MANAGER;
	static const bool DEBUG = false;
	static const int32_t MULTIPLICITY = 1;
	int32_t nodeCount = 0;
	int32_t maxNodeLimit = 0;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager* fSecurityManager = nullptr;
};

								} // models
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG")
#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("MULTIPLICITY")
#pragma pop_macro("SECURITY_MANAGER")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_models_CMNodeFactory_h_