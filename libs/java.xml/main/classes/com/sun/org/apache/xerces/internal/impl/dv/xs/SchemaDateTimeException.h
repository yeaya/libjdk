#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_SchemaDateTimeException_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_SchemaDateTimeException_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.SchemaDateTimeException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

class SchemaDateTimeException : public ::java::lang::RuntimeException {
	$class(SchemaDateTimeException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	SchemaDateTimeException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x89BFEC3A2DFE9FB0;
	SchemaDateTimeException(const SchemaDateTimeException& e);
	virtual void throw$() override;
	inline SchemaDateTimeException* operator ->() {
		return (SchemaDateTimeException*)throwing$;
	}
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

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_SchemaDateTimeException_h_