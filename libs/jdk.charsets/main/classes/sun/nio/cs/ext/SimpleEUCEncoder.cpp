#include <sun/nio/cs/ext/SimpleEUCEncoder.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/Surrogate$Parser.h>
#include <jcpp.h>

#undef OVERFLOW
#undef UNDERFLOW

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $Surrogate$Parser = ::sun::nio::cs::Surrogate$Parser;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _SimpleEUCEncoder_FieldInfo_[] = {
	{"index1", "[S", nullptr, $PROTECTED, $field(SimpleEUCEncoder, index1)},
	{"index2", "Ljava/lang/String;", nullptr, $PROTECTED, $field(SimpleEUCEncoder, index2)},
	{"index2a", "Ljava/lang/String;", nullptr, $PROTECTED, $field(SimpleEUCEncoder, index2a)},
	{"index2b", "Ljava/lang/String;", nullptr, $PROTECTED, $field(SimpleEUCEncoder, index2b)},
	{"index2c", "Ljava/lang/String;", nullptr, $PROTECTED, $field(SimpleEUCEncoder, index2c)},
	{"mask1", "I", nullptr, $PROTECTED, $field(SimpleEUCEncoder, mask1)},
	{"mask2", "I", nullptr, $PROTECTED, $field(SimpleEUCEncoder, mask2)},
	{"shift", "I", nullptr, $PROTECTED, $field(SimpleEUCEncoder, shift)},
	{"outputByte", "[B", nullptr, $PRIVATE, $field(SimpleEUCEncoder, outputByte)},
	{"sgp", "Lsun/nio/cs/Surrogate$Parser;", nullptr, $PRIVATE | $FINAL, $field(SimpleEUCEncoder, sgp)},
	{}
};

$MethodInfo _SimpleEUCEncoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PROTECTED, $method(static_cast<void(SimpleEUCEncoder::*)($Charset*)>(&SimpleEUCEncoder::init$))},
	{"canEncode", "(C)Z", nullptr, $PUBLIC},
	{"encode", "(C)B", nullptr, $PUBLIC},
	{"encodeArrayLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(SimpleEUCEncoder::*)($CharBuffer*,$ByteBuffer*)>(&SimpleEUCEncoder::encodeArrayLoop))},
	{"encodeBufferLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(SimpleEUCEncoder::*)($CharBuffer*,$ByteBuffer*)>(&SimpleEUCEncoder::encodeBufferLoop))},
	{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _SimpleEUCEncoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.nio.cs.ext.SimpleEUCEncoder",
	"java.nio.charset.CharsetEncoder",
	nullptr,
	_SimpleEUCEncoder_FieldInfo_,
	_SimpleEUCEncoder_MethodInfo_
};

$Object* allocate$SimpleEUCEncoder($Class* clazz) {
	return $of($alloc(SimpleEUCEncoder));
}

void SimpleEUCEncoder::init$($Charset* cs) {
	$CharsetEncoder::init$(cs, 3.0f, 4.0f);
	$set(this, outputByte, $new($bytes, 4));
	$set(this, sgp, $new($Surrogate$Parser));
}

bool SimpleEUCEncoder::canEncode(char16_t ch) {
	int32_t index = 0;
	$var($String, theChars, nullptr);
	index = $nc(this->index1)->get($sr((int32_t)(ch & (uint32_t)this->mask1), this->shift)) + ((int32_t)(ch & (uint32_t)this->mask2));
	if (index < 7500) {
		$assign(theChars, this->index2);
	} else if (index < 15000) {
		index = index - 7500;
		$assign(theChars, this->index2a);
	} else if (index < 22500) {
		index = index - 15000;
		$assign(theChars, this->index2b);
	} else {
		index = index - 22500;
		$assign(theChars, this->index2c);
	}
	bool var$0 = $nc(theChars)->charAt(2 * index) != u'\0';
	if (var$0 || $nc(theChars)->charAt(2 * index + 1) != u'\0') {
		return (true);
	}
	return (ch == u'\0');
}

$CoderResult* SimpleEUCEncoder::encodeArrayLoop($CharBuffer* src, $ByteBuffer* dst) {
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
	int32_t index = 0;
	int32_t spaceNeeded = 0;
	int32_t i = 0;
	{
		$var($Throwable, var$4, nullptr);
		$var($CoderResult, var$6, nullptr);
		bool return$5 = false;
		try {
			while (sp < sl) {
				bool allZeroes = true;
				char16_t inputChar = $nc(sa)->get(sp);
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
				if (inputChar >= (char16_t)0xFFFE) {
					$assign(var$6, $CoderResult::unmappableForLength(1));
					return$5 = true;
					goto $finally;
				}
				$var($String, theChars, nullptr);
				char16_t aChar = 0;
				index = $nc(this->index1)->get($sr((int32_t)(inputChar & (uint32_t)this->mask1), this->shift)) + ((int32_t)(inputChar & (uint32_t)this->mask2));
				if (index < 7500) {
					$assign(theChars, this->index2);
				} else if (index < 15000) {
					index = index - 7500;
					$assign(theChars, this->index2a);
				} else if (index < 22500) {
					index = index - 15000;
					$assign(theChars, this->index2b);
				} else {
					index = index - 22500;
					$assign(theChars, this->index2c);
				}
				aChar = $nc(theChars)->charAt(2 * index);
				$nc(this->outputByte)->set(0, (int8_t)(((int32_t)(aChar & (uint32_t)0x0000FF00)) >> 8));
				$nc(this->outputByte)->set(1, (int8_t)((int32_t)(aChar & (uint32_t)255)));
				aChar = theChars->charAt(2 * index + 1);
				$nc(this->outputByte)->set(2, (int8_t)(((int32_t)(aChar & (uint32_t)0x0000FF00)) >> 8));
				$nc(this->outputByte)->set(3, (int8_t)((int32_t)(aChar & (uint32_t)255)));
				for (i = 0; i < $nc(this->outputByte)->length; ++i) {
					if ($nc(this->outputByte)->get(i) != 0) {
						allZeroes = false;
						break;
					}
				}
				if (allZeroes && inputChar != u'\0') {
					$assign(var$6, $CoderResult::unmappableForLength(1));
					return$5 = true;
					goto $finally;
				}
				int32_t oindex = 0;
				for (spaceNeeded = $nc(this->outputByte)->length; spaceNeeded > 1; --spaceNeeded) {
					if ($nc(this->outputByte)->get(oindex++) != 0) {
						break;
					}
				}
				if (dp + spaceNeeded > dl) {
					$init($CoderResult);
					$assign(var$6, $CoderResult::OVERFLOW);
					return$5 = true;
					goto $finally;
				}
				for (i = $nc(this->outputByte)->length - spaceNeeded; i < $nc(this->outputByte)->length; ++i) {
					$nc(da)->set(dp++, $nc(this->outputByte)->get(i));
				}
				++sp;
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

$CoderResult* SimpleEUCEncoder::encodeBufferLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t index = 0;
	int32_t spaceNeeded = 0;
	int32_t i = 0;
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				char16_t inputChar = src->get();
				bool allZeroes = true;
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
				if (inputChar >= (char16_t)0xFFFE) {
					$assign(var$2, $CoderResult::unmappableForLength(1));
					return$1 = true;
					goto $finally;
				}
				$var($String, theChars, nullptr);
				char16_t aChar = 0;
				index = $nc(this->index1)->get($sr((int32_t)(inputChar & (uint32_t)this->mask1), this->shift)) + ((int32_t)(inputChar & (uint32_t)this->mask2));
				if (index < 7500) {
					$assign(theChars, this->index2);
				} else if (index < 15000) {
					index = index - 7500;
					$assign(theChars, this->index2a);
				} else if (index < 22500) {
					index = index - 15000;
					$assign(theChars, this->index2b);
				} else {
					index = index - 22500;
					$assign(theChars, this->index2c);
				}
				aChar = $nc(theChars)->charAt(2 * index);
				$nc(this->outputByte)->set(0, (int8_t)(((int32_t)(aChar & (uint32_t)0x0000FF00)) >> 8));
				$nc(this->outputByte)->set(1, (int8_t)((int32_t)(aChar & (uint32_t)255)));
				aChar = theChars->charAt(2 * index + 1);
				$nc(this->outputByte)->set(2, (int8_t)(((int32_t)(aChar & (uint32_t)0x0000FF00)) >> 8));
				$nc(this->outputByte)->set(3, (int8_t)((int32_t)(aChar & (uint32_t)255)));
				for (i = 0; i < $nc(this->outputByte)->length; ++i) {
					if ($nc(this->outputByte)->get(i) != 0) {
						allZeroes = false;
						break;
					}
				}
				if (allZeroes && inputChar != u'\0') {
					$assign(var$2, $CoderResult::unmappableForLength(1));
					return$1 = true;
					goto $finally;
				}
				int32_t oindex = 0;
				for (spaceNeeded = $nc(this->outputByte)->length; spaceNeeded > 1; --spaceNeeded) {
					if ($nc(this->outputByte)->get(oindex++) != 0) {
						break;
					}
				}
				if ($nc(dst)->remaining() < spaceNeeded) {
					$init($CoderResult);
					$assign(var$2, $CoderResult::OVERFLOW);
					return$1 = true;
					goto $finally;
				}
				for (i = $nc(this->outputByte)->length - spaceNeeded; i < $nc(this->outputByte)->length; ++i) {
					$nc(dst)->put($nc(this->outputByte)->get(i));
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

$CoderResult* SimpleEUCEncoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return encodeArrayLoop(src, dst);
	} else {
		return encodeBufferLoop(src, dst);
	}
}

int8_t SimpleEUCEncoder::encode(char16_t inputChar) {
	return (int8_t)$nc(this->index2)->charAt($nc(this->index1)->get($sr((int32_t)(inputChar & (uint32_t)this->mask1), this->shift)) + ((int32_t)(inputChar & (uint32_t)this->mask2)));
}

SimpleEUCEncoder::SimpleEUCEncoder() {
}

$Class* SimpleEUCEncoder::load$($String* name, bool initialize) {
	$loadClass(SimpleEUCEncoder, name, initialize, &_SimpleEUCEncoder_ClassInfo_, allocate$SimpleEUCEncoder);
	return class$;
}

$Class* SimpleEUCEncoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun