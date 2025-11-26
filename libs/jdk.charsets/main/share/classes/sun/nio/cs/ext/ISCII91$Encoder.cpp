#include <sun/nio/cs/ext/ISCII91$Encoder.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/Surrogate$Parser.h>
#include <sun/nio/cs/ext/ISCII91.h>
#include <jcpp.h>

#undef MIN_VALUE
#undef NO_CHAR
#undef OVERFLOW
#undef UNDERFLOW

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $Surrogate$Parser = ::sun::nio::cs::Surrogate$Parser;
using $ISCII91 = ::sun::nio::cs::ext::ISCII91;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _ISCII91$Encoder_FieldInfo_[] = {
	{"NO_CHAR", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISCII91$Encoder, NO_CHAR)},
	{"sgp", "Lsun/nio/cs/Surrogate$Parser;", nullptr, $PRIVATE | $FINAL, $field(ISCII91$Encoder, sgp)},
	{}
};

$MethodInfo _ISCII91$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(static_cast<void(ISCII91$Encoder::*)($Charset*)>(&ISCII91$Encoder::init$))},
	{"canEncode", "(C)Z", nullptr, $PUBLIC},
	{"encodeArrayLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(ISCII91$Encoder::*)($CharBuffer*,$ByteBuffer*)>(&ISCII91$Encoder::encodeArrayLoop))},
	{"encodeBufferLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(ISCII91$Encoder::*)($CharBuffer*,$ByteBuffer*)>(&ISCII91$Encoder::encodeBufferLoop))},
	{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _ISCII91$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.ISCII91$Encoder", "sun.nio.cs.ext.ISCII91", "Encoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ISCII91$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.ISCII91$Encoder",
	"java.nio.charset.CharsetEncoder",
	nullptr,
	_ISCII91$Encoder_FieldInfo_,
	_ISCII91$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_ISCII91$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.ISCII91"
};

$Object* allocate$ISCII91$Encoder($Class* clazz) {
	return $of($alloc(ISCII91$Encoder));
}

void ISCII91$Encoder::init$($Charset* cs) {
	$CharsetEncoder::init$(cs, 2.0f, 2.0f);
	$set(this, sgp, $new($Surrogate$Parser));
}

bool ISCII91$Encoder::canEncode(char16_t ch) {
	$init($ISCII91);
	return ((ch >= (char16_t)0x900 && ch <= (char16_t)0x97F && $nc($ISCII91::encoderMappingTable)->get(2 * (ch - (char16_t)0x900)) != ISCII91$Encoder::NO_CHAR) || (ch == (char16_t)0x200D) || (ch == (char16_t)0x200C) || (ch <= (char16_t)0x7F));
}

$CoderResult* ISCII91$Encoder::encodeArrayLoop($CharBuffer* src, $ByteBuffer* dst) {
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
	{
		$var($Throwable, var$4, nullptr);
		$var($CoderResult, var$6, nullptr);
		bool return$5 = false;
		try {
			char16_t inputChar = 0;
			while (sp < sl) {
				int32_t index = $Integer::MIN_VALUE;
				inputChar = $nc(sa)->get(sp);
				if (inputChar >= 0 && inputChar <= 127) {
					if (dl - dp < 1) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::OVERFLOW);
						return$5 = true;
						goto $finally;
					}
					$nc(da)->set(dp++, (int8_t)inputChar);
					++sp;
					continue;
				}
				if (inputChar == 8204) {
					inputChar = (char16_t)0x94D;
				} else if (inputChar == 8205) {
					inputChar = (char16_t)0x93C;
				}
				if (inputChar >= 2304 && inputChar <= 2431) {
					index = ((int32_t)(inputChar) - 2304) * 2;
				}
				if ($Character::isSurrogate(inputChar)) {
					if ($nc(this->sgp)->parse(inputChar, sa, sp, sl) < 0) {
						$assign(var$6, $nc(this->sgp)->error());
						return$5 = true;
						goto $finally;
					}
					$assign(var$6, $nc(this->sgp)->unmappableResult());
					return$5 = true;
					goto $finally;
				}
				$init($ISCII91);
				if (index == $Integer::MIN_VALUE || $nc($ISCII91::encoderMappingTable)->get(index) == ISCII91$Encoder::NO_CHAR) {
					$assign(var$6, $CoderResult::unmappableForLength(1));
					return$5 = true;
					goto $finally;
				} else {
					if ($nc($ISCII91::encoderMappingTable)->get(index + 1) == ISCII91$Encoder::NO_CHAR) {
						if (dl - dp < 1) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::OVERFLOW);
							return$5 = true;
							goto $finally;
						}
						$nc(da)->set(dp++, $nc($ISCII91::encoderMappingTable)->get(index));
					} else {
						if (dl - dp < 2) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::OVERFLOW);
							return$5 = true;
							goto $finally;
						}
						$nc(da)->set(dp++, $nc($ISCII91::encoderMappingTable)->get(index));
						da->set(dp++, $nc($ISCII91::encoderMappingTable)->get(index + 1));
					}
					++sp;
				}
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

$CoderResult* ISCII91$Encoder::encodeBufferLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			char16_t inputChar = 0;
			while (src->hasRemaining()) {
				int32_t index = $Integer::MIN_VALUE;
				inputChar = src->get();
				if (inputChar >= 0 && inputChar <= 127) {
					if ($nc(dst)->remaining() < 1) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::OVERFLOW);
						return$1 = true;
						goto $finally;
					}
					$nc(dst)->put((int8_t)inputChar);
					++mark;
					continue;
				}
				if (inputChar == 8204) {
					inputChar = (char16_t)0x94D;
				} else if (inputChar == 8205) {
					inputChar = (char16_t)0x93C;
				}
				if (inputChar >= 2304 && inputChar <= 2431) {
					index = ((int32_t)(inputChar) - 2304) * 2;
				}
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
				$init($ISCII91);
				if (index == $Integer::MIN_VALUE || $nc($ISCII91::encoderMappingTable)->get(index) == ISCII91$Encoder::NO_CHAR) {
					$assign(var$2, $CoderResult::unmappableForLength(1));
					return$1 = true;
					goto $finally;
				} else {
					if ($nc($ISCII91::encoderMappingTable)->get(index + 1) == ISCII91$Encoder::NO_CHAR) {
						if ($nc(dst)->remaining() < 1) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::OVERFLOW);
							return$1 = true;
							goto $finally;
						}
						$nc(dst)->put($nc($ISCII91::encoderMappingTable)->get(index));
					} else {
						if ($nc(dst)->remaining() < 2) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::OVERFLOW);
							return$1 = true;
							goto $finally;
						}
						$nc(dst)->put($nc($ISCII91::encoderMappingTable)->get(index));
						dst->put($nc($ISCII91::encoderMappingTable)->get(index + 1));
					}
				}
				++mark;
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

$CoderResult* ISCII91$Encoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return encodeArrayLoop(src, dst);
	} else {
		return encodeBufferLoop(src, dst);
	}
}

ISCII91$Encoder::ISCII91$Encoder() {
}

$Class* ISCII91$Encoder::load$($String* name, bool initialize) {
	$loadClass(ISCII91$Encoder, name, initialize, &_ISCII91$Encoder_ClassInfo_, allocate$ISCII91$Encoder);
	return class$;
}

$Class* ISCII91$Encoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun