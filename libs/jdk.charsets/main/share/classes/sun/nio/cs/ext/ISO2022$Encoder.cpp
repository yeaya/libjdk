#include <sun/nio/cs/ext/ISO2022$Encoder.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/Surrogate$Parser.h>
#include <sun/nio/cs/ext/ISO2022.h>
#include <jcpp.h>

#undef ISO_ESC
#undef ISO_SI
#undef ISO_SO
#undef ISO_SS2_7
#undef ISO_SS3_7
#undef OVERFLOW
#undef PLANE2
#undef PLANE3
#undef SS2
#undef UNDERFLOW

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $Surrogate$Parser = ::sun::nio::cs::Surrogate$Parser;
using $ISO2022 = ::sun::nio::cs::ext::ISO2022;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _ISO2022$Encoder_FieldInfo_[] = {
	{"ISO_ESC", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022$Encoder, ISO_ESC)},
	{"ISO_SI", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022$Encoder, ISO_SI)},
	{"ISO_SO", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022$Encoder, ISO_SO)},
	{"ISO_SS2_7", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022$Encoder, ISO_SS2_7)},
	{"ISO_SS3_7", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022$Encoder, ISO_SS3_7)},
	{"sgp", "Lsun/nio/cs/Surrogate$Parser;", nullptr, $PRIVATE | $FINAL, $field(ISO2022$Encoder, sgp)},
	{"SS2", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ISO2022$Encoder, SS2)},
	{"PLANE2", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ISO2022$Encoder, PLANE2)},
	{"PLANE3", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ISO2022$Encoder, PLANE3)},
	{"maximumDesignatorLength", "B", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(ISO2022$Encoder, maximumDesignatorLength)},
	{"SODesig", "[B", nullptr, $PROTECTED, $field(ISO2022$Encoder, SODesig)},
	{"SS2Desig", "[B", nullptr, $PROTECTED, $field(ISO2022$Encoder, SS2Desig)},
	{"SS3Desig", "[B", nullptr, $PROTECTED, $field(ISO2022$Encoder, SS3Desig)},
	{"ISOEncoder", "Ljava/nio/charset/CharsetEncoder;", nullptr, $PROTECTED, $field(ISO2022$Encoder, ISOEncoder)},
	{"shiftout", "Z", nullptr, $PRIVATE, $field(ISO2022$Encoder, shiftout)},
	{"SODesDefined", "Z", nullptr, $PRIVATE, $field(ISO2022$Encoder, SODesDefined)},
	{"SS2DesDefined", "Z", nullptr, $PRIVATE, $field(ISO2022$Encoder, SS2DesDefined)},
	{"SS3DesDefined", "Z", nullptr, $PRIVATE, $field(ISO2022$Encoder, SS3DesDefined)},
	{"newshiftout", "Z", nullptr, $PRIVATE, $field(ISO2022$Encoder, newshiftout)},
	{"newSODesDefined", "Z", nullptr, $PRIVATE, $field(ISO2022$Encoder, newSODesDefined)},
	{"newSS2DesDefined", "Z", nullptr, $PRIVATE, $field(ISO2022$Encoder, newSS2DesDefined)},
	{"newSS3DesDefined", "Z", nullptr, $PRIVATE, $field(ISO2022$Encoder, newSS3DesDefined)},
	{}
};

$MethodInfo _ISO2022$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PROTECTED, $method(static_cast<void(ISO2022$Encoder::*)($Charset*)>(&ISO2022$Encoder::init$))},
	{"canEncode", "(C)Z", nullptr, $PUBLIC},
	{"encodeArrayLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(ISO2022$Encoder::*)($CharBuffer*,$ByteBuffer*)>(&ISO2022$Encoder::encodeArrayLoop))},
	{"encodeBufferLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(ISO2022$Encoder::*)($CharBuffer*,$ByteBuffer*)>(&ISO2022$Encoder::encodeBufferLoop))},
	{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"implReset", "()V", nullptr, $PROTECTED},
	{"unicodeToNative", "(C[B)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ISO2022$Encoder::*)(char16_t,$bytes*)>(&ISO2022$Encoder::unicodeToNative))},
	{}
};

$InnerClassInfo _ISO2022$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.ISO2022$Encoder", "sun.nio.cs.ext.ISO2022", "Encoder", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _ISO2022$Encoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.ISO2022$Encoder",
	"java.nio.charset.CharsetEncoder",
	nullptr,
	_ISO2022$Encoder_FieldInfo_,
	_ISO2022$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_ISO2022$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.ISO2022"
};

$Object* allocate$ISO2022$Encoder($Class* clazz) {
	return $of($alloc(ISO2022$Encoder));
}

void ISO2022$Encoder::init$($Charset* cs) {
	$CharsetEncoder::init$(cs, 4.0f, 8.0f);
	$set(this, sgp, $new($Surrogate$Parser));
	$set(this, SS2Desig, nullptr);
	$set(this, SS3Desig, nullptr);
	this->shiftout = false;
	this->SODesDefined = false;
	this->SS2DesDefined = false;
	this->SS3DesDefined = false;
	this->newshiftout = false;
	this->newSODesDefined = false;
	this->newSS2DesDefined = false;
	this->newSS3DesDefined = false;
}

bool ISO2022$Encoder::canEncode(char16_t c) {
	return ($nc(this->ISOEncoder)->canEncode(c));
}

void ISO2022$Encoder::implReset() {
	this->shiftout = false;
	this->SODesDefined = false;
	this->SS2DesDefined = false;
	this->SS3DesDefined = false;
}

int32_t ISO2022$Encoder::unicodeToNative(char16_t unicode, $bytes* ebyte) {
	$useLocalCurrentObjectStackCache();
	int32_t index = 0;
	$var($chars, convChar, $new($chars, {unicode}));
	$var($bytes, convByte, $new($bytes, 4));
	int32_t converted = 0;
	try {
		$var($CharBuffer, cc, $CharBuffer::wrap(convChar));
		$var($ByteBuffer, bb, $ByteBuffer::wrap(convByte));
		$nc(this->ISOEncoder)->encode(cc, bb, true);
		$nc(bb)->flip();
		converted = bb->remaining();
	} catch ($Exception& e) {
		return -1;
	}
	if (converted == 2) {
		if (!this->SODesDefined) {
			this->newSODesDefined = true;
			$nc(ebyte)->set(0, ISO2022$Encoder::ISO_ESC);
			$System::arraycopy(this->SODesig, 0, ebyte, 1, $nc(this->SODesig)->length);
			index = $nc(this->SODesig)->length + 1;
		}
		if (!this->shiftout) {
			this->newshiftout = true;
			$nc(ebyte)->set(index++, ISO2022$Encoder::ISO_SO);
		}
		$nc(ebyte)->set(index++, (int8_t)((int32_t)(convByte->get(0) & (uint32_t)127)));
		ebyte->set(index++, (int8_t)((int32_t)(convByte->get(1) & (uint32_t)127)));
	} else if (convByte->get(0) == ISO2022$Encoder::SS2) {
		if (convByte->get(1) == ISO2022$Encoder::PLANE2) {
			if (!this->SS2DesDefined) {
				this->newSS2DesDefined = true;
				$nc(ebyte)->set(0, ISO2022$Encoder::ISO_ESC);
				$System::arraycopy(this->SS2Desig, 0, ebyte, 1, $nc(this->SS2Desig)->length);
				index = $nc(this->SS2Desig)->length + 1;
			}
			$nc(ebyte)->set(index++, ISO2022$Encoder::ISO_ESC);
			ebyte->set(index++, ISO2022$Encoder::ISO_SS2_7);
			ebyte->set(index++, (int8_t)((int32_t)(convByte->get(2) & (uint32_t)127)));
			ebyte->set(index++, (int8_t)((int32_t)(convByte->get(3) & (uint32_t)127)));
		} else if (convByte->get(1) == ISO2022$Encoder::PLANE3) {
			if (!this->SS3DesDefined) {
				this->newSS3DesDefined = true;
				$nc(ebyte)->set(0, ISO2022$Encoder::ISO_ESC);
				$System::arraycopy(this->SS3Desig, 0, ebyte, 1, $nc(this->SS3Desig)->length);
				index = $nc(this->SS3Desig)->length + 1;
			}
			$nc(ebyte)->set(index++, ISO2022$Encoder::ISO_ESC);
			ebyte->set(index++, ISO2022$Encoder::ISO_SS3_7);
			ebyte->set(index++, (int8_t)((int32_t)(convByte->get(2) & (uint32_t)127)));
			ebyte->set(index++, (int8_t)((int32_t)(convByte->get(3) & (uint32_t)127)));
		}
	}
	return index;
}

$CoderResult* ISO2022$Encoder::encodeArrayLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	$var($chars, sa, $cast($chars, $nc(src)->array()));
	int32_t var$0 = src->arrayOffset();
	int32_t sp = var$0 + src->position();
	int32_t var$1 = src->arrayOffset();
	int32_t sl = var$1 + src->limit();
	$var($bytes, da, $cast($bytes, $nc(dst)->array()));
	int32_t var$2 = dst->arrayOffset();
	int32_t dp = var$2 + dst->position();
	int32_t var$3 = dst->arrayOffset();
	int32_t dl = var$3 + dst->limit();
	int32_t outputSize = 0;
	$var($bytes, outputByte, $new($bytes, 8));
	this->newshiftout = this->shiftout;
	this->newSODesDefined = this->SODesDefined;
	this->newSS2DesDefined = this->SS2DesDefined;
	this->newSS3DesDefined = this->SS3DesDefined;
	{
		$var($Throwable, var$4, nullptr);
		$var($CoderResult, var$6, nullptr);
		bool return$5 = false;
		try {
			while (sp < sl) {
				char16_t c = $nc(sa)->get(sp);
				if ($Character::isSurrogate(c)) {
					if ($nc(this->sgp)->parse(c, sa, sp, sl) < 0) {
						$assign(var$6, $nc(this->sgp)->error());
						return$5 = true;
						goto $finally;
					}
					$assign(var$6, $nc(this->sgp)->unmappableResult());
					return$5 = true;
					goto $finally;
				}
				if (c < 128) {
					if (this->shiftout) {
						this->newshiftout = false;
						outputSize = 2;
						outputByte->set(0, ISO2022$Encoder::ISO_SI);
						outputByte->set(1, (int8_t)((int32_t)(c & (uint32_t)127)));
					} else {
						outputSize = 1;
						outputByte->set(0, (int8_t)((int32_t)(c & (uint32_t)127)));
					}
					if (sa->get(sp) == u'\n') {
						this->newSODesDefined = false;
						this->newSS2DesDefined = false;
						this->newSS3DesDefined = false;
					}
				} else {
					outputSize = unicodeToNative(c, outputByte);
					if (outputSize == 0) {
						$assign(var$6, $CoderResult::unmappableForLength(1));
						return$5 = true;
						goto $finally;
					}
				}
				if (dl - dp < outputSize) {
					$init($CoderResult);
					$assign(var$6, $CoderResult::OVERFLOW);
					return$5 = true;
					goto $finally;
				}
				for (int32_t i = 0; i < outputSize; ++i) {
					$nc(da)->set(dp++, outputByte->get(i));
				}
				++sp;
				this->shiftout = this->newshiftout;
				this->SODesDefined = this->newSODesDefined;
				this->SS2DesDefined = this->newSS2DesDefined;
				this->SS3DesDefined = this->newSS3DesDefined;
			}
			$init($CoderResult);
			$assign(var$6, $CoderResult::UNDERFLOW);
			return$5 = true;
			goto $finally;
		} catch ($Throwable& var$7) {
			$assign(var$4, var$7);
		} $finally: {
			src->position(sp - src->arrayOffset());
			dst->position(dp - dst->arrayOffset());
		}
		if (var$4 != nullptr) {
			$throw(var$4);
		}
		if (return$5) {
			return var$6;
		}
	}
	$shouldNotReachHere();
}

$CoderResult* ISO2022$Encoder::encodeBufferLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t outputSize = 0;
	$var($bytes, outputByte, $new($bytes, 8));
	this->newshiftout = this->shiftout;
	this->newSODesDefined = this->SODesDefined;
	this->newSS2DesDefined = this->SS2DesDefined;
	this->newSS3DesDefined = this->SS3DesDefined;
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				char16_t inputChar = src->get();
				if ($Character::isSurrogate(inputChar)) {
					if ($nc(this->sgp)->parse(inputChar, src) < 0) {
						$assign(var$2, $nc(this->sgp)->error());
						return$1 = true;
						goto $finally;
					}
					$assign(var$2, $nc(this->sgp)->unmappableResult());
					return$1 = true;
					goto $finally;
				}
				if (inputChar < 128) {
					if (this->shiftout) {
						this->newshiftout = false;
						outputSize = 2;
						outputByte->set(0, ISO2022$Encoder::ISO_SI);
						outputByte->set(1, (int8_t)((int32_t)(inputChar & (uint32_t)127)));
					} else {
						outputSize = 1;
						outputByte->set(0, (int8_t)((int32_t)(inputChar & (uint32_t)127)));
					}
					if (inputChar == u'\n') {
						this->newSODesDefined = false;
						this->newSS2DesDefined = false;
						this->newSS3DesDefined = false;
					}
				} else {
					outputSize = unicodeToNative(inputChar, outputByte);
					if (outputSize == 0) {
						$assign(var$2, $CoderResult::unmappableForLength(1));
						return$1 = true;
						goto $finally;
					}
				}
				if ($nc(dst)->remaining() < outputSize) {
					$init($CoderResult);
					$assign(var$2, $CoderResult::OVERFLOW);
					return$1 = true;
					goto $finally;
				}
				for (int32_t i = 0; i < outputSize; ++i) {
					$nc(dst)->put(outputByte->get(i));
				}
				++mark;
				this->shiftout = this->newshiftout;
				this->SODesDefined = this->newSODesDefined;
				this->SS2DesDefined = this->newSS2DesDefined;
				this->SS3DesDefined = this->newSS3DesDefined;
			}
			$init($CoderResult);
			$assign(var$2, $CoderResult::UNDERFLOW);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			src->position(mark);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$CoderResult* ISO2022$Encoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return encodeArrayLoop(src, dst);
	} else {
		return encodeBufferLoop(src, dst);
	}
}

ISO2022$Encoder::ISO2022$Encoder() {
}

$Class* ISO2022$Encoder::load$($String* name, bool initialize) {
	$loadClass(ISO2022$Encoder, name, initialize, &_ISO2022$Encoder_ClassInfo_, allocate$ISO2022$Encoder);
	return class$;
}

$Class* ISO2022$Encoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun