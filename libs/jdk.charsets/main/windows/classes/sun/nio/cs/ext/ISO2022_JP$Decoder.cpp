#include <sun/nio/cs/ext/ISO2022_JP$Decoder.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/ext/ISO2022_JP.h>
#include <sun/nio/cs/ext/JIS_X_0208.h>
#include <jcpp.h>

#undef OVERFLOW
#undef UNDERFLOW

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $DelegatableDecoder = ::sun::nio::cs::DelegatableDecoder;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $ISO2022_JP = ::sun::nio::cs::ext::ISO2022_JP;
using $JIS_X_0208 = ::sun::nio::cs::ext::JIS_X_0208;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _ISO2022_JP$Decoder_FieldInfo_[] = {
	{"DEC0208", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $STATIC | $FINAL, $staticField(ISO2022_JP$Decoder, DEC0208)},
	{"currentState", "I", nullptr, $PRIVATE, $field(ISO2022_JP$Decoder, currentState)},
	{"previousState", "I", nullptr, $PRIVATE, $field(ISO2022_JP$Decoder, previousState)},
	{"dec0208", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $PRIVATE | $FINAL, $field(ISO2022_JP$Decoder, dec0208)},
	{"dec0212", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $PRIVATE | $FINAL, $field(ISO2022_JP$Decoder, dec0212)},
	{}
};

