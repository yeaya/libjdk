#include <sun/nio/cs/ext/ISCII91$Decoder.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/ext/ISCII91.h>
#include <jcpp.h>

#undef INVALID_CHAR
#undef OVERFLOW
#undef UNDERFLOW
#undef ZWJ_CHAR
#undef ZWNJ_CHAR

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
using $ISCII91 = ::sun::nio::cs::ext::ISCII91;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _ISCII91$Decoder_FieldInfo_[] = {
	{"ZWNJ_CHAR", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISCII91$Decoder, ZWNJ_CHAR)},
	{"ZWJ_CHAR", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISCII91$Decoder, ZWJ_CHAR)},
	{"INVALID_CHAR", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISCII91$Decoder, INVALID_CHAR)},
	{"contextChar", "C", nullptr, $PRIVATE, $field(ISCII91$Decoder, contextChar)},
	{"needFlushing", "Z", nullptr, $PRIVATE, $field(ISCII91$Decoder, needFlushing)},
	{}
};

$MethodInfo _ISCII91$Decoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(static_cast<void(ISCII91$Decoder::*)($Charset*)>(&ISCII91$Decoder::init$))},
	{"decodeArrayLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(ISCII91$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&ISCII91$Decoder::decodeArrayLoop))},
	{"decodeBufferLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(ISCII91$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&ISCII91$Decoder::decodeBufferLoop))},
	{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"implFlush", "(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _ISCII91$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.ISCII91$Decoder", "sun.nio.cs.ext.ISCII91", "Decoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ISCII91$Decoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.ISCII91$Decoder",
	"java.nio.charset.CharsetDecoder",
	nullptr,
	_ISCII91$Decoder_FieldInfo_,
	_ISCII91$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_ISCII91$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.ISCII91"
};

$Object* allocate$ISCII91$Decoder($Class* clazz) {
	return $of($alloc(ISCII91$Decoder));
}

void ISCII91$Decoder::init$($Charset* cs) {
	$CharsetDecoder::init$(cs, 1.0f, 1.0f);
	this->contextChar = ISCII91$Decoder::INVALID_CHAR;
	this->needFlushing = false;
}

$CoderResult* ISCII91$Decoder::implFlush($CharBuffer* out) {
	if (this->needFlushing) {
		if ($nc(out)->remaining() < 1) {
			$init($CoderResult);
			return $CoderResult::OVERFLOW;
		} else {
			out->put(this->contextChar);
		}
	}
	this->contextChar = ISCII91$Decoder::INVALID_CHAR;
	this->needFlushing = false;
	$init($CoderResult);
	return $CoderResult::UNDERFLOW;
}

$CoderResult* ISCII91$Decoder::decodeArrayLoop($ByteBuffer* src, $CharBuffer* dst) {
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
	{
		$var($Throwable, var$4, nullptr);
		$var($CoderResult, var$6, nullptr);
		bool return$5 = false;
		try {
			while (sp < sl) {
				int32_t index = $nc(sa)->get(sp);
				index = (index < 0) ? (index + 255) : index;
				$init($ISCII91);
				char16_t currentChar = $nc($ISCII91::directMapTable)->get(index);
				if (this->contextChar == (char16_t)0xFFFD) {
					if (dl - dp < 1) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::OVERFLOW);
						return$5 = true;
						goto $finally;
					}
					$nc(da)->set(dp++, (char16_t)0xFFFD);
					this->contextChar = ISCII91$Decoder::INVALID_CHAR;
					this->needFlushing = false;
					++sp;
					continue;
				}
				switch (currentChar) {
				case (char16_t)0x901:
					{}
				case (char16_t)0x907:
					{}
				case (char16_t)0x908:
					{}
				case (char16_t)0x90B:
					{}
				case (char16_t)0x93F:
					{}
				case (char16_t)0x940:
					{}
				case (char16_t)0x943:
					{}
				case (char16_t)0x964:
					{
						if (this->needFlushing) {
							if (dl - dp < 1) {
								$init($CoderResult);
								$assign(var$6, $CoderResult::OVERFLOW);
								return$5 = true;
								goto $finally;
							}
							$nc(da)->set(dp++, this->contextChar);
							this->contextChar = currentChar;
							++sp;
							continue;
						}
						this->contextChar = currentChar;
						this->needFlushing = true;
						++sp;
						continue;
					}
				case (char16_t)0x93C:
					{
						if (dl - dp < 1) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::OVERFLOW);
							return$5 = true;
							goto $finally;
						}
						switch (this->contextChar) {
						case (char16_t)0x901:
							{
								$nc(da)->set(dp++, (char16_t)0x950);
								break;
							}
						case (char16_t)0x907:
							{
								$nc(da)->set(dp++, (char16_t)0x90C);
								break;
							}
						case (char16_t)0x908:
							{
								$nc(da)->set(dp++, (char16_t)0x961);
								break;
							}
						case (char16_t)0x90B:
							{
								$nc(da)->set(dp++, (char16_t)0x960);
								break;
							}
						case (char16_t)0x93F:
							{
								$nc(da)->set(dp++, (char16_t)0x962);
								break;
							}
						case (char16_t)0x940:
							{
								$nc(da)->set(dp++, (char16_t)0x963);
								break;
							}
						case (char16_t)0x943:
							{
								$nc(da)->set(dp++, (char16_t)0x944);
								break;
							}
						case (char16_t)0x964:
							{
								$nc(da)->set(dp++, (char16_t)0x93D);
								break;
							}
						case (char16_t)0x94D:
							{
								if (this->needFlushing) {
									$nc(da)->set(dp++, this->contextChar);
									this->contextChar = currentChar;
									++sp;
									continue;
								}
								$nc(da)->set(dp++, ISCII91$Decoder::ZWJ_CHAR);
								break;
							}
						default:
							{
								if (this->needFlushing) {
									$nc(da)->set(dp++, this->contextChar);
									this->contextChar = currentChar;
									++sp;
									continue;
								}
								$nc(da)->set(dp++, (char16_t)0x93C);
							}
						}
						break;
					}
				case (char16_t)0x94D:
					{
						if (dl - dp < 1) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::OVERFLOW);
							return$5 = true;
							goto $finally;
						}
						if (this->needFlushing) {
							$nc(da)->set(dp++, this->contextChar);
							this->contextChar = currentChar;
							++sp;
							continue;
						}
						if (this->contextChar == (char16_t)0x94D) {
							$nc(da)->set(dp++, ISCII91$Decoder::ZWNJ_CHAR);
							break;
						}
						$nc(da)->set(dp++, (char16_t)0x94D);
						break;
					}
				case ISCII91$Decoder::INVALID_CHAR:
					{
						if (this->needFlushing) {
							if (dl - dp < 1) {
								$init($CoderResult);
								$assign(var$6, $CoderResult::OVERFLOW);
								return$5 = true;
								goto $finally;
							}
							$nc(da)->set(dp++, this->contextChar);
							this->contextChar = currentChar;
							++sp;
							continue;
						}
						$assign(var$6, $CoderResult::unmappableForLength(1));
						return$5 = true;
						goto $finally;
					}
				default:
					{
						if (dl - dp < 1) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::OVERFLOW);
							return$5 = true;
							goto $finally;
						}
						if (this->needFlushing) {
							$nc(da)->set(dp++, this->contextChar);
							this->contextChar = currentChar;
							++sp;
							continue;
						}
						$nc(da)->set(dp++, currentChar);
						break;
					}
				}
				this->contextChar = currentChar;
				this->needFlushing = false;
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

$CoderResult* ISCII91$Decoder::decodeBufferLoop($ByteBuffer* src, $CharBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				int32_t index = src->get();
				index = (index < 0) ? (index + 255) : index;
				$init($ISCII91);
				char16_t currentChar = $nc($ISCII91::directMapTable)->get(index);
				if (this->contextChar == (char16_t)0xFFFD) {
					if ($nc(dst)->remaining() < 1) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::OVERFLOW);
						return$1 = true;
						goto $finally;
					}
					$nc(dst)->put((char16_t)0xFFFD);
					this->contextChar = ISCII91$Decoder::INVALID_CHAR;
					this->needFlushing = false;
					++mark;
					continue;
				}
				switch (currentChar) {
				case (char16_t)0x901:
					{}
				case (char16_t)0x907:
					{}
				case (char16_t)0x908:
					{}
				case (char16_t)0x90B:
					{}
				case (char16_t)0x93F:
					{}
				case (char16_t)0x940:
					{}
				case (char16_t)0x943:
					{}
				case (char16_t)0x964:
					{
						if (this->needFlushing) {
							if ($nc(dst)->remaining() < 1) {
								$init($CoderResult);
								$assign(var$2, $CoderResult::OVERFLOW);
								return$1 = true;
								goto $finally;
							}
							$nc(dst)->put(this->contextChar);
							this->contextChar = currentChar;
							++mark;
							continue;
						}
						this->contextChar = currentChar;
						this->needFlushing = true;
						++mark;
						continue;
					}
				case (char16_t)0x93C:
					{
						if ($nc(dst)->remaining() < 1) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::OVERFLOW);
							return$1 = true;
							goto $finally;
						}
						switch (this->contextChar) {
						case (char16_t)0x901:
							{
								$nc(dst)->put((char16_t)0x950);
								break;
							}
						case (char16_t)0x907:
							{
								$nc(dst)->put((char16_t)0x90C);
								break;
							}
						case (char16_t)0x908:
							{
								$nc(dst)->put((char16_t)0x961);
								break;
							}
						case (char16_t)0x90B:
							{
								$nc(dst)->put((char16_t)0x960);
								break;
							}
						case (char16_t)0x93F:
							{
								$nc(dst)->put((char16_t)0x962);
								break;
							}
						case (char16_t)0x940:
							{
								$nc(dst)->put((char16_t)0x963);
								break;
							}
						case (char16_t)0x943:
							{
								$nc(dst)->put((char16_t)0x944);
								break;
							}
						case (char16_t)0x964:
							{
								$nc(dst)->put((char16_t)0x93D);
								break;
							}
						case (char16_t)0x94D:
							{
								if (this->needFlushing) {
									$nc(dst)->put(this->contextChar);
									this->contextChar = currentChar;
									++mark;
									continue;
								}
								$nc(dst)->put(ISCII91$Decoder::ZWJ_CHAR);
								break;
							}
						default:
							{
								if (this->needFlushing) {
									$nc(dst)->put(this->contextChar);
									this->contextChar = currentChar;
									++mark;
									continue;
								}
								$nc(dst)->put((char16_t)0x93C);
							}
						}
						break;
					}
				case (char16_t)0x94D:
					{
						if ($nc(dst)->remaining() < 1) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::OVERFLOW);
							return$1 = true;
							goto $finally;
						}
						if (this->needFlushing) {
							$nc(dst)->put(this->contextChar);
							this->contextChar = currentChar;
							++mark;
							continue;
						}
						if (this->contextChar == (char16_t)0x94D) {
							$nc(dst)->put(ISCII91$Decoder::ZWNJ_CHAR);
							break;
						}
						$nc(dst)->put((char16_t)0x94D);
						break;
					}
				case ISCII91$Decoder::INVALID_CHAR:
					{
						if (this->needFlushing) {
							if ($nc(dst)->remaining() < 1) {
								$init($CoderResult);
								$assign(var$2, $CoderResult::OVERFLOW);
								return$1 = true;
								goto $finally;
							}
							$nc(dst)->put(this->contextChar);
							this->contextChar = currentChar;
							++mark;
							continue;
						}
						$assign(var$2, $CoderResult::unmappableForLength(1));
						return$1 = true;
						goto $finally;
					}
				default:
					{
						if ($nc(dst)->remaining() < 1) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::OVERFLOW);
							return$1 = true;
							goto $finally;
						}
						if (this->needFlushing) {
							$nc(dst)->put(this->contextChar);
							this->contextChar = currentChar;
							++mark;
							continue;
						}
						$nc(dst)->put(currentChar);
						break;
					}
				}
				this->contextChar = currentChar;
				this->needFlushing = false;
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

$CoderResult* ISCII91$Decoder::decodeLoop($ByteBuffer* src, $CharBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return decodeArrayLoop(src, dst);
	} else {
		return decodeBufferLoop(src, dst);
	}
}

ISCII91$Decoder::ISCII91$Decoder() {
}

$Class* ISCII91$Decoder::load$($String* name, bool initialize) {
	$loadClass(ISCII91$Decoder, name, initialize, &_ISCII91$Decoder_ClassInfo_, allocate$ISCII91$Decoder);
	return class$;
}

$Class* ISCII91$Decoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun