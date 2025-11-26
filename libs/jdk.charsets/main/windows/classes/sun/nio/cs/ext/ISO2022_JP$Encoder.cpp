#include <sun/nio/cs/ext/ISO2022_JP$Encoder.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <java/nio/charset/CodingErrorAction.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/Surrogate$Parser.h>
#include <sun/nio/cs/ext/ISO2022_JP.h>
#include <sun/nio/cs/ext/JIS_X_0208.h>
#include <jcpp.h>

#undef OVERFLOW
#undef REPLACE
#undef UNDERFLOW

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
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
using $CodingErrorAction = ::java::nio::charset::CodingErrorAction;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $Surrogate$Parser = ::sun::nio::cs::Surrogate$Parser;
using $ISO2022_JP = ::sun::nio::cs::ext::ISO2022_JP;
using $JIS_X_0208 = ::sun::nio::cs::ext::JIS_X_0208;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _ISO2022_JP$Encoder_FieldInfo_[] = {
	{"ENC0208", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $STATIC | $FINAL, $staticField(ISO2022_JP$Encoder, ENC0208)},
	{"repl", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO2022_JP$Encoder, repl)},
	{"currentMode", "I", nullptr, $PRIVATE, $field(ISO2022_JP$Encoder, currentMode)},
	{"replaceMode", "I", nullptr, $PRIVATE, $field(ISO2022_JP$Encoder, replaceMode)},
	{"enc0208", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $PRIVATE | $FINAL, $field(ISO2022_JP$Encoder, enc0208)},
	{"enc0212", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $PRIVATE | $FINAL, $field(ISO2022_JP$Encoder, enc0212)},
	{"doSBKANA", "Z", nullptr, $PRIVATE | $FINAL, $field(ISO2022_JP$Encoder, doSBKANA)},
	{"sgp", "Lsun/nio/cs/Surrogate$Parser;", nullptr, $PRIVATE | $FINAL, $field(ISO2022_JP$Encoder, sgp)},
	{}
};

