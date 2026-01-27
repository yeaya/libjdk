#ifndef _com_sun_org_apache_xalan_internal_xsltc_runtime_output_WriterOutputBuffer_h_
#define _com_sun_org_apache_xalan_internal_xsltc_runtime_output_WriterOutputBuffer_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.runtime.output.WriterOutputBuffer
//$ extends com.sun.org.apache.xalan.internal.xsltc.runtime.output.OutputBuffer

#include <com/sun/org/apache/xalan/internal/xsltc/runtime/output/OutputBuffer.h>
#include <java/lang/Array.h>

#pragma push_macro("BUFFER_SIZE")
#undef BUFFER_SIZE
#pragma push_macro("KB")
#undef KB

namespace java {
	namespace io {
		class Writer;
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

class WriterOutputBuffer : public ::com::sun::org::apache::xalan::internal::xsltc::runtime::output::OutputBuffer {
	$class(WriterOutputBuffer, 0, ::com::sun::org::apache::xalan::internal::xsltc::runtime::output::OutputBuffer)
public:
	WriterOutputBuffer();
	void init$(::java::io::Writer* writer);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::runtime::output::OutputBuffer* append($String* s) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::runtime::output::OutputBuffer* append($chars* s, int32_t from, int32_t to) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::runtime::output::OutputBuffer* append(char16_t ch) override;
	virtual $String* close() override;
	static const int32_t KB = 1024;
	static int32_t BUFFER_SIZE;
	::java::io::Writer* _writer = nullptr;
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

#pragma pop_macro("BUFFER_SIZE")
#pragma pop_macro("KB")

#endif // _com_sun_org_apache_xalan_internal_xsltc_runtime_output_WriterOutputBuffer_h_