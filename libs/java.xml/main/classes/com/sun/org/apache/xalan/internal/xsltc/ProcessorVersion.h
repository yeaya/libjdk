#ifndef _com_sun_org_apache_xalan_internal_xsltc_ProcessorVersion_h_
#define _com_sun_org_apache_xalan_internal_xsltc_ProcessorVersion_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.ProcessorVersion
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DELTA")
#undef DELTA
#pragma push_macro("MAJOR")
#undef MAJOR
#pragma push_macro("MINOR")
#undef MINOR

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {

class $export ProcessorVersion : public ::java::lang::Object {
	$class(ProcessorVersion, 0, ::java::lang::Object)
public:
	ProcessorVersion();
	void init$();
	static void main($StringArray* args);
	static int32_t MAJOR;
	static int32_t MINOR;
	static int32_t DELTA;
};

						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DELTA")
#pragma pop_macro("MAJOR")
#pragma pop_macro("MINOR")

#endif // _com_sun_org_apache_xalan_internal_xsltc_ProcessorVersion_h_