#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator$XPathMatcherStack_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator$XPathMatcherStack_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$XPathMatcherStack
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace identity {
									class XPathMatcher;
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
						namespace util {
							class IntStack;
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

class XMLSchemaValidator$XPathMatcherStack : public ::java::lang::Object {
	$class(XMLSchemaValidator$XPathMatcherStack, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLSchemaValidator$XPathMatcherStack();
	void init$();
	virtual void addMatcher(::com::sun::org::apache::xerces::internal::impl::xs::identity::XPathMatcher* matcher);
	virtual void clear();
	void ensureMatcherCapacity();
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::identity::XPathMatcher* getMatcherAt(int32_t index);
	virtual int32_t getMatcherCount();
	virtual void popContext();
	virtual void pushContext();
	virtual int32_t size();
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::identity::XPathMatcher>* fMatchers = nullptr;
	int32_t fMatchersCount = 0;
	::com::sun::org::apache::xerces::internal::util::IntStack* fContextStack = nullptr;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator$XPathMatcherStack_h_