$MethodInfo _ISO2022_JP$Decoder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(static_cast<void(ISO2022_JP$Decoder::*)($Charset*)>(&ISO2022_JP$Decoder::init$))},
	{"<init>", "(Ljava/nio/charset/Charset;Lsun/nio/cs/DoubleByte$Decoder;Lsun/nio/cs/DoubleByte$Decoder;)V", nullptr, $PROTECTED, $method(static_cast<void(ISO2022_JP$Decoder::*)($Charset*,$DoubleByte$Decoder*,$DoubleByte$Decoder*)>(&ISO2022_JP$Decoder::init$))},
	{"decodeArrayLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(ISO2022_JP$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&ISO2022_JP$Decoder::decodeArrayLoop))},
	{"decodeBufferLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(ISO2022_JP$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&ISO2022_JP$Decoder::decodeBufferLoop))},
	{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PUBLIC},
	{"implFlush", "(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PUBLIC},
	{"implReset", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ISO2022_JP$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.ISO2022_JP$Decoder", "sun.nio.cs.ext.ISO2022_JP", "Decoder", $STATIC},
	{}
};

$ClassInfo _ISO2022_JP$Decoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.ISO2022_JP$Decoder",
	"java.nio.charset.CharsetDecoder",
	"sun.nio.cs.DelegatableDecoder",
	_ISO2022_JP$Decoder_FieldInfo_,
	_ISO2022_JP$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_ISO2022_JP$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.ISO2022_JP"
};

$Object* allocate$ISO2022_JP$Decoder($Class* clazz) {
	return $of($alloc(ISO2022_JP$Decoder));
}

int32_t ISO2022_JP$Decoder::hashCode() {
	 return this->$CharsetDecoder::hashCode();
}

bool ISO2022_JP$Decoder::equals(Object$* arg0) {
	 return this->$CharsetDecoder::equals(arg0);
}

$Object* ISO2022_JP$Decoder::clone() {
	 return this->$CharsetDecoder::clone();
}

$String* ISO2022_JP$Decoder::toString() {
	 return this->$CharsetDecoder::toString();
}

void ISO2022_JP$Decoder::finalize() {
	this->$CharsetDecoder::finalize();
}

$DoubleByte$Decoder* ISO2022_JP$Decoder::DEC0208 = nullptr;

void ISO2022_JP$Decoder::init$($Charset* cs) {
	ISO2022_JP$Decoder::init$(cs, ISO2022_JP$Decoder::DEC0208, nullptr);
}

void ISO2022_JP$Decoder::init$($Charset* cs, $DoubleByte$Decoder* dec0208, $DoubleByte$Decoder* dec0212) {
	$CharsetDecoder::init$(cs, 0.5f, 1.0f);
	$set(this, dec0208, dec0208);
	$set(this, dec0212, dec0212);
	this->currentState = 0;
	this->previousState = 0;
}

void ISO2022_JP$Decoder::implReset() {
	this->currentState = 0;
	this->previousState = 0;
}

$CoderResult* ISO2022_JP$Decoder::decodeArrayLoop($ByteBuffer* src, $CharBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t inputSize = 0;
	int32_t b1 = 0;
	int32_t b2 = 0;
	int32_t b3 = 0;
	int32_t b4 = 0;
	char16_t c = 0;
	$var($bytes, sa, $cast($bytes, $nc(src)->array()));
	int32_t var$0 = src->arrayOffset();
	int32_t sp = var$0 + src->position();
	int32_t var$1 = src->arrayOffset();
	int32_t sl = var$1 + src->limit();
	$var($chars, da, $cast($chars, $nc(dst)->array()));
	int32_t var$2 = dst->arrayOffset();
	int32_t dp = var$2 + dst->position();
	int32_t var$3 = dst->arrayOffset();
	int32_t dl = var$3 + dst->limit();
	{
		$var($Throwable, var$4, nullptr);
		$var($CoderResult, var$6, nullptr);
		bool return$5 = false;
		try {
			while (sp < sl) {
				b1 = (int32_t)($nc(sa)->get(sp) & (uint32_t)255);
				inputSize = 1;
				if (((int32_t)(b1 & (uint32_t)128)) != 0) {
					$assign(var$6, $CoderResult::malformedForLength(inputSize));
					return$5 = true;
					goto $finally;
				}
				if (b1 == 27 || b1 == 14 || b1 == 15) {
					if (b1 == 27) {
						if (sp + inputSize + 2 > sl) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::UNDERFLOW);
							return$5 = true;
							goto $finally;
						}
						b2 = (int32_t)(sa->get(sp + inputSize++) & (uint32_t)255);
						if (b2 == u'(') {
							b3 = (int32_t)(sa->get(sp + inputSize++) & (uint32_t)255);
							if (b3 == u'B') {
								this->currentState = 0;
							} else if (b3 == u'J') {
								this->currentState = 1;
							} else if (b3 == u'I') {
								this->currentState = 5;
							} else {
								$assign(var$6, $CoderResult::malformedForLength(inputSize));
								return$5 = true;
								goto $finally;
							}
						} else if (b2 == u'$') {
							b3 = (int32_t)(sa->get(sp + inputSize++) & (uint32_t)255);
							if (b3 == u'@') {
								this->currentState = 2;
							} else if (b3 == u'B') {
								this->currentState = 3;
							} else if (b3 == u'(' && this->dec0212 != nullptr) {
								if (sp + inputSize + 1 > sl) {
									$init($CoderResult);
									$assign(var$6, $CoderResult::UNDERFLOW);
									return$5 = true;
									goto $finally;
								}
								b4 = (int32_t)(sa->get(sp + inputSize++) & (uint32_t)255);
								if (b4 == u'D') {
									this->currentState = 4;
								} else {
									$assign(var$6, $CoderResult::malformedForLength(inputSize));
									return$5 = true;
									goto $finally;
								}
							} else {
								$assign(var$6, $CoderResult::malformedForLength(inputSize));
								return$5 = true;
								goto $finally;
							}
						} else {
							$assign(var$6, $CoderResult::malformedForLength(inputSize));
							return$5 = true;
							goto $finally;
						}
					} else if (b1 == 14) {
						this->previousState = this->currentState;
						this->currentState = 6;
					} else if (b1 == 15) {
						this->currentState = this->previousState;
					}
					sp += inputSize;
					continue;
				}
				if (dp + 1 > dl) {
					$init($CoderResult);
					$assign(var$6, $CoderResult::OVERFLOW);
					return$5 = true;
					goto $finally;
				}
				switch (this->currentState) {
				case 0:
					{
						$nc(da)->set(dp++, (char16_t)((int32_t)(b1 & (uint32_t)255)));
						break;
					}
				case 1:
					{
						switch (b1) {
						case 92:
							{
								$nc(da)->set(dp++, (char16_t)0xA5);
								break;
							}
						case 126:
							{
								$nc(da)->set(dp++, (char16_t)0x203E);
								break;
							}
						default:
							{
								$nc(da)->set(dp++, (char16_t)b1);
								break;
							}
						}
						break;
					}
				case 2:
					{}
				case 3:
					{
						if (sp + inputSize + 1 > sl) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::UNDERFLOW);
							return$5 = true;
							goto $finally;
						}
						b2 = (int32_t)(sa->get(sp + inputSize++) & (uint32_t)255);
						c = $nc(this->dec0208)->decodeDouble(b1, b2);
						if (c == (char16_t)0xFFFD) {
							$assign(var$6, $CoderResult::unmappableForLength(inputSize));
							return$5 = true;
							goto $finally;
						}
						$nc(da)->set(dp++, c);
						break;
					}
				case 4:
					{
						if (sp + inputSize + 1 > sl) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::UNDERFLOW);
							return$5 = true;
							goto $finally;
						}
						b2 = (int32_t)(sa->get(sp + inputSize++) & (uint32_t)255);
						c = $nc(this->dec0212)->decodeDouble(b1, b2);
						if (c == (char16_t)0xFFFD) {
							$assign(var$6, $CoderResult::unmappableForLength(inputSize));
							return$5 = true;
							goto $finally;
						}
						$nc(da)->set(dp++, c);
						break;
					}
				case 5:
					{}
				case 6:
					{
						if (b1 > 95) {
							$assign(var$6, $CoderResult::malformedForLength(inputSize));
							return$5 = true;
							goto $finally;
						}
						$nc(da)->set(dp++, (char16_t)(b1 + 0x0000FF40));
						break;
					}
				}
				sp += inputSize;
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

$CoderResult* ISO2022_JP$Decoder::decodeBufferLoop($ByteBuffer* src, $CharBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t mark = $nc(src)->position();
	int32_t b1 = 0;
	int32_t b2 = 0;
	int32_t b3 = 0;
	int32_t b4 = 0;
	char16_t c = 0;
	int32_t inputSize = 0;
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				b1 = (int32_t)(src->get() & (uint32_t)255);
				inputSize = 1;
				if (((int32_t)(b1 & (uint32_t)128)) != 0) {
					$assign(var$2, $CoderResult::malformedForLength(inputSize));
					return$1 = true;
					goto $finally;
				}
				if (b1 == 27 || b1 == 14 || b1 == 15) {
					if (b1 == 27) {
						if (src->remaining() < 2) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::UNDERFLOW);
							return$1 = true;
							goto $finally;
						}
						b2 = (int32_t)(src->get() & (uint32_t)255);
						++inputSize;
						if (b2 == u'(') {
							b3 = (int32_t)(src->get() & (uint32_t)255);
							++inputSize;
							if (b3 == u'B') {
								this->currentState = 0;
							} else if (b3 == u'J') {
								this->currentState = 1;
							} else if (b3 == u'I') {
								this->currentState = 5;
							} else {
								$assign(var$2, $CoderResult::malformedForLength(inputSize));
								return$1 = true;
								goto $finally;
							}
						} else if (b2 == u'$') {
							b3 = (int32_t)(src->get() & (uint32_t)255);
							++inputSize;
							if (b3 == u'@') {
								this->currentState = 2;
							} else if (b3 == u'B') {
								this->currentState = 3;
							} else if (b3 == u'(' && this->dec0212 != nullptr) {
								if (!src->hasRemaining()) {
									$init($CoderResult);
									$assign(var$2, $CoderResult::UNDERFLOW);
									return$1 = true;
									goto $finally;
								}
								b4 = (int32_t)(src->get() & (uint32_t)255);
								++inputSize;
								if (b4 == u'D') {
									this->currentState = 4;
								} else {
									$assign(var$2, $CoderResult::malformedForLength(inputSize));
									return$1 = true;
									goto $finally;
								}
							} else {
								$assign(var$2, $CoderResult::malformedForLength(inputSize));
								return$1 = true;
								goto $finally;
							}
						} else {
							$assign(var$2, $CoderResult::malformedForLength(inputSize));
							return$1 = true;
							goto $finally;
						}
					} else if (b1 == 14) {
						this->previousState = this->currentState;
						this->currentState = 6;
					} else if (b1 == 15) {
						this->currentState = this->previousState;
					}
					mark += inputSize;
					continue;
				}
				if (!$nc(dst)->hasRemaining()) {
					$init($CoderResult);
					$assign(var$2, $CoderResult::OVERFLOW);
					return$1 = true;
					goto $finally;
				}
				switch (this->currentState) {
				case 0:
					{
						$nc(dst)->put((char16_t)((int32_t)(b1 & (uint32_t)255)));
						break;
					}
				case 1:
					{
						switch (b1) {
						case 92:
							{
								$nc(dst)->put((char16_t)0xA5);
								break;
							}
						case 126:
							{
								$nc(dst)->put((char16_t)0x203E);
								break;
							}
						default:
							{
								$nc(dst)->put((char16_t)b1);
								break;
							}
						}
						break;
					}
				case 2:
					{}
				case 3:
					{
						if (!src->hasRemaining()) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::UNDERFLOW);
							return$1 = true;
							goto $finally;
						}
						b2 = (int32_t)(src->get() & (uint32_t)255);
						++inputSize;
						c = $nc(this->dec0208)->decodeDouble(b1, b2);
						if (c == (char16_t)0xFFFD) {
							$assign(var$2, $CoderResult::unmappableForLength(inputSize));
							return$1 = true;
							goto $finally;
						}
						$nc(dst)->put(c);
						break;
					}
				case 4:
					{
						if (!src->hasRemaining()) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::UNDERFLOW);
							return$1 = true;
							goto $finally;
						}
						b2 = (int32_t)(src->get() & (uint32_t)255);
						++inputSize;
						c = $nc(this->dec0212)->decodeDouble(b1, b2);
						if (c == (char16_t)0xFFFD) {
							$assign(var$2, $CoderResult::unmappableForLength(inputSize));
							return$1 = true;
							goto $finally;
						}
						$nc(dst)->put(c);
						break;
					}
				case 5:
					{}
				case 6:
					{
						if (b1 > 95) {
							$assign(var$2, $CoderResult::malformedForLength(inputSize));
							return$1 = true;
							goto $finally;
						}
						$nc(dst)->put((char16_t)(b1 + 0x0000FF40));
						break;
					}
				}
				mark += inputSize;
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

$CoderResult* ISO2022_JP$Decoder::decodeLoop($ByteBuffer* src, $CharBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return decodeArrayLoop(src, dst);
	} else {
		return decodeBufferLoop(src, dst);
	}
}

$CoderResult* ISO2022_JP$Decoder::implFlush($CharBuffer* out) {
	return $CharsetDecoder::implFlush(out);
}

void clinit$ISO2022_JP$Decoder($Class* class$) {
	$assignStatic(ISO2022_JP$Decoder::DEC0208, $cast($DoubleByte$Decoder, $$new($JIS_X_0208)->newDecoder()));
}

ISO2022_JP$Decoder::ISO2022_JP$Decoder() {
}

$Class* ISO2022_JP$Decoder::load$($String* name, bool initialize) {
	$loadClass(ISO2022_JP$Decoder, name, initialize, &_ISO2022_JP$Decoder_ClassInfo_, clinit$ISO2022_JP$Decoder, allocate$ISO2022_JP$Decoder);
	return class$;
}

$Class* ISO2022_JP$Decoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun