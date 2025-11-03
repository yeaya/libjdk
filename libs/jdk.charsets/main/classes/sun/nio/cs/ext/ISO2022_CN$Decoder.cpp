#include <sun/nio/cs/ext/ISO2022_CN$Decoder.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/ext/EUC_CN.h>
#include <sun/nio/cs/ext/EUC_TW$Decoder.h>
#include <sun/nio/cs/ext/ISO2022_CN.h>
#include <jcpp.h>

#undef OVERFLOW
#undef SOD
#undef SS
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
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $EUC_CN = ::sun::nio::cs::ext::EUC_CN;
using $EUC_TW$Decoder = ::sun::nio::cs::ext::EUC_TW$Decoder;
using $ISO2022_CN = ::sun::nio::cs::ext::ISO2022_CN;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _ISO2022_CN$Decoder_FieldInfo_[] = {
	{"shiftOut", "Z", nullptr, $PRIVATE, $field(ISO2022_CN$Decoder, shiftOut)},
	{"currentSODesig", "B", nullptr, $PRIVATE, $field(ISO2022_CN$Decoder, currentSODesig)},
	{"GB2312", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO2022_CN$Decoder, GB2312)},
	{}
};

$MethodInfo _ISO2022_CN$Decoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, 0, $method(static_cast<void(ISO2022_CN$Decoder::*)($Charset*)>(&ISO2022_CN$Decoder::init$))},
	{"SODecode", "(BBB)C", nullptr, $PRIVATE, $method(static_cast<char16_t(ISO2022_CN$Decoder::*)(int8_t,int8_t,int8_t)>(&ISO2022_CN$Decoder::SODecode))},
	{"cnsDecode", "(BBB)C", nullptr, $PRIVATE, $method(static_cast<char16_t(ISO2022_CN$Decoder::*)(int8_t,int8_t,int8_t)>(&ISO2022_CN$Decoder::cnsDecode))},
	{"decodeArrayLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(ISO2022_CN$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&ISO2022_CN$Decoder::decodeArrayLoop))},
	{"decodeBufferLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(ISO2022_CN$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&ISO2022_CN$Decoder::decodeBufferLoop))},
	{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"implReset", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _ISO2022_CN$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.ISO2022_CN$Decoder", "sun.nio.cs.ext.ISO2022_CN", "Decoder", $STATIC},
	{}
};

$ClassInfo _ISO2022_CN$Decoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.ISO2022_CN$Decoder",
	"java.nio.charset.CharsetDecoder",
	nullptr,
	_ISO2022_CN$Decoder_FieldInfo_,
	_ISO2022_CN$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_ISO2022_CN$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.ISO2022_CN"
};

$Object* allocate$ISO2022_CN$Decoder($Class* clazz) {
	return $of($alloc(ISO2022_CN$Decoder));
}

$DoubleByte$Decoder* ISO2022_CN$Decoder::GB2312 = nullptr;

void ISO2022_CN$Decoder::init$($Charset* cs) {
	$CharsetDecoder::init$(cs, 1.0f, 1.0f);
	this->shiftOut = false;
	this->currentSODesig = (int8_t)0;
}

void ISO2022_CN$Decoder::implReset() {
	this->shiftOut = false;
	this->currentSODesig = (int8_t)0;
}

char16_t ISO2022_CN$Decoder::cnsDecode(int8_t byte1, int8_t byte2, int8_t SS) {
	byte1 |= (int8_t)-128;
	byte2 |= (int8_t)-128;
	int32_t p = 0;
	if (SS == (int8_t)78) {
		p = 1;
	} else if (SS == (int8_t)79) {
		p = 2;
	} else {
		return (char16_t)0xFFFD;
	}
	return $EUC_TW$Decoder::decodeSingleOrReplace((int32_t)(byte1 & (uint32_t)255), (int32_t)(byte2 & (uint32_t)255), p, (char16_t)0xFFFD);
}

char16_t ISO2022_CN$Decoder::SODecode(int8_t byte1, int8_t byte2, int8_t SOD) {
	byte1 |= (int8_t)-128;
	byte2 |= (int8_t)-128;
	if (SOD == (int8_t)0) {
		return $nc(ISO2022_CN$Decoder::GB2312)->decodeDouble((int32_t)(byte1 & (uint32_t)255), (int32_t)(byte2 & (uint32_t)255));
	} else {
		return $EUC_TW$Decoder::decodeSingleOrReplace((int32_t)(byte1 & (uint32_t)255), (int32_t)(byte2 & (uint32_t)255), 0, (char16_t)0xFFFD);
	}
}

$CoderResult* ISO2022_CN$Decoder::decodeBufferLoop($ByteBuffer* src, $CharBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t mark = $nc(src)->position();
	int8_t b1 = 0;
	int8_t b2 = 0;
	int8_t b3 = 0;
	int8_t b4 = 0;
	int32_t inputSize = 0;
	char16_t c = 0;
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				b1 = src->get();
				inputSize = 1;
				while (b1 == (int8_t)27 || b1 == (int8_t)14 || b1 == (int8_t)15) {
					if (b1 == (int8_t)27) {
						this->currentSODesig = (int8_t)0;
						if (src->remaining() < 1) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::UNDERFLOW);
							return$1 = true;
							goto $finally;
						}
						b2 = src->get();
						++inputSize;
						if (((int32_t)(b2 & (uint32_t)(int32_t)(int8_t)128)) != 0) {
							$assign(var$2, $CoderResult::malformedForLength(inputSize));
							return$1 = true;
							goto $finally;
						}
						if (b2 == (int8_t)36) {
							if (src->remaining() < 1) {
								$init($CoderResult);
								$assign(var$2, $CoderResult::UNDERFLOW);
								return$1 = true;
								goto $finally;
							}
							b3 = src->get();
							++inputSize;
							if (((int32_t)(b3 & (uint32_t)(int32_t)(int8_t)128)) != 0) {
								$assign(var$2, $CoderResult::malformedForLength(inputSize));
								return$1 = true;
								goto $finally;
							}
							if (b3 == u'A') {
								this->currentSODesig = (int8_t)0;
							} else if (b3 == u')') {
								if (src->remaining() < 1) {
									$init($CoderResult);
									$assign(var$2, $CoderResult::UNDERFLOW);
									return$1 = true;
									goto $finally;
								}
								b4 = src->get();
								++inputSize;
								if (b4 == u'A') {
									this->currentSODesig = (int8_t)0;
								} else if (b4 == u'G') {
									this->currentSODesig = (int8_t)1;
								} else {
									$assign(var$2, $CoderResult::malformedForLength(inputSize));
									return$1 = true;
									goto $finally;
								}
							} else if (b3 == u'*') {
								if (src->remaining() < 1) {
									$init($CoderResult);
									$assign(var$2, $CoderResult::UNDERFLOW);
									return$1 = true;
									goto $finally;
								}
								b4 = src->get();
								++inputSize;
								if (b4 != u'H') {
									$assign(var$2, $CoderResult::malformedForLength(inputSize));
									return$1 = true;
									goto $finally;
								}
							} else if (b3 == u'+') {
								if (src->remaining() < 1) {
									$init($CoderResult);
									$assign(var$2, $CoderResult::UNDERFLOW);
									return$1 = true;
									goto $finally;
								}
								b4 = src->get();
								++inputSize;
								if (b4 != u'I') {
									$assign(var$2, $CoderResult::malformedForLength(inputSize));
									return$1 = true;
									goto $finally;
								}
							} else {
								$assign(var$2, $CoderResult::malformedForLength(inputSize));
								return$1 = true;
								goto $finally;
							}
						} else if (b2 == (int8_t)78 || b2 == (int8_t)79) {
							if (src->remaining() < 2) {
								$init($CoderResult);
								$assign(var$2, $CoderResult::UNDERFLOW);
								return$1 = true;
								goto $finally;
							}
							b3 = src->get();
							b4 = src->get();
							inputSize += 2;
							if ($nc(dst)->remaining() < 1) {
								$init($CoderResult);
								$assign(var$2, $CoderResult::OVERFLOW);
								return$1 = true;
								goto $finally;
							}
							c = cnsDecode(b3, b4, b2);
							if (c == (char16_t)0xFFFD) {
								$assign(var$2, $CoderResult::unmappableForLength(inputSize));
								return$1 = true;
								goto $finally;
							}
							$nc(dst)->put(c);
						} else {
							$assign(var$2, $CoderResult::malformedForLength(inputSize));
							return$1 = true;
							goto $finally;
						}
					} else if (b1 == (int8_t)14) {
						this->shiftOut = true;
					} else if (b1 == (int8_t)15) {
						this->shiftOut = false;
					}
					mark += inputSize;
					if (src->remaining() < 1) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::UNDERFLOW);
						return$1 = true;
						goto $finally;
					}
					b1 = src->get();
					inputSize = 1;
				}
				if ($nc(dst)->remaining() < 1) {
					$init($CoderResult);
					$assign(var$2, $CoderResult::OVERFLOW);
					return$1 = true;
					goto $finally;
				}
				if (!this->shiftOut) {
					$nc(dst)->put((char16_t)((int32_t)(b1 & (uint32_t)255)));
					mark += inputSize;
				} else {
					if (src->remaining() < 1) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::UNDERFLOW);
						return$1 = true;
						goto $finally;
					}
					b2 = src->get();
					++inputSize;
					c = SODecode(b1, b2, this->currentSODesig);
					if (c == (char16_t)0xFFFD) {
						$assign(var$2, $CoderResult::unmappableForLength(inputSize));
						return$1 = true;
						goto $finally;
					}
					$nc(dst)->put(c);
					mark += inputSize;
				}
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

