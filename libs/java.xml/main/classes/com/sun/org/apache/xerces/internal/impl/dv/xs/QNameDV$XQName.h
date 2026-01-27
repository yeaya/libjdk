#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_QNameDV$XQName_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_QNameDV$XQName_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.QNameDV$XQName
//$ extends com.sun.org.apache.xerces.internal.xni.QName
//$ implements com.sun.org.apache.xerces.internal.xs.datatypes.XSQName

#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xs/datatypes/XSQName.h>

namespace javax {
	namespace xml {
		namespace namespace$ {
			class QName;
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
							namespace dv {
								namespace xs {

class QNameDV$XQName : public ::com::sun::org::apache::xerces::internal::xni::QName, public ::com::sun::org::apache::xerces::internal::xs::datatypes::XSQName {
	$class(QNameDV$XQName, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::QName, ::com::sun::org::apache::xerces::internal::xs::datatypes::XSQName)
public:
	QNameDV$XQName();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* prefix, $String* localpart, $String* rawname, $String* uri);
	virtual bool equals(Object$* object) override;
	virtual ::javax::xml::namespace$::QName* getJAXPQName() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::QName* getXNIQName() override;
	virtual $String* toString() override;
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

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_QNameDV$XQName_h_