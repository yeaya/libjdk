#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_XSSimpleTypeDecl$1_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_XSSimpleTypeDecl$1_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$1
//$ extends com.sun.org.apache.xerces.internal.impl.dv.ValidationContext

#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>

namespace java {
	namespace util {
		class Locale;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

class XSSimpleTypeDecl$1 : public ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext {
	$class(XSSimpleTypeDecl$1, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext)
public:
	XSSimpleTypeDecl$1();
	void init$();
	virtual void addId($String* name) override;
	virtual void addIdRef($String* name) override;
	virtual ::java::util::Locale* getLocale() override;
	virtual $String* getSymbol($String* symbol) override;
	virtual $String* getURI($String* prefix) override;
	virtual bool isEntityDeclared($String* name) override;
	virtual bool isEntityUnparsed($String* name) override;
	virtual bool isIdDeclared($String* name) override;
	virtual bool needExtraChecking() override;
	virtual bool needFacetChecking() override;
	virtual bool needToNormalize() override;
	virtual bool useNamespaces() override;
};

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_XSSimpleTypeDecl$1_h_