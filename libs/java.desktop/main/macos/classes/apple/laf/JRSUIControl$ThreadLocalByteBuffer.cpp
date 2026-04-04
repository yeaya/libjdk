#include <apple/laf/JRSUIControl$ThreadLocalByteBuffer.h>
#include <apple/laf/JRSUIControl.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <jcpp.h>

using $JRSUIControl = ::apple::laf::JRSUIControl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;

namespace apple {
	namespace laf {

void JRSUIControl$ThreadLocalByteBuffer::init$() {
	$set(this, buffer, $ByteBuffer::allocateDirect(128));
	$nc(this->buffer)->order($($ByteOrder::nativeOrder()));
	this->ptr = $JRSUIControl::getPtrOfBuffer(this->buffer);
}

JRSUIControl$ThreadLocalByteBuffer::JRSUIControl$ThreadLocalByteBuffer() {
}

$Class* JRSUIControl$ThreadLocalByteBuffer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"buffer", "Ljava/nio/ByteBuffer;", nullptr, $FINAL, $field(JRSUIControl$ThreadLocalByteBuffer, buffer)},
		{"ptr", "J", nullptr, $FINAL, $field(JRSUIControl$ThreadLocalByteBuffer, ptr)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JRSUIControl$ThreadLocalByteBuffer, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.laf.JRSUIControl$ThreadLocalByteBuffer", "apple.laf.JRSUIControl", "ThreadLocalByteBuffer", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"apple.laf.JRSUIControl$ThreadLocalByteBuffer",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"apple.laf.JRSUIControl"
	};
	$loadClass(JRSUIControl$ThreadLocalByteBuffer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIControl$ThreadLocalByteBuffer);
	});
	return class$;
}

$Class* JRSUIControl$ThreadLocalByteBuffer::class$ = nullptr;

	} // laf
} // apple