$CoderResult* ISO2022_CN$Decoder::decodeArrayLoop($ByteBuffer* src, $CharBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t inputSize = 0;
	int8_t b1 = 0;
	int8_t b2 = 0;
	int8_t b3 = 0;
	int8_t b4 = 0;
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
				b1 = $nc(sa)->get(sp);
				inputSize = 1;
				while (b1 == (int8_t)27 || b1 == (int8_t)14 || b1 == (int8_t)15) {
					if (b1 == (int8_t)27) {
						this->currentSODesig = (int8_t)0;
						if (sp + 2 > sl) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::UNDERFLOW);
							return$5 = true;
							goto $finally;
						}
						b2 = sa->get(sp + 1);
						++inputSize;
						if (((int32_t)(b2 & (uint32_t)(int32_t)(int8_t)128)) != 0) {
							$assign(var$6, $CoderResult::malformedForLength(inputSize));
							return$5 = true;
							goto $finally;
						}
						if (b2 == (int8_t)36) {
							if (sp + 3 > sl) {
								$init($CoderResult);
								$assign(var$6, $CoderResult::UNDERFLOW);
								return$5 = true;
								goto $finally;
							}
							b3 = sa->get(sp + 2);
							++inputSize;
							if (((int32_t)(b3 & (uint32_t)(int32_t)(int8_t)128)) != 0) {
								$assign(var$6, $CoderResult::malformedForLength(inputSize));
								return$5 = true;
								goto $finally;
							}
							if (b3 == u'A') {
								this->currentSODesig = (int8_t)0;
							} else if (b3 == u')') {
								if (sp + 4 > sl) {
									$init($CoderResult);
									$assign(var$6, $CoderResult::UNDERFLOW);
									return$5 = true;
									goto $finally;
								}
								b4 = sa->get(sp + 3);
								++inputSize;
								if (b4 == u'A') {
									this->currentSODesig = (int8_t)0;
								} else if (b4 == u'G') {
									this->currentSODesig = (int8_t)1;
								} else {
									$assign(var$6, $CoderResult::malformedForLength(inputSize));
									return$5 = true;
									goto $finally;
								}
							} else if (b3 == u'*') {
								if (sp + 4 > sl) {
									$init($CoderResult);
									$assign(var$6, $CoderResult::UNDERFLOW);
									return$5 = true;
									goto $finally;
								}
								b4 = sa->get(sp + 3);
								++inputSize;
								if (b4 != u'H') {
									$assign(var$6, $CoderResult::malformedForLength(inputSize));
									return$5 = true;
									goto $finally;
								}
							} else if (b3 == u'+') {
								if (sp + 4 > sl) {
									$init($CoderResult);
									$assign(var$6, $CoderResult::UNDERFLOW);
									return$5 = true;
									goto $finally;
								}
								b4 = sa->get(sp + 3);
								++inputSize;
								if (b4 != u'I') {
									$assign(var$6, $CoderResult::malformedForLength(inputSize));
									return$5 = true;
									goto $finally;
								}
							} else {
								$assign(var$6, $CoderResult::malformedForLength(inputSize));
								return$5 = true;
								goto $finally;
							}
						} else if (b2 == (int8_t)78 || b2 == (int8_t)79) {
							if (sp + 4 > sl) {
								$init($CoderResult);
								$assign(var$6, $CoderResult::UNDERFLOW);
								return$5 = true;
								goto $finally;
							}
							b3 = sa->get(sp + 2);
							b4 = sa->get(sp + 3);
							if (dl - dp < 1) {
								$init($CoderResult);
								$assign(var$6, $CoderResult::OVERFLOW);
								return$5 = true;
								goto $finally;
							}
							inputSize += 2;
							c = cnsDecode(b3, b4, b2);
							if (c == (char16_t)0xFFFD) {
								$assign(var$6, $CoderResult::unmappableForLength(inputSize));
								return$5 = true;
								goto $finally;
							}
							$nc(da)->set(dp++, c);
						} else {
							$assign(var$6, $CoderResult::malformedForLength(inputSize));
							return$5 = true;
							goto $finally;
						}
					} else if (b1 == (int8_t)14) {
						this->shiftOut = true;
					} else if (b1 == (int8_t)15) {
						this->shiftOut = false;
					}
					sp += inputSize;
					if (sp + 1 > sl) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::UNDERFLOW);
						return$5 = true;
						goto $finally;
					}
					b1 = sa->get(sp);
					inputSize = 1;
				}
				if (dl - dp < 1) {
					$init($CoderResult);
					$assign(var$6, $CoderResult::OVERFLOW);
					return$5 = true;
					goto $finally;
				}
				if (!this->shiftOut) {
					$nc(da)->set(dp++, (char16_t)((int32_t)(b1 & (uint32_t)255)));
				} else {
					if (sp + 2 > sl) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::UNDERFLOW);
						return$5 = true;
						goto $finally;
					}
					b2 = sa->get(sp + 1);
					++inputSize;
					c = SODecode(b1, b2, this->currentSODesig);
					if (c == (char16_t)0xFFFD) {
						$assign(var$6, $CoderResult::unmappableForLength(inputSize));
						return$5 = true;
						goto $finally;
					}
					$nc(da)->set(dp++, c);
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

$CoderResult* ISO2022_CN$Decoder::decodeLoop($ByteBuffer* src, $CharBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return decodeArrayLoop(src, dst);
	} else {
		return decodeBufferLoop(src, dst);
	}
}

void clinit$ISO2022_CN$Decoder($Class* class$) {
	$assignStatic(ISO2022_CN$Decoder::GB2312, $cast($DoubleByte$Decoder, $$new($EUC_CN)->newDecoder()));
}

ISO2022_CN$Decoder::ISO2022_CN$Decoder() {
}

$Class* ISO2022_CN$Decoder::load$($String* name, bool initialize) {
	$loadClass(ISO2022_CN$Decoder, name, initialize, &_ISO2022_CN$Decoder_ClassInfo_, clinit$ISO2022_CN$Decoder, allocate$ISO2022_CN$Decoder);
	return class$;
}

$Class* ISO2022_CN$Decoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun