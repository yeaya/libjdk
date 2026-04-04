#include <com/sun/org/apache/xml/internal/serializer/WriterChain.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$Class* WriterChain::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WriterChain, close, void), "java.io.IOException"},
		{"flush", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WriterChain, flush, void), "java.io.IOException"},
		{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WriterChain, getOutputStream, $OutputStream*)},
		{"getWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WriterChain, getWriter, $Writer*)},
		{"write", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WriterChain, write, void, int32_t), "java.io.IOException"},
		{"write", "([C)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WriterChain, write, void, $chars*), "java.io.IOException"},
		{"write", "([CII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WriterChain, write, void, $chars*, int32_t, int32_t), "java.io.IOException"},
		{"write", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WriterChain, write, void, $String*), "java.io.IOException"},
		{"write", "(Ljava/lang/String;II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WriterChain, write, void, $String*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xml.internal.serializer.WriterChain",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(WriterChain, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WriterChain);
	});
	return class$;
}

$Class* WriterChain::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com