#include <jdk/internal/net/http/websocket/Frame$Reader.h>
#include <java/lang/AssertionError.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/net/http/websocket/FailWebSocketException.h>
#include <jdk/internal/net/http/websocket/Frame$Consumer.h>
#include <jdk/internal/net/http/websocket/Frame$Opcode.h>
#include <jdk/internal/net/http/websocket/Frame.h>
#include <jcpp.h>

#undef AWAITING_FIRST_BYTE
#undef AWAITING_SECOND_BYTE
#undef READING_16_LENGTH
#undef READING_64_LENGTH
#undef READING_MASK
#undef READING_PAYLOAD

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FailWebSocketException = ::jdk::internal::net::http::websocket::FailWebSocketException;
using $Frame = ::jdk::internal::net::http::websocket::Frame;
using $Frame$Consumer = ::jdk::internal::net::http::websocket::Frame$Consumer;
using $Frame$Opcode = ::jdk::internal::net::http::websocket::Frame$Opcode;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

bool Frame$Reader::$assertionsDisabled = false;

void Frame$Reader::init$() {
	$set(this, accumulator, $ByteBuffer::allocate(8));
	this->state = Frame$Reader::AWAITING_FIRST_BYTE;
}

void Frame$Reader::readFrame($ByteBuffer* input, $Frame$Consumer* consumer) {
	$useLocalObjectStack();
	bool loop$continue = false;
	bool loop$break = false;
	while (true) {
		int8_t b = 0;
		{
			int8_t p1 = 0;
			int32_t deliverable = 0;
			int32_t oldLimit = 0;
			int32_t consumed = 0;
			switch (this->state) {
			case Frame$Reader::AWAITING_FIRST_BYTE:
				if (!$nc(input)->hasRemaining()) {
					loop$break = true;
					break;
				}
				b = input->get();
				$nc(consumer)->fin((b & 0x80) != 0);
				consumer->rsv1((b & 0x40) != 0);
				consumer->rsv2((b & 0x20) != 0);
				consumer->rsv3((b & 0x10) != 0);
				consumer->opcode($($Frame$Opcode::ofCode(b)));
				this->state = Frame$Reader::AWAITING_SECOND_BYTE;
				continue;
			case Frame$Reader::AWAITING_SECOND_BYTE:
				if (!$nc(input)->hasRemaining()) {
					loop$break = true;
					break;
				}
				b = input->get();
				$nc(consumer)->mask(this->mask = (b & 0x80) != 0);
				p1 = (int8_t)(b & 0x7f);
				if (p1 < 126) {
					if (!Frame$Reader::$assertionsDisabled && !(p1 >= 0)) {
						$throwNew($AssertionError, (int32_t)p1);
					}
					consumer->payloadLen(this->remainingPayloadLength = p1);
					this->state = this->mask ? Frame$Reader::READING_MASK : Frame$Reader::READING_PAYLOAD;
				} else if (p1 < 127) {
					this->state = Frame$Reader::READING_16_LENGTH;
				} else {
					this->state = Frame$Reader::READING_64_LENGTH;
				}
				continue;
			case Frame$Reader::READING_16_LENGTH:
				if (!$nc(input)->hasRemaining()) {
					loop$break = true;
					break;
				}
				b = input->get();
				if ($$nc($nc(this->accumulator)->put(b))->position() < 2) {
					continue;
				}
				this->remainingPayloadLength = $$nc(this->accumulator->flip())->getChar();
				if (this->remainingPayloadLength < 126) {
					$throw($(notMinimalEncoding(this->remainingPayloadLength)));
				}
				$nc(consumer)->payloadLen(this->remainingPayloadLength);
				this->accumulator->clear();
				this->state = this->mask ? Frame$Reader::READING_MASK : Frame$Reader::READING_PAYLOAD;
				continue;
			case Frame$Reader::READING_64_LENGTH:
				if (!$nc(input)->hasRemaining()) {
					loop$break = true;
					break;
				}
				b = input->get();
				if ($$nc($nc(this->accumulator)->put(b))->position() < 8) {
					continue;
				}
				this->remainingPayloadLength = $$nc(this->accumulator->flip())->getLong();
				if (this->remainingPayloadLength < 0) {
					$throw($(negativePayload(this->remainingPayloadLength)));
				} else if (this->remainingPayloadLength < 0x00010000) {
					$throw($(notMinimalEncoding(this->remainingPayloadLength)));
				}
				$nc(consumer)->payloadLen(this->remainingPayloadLength);
				this->accumulator->clear();
				this->state = this->mask ? Frame$Reader::READING_MASK : Frame$Reader::READING_PAYLOAD;
				continue;
			case Frame$Reader::READING_MASK:
				if (!$nc(input)->hasRemaining()) {
					loop$break = true;
					break;
				}
				b = input->get();
				if ($$nc($nc(this->accumulator)->put(b))->position() != 4) {
					continue;
				}
				$nc(consumer)->maskingKey($$nc(this->accumulator->flip())->getInt());
				this->accumulator->clear();
				this->state = Frame$Reader::READING_PAYLOAD;
				continue;
			case Frame$Reader::READING_PAYLOAD:
				deliverable = (int32_t)$Math::min(this->remainingPayloadLength, (int64_t)$nc(input)->remaining());
				oldLimit = input->limit();
				input->limit(input->position() + deliverable);
				if (deliverable != 0 || this->remainingPayloadLength == 0) {
					$nc(consumer)->payloadData(input);
				}
				consumed = deliverable - input->remaining();
				if (consumed < 0) {
					$throwNew($InternalError);
				}
				input->limit(oldLimit);
				this->remainingPayloadLength -= consumed;
				if (this->remainingPayloadLength == 0) {
					$nc(consumer)->endFrame();
					this->state = Frame$Reader::AWAITING_FIRST_BYTE;
				}
				loop$break = true;
				break;
			default:
				$throwNew($InternalError, $($String::valueOf(this->state)));
			}
			if (loop$continue) {
				loop$continue = false;
				continue;
			}
			if (loop$break) {
				break;
			}
		}
	}
}

$FailWebSocketException* Frame$Reader::negativePayload(int64_t payloadLength) {
	$init(Frame$Reader);
	$useLocalObjectStack();
	return $new($FailWebSocketException, $$str({"Negative payload length: "_s, $$str(payloadLength)}));
}

$FailWebSocketException* Frame$Reader::notMinimalEncoding(int64_t payloadLength) {
	$init(Frame$Reader);
	$useLocalObjectStack();
	return $new($FailWebSocketException, $$str({"Not minimally-encoded payload length:"_s, $$str(payloadLength)}));
}

void Frame$Reader::clinit$($Class* clazz) {
	$load($Frame);
	Frame$Reader::$assertionsDisabled = !$Frame::class$->desiredAssertionStatus();
}

Frame$Reader::Frame$Reader() {
}

$Class* Frame$Reader::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Frame$Reader, $assertionsDisabled)},
		{"AWAITING_FIRST_BYTE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame$Reader, AWAITING_FIRST_BYTE)},
		{"AWAITING_SECOND_BYTE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame$Reader, AWAITING_SECOND_BYTE)},
		{"READING_16_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame$Reader, READING_16_LENGTH)},
		{"READING_64_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame$Reader, READING_64_LENGTH)},
		{"READING_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame$Reader, READING_MASK)},
		{"READING_PAYLOAD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame$Reader, READING_PAYLOAD)},
		{"accumulator", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $FINAL, $field(Frame$Reader, accumulator)},
		{"state", "I", nullptr, $PRIVATE, $field(Frame$Reader, state)},
		{"mask", "Z", nullptr, $PRIVATE, $field(Frame$Reader, mask)},
		{"remainingPayloadLength", "J", nullptr, $PRIVATE, $field(Frame$Reader, remainingPayloadLength)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Frame$Reader, init$, void)},
		{"negativePayload", "(J)Ljdk/internal/net/http/websocket/FailWebSocketException;", nullptr, $PRIVATE | $STATIC, $staticMethod(Frame$Reader, negativePayload, $FailWebSocketException*, int64_t)},
		{"notMinimalEncoding", "(J)Ljdk/internal/net/http/websocket/FailWebSocketException;", nullptr, $PRIVATE | $STATIC, $staticMethod(Frame$Reader, notMinimalEncoding, $FailWebSocketException*, int64_t)},
		{"readFrame", "(Ljava/nio/ByteBuffer;Ljdk/internal/net/http/websocket/Frame$Consumer;)V", nullptr, 0, $method(Frame$Reader, readFrame, void, $ByteBuffer*, $Frame$Consumer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.websocket.Frame$Reader", "jdk.internal.net.http.websocket.Frame", "Reader", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.websocket.Frame$Reader",
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
		"jdk.internal.net.http.websocket.Frame"
	};
	$loadClass(Frame$Reader, name, initialize, &classInfo$$, Frame$Reader::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Frame$Reader);
	});
	return class$;
}

$Class* Frame$Reader::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk