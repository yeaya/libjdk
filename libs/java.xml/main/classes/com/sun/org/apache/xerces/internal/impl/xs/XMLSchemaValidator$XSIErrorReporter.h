#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator$XSIErrorReporter_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator$XSIErrorReporter_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$XSIErrorReporter
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
							namespace xs {
								class XMLSchemaValidator;
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
						namespace xni {
							class XMLLocator;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Vector;
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

class XMLSchemaValidator$XSIErrorReporter : public ::java::lang::Object {
	$class(XMLSchemaValidator$XSIErrorReporter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLSchemaValidator$XSIErrorReporter();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator* this$0);
	$StringArray* mergeContext();
	$StringArray* popContext();
	void pushContext();
	void reportError($String* domain, $String* key, $ObjectArray* arguments, int16_t severity);
	void reportError(::com::sun::org::apache::xerces::internal::xni::XMLLocator* location, $String* domain, $String* key, $ObjectArray* arguments, int16_t severity);
	void reset(::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* errorReporter);
	::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator* this$0 = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	::java::util::Vector* fErrors = nullptr;
	$ints* fContext = nullptr;
	int32_t fContextCount = 0;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator$XSIErrorReporter_h_