#include <Frame.h>
#include <Frame$Opcode.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

#undef MAX_CONTROL_FRAME_PAYLOAD_SIZE
#undef MAX_HEADER_SIZE_BYTES

using $Frame$Opcode = ::Frame$Opcode;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

void Frame::init$($Frame$Opcode* opcode, $ByteBuffer* data, bool last) {
	$useLocalObjectStack();
	$set(this, opcode, opcode);
	$set(this, data, $$nc($$nc($ByteBuffer::allocate($nc(data)->remaining()))->put($($nc(data)->slice())))->flip());
	this->last = last;
}

Frame::Frame() {
}

$Class* Frame::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"opcode", "LFrame$Opcode;", nullptr, $FINAL, $field(Frame, opcode)},
		{"data", "Ljava/nio/ByteBuffer;", nullptr, $FINAL, $field(Frame, data)},
		{"last", "Z", nullptr, $FINAL, $field(Frame, last)},
		{"MAX_HEADER_SIZE_BYTES", "I", nullptr, $STATIC | $FINAL, $constField(Frame, MAX_HEADER_SIZE_BYTES)},
		{"MAX_CONTROL_FRAME_PAYLOAD_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(Frame, MAX_CONTROL_FRAME_PAYLOAD_SIZE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LFrame$Opcode;Ljava/nio/ByteBuffer;Z)V", nullptr, $PUBLIC, $method(Frame, init$, void, $Frame$Opcode*, $ByteBuffer*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Frame$Reader", "Frame", "Reader", $STATIC | $FINAL},
		{"Frame$Consumer", "Frame", "Consumer", $STATIC | $INTERFACE | $ABSTRACT},
		{"Frame$HeaderWriter", "Frame", "HeaderWriter", $STATIC | $FINAL},
		{"Frame$Masker", "Frame", "Masker", $STATIC | $FINAL},
		{"Frame$Opcode", "Frame", "Opcode", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"Frame",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Frame$Reader,Frame$Consumer,Frame$HeaderWriter,Frame$Masker,Frame$Opcode"
	};
	$loadClass(Frame, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Frame);
	});
	return class$;
}

$Class* Frame::class$ = nullptr;