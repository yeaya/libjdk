#ifndef _com_sun_org_apache_xerces_internal_xni_QName_h_
#define _com_sun_org_apache_xerces_internal_xni_QName_h_
//$ class com.sun.org.apache.xerces.internal.xni.QName
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {

class QName : public ::java::lang::Cloneable {
	$class(QName, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	QName();
	void init$();
	void init$($String* prefix, $String* localpart, $String* rawname, $String* uri);
	void init$(::com::sun::org::apache::xerces::internal::xni::QName* qname);
	virtual void clear();
	virtual $Object* clone() override;
	virtual bool equals(Object$* object) override;
	virtual int32_t hashCode() override;
	virtual void setValues(::com::sun::org::apache::xerces::internal::xni::QName* qname);
	virtual void setValues($String* prefix, $String* localpart, $String* rawname, $String* uri);
	virtual $String* toString() override;
	$String* prefix = nullptr;
	$String* localpart = nullptr;
	$String* rawname = nullptr;
	$String* uri = nullptr;
};

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_QName_h_