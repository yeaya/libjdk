#ifndef _com_sun_org_apache_xalan_internal_xsltc_runtime_output_OutputBuffer_h_
#define _com_sun_org_apache_xalan_internal_xsltc_runtime_output_OutputBuffer_h_
//$ interface com.sun.org.apache.xalan.internal.xsltc.runtime.output.OutputBuffer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {
								namespace output {

class OutputBuffer : public ::java::lang::Object {
	$interface(OutputBuffer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::org::apache::xalan::internal::xsltc::runtime::output::OutputBuffer* append(char16_t ch) {return nullptr;}
	virtual ::com::sun::org::apache::xalan::internal::xsltc::runtime::output::OutputBuffer* append($String* s) {return nullptr;}
	virtual ::com::sun::org::apache::xalan::internal::xsltc::runtime::output::OutputBuffer* append($chars* s, int32_t from, int32_t to) {return nullptr;}
	virtual $String* close() {return nullptr;}
};

								} // output
							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_runtime_output_OutputBuffer_h_