#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XSImplementationImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XSImplementationImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XSImplementationImpl
//$ extends com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl
//$ implements com.sun.org.apache.xerces.internal.xs.XSImplementation

#include <com/sun/org/apache/xerces/internal/dom/CoreDOMImplementationImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/XSImplementation.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class StringList;
							class XSLoader;
						}
					}
				}
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class DOMImplementation;
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

class XSImplementationImpl : public ::com::sun::org::apache::xerces::internal::dom::CoreDOMImplementationImpl, public ::com::sun::org::apache::xerces::internal::xs::XSImplementation {
	$class(XSImplementationImpl, 0, ::com::sun::org::apache::xerces::internal::dom::CoreDOMImplementationImpl, ::com::sun::org::apache::xerces::internal::xs::XSImplementation)
public:
	XSImplementationImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::com::sun::org::apache::xerces::internal::xs::XSLoader* createXSLoader(::com::sun::org::apache::xerces::internal::xs::StringList* versions) override;
	static ::org::w3c::dom::DOMImplementation* getDOMImplementation();
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getRecognizedVersions() override;
	virtual bool hasFeature($String* feature, $String* version) override;
	virtual $String* toString() override;
	static ::com::sun::org::apache::xerces::internal::impl::xs::XSImplementationImpl* singleton;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XSImplementationImpl_h_