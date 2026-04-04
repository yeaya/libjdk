#include <com/sun/org/apache/xalan/internal/xsltc/runtime/output/OutputBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {
								namespace output {

$Class* OutputBuffer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"append", "(C)Lcom/sun/org/apache/xalan/internal/xsltc/runtime/output/OutputBuffer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OutputBuffer, append, OutputBuffer*, char16_t)},
		{"append", "(Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/runtime/output/OutputBuffer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OutputBuffer, append, OutputBuffer*, $String*)},
		{"append", "([CII)Lcom/sun/org/apache/xalan/internal/xsltc/runtime/output/OutputBuffer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OutputBuffer, append, OutputBuffer*, $chars*, int32_t, int32_t)},
		{"close", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OutputBuffer, close, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xalan.internal.xsltc.runtime.output.OutputBuffer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(OutputBuffer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OutputBuffer);
	});
	return class$;
}

$Class* OutputBuffer::class$ = nullptr;

								} // output
							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com