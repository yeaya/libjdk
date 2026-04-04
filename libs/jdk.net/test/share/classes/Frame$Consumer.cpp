#include <Frame$Consumer.h>
#include <Frame$Opcode.h>
#include <Frame.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $Frame$Opcode = ::Frame$Opcode;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

$Class* Frame$Consumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"endFrame", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Frame$Consumer, endFrame, void)},
		{"fin", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Frame$Consumer, fin, void, bool)},
		{"mask", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Frame$Consumer, mask, void, bool)},
		{"maskingKey", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Frame$Consumer, maskingKey, void, int32_t)},
		{"opcode", "(LFrame$Opcode;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Frame$Consumer, opcode, void, $Frame$Opcode*)},
		{"payloadData", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Frame$Consumer, payloadData, void, $ByteBuffer*)},
		{"payloadLen", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Frame$Consumer, payloadLen, void, int64_t)},
		{"rsv1", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Frame$Consumer, rsv1, void, bool)},
		{"rsv2", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Frame$Consumer, rsv2, void, bool)},
		{"rsv3", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Frame$Consumer, rsv3, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Frame$Consumer", "Frame", "Consumer", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"Frame$Consumer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Frame"
	};
	$loadClass(Frame$Consumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Frame$Consumer);
	});
	return class$;
}

$Class* Frame$Consumer::class$ = nullptr;