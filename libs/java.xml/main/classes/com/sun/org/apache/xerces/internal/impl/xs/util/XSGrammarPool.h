#ifndef _com_sun_org_apache_xerces_internal_impl_xs_util_XSGrammarPool_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_util_XSGrammarPool_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.util.XSGrammarPool
//$ extends com.sun.org.apache.xerces.internal.util.XMLGrammarPoolImpl

#include <com/sun/org/apache/xerces/internal/util/XMLGrammarPoolImpl.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								class SchemaGrammar;
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
						namespace xs {
							class XSModel;
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
								namespace util {

class XSGrammarPool : public ::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl {
	$class(XSGrammarPool, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl)
public:
	XSGrammarPool();
	using ::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl::equals;
	using ::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl::hashCode;
	void init$();
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModel* toXSModel();
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModel* toXSModel(int16_t schemaVersion);
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModel* toXSModel($Array<::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>* grammars, int16_t schemaVersion);
};

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_util_XSGrammarPool_h_