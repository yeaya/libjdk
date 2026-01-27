#include <com/sun/org/apache/xml/internal/serializer/ToStream$WritertoStringBuffer.h>

#include <com/sun/org/apache/xml/internal/serializer/ToStream.h>
#include <java/io/Writer.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $ToStream = ::com::sun::org::apache::xml::internal::serializer::ToStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _ToStream$WritertoStringBuffer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/serializer/ToStream;", nullptr, $FINAL | $SYNTHETIC, $field(ToStream$WritertoStringBuffer, this$0)},
	{"m_stringbuf", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE | $FINAL, $field(ToStream$WritertoStringBuffer, m_stringbuf)},
	{}
};

$MethodInfo _ToStream$WritertoStringBuffer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/serializer/ToStream;Ljava/lang/StringBuffer;)V", nullptr, 0, $method(ToStream$WritertoStringBuffer, init$, void, $ToStream*, $StringBuffer*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ToStream$WritertoStringBuffer, close, void), "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(ToStream$WritertoStringBuffer, flush, void), "java.io.IOException"},
	{"write", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ToStream$WritertoStringBuffer, write, void, $chars*, int32_t, int32_t), "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(ToStream$WritertoStringBuffer, write, void, int32_t)},
	{"write", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToStream$WritertoStringBuffer, write, void, $String*)},
	{}
};

$InnerClassInfo _ToStream$WritertoStringBuffer_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.serializer.ToStream$WritertoStringBuffer", "com.sun.org.apache.xml.internal.serializer.ToStream", "WritertoStringBuffer", $PRIVATE},
	{}
};

$ClassInfo _ToStream$WritertoStringBuffer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.ToStream$WritertoStringBuffer",
	"java.io.Writer",
	nullptr,
	_ToStream$WritertoStringBuffer_FieldInfo_,
	_ToStream$WritertoStringBuffer_MethodInfo_,
	nullptr,
	nullptr,
	_ToStream$WritertoStringBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.serializer.ToStream"
};

$Object* allocate$ToStream$WritertoStringBuffer($Class* clazz) {
	return $of($alloc(ToStream$WritertoStringBuffer));
}

void ToStream$WritertoStringBuffer::init$($ToStream* this$0, $StringBuffer* sb) {
	$set(this, this$0, this$0);
	$Writer::init$();
	$set(this, m_stringbuf, sb);
}

void ToStream$WritertoStringBuffer::write($chars* arg0, int32_t arg1, int32_t arg2) {
	$nc(this->m_stringbuf)->append(arg0, arg1, arg2);
}

void ToStream$WritertoStringBuffer::flush() {
}

void ToStream$WritertoStringBuffer::close() {
}

void ToStream$WritertoStringBuffer::write(int32_t i) {
	$nc(this->m_stringbuf)->append((char16_t)i);
}

void ToStream$WritertoStringBuffer::write($String* s) {
	$nc(this->m_stringbuf)->append(s);
}

ToStream$WritertoStringBuffer::ToStream$WritertoStringBuffer() {
}

$Class* ToStream$WritertoStringBuffer::load$($String* name, bool initialize) {
	$loadClass(ToStream$WritertoStringBuffer, name, initialize, &_ToStream$WritertoStringBuffer_ClassInfo_, allocate$ToStream$WritertoStringBuffer);
	return class$;
}

$Class* ToStream$WritertoStringBuffer::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com