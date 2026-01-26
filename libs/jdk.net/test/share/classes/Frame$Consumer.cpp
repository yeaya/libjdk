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

$MethodInfo _Frame$Consumer_MethodInfo_[] = {
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

$InnerClassInfo _Frame$Consumer_InnerClassesInfo_[] = {
	{"Frame$Consumer", "Frame", "Consumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Frame$Consumer_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"Frame$Consumer",
	nullptr,
	nullptr,
	nullptr,
	_Frame$Consumer_MethodInfo_,
	nullptr,
	nullptr,
	_Frame$Consumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Frame"
};

$Object* allocate$Frame$Consumer($Class* clazz) {
	return $of($alloc(Frame$Consumer));
}

$Class* Frame$Consumer::load$($String* name, bool initialize) {
	$loadClass(Frame$Consumer, name, initialize, &_Frame$Consumer_ClassInfo_, allocate$Frame$Consumer);
	return class$;
}

$Class* Frame$Consumer::class$ = nullptr;