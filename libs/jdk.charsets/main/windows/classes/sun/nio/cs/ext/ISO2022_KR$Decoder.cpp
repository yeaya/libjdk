#include <sun/nio/cs/ext/ISO2022_KR$Decoder.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/ext/EUC_KR.h>
#include <sun/nio/cs/ext/ISO2022_KR.h>
#include <jcpp.h>

#undef ISO_ESC
#undef ISO_SI
#undef ISO_SO
#undef ISO_SS2_7
#undef ISO_SS3_7
#undef MSB
#undef OVERFLOW
#undef REPLACE_CHAR
#undef SOD
#undef UNDERFLOW

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
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $EUC_KR = ::sun::nio::cs::ext::EUC_KR;
using $ISO2022_KR = ::sun::nio::cs::ext::ISO2022_KR;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _ISO2022_KR$Decoder_FieldInfo_[] = {
	{"SOD", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO2022_KR$Decoder, SOD)},
	{"KSC5601", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO2022_KR$Decoder, KSC5601)},
	{"ISO_ESC", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_KR$Decoder, ISO_ESC)},
	{"ISO_SI", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_KR$Decoder, ISO_SI)},
	{"ISO_SO", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_KR$Decoder, ISO_SO)},
	{"ISO_SS2_7", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_KR$Decoder, ISO_SS2_7)},
	{"ISO_SS3_7", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_KR$Decoder, ISO_SS3_7)},
	{"MSB", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_KR$Decoder, MSB)},
	{"REPLACE_CHAR", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_KR$Decoder, REPLACE_CHAR)},
	{"minDesignatorLength", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_KR$Decoder, minDesignatorLength)},
	{"SOFlag", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_KR$Decoder, SOFlag)},
	{"SS2Flag", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_KR$Decoder, SS2Flag)},
	{"SS3Flag", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_KR$Decoder, SS3Flag)},
	{"shiftout", "Z", nullptr, $PRIVATE, $field(ISO2022_KR$Decoder, shiftout)},
	{}
};

$MethodInfo _ISO2022_KR$Decoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(static_cast<void(ISO2022_KR$Decoder::*)($Charset*)>(&ISO2022_KR$Decoder::init$))},
	{"decode", "(BBB)C", nullptr, $PRIVATE, $method(static_cast<char16_t(ISO2022_KR$Decoder::*)(int8_t,int8_t,int8_t)>(&ISO2022_KR$Decoder::decode))},
	{"decodeArrayLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(ISO2022_KR$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&ISO2022_KR$Decoder::decodeArrayLoop))},
	{"decodeBufferLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(ISO2022_KR$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&ISO2022_KR$Decoder::decodeBufferLoop))},
	{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"findDesig", "([BII)Z", nullptr, $PRIVATE, $method(static_cast<bool(ISO2022_KR$Decoder::*)($bytes*,int32_t,int32_t)>(&ISO2022_KR$Decoder::findDesig))},
	{"findDesigBuf", "(Ljava/nio/ByteBuffer;)Z", nullptr, $PRIVATE, $method(static_cast<bool(ISO2022_KR$Decoder::*)($ByteBuffer*)>(&ISO2022_KR$Decoder::findDesigBuf))},
	{"implReset", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _ISO2022_KR$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.ISO2022_KR$Decoder", "sun.nio.cs.ext.ISO2022_KR", "Decoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ISO2022_KR$Decoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.ISO2022_KR$Decoder",
	"java.nio.charset.CharsetDecoder",
	nullptr,
	_ISO2022_KR$Decoder_FieldInfo_,
	_ISO2022_KR$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_ISO2022_KR$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.ISO2022_KR"
};

$Object* allocate$ISO2022_KR$Decoder($Class* clazz) {
	return $of($alloc(ISO2022_KR$Decoder));
}

$bytes* ISO2022_KR$Decoder::SOD = nullptr;
$DoubleByte$Decoder* ISO2022_KR$Decoder::KSC5601 = nullptr;

void ISO2022_KR$Decoder::init$($Charset* cs) {
	$CharsetDecoder::init$(cs, 1.0f, 1.0f);
}

void ISO2022_KR$Decoder::implReset() {
	this->shiftout = false;
}

char16_t ISO2022_KR$Decoder::decode(int8_t byte1, int8_t byte2, int8_t shiftFlag) {
	if (shiftFlag == ISO2022_KR$Decoder::SOFlag) {
		return $nc(ISO2022_KR$Decoder::KSC5601)->decodeDouble((int32_t)((byte1 | ISO2022_KR$Decoder::MSB) & (uint32_t)255), (int32_t)((byte2 | ISO2022_KR$Decoder::MSB) & (uint32_t)255));
	}
	return ISO2022_KR$Decoder::REPLACE_CHAR;
}

bool ISO2022_KR$Decoder::findDesig($bytes* in, int32_t sp, int32_t sl) {
	if (sl - sp >= $nc(ISO2022_KR$Decoder::SOD)->length) {
		int32_t j = 0;
		while (j < $nc(ISO2022_KR$Decoder::SOD)->length && $nc(in)->get(sp + j) == $nc(ISO2022_KR$Decoder::SOD)->get(j)) {
			++j;
		}
		return j == $nc(ISO2022_KR$Decoder::SOD)->length;
	}
	return false;
}

bool ISO2022_KR$Decoder::findDesigBuf($ByteBuffer* in) {
	if ($nc(in)->remaining() >= $nc(ISO2022_KR$Decoder::SOD)->length) {
		int32_t j = 0;
		in->mark();
		while (j < $nc(ISO2022_KR$Decoder::SOD)->length && in->get() == $nc(ISO2022_KR$Decoder::SOD)->get(j)) {
			++j;
		}
		if (j == $nc(ISO2022_KR$Decoder::SOD)->length) {
			return true;
		}
		in->reset();
	}
	return false;
}

$CoderResult* ISO2022_KR$Decoder::decodeArrayLoop($ByteBuffer* src, $CharBuffer* dst) {
	$useLocalCurrentObjectStackCache();
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
	int32_t b1 = 0;
	int32_t b2 = 0;
	int32_t b3 = 0;
	{
		$var($Throwable, var$4, nullptr);
		$var($CoderResult, var$6, nullptr);
		bool return$5 = false;
		try {
			while (sp < sl) {
				b1 = (int32_t)($nc(sa)->get(sp) & (uint32_t)255);
				int32_t inputSize = 1;
				switch (b1) {
				case ISO2022_KR$Decoder::ISO_SO:
					{
						this->shiftout = true;
						inputSize = 1;
						break;
					}
				case ISO2022_KR$Decoder::ISO_SI:
					{
						this->shiftout = false;
						inputSize = 1;
						break;
					}
				case ISO2022_KR$Decoder::ISO_ESC:
					{
						if (sl - sp - 1 < ISO2022_KR$Decoder::minDesignatorLength) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::UNDERFLOW);
							return$5 = true;
							goto $finally;
						}
						if (findDesig(sa, sp + 1, sl)) {
							inputSize = $nc(ISO2022_KR$Decoder::SOD)->length + 1;
							break;
						}
						if (sl - sp < 2) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::UNDERFLOW);
							return$5 = true;
							goto $finally;
						}
						b1 = sa->get(sp + 1);
						switch (b1) {
						case ISO2022_KR$Decoder::ISO_SS2_7:
							{
								if (sl - sp < 4) {
									$init($CoderResult);
									$assign(var$6, $CoderResult::UNDERFLOW);
									return$5 = true;
									goto $finally;
								}
								b2 = sa->get(sp + 2);
								b3 = sa->get(sp + 3);
								if (dl - dp < 1) {
									$init($CoderResult);
									$assign(var$6, $CoderResult::OVERFLOW);
									return$5 = true;
									goto $finally;
								}
								$nc(da)->set(dp, decode((int8_t)b2, (int8_t)b3, ISO2022_KR$Decoder::SS2Flag));
								++dp;
								inputSize = 4;
								break;
							}
						case ISO2022_KR$Decoder::ISO_SS3_7:
							{
								if (sl - sp < 4) {
									$init($CoderResult);
									$assign(var$6, $CoderResult::UNDERFLOW);
									return$5 = true;
									goto $finally;
								}
								b2 = sa->get(sp + 2);
								b3 = sa->get(sp + 3);
								if (dl - dp < 1) {
									$init($CoderResult);
									$assign(var$6, $CoderResult::OVERFLOW);
									return$5 = true;
									goto $finally;
								}
								$nc(da)->set(dp, decode((int8_t)b2, (int8_t)b3, ISO2022_KR$Decoder::SS3Flag));
								++dp;
								inputSize = 4;
								break;
							}
						default:
							{
								$assign(var$6, $CoderResult::malformedForLength(2));
								return$5 = true;
								goto $finally;
							}
						}
						break;
					}
				default:
					{
						if (dl - dp < 1) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::OVERFLOW);
							return$5 = true;
							goto $finally;
						}
						if (!this->shiftout) {
							$nc(da)->set(dp++, (char16_t)((int32_t)(sa->get(sp) & (uint32_t)255)));
						} else {
							if (dl - dp < 1) {
								$init($CoderResult);
								$assign(var$6, $CoderResult::OVERFLOW);
								return$5 = true;
								goto $finally;
							}
							if (sl - sp < 2) {
								$init($CoderResult);
								$assign(var$6, $CoderResult::UNDERFLOW);
								return$5 = true;
								goto $finally;
							}
							b2 = (int32_t)(sa->get(sp + 1) & (uint32_t)255);
							$nc(da)->set(dp++, decode((int8_t)b1, (int8_t)b2, ISO2022_KR$Decoder::SOFlag));
							inputSize = 2;
						}
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

$CoderResult* ISO2022_KR$Decoder::decodeBufferLoop($ByteBuffer* src, $CharBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t mark = $nc(src)->position();
	int32_t b1 = 0;
	int32_t b2 = 0;
	int32_t b3 = 0;
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				while (src->hasRemaining()) {
					b1 = src->get();
					int32_t inputSize = 1;
					switch (b1) {
					case ISO2022_KR$Decoder::ISO_SO:
						{
							this->shiftout = true;
							break;
						}
					case ISO2022_KR$Decoder::ISO_SI:
						{
							this->shiftout = false;
							break;
						}
					case ISO2022_KR$Decoder::ISO_ESC:
						{
							if (src->remaining() < ISO2022_KR$Decoder::minDesignatorLength) {
								$init($CoderResult);
								$assign(var$2, $CoderResult::UNDERFLOW);
								return$1 = true;
								goto $finally;
							}
							if (findDesigBuf(src)) {
								inputSize = $nc(ISO2022_KR$Decoder::SOD)->length + 1;
								break;
							}
							if (src->remaining() < 1) {
								$init($CoderResult);
								$assign(var$2, $CoderResult::UNDERFLOW);
								return$1 = true;
								goto $finally;
							}
							b1 = src->get();
							switch (b1) {
							case ISO2022_KR$Decoder::ISO_SS2_7:
								{
									if (src->remaining() < 2) {
										$init($CoderResult);
										$assign(var$2, $CoderResult::UNDERFLOW);
										return$1 = true;
										goto $finally;
									}
									b2 = src->get();
									b3 = src->get();
									if ($nc(dst)->remaining() < 1) {
										$init($CoderResult);
										$assign(var$2, $CoderResult::OVERFLOW);
										return$1 = true;
										goto $finally;
									}
									$nc(dst)->put(decode((int8_t)b2, (int8_t)b3, ISO2022_KR$Decoder::SS2Flag));
									inputSize = 4;
									break;
								}
							case ISO2022_KR$Decoder::ISO_SS3_7:
								{
									if (src->remaining() < 2) {
										$init($CoderResult);
										$assign(var$2, $CoderResult::UNDERFLOW);
										return$1 = true;
										goto $finally;
									}
									b2 = src->get();
									b3 = src->get();
									if ($nc(dst)->remaining() < 1) {
										$init($CoderResult);
										$assign(var$2, $CoderResult::OVERFLOW);
										return$1 = true;
										goto $finally;
									}
									$nc(dst)->put(decode((int8_t)b2, (int8_t)b3, ISO2022_KR$Decoder::SS3Flag));
									inputSize = 4;
									break;
								}
							default:
								{
									$assign(var$2, $CoderResult::malformedForLength(2));
									return$1 = true;
									goto $finally;
								}
							}
							break;
						}
					default:
						{
							if ($nc(dst)->remaining() < 1) {
								$init($CoderResult);
								$assign(var$2, $CoderResult::OVERFLOW);
								return$1 = true;
								goto $finally;
							}
							if (!this->shiftout) {
								$nc(dst)->put((char16_t)((int32_t)(b1 & (uint32_t)255)));
							} else {
								if (src->remaining() < 1) {
									$init($CoderResult);
									$assign(var$2, $CoderResult::UNDERFLOW);
									return$1 = true;
									goto $finally;
								}
								b2 = (int32_t)(src->get() & (uint32_t)255);
								$nc(dst)->put(decode((int8_t)b1, (int8_t)b2, ISO2022_KR$Decoder::SOFlag));
								inputSize = 2;
							}
							break;
						}
					}
					mark += inputSize;
				}
				$init($CoderResult);
				$assign(var$2, $CoderResult::UNDERFLOW);
				return$1 = true;
				goto $finally;
			} catch ($Exception& e) {
				e->printStackTrace();
				$init($CoderResult);
				$assign(var$2, $CoderResult::OVERFLOW);
				return$1 = true;
				goto $finally;
			}
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

$CoderResult* ISO2022_KR$Decoder::decodeLoop($ByteBuffer* src, $CharBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return decodeArrayLoop(src, dst);
	} else {
		return decodeBufferLoop(src, dst);
	}
}

void clinit$ISO2022_KR$Decoder($Class* class$) {
	$assignStatic(ISO2022_KR$Decoder::SOD, $new($bytes, {
		(int8_t)u'$',
		(int8_t)u')',
		(int8_t)u'C'
	}));
	$assignStatic(ISO2022_KR$Decoder::KSC5601, $cast($DoubleByte$Decoder, $$new($EUC_KR)->newDecoder()));
}

ISO2022_KR$Decoder::ISO2022_KR$Decoder() {
}

$Class* ISO2022_KR$Decoder::load$($String* name, bool initialize) {
	$loadClass(ISO2022_KR$Decoder, name, initialize, &_ISO2022_KR$Decoder_ClassInfo_, clinit$ISO2022_KR$Decoder, allocate$ISO2022_KR$Decoder);
	return class$;
}

$Class* ISO2022_KR$Decoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun