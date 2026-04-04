#include <Frame$Masker.h>
#include <Frame.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $Frame = ::Frame;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

bool Frame$Masker::$assertionsDisabled = false;

void Frame$Masker::init$() {
	$set(this, acc, $ByteBuffer::allocate(8));
	$set(this, maskBytes, $new($ints, 4));
}

void Frame$Masker::transferMasking($ByteBuffer* src, $ByteBuffer* dst, int32_t mask) {
	$init(Frame$Masker);
	$useLocalObjectStack();
	int32_t var$0 = $nc(src)->remaining();
	if (var$0 > $nc(dst)->remaining()) {
		$throwNew($IllegalArgumentException);
	}
	$$nc($$new(Frame$Masker)->mask(mask))->transferMasking(src, dst);
}

Frame$Masker* Frame$Masker::mask(int32_t value) {
	$useLocalObjectStack();
	$$nc($$nc($$nc($nc(this->acc)->clear())->putInt(value))->putInt(value))->flip();
	for (int32_t i = 0; i < this->maskBytes->length; ++i) {
		this->maskBytes->set(i, this->acc->get(i));
	}
	this->offset = 0;
	this->maskLong = this->acc->getLong(0);
	return this;
}

Frame$Masker* Frame$Masker::transferMasking($ByteBuffer* src, $ByteBuffer* dst) {
	begin(src, dst);
	loop(src, dst);
	end(src, dst);
	return this;
}

void Frame$Masker::begin($ByteBuffer* src, $ByteBuffer* dst) {
	if (this->offset == 0) {
		return;
	}
	int32_t i = $nc(src)->position();
	int32_t j = $nc(dst)->position();
	int32_t srcLim = src->limit();
	int32_t dstLim = dst->limit();
	for (; this->offset < 4 && i < srcLim && j < dstLim; ++i, ++j, ++this->offset) {
		dst->put(j, (int8_t)(src->get(i) ^ this->maskBytes->get(this->offset)));
	}
	this->offset &= (uint32_t)3;
	src->position(i);
	dst->position(j);
}

void Frame$Masker::loop($ByteBuffer* src, $ByteBuffer* dst) {
	int32_t i = $nc(src)->position();
	int32_t j = $nc(dst)->position();
	int32_t srcLongLim = src->limit() - 7;
	int32_t dstLongLim = dst->limit() - 7;
	for (; i < srcLongLim && j < dstLongLim; i += 8, j += 8) {
		dst->putLong(j, src->getLong(i) ^ this->maskLong);
	}
	if (i > src->limit()) {
		src->position(i - 8);
	} else {
		src->position(i);
	}
	if (j > dst->limit()) {
		dst->position(j - 8);
	} else {
		dst->position(j);
	}
}

void Frame$Masker::end($ByteBuffer* src, $ByteBuffer* dst) {
	bool var$0 = !Frame$Masker::$assertionsDisabled;
	if (var$0) {
		int32_t var$1 = $nc(src)->remaining();
		var$0 = !($Math::min(var$1, $nc(dst)->remaining()) < 8);
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	int32_t srcLim = $nc(src)->limit();
	int32_t dstLim = $nc(dst)->limit();
	int32_t i = src->position();
	int32_t j = dst->position();
	for (; i < srcLim && j < dstLim; ++i, ++j, this->offset = (this->offset + 1) & 3) {
		dst->put(j, (int8_t)(src->get(i) ^ this->maskBytes->get(this->offset)));
	}
	src->position(i);
	dst->position(j);
}

void Frame$Masker::clinit$($Class* clazz) {
	$load($Frame);
	Frame$Masker::$assertionsDisabled = !$Frame::class$->desiredAssertionStatus();
}

Frame$Masker::Frame$Masker() {
}

$Class* Frame$Masker::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Frame$Masker, $assertionsDisabled)},
		{"acc", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $FINAL, $field(Frame$Masker, acc)},
		{"maskBytes", "[I", nullptr, $PRIVATE | $FINAL, $field(Frame$Masker, maskBytes)},
		{"offset", "I", nullptr, $PRIVATE, $field(Frame$Masker, offset)},
		{"maskLong", "J", nullptr, $PRIVATE, $field(Frame$Masker, maskLong)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Frame$Masker, init$, void)},
		{"begin", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(Frame$Masker, begin, void, $ByteBuffer*, $ByteBuffer*)},
		{"end", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(Frame$Masker, end, void, $ByteBuffer*, $ByteBuffer*)},
		{"loop", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(Frame$Masker, loop, void, $ByteBuffer*, $ByteBuffer*)},
		{"mask", "(I)LFrame$Masker;", nullptr, 0, $method(Frame$Masker, mask, Frame$Masker*, int32_t)},
		{"transferMasking", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;I)V", nullptr, $STATIC, $staticMethod(Frame$Masker, transferMasking, void, $ByteBuffer*, $ByteBuffer*, int32_t)},
		{"transferMasking", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)LFrame$Masker;", nullptr, 0, $method(Frame$Masker, transferMasking, Frame$Masker*, $ByteBuffer*, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Frame$Masker", "Frame", "Masker", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"Frame$Masker",
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
		"Frame"
	};
	$loadClass(Frame$Masker, name, initialize, &classInfo$$, Frame$Masker::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Frame$Masker);
	});
	return class$;
}

$Class* Frame$Masker::class$ = nullptr;