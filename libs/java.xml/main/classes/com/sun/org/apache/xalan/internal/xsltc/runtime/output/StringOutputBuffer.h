#ifndef _com_sun_org_apache_xalan_internal_xsltc_runtime_output_StringOutputBuffer_h_
#define _com_sun_org_apache_xalan_internal_xsltc_runtime_output_StringOutputBuffer_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.runtime.output.StringOutputBuffer
//$ extends com.sun.org.apache.xalan.internal.xsltc.runtime.output.OutputBuffer

#include <com/sun/org/apache/xalan/internal/xsltc/runtime/output/OutputBuffer.h>
#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class StringBuffer;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {
								namespace output {

class StringOutputBuffer : public ::com::sun::org::apache::xalan::internal::xsltc::runtime::output::OutputBuffer {
	$class(StringOutputBuffer, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::runtime::output::OutputBuffer)
public:
	StringOutputBuffer();
	void init$();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::runtime::output::OutputBuffer* append($String* s) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::runtime::output::OutputBuffer* append($chars* s, int32_t from, int32_t to) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::runtime::output::OutputBuffer* append(char16_t ch) override;
	virtual $String* close() override;
	::java::lang::StringBuffer* _buffer = nullptr;
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

#endif // _com_sun_org_apache_xalan_internal_xsltc_runtime_output_StringOutputBuffer_h_