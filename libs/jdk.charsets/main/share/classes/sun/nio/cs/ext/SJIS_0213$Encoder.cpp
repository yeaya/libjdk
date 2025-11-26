#include <sun/nio/cs/ext/SJIS_0213$Encoder.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/CharsetMapping$Entry.h>
#include <sun/nio/cs/CharsetMapping.h>
#include <sun/nio/cs/ext/SJIS_0213$Holder.h>
#include <sun/nio/cs/ext/SJIS_0213.h>
#include <jcpp.h>

#undef MAX_SINGLEBYTE
#undef OVERFLOW
#undef UNDERFLOW
#undef UNMAPPABLE

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
using $CharsetMapping = ::sun::nio::cs::CharsetMapping;
using $CharsetMapping$Entry = ::sun::nio::cs::CharsetMapping$Entry;
using $SJIS_0213 = ::sun::nio::cs::ext::SJIS_0213;
using $SJIS_0213$Holder = ::sun::nio::cs::ext::SJIS_0213$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _SJIS_0213$Encoder_FieldInfo_[] = {
	{"UNMAPPABLE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SJIS_0213$Encoder, UNMAPPABLE)},
	{"MAX_SINGLEBYTE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SJIS_0213$Encoder, MAX_SINGLEBYTE)},
	{"comp", "Lsun/nio/cs/CharsetMapping$Entry;", nullptr, $PRIVATE, $field(SJIS_0213$Encoder, comp)},
	{"leftoverBase", "C", nullptr, 0, $field(SJIS_0213$Encoder, leftoverBase)},
	{}
};

$MethodInfo _SJIS_0213$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PROTECTED, $method(static_cast<void(SJIS_0213$Encoder::*)($Charset*)>(&SJIS_0213$Encoder::init$))},
	{"canEncode", "(C)Z", nullptr, $PUBLIC},
	{"encodeArrayLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"encodeBufferLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"encodeChar", "(C)I", nullptr, $PROTECTED},
	{"encodeComposite", "(CC)I", nullptr, $PROTECTED},
	{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"encodeSurrogate", "(CC)I", nullptr, $PROTECTED},
	{"implFlush", "(Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"implReset", "()V", nullptr, $PROTECTED},
	{"isCompositeBase", "(C)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _SJIS_0213$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.SJIS_0213$Encoder", "sun.nio.cs.ext.SJIS_0213", "Encoder", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _SJIS_0213$Encoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.SJIS_0213$Encoder",
	"java.nio.charset.CharsetEncoder",
	nullptr,
	_SJIS_0213$Encoder_FieldInfo_,
	_SJIS_0213$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_SJIS_0213$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.SJIS_0213"
};

$Object* allocate$SJIS_0213$Encoder($Class* clazz) {
	return $of($alloc(SJIS_0213$Encoder));
}

void SJIS_0213$Encoder::init$($Charset* cs) {
	$CharsetEncoder::init$(cs, 2.0f, 2.0f);
	$set(this, comp, $new($CharsetMapping$Entry));
	this->leftoverBase = (char16_t)0;
}

bool SJIS_0213$Encoder::canEncode(char16_t c) {
	return (encodeChar(c) != SJIS_0213$Encoder::UNMAPPABLE);
}

int32_t SJIS_0213$Encoder::encodeChar(char16_t ch) {
	$init($SJIS_0213$Holder);
	return $nc($SJIS_0213$Holder::mapping)->encodeChar(ch);
}

int32_t SJIS_0213$Encoder::encodeSurrogate(char16_t hi, char16_t lo) {
	$init($SJIS_0213$Holder);
	return $nc($SJIS_0213$Holder::mapping)->encodeSurrogate(hi, lo);
}

int32_t SJIS_0213$Encoder::encodeComposite(char16_t base, char16_t cc) {
	$nc(this->comp)->cp = base;
	$nc(this->comp)->cp2 = cc;
	$init($SJIS_0213$Holder);
	return $nc($SJIS_0213$Holder::mapping)->encodeComposite(this->comp);
}

bool SJIS_0213$Encoder::isCompositeBase(char16_t ch) {
	$nc(this->comp)->cp = ch;
	$init($SJIS_0213$Holder);
	return $nc($SJIS_0213$Holder::mapping)->isCompositeBase(this->comp);
}

$CoderResult* SJIS_0213$Encoder::encodeArrayLoop($CharBuffer* src, $ByteBuffer* dst) {
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
				int32_t db = 0;
				char16_t c = $nc(sa)->get(sp);
				if (this->leftoverBase != 0) {
					bool isComp = false;
					db = encodeComposite(this->leftoverBase, c);
					if (db == SJIS_0213$Encoder::UNMAPPABLE) {
						db = encodeChar(this->leftoverBase);
					} else {
						isComp = true;
					}
					if (dl - dp < 2) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::OVERFLOW);
						return$5 = true;
						goto $finally;
					}
					$nc(da)->set(dp++, (int8_t)(db >> 8));
					da->set(dp++, (int8_t)db);
					this->leftoverBase = (char16_t)0;
					if (isComp) {
						++sp;
						continue;
					}
				}
				if (isCompositeBase(c)) {
					this->leftoverBase = c;
				} else {
					db = encodeChar(c);
					if (db <= SJIS_0213$Encoder::MAX_SINGLEBYTE) {
						if (dl <= dp) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::OVERFLOW);
							return$5 = true;
							goto $finally;
						}
						$nc(da)->set(dp++, (int8_t)db);
					} else if (db != SJIS_0213$Encoder::UNMAPPABLE) {
						if (dl - dp < 2) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::OVERFLOW);
							return$5 = true;
							goto $finally;
						}
						$nc(da)->set(dp++, (int8_t)(db >> 8));
						da->set(dp++, (int8_t)db);
					} else if ($Character::isHighSurrogate(c)) {
						if ((sp + 1) == sl) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::UNDERFLOW);
							return$5 = true;
							goto $finally;
						}
						char16_t c2 = sa->get(sp + 1);
						if (!$Character::isLowSurrogate(c2)) {
							$assign(var$6, $CoderResult::malformedForLength(1));
							return$5 = true;
							goto $finally;
						}
						db = encodeSurrogate(c, c2);
						if (db == SJIS_0213$Encoder::UNMAPPABLE) {
							$assign(var$6, $CoderResult::unmappableForLength(2));
							return$5 = true;
							goto $finally;
						}
						if (dl - dp < 2) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::OVERFLOW);
							return$5 = true;
							goto $finally;
						}
						$nc(da)->set(dp++, (int8_t)(db >> 8));
						da->set(dp++, (int8_t)db);
						++sp;
					} else if ($Character::isLowSurrogate(c)) {
						$assign(var$6, $CoderResult::malformedForLength(1));
						return$5 = true;
						goto $finally;
					} else {
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

$CoderResult* SJIS_0213$Encoder::encodeBufferLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				int32_t db = 0;
				char16_t c = src->get();
				if (this->leftoverBase != 0) {
					bool isComp = false;
					db = encodeComposite(this->leftoverBase, c);
					if (db == SJIS_0213$Encoder::UNMAPPABLE) {
						db = encodeChar(this->leftoverBase);
					} else {
						isComp = true;
					}
					if ($nc(dst)->remaining() < 2) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::OVERFLOW);
						return$1 = true;
						goto $finally;
					}
					$nc(dst)->put((int8_t)(db >> 8));
					dst->put((int8_t)(db));
					this->leftoverBase = (char16_t)0;
					if (isComp) {
						++mark;
						continue;
					}
				}
				if (isCompositeBase(c)) {
					this->leftoverBase = c;
				} else {
					db = encodeChar(c);
					if (db <= SJIS_0213$Encoder::MAX_SINGLEBYTE) {
						if ($nc(dst)->remaining() < 1) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::OVERFLOW);
							return$1 = true;
							goto $finally;
						}
						$nc(dst)->put((int8_t)db);
					} else if (db != SJIS_0213$Encoder::UNMAPPABLE) {
						if ($nc(dst)->remaining() < 2) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::OVERFLOW);
							return$1 = true;
							goto $finally;
						}
						$nc(dst)->put((int8_t)(db >> 8));
						dst->put((int8_t)(db));
					} else if ($Character::isHighSurrogate(c)) {
						if (!src->hasRemaining()) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::UNDERFLOW);
							return$1 = true;
							goto $finally;
						}
						char16_t c2 = src->get();
						if (!$Character::isLowSurrogate(c2)) {
							$assign(var$2, $CoderResult::malformedForLength(1));
							return$1 = true;
							goto $finally;
						}
						db = encodeSurrogate(c, c2);
						if (db == SJIS_0213$Encoder::UNMAPPABLE) {
							$assign(var$2, $CoderResult::unmappableForLength(2));
							return$1 = true;
							goto $finally;
						}
						if ($nc(dst)->remaining() < 2) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::OVERFLOW);
							return$1 = true;
							goto $finally;
						}
						$nc(dst)->put((int8_t)(db >> 8));
						dst->put((int8_t)(db));
						++mark;
					} else if ($Character::isLowSurrogate(c)) {
						$assign(var$2, $CoderResult::malformedForLength(1));
						return$1 = true;
						goto $finally;
					} else {
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

$CoderResult* SJIS_0213$Encoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return encodeArrayLoop(src, dst);
	} else {
		return encodeBufferLoop(src, dst);
	}
}

$CoderResult* SJIS_0213$Encoder::implFlush($ByteBuffer* dst) {
	if (this->leftoverBase > 0) {
		if ($nc(dst)->remaining() < 2) {
			$init($CoderResult);
			return $CoderResult::OVERFLOW;
		}
		int32_t db = encodeChar(this->leftoverBase);
		$nc(dst)->put((int8_t)(db >> 8));
		dst->put((int8_t)(db));
		this->leftoverBase = (char16_t)0;
	}
	$init($CoderResult);
	return $CoderResult::UNDERFLOW;
}

void SJIS_0213$Encoder::implReset() {
	this->leftoverBase = (char16_t)0;
}

SJIS_0213$Encoder::SJIS_0213$Encoder() {
}

$Class* SJIS_0213$Encoder::load$($String* name, bool initialize) {
	$loadClass(SJIS_0213$Encoder, name, initialize, &_SJIS_0213$Encoder_ClassInfo_, allocate$SJIS_0213$Encoder);
	return class$;
}

$Class* SJIS_0213$Encoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun