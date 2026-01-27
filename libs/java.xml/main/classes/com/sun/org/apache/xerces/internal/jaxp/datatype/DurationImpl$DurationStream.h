#ifndef _com_sun_org_apache_xerces_internal_jaxp_datatype_DurationImpl$DurationStream_h_
#define _com_sun_org_apache_xerces_internal_jaxp_datatype_DurationImpl$DurationStream_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.datatype.DurationImpl$DurationStream
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace datatype {

class DurationImpl$DurationStream : public ::java::io::Serializable {
	$class(DurationImpl$DurationStream, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	DurationImpl$DurationStream();
	void init$($String* _lexical);
	$Object* readResolve();
	$String* lexical = nullptr;
	static const int64_t serialVersionUID = (int64_t)1;
};

							} // datatype
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_datatype_DurationImpl$DurationStream_h_