$MethodInfo _ISO2022_JP$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(static_cast<void(ISO2022_JP$Encoder::*)($Charset*)>(&ISO2022_JP$Encoder::init$))},
	{"<init>", "(Ljava/nio/charset/Charset;Lsun/nio/cs/DoubleByte$Encoder;Lsun/nio/cs/DoubleByte$Encoder;Z)V", nullptr, 0, $method(static_cast<void(ISO2022_JP$Encoder::*)($Charset*,$DoubleByte$Encoder*,$DoubleByte$Encoder*,bool)>(&ISO2022_JP$Encoder::init$))},
	{"canEncode", "(C)Z", nullptr, $PUBLIC},
	{"encodeArrayLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(ISO2022_JP$Encoder::*)($CharBuffer*,$ByteBuffer*)>(&ISO2022_JP$Encoder::encodeArrayLoop))},
	{"encodeBufferLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(ISO2022_JP$Encoder::*)($CharBuffer*,$ByteBuffer*)>(&ISO2022_JP$Encoder::encodeBufferLoop))},
	{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"encodeSingle", "(C)I", nullptr, $PROTECTED},
	{"implFlush", "(Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"implReplaceWith", "([B)V", nullptr, $PROTECTED},
	{"implReset", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _ISO2022_JP$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.ISO2022_JP$Encoder", "sun.nio.cs.ext.ISO2022_JP", "Encoder", $STATIC},
	{}
};

$ClassInfo _ISO2022_JP$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.ISO2022_JP$Encoder",
	"java.nio.charset.CharsetEncoder",
	nullptr,
	_ISO2022_JP$Encoder_FieldInfo_,
	_ISO2022_JP$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_ISO2022_JP$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.ISO2022_JP"
};

$Object* allocate$ISO2022_JP$Encoder($Class* clazz) {
	return $of($alloc(ISO2022_JP$Encoder));
}

$DoubleByte$Encoder* ISO2022_JP$Encoder::ENC0208 = nullptr;
$bytes* ISO2022_JP$Encoder::repl = nullptr;

void ISO2022_JP$Encoder::init$($Charset* cs) {
	ISO2022_JP$Encoder::init$(cs, ISO2022_JP$Encoder::ENC0208, nullptr, true);
}

void ISO2022_JP$Encoder::init$($Charset* cs, $DoubleByte$Encoder* enc0208, $DoubleByte$Encoder* enc0212, bool doSBKANA) {
	$CharsetEncoder::init$(cs, 4.0f, (enc0212 != nullptr) ? 9.0f : 8.0f, ISO2022_JP$Encoder::repl);
	this->currentMode = 0;
	this->replaceMode = 3;
	$set(this, sgp, $new($Surrogate$Parser));
	$set(this, enc0208, enc0208);
	$set(this, enc0212, enc0212);
	this->doSBKANA = doSBKANA;
}

int32_t ISO2022_JP$Encoder::encodeSingle(char16_t inputChar) {
	return -1;
}

void ISO2022_JP$Encoder::implReset() {
	this->currentMode = 0;
}

void ISO2022_JP$Encoder::implReplaceWith($bytes* newReplacement) {
	if ($nc(newReplacement)->length == 1) {
		this->replaceMode = 0;
	} else if (newReplacement->length == 2) {
		this->replaceMode = 3;
	}
}

$CoderResult* ISO2022_JP$Encoder::implFlush($ByteBuffer* out) {
	if (this->currentMode != 0) {
		if ($nc(out)->remaining() < 3) {
			$init($CoderResult);
			return $CoderResult::OVERFLOW;
		}
		$nc(out)->put((int8_t)27);
		out->put((int8_t)40);
		out->put((int8_t)66);
		this->currentMode = 0;
	}
	$init($CoderResult);
	return $CoderResult::UNDERFLOW;
}

bool ISO2022_JP$Encoder::canEncode(char16_t c) {
	bool var$0 = (c <= (char16_t)0x7F) || (c >= 0x0000FF61 && c <= 0x0000FF9F) || (c == (char16_t)0xA5) || (c == (char16_t)0x203E) || $nc(this->enc0208)->canEncode(c);
	return (var$0 || (this->enc0212 != nullptr && $nc(this->enc0212)->canEncode(c)));
}

$CoderResult* ISO2022_JP$Encoder::encodeArrayLoop($CharBuffer* src, $ByteBuffer* dst) {
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
			while (sp < sl) {
				char16_t c = $nc(sa)->get(sp);
				if (c <= (char16_t)0x7F) {
					if (this->currentMode != 0) {
						if (dl - dp < 3) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::OVERFLOW);
							return$5 = true;
							goto $finally;
						}
						$nc(da)->set(dp++, (int8_t)27);
						da->set(dp++, (int8_t)40);
						da->set(dp++, (int8_t)66);
						this->currentMode = 0;
					}
					if (dl - dp < 1) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::OVERFLOW);
						return$5 = true;
						goto $finally;
					}
					$nc(da)->set(dp++, (int8_t)c);
				} else if (c >= 0x0000FF61 && c <= 0x0000FF9F && this->doSBKANA) {
					if (this->currentMode != 5) {
						if (dl - dp < 3) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::OVERFLOW);
							return$5 = true;
							goto $finally;
						}
						$nc(da)->set(dp++, (int8_t)27);
						da->set(dp++, (int8_t)40);
						da->set(dp++, (int8_t)73);
						this->currentMode = 5;
					}
					if (dl - dp < 1) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::OVERFLOW);
						return$5 = true;
						goto $finally;
					}
					$nc(da)->set(dp++, (int8_t)(c - 0x0000FF40));
				} else if (c == (char16_t)0xA5 || c == (char16_t)0x203E) {
					if (this->currentMode != 1) {
						if (dl - dp < 3) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::OVERFLOW);
							return$5 = true;
							goto $finally;
						}
						$nc(da)->set(dp++, (int8_t)27);
						da->set(dp++, (int8_t)40);
						da->set(dp++, (int8_t)74);
						this->currentMode = 1;
					}
					if (dl - dp < 1) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::OVERFLOW);
						return$5 = true;
						goto $finally;
					}
					$nc(da)->set(dp++, (c == (char16_t)0xA5) ? (int8_t)92 : (int8_t)126);
				} else {
					int32_t index = $nc(this->enc0208)->encodeChar(c);
					if (index != 0x0000FFFD) {
						if (this->currentMode != 3) {
							if (dl - dp < 3) {
								$init($CoderResult);
								$assign(var$6, $CoderResult::OVERFLOW);
								return$5 = true;
								goto $finally;
							}
							$nc(da)->set(dp++, (int8_t)27);
							da->set(dp++, (int8_t)36);
							da->set(dp++, (int8_t)66);
							this->currentMode = 3;
						}
						if (dl - dp < 2) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::OVERFLOW);
							return$5 = true;
							goto $finally;
						}
						$nc(da)->set(dp++, (int8_t)(index >> 8));
						da->set(dp++, (int8_t)((int32_t)(index & (uint32_t)255)));
					} else if (this->enc0212 != nullptr && (index = $nc(this->enc0212)->encodeChar(c)) != 0x0000FFFD) {
						if (this->currentMode != 4) {
							if (dl - dp < 4) {
								$init($CoderResult);
								$assign(var$6, $CoderResult::OVERFLOW);
								return$5 = true;
								goto $finally;
							}
							$nc(da)->set(dp++, (int8_t)27);
							da->set(dp++, (int8_t)36);
							da->set(dp++, (int8_t)40);
							da->set(dp++, (int8_t)68);
							this->currentMode = 4;
						}
						if (dl - dp < 2) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::OVERFLOW);
							return$5 = true;
							goto $finally;
						}
						$nc(da)->set(dp++, (int8_t)(index >> 8));
						da->set(dp++, (int8_t)((int32_t)(index & (uint32_t)255)));
					} else {
						bool var$7 = $Character::isSurrogate(c);
						if (var$7 && $nc(this->sgp)->parse(c, sa, sp, sl) < 0) {
							$assign(var$6, $nc(this->sgp)->error());
							return$5 = true;
							goto $finally;
						}
						$init($CodingErrorAction);
						if (unmappableCharacterAction() == $CodingErrorAction::REPLACE && this->currentMode != this->replaceMode) {
							if (dl - dp < 3) {
								$init($CoderResult);
								$assign(var$6, $CoderResult::OVERFLOW);
								return$5 = true;
								goto $finally;
							}
							if (this->replaceMode == 0) {
								$nc(da)->set(dp++, (int8_t)27);
								da->set(dp++, (int8_t)40);
								da->set(dp++, (int8_t)66);
							} else {
								$nc(da)->set(dp++, (int8_t)27);
								da->set(dp++, (int8_t)36);
								da->set(dp++, (int8_t)66);
							}
							this->currentMode = this->replaceMode;
						}
						if ($Character::isSurrogate(c)) {
							$assign(var$6, $nc(this->sgp)->unmappableResult());
							return$5 = true;
							goto $finally;
						}
						$assign(var$6, $CoderResult::unmappableForLength(1));
						return$5 = true;
						goto $finally;
					}
				}
				++sp;
			}
			$init($CoderResult);
			$assign(var$6, $CoderResult::UNDERFLOW);
			return$5 = true;
			goto $finally;
		} catch ($Throwable& var$8) {
			$assign(var$4, var$8);
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

$CoderResult* ISO2022_JP$Encoder::encodeBufferLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				char16_t c = src->get();
				if (c <= (char16_t)0x7F) {
					if (this->currentMode != 0) {
						if ($nc(dst)->remaining() < 3) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::OVERFLOW);
							return$1 = true;
							goto $finally;
						}
						$nc(dst)->put((int8_t)27);
						dst->put((int8_t)40);
						dst->put((int8_t)66);
						this->currentMode = 0;
					}
					if ($nc(dst)->remaining() < 1) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::OVERFLOW);
						return$1 = true;
						goto $finally;
					}
					$nc(dst)->put((int8_t)c);
				} else if (c >= 0x0000FF61 && c <= 0x0000FF9F && this->doSBKANA) {
					if (this->currentMode != 5) {
						if ($nc(dst)->remaining() < 3) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::OVERFLOW);
							return$1 = true;
							goto $finally;
						}
						$nc(dst)->put((int8_t)27);
						dst->put((int8_t)40);
						dst->put((int8_t)73);
						this->currentMode = 5;
					}
					if ($nc(dst)->remaining() < 1) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::OVERFLOW);
						return$1 = true;
						goto $finally;
					}
					$nc(dst)->put((int8_t)(c - 0x0000FF40));
				} else if (c == (char16_t)0xA5 || c == (char16_t)0x203E) {
					if (this->currentMode != 1) {
						if ($nc(dst)->remaining() < 3) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::OVERFLOW);
							return$1 = true;
							goto $finally;
						}
						$nc(dst)->put((int8_t)27);
						dst->put((int8_t)40);
						dst->put((int8_t)74);
						this->currentMode = 1;
					}
					if ($nc(dst)->remaining() < 1) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::OVERFLOW);
						return$1 = true;
						goto $finally;
					}
					$nc(dst)->put((c == (char16_t)0xA5) ? (int8_t)92 : (int8_t)126);
				} else {
					int32_t index = $nc(this->enc0208)->encodeChar(c);
					if (index != 0x0000FFFD) {
						if (this->currentMode != 3) {
							if ($nc(dst)->remaining() < 3) {
								$init($CoderResult);
								$assign(var$2, $CoderResult::OVERFLOW);
								return$1 = true;
								goto $finally;
							}
							$nc(dst)->put((int8_t)27);
							dst->put((int8_t)36);
							dst->put((int8_t)66);
							this->currentMode = 3;
						}
						if ($nc(dst)->remaining() < 2) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::OVERFLOW);
							return$1 = true;
							goto $finally;
						}
						$nc(dst)->put((int8_t)(index >> 8));
						dst->put((int8_t)((int32_t)(index & (uint32_t)255)));
					} else if (this->enc0212 != nullptr && (index = $nc(this->enc0212)->encodeChar(c)) != 0x0000FFFD) {
						if (this->currentMode != 4) {
							if ($nc(dst)->remaining() < 4) {
								$init($CoderResult);
								$assign(var$2, $CoderResult::OVERFLOW);
								return$1 = true;
								goto $finally;
							}
							$nc(dst)->put((int8_t)27);
							dst->put((int8_t)36);
							dst->put((int8_t)40);
							dst->put((int8_t)68);
							this->currentMode = 4;
						}
						if ($nc(dst)->remaining() < 2) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::OVERFLOW);
							return$1 = true;
							goto $finally;
						}
						$nc(dst)->put((int8_t)(index >> 8));
						dst->put((int8_t)((int32_t)(index & (uint32_t)255)));
					} else {
						bool var$3 = $Character::isSurrogate(c);
						if (var$3 && $nc(this->sgp)->parse(c, src) < 0) {
							$assign(var$2, $nc(this->sgp)->error());
							return$1 = true;
							goto $finally;
						}
						$init($CodingErrorAction);
						if (unmappableCharacterAction() == $CodingErrorAction::REPLACE && this->currentMode != this->replaceMode) {
							if ($nc(dst)->remaining() < 3) {
								$init($CoderResult);
								$assign(var$2, $CoderResult::OVERFLOW);
								return$1 = true;
								goto $finally;
							}
							if (this->replaceMode == 0) {
								$nc(dst)->put((int8_t)27);
								dst->put((int8_t)40);
								dst->put((int8_t)66);
							} else {
								$nc(dst)->put((int8_t)27);
								dst->put((int8_t)36);
								dst->put((int8_t)66);
							}
							this->currentMode = this->replaceMode;
						}
						if ($Character::isSurrogate(c)) {
							$assign(var$2, $nc(this->sgp)->unmappableResult());
							return$1 = true;
							goto $finally;
						}
						$assign(var$2, $CoderResult::unmappableForLength(1));
						return$1 = true;
						goto $finally;
					}
				}
				++mark;
			}
			$init($CoderResult);
			$assign(var$2, $CoderResult::UNDERFLOW);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
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

$CoderResult* ISO2022_JP$Encoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return encodeArrayLoop(src, dst);
	} else {
		return encodeBufferLoop(src, dst);
	}
}

void clinit$ISO2022_JP$Encoder($Class* class$) {
	$assignStatic(ISO2022_JP$Encoder::ENC0208, $cast($DoubleByte$Encoder, $$new($JIS_X_0208)->newEncoder()));
	$assignStatic(ISO2022_JP$Encoder::repl, $new($bytes, {
		(int8_t)33,
		(int8_t)41
	}));
}

ISO2022_JP$Encoder::ISO2022_JP$Encoder() {
}

$Class* ISO2022_JP$Encoder::load$($String* name, bool initialize) {
	$loadClass(ISO2022_JP$Encoder, name, initialize, &_ISO2022_JP$Encoder_ClassInfo_, clinit$ISO2022_JP$Encoder, allocate$ISO2022_JP$Encoder);
	return class$;
}

$Class* ISO2022_JP$Encoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun