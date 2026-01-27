#include <com/sun/org/apache/xalan/internal/xsltc/runtime/output/StringOutputBuffer.h>

#include <com/sun/org/apache/xalan/internal/xsltc/runtime/output/OutputBuffer.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $OutputBuffer = ::com::sun::org::apache::xalan::internal::xsltc::runtime::output::OutputBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {
								namespace output {

$FieldInfo _StringOutputBuffer_FieldInfo_[] = {
	{"_buffer", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE, $field(StringOutputBuffer, _buffer)},
	{}
};

$MethodInfo _StringOutputBuffer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(StringOutputBuffer, init$, void)},
	{"append", "(Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/runtime/output/OutputBuffer;", nullptr, $PUBLIC, $virtualMethod(StringOutputBuffer, append, $OutputBuffer*, $String*)},
	{"append", "([CII)Lcom/sun/org/apache/xalan/internal/xsltc/runtime/output/OutputBuffer;", nullptr, $PUBLIC, $virtualMethod(StringOutputBuffer, append, $OutputBuffer*, $chars*, int32_t, int32_t)},
	{"append", "(C)Lcom/sun/org/apache/xalan/internal/xsltc/runtime/output/OutputBuffer;", nullptr, $PUBLIC, $virtualMethod(StringOutputBuffer, append, $OutputBuffer*, char16_t)},
	{"close", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StringOutputBuffer, close, $String*)},
	{}
};

$ClassInfo _StringOutputBuffer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.output.StringOutputBuffer",
	"java.lang.Object",
	"com.sun.org.apache.xalan.internal.xsltc.runtime.output.OutputBuffer",
	_StringOutputBuffer_FieldInfo_,
	_StringOutputBuffer_MethodInfo_
};

$Object* allocate$StringOutputBuffer($Class* clazz) {
	return $of($alloc(StringOutputBuffer));
}

void StringOutputBuffer::init$() {
	$set(this, _buffer, $new($StringBuffer));
}

$String* StringOutputBuffer::close() {
	return $nc(this->_buffer)->toString();
}

$OutputBuffer* StringOutputBuffer::append($String* s) {
	$nc(this->_buffer)->append(s);
	return this;
}

$OutputBuffer* StringOutputBuffer::append($chars* s, int32_t from, int32_t to) {
	$nc(this->_buffer)->append(s, from, to);
	return this;
}

$OutputBuffer* StringOutputBuffer::append(char16_t ch) {
	$nc(this->_buffer)->append(ch);
	return this;
}

StringOutputBuffer::StringOutputBuffer() {
}

$Class* StringOutputBuffer::load$($String* name, bool initialize) {
	$loadClass(StringOutputBuffer, name, initialize, &_StringOutputBuffer_ClassInfo_, allocate$StringOutputBuffer);
	return class$;
}

$Class* StringOutputBuffer::class$ = nullptr;

								} // output
							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com