#include <sun/nio/cs/ext/SJIS_0213$Decoder.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/CharsetMapping$Entry.h>
#include <sun/nio/cs/CharsetMapping.h>
#include <sun/nio/cs/ext/SJIS_0213$Holder.h>
#include <sun/nio/cs/ext/SJIS_0213.h>
#include <jcpp.h>

#undef OVERFLOW
#undef UNDERFLOW
#undef UNMAPPABLE

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
using $CharsetMapping = ::sun::nio::cs::CharsetMapping;
using $CharsetMapping$Entry = ::sun::nio::cs::CharsetMapping$Entry;
using $SJIS_0213 = ::sun::nio::cs::ext::SJIS_0213;
using $SJIS_0213$Holder = ::sun::nio::cs::ext::SJIS_0213$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _SJIS_0213$Decoder_FieldInfo_[] = {
	{"UNMAPPABLE", "C", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SJIS_0213$Decoder, UNMAPPABLE)},
	{"cc", "[C", nullptr, $PRIVATE, $field(SJIS_0213$Decoder, cc)},
	{"comp", "Lsun/nio/cs/CharsetMapping$Entry;", nullptr, $PRIVATE, $field(SJIS_0213$Decoder, comp)},
	{}
};

$MethodInfo _SJIS_0213$Decoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PROTECTED, $method(static_cast<void(SJIS_0213$Decoder::*)($Charset*)>(&SJIS_0213$Decoder::init$))},
	{"decodeArrayLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(SJIS_0213$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&SJIS_0213$Decoder::decodeArrayLoop))},
	{"decodeBufferLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(SJIS_0213$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&SJIS_0213$Decoder::decodeBufferLoop))},
	{"decodeDouble", "(II)C", nullptr, $PROTECTED},
	{"decodeDoubleEx", "(II)[C", nullptr, $PROTECTED},
	{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"decodeSingle", "(I)C", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _SJIS_0213$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.SJIS_0213$Decoder", "sun.nio.cs.ext.SJIS_0213", "Decoder", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _SJIS_0213$Decoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.SJIS_0213$Decoder",
	"java.nio.charset.CharsetDecoder",
	nullptr,
	_SJIS_0213$Decoder_FieldInfo_,
	_SJIS_0213$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_SJIS_0213$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.SJIS_0213"
};

$Object* allocate$SJIS_0213$Decoder($Class* clazz) {
	return $of($alloc(SJIS_0213$Decoder));
}

void SJIS_0213$Decoder::init$($Charset* cs) {
	$CharsetDecoder::init$(cs, 0.5f, 1.0f);
	$set(this, cc, $new($chars, 2));
	$set(this, comp, $new($CharsetMapping$Entry));
}

$CoderResult* SJIS_0213$Decoder::decodeArrayLoop($ByteBuffer* src, $CharBuffer* dst) {
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
				int32_t b1 = (int32_t)($nc(sa)->get(sp) & (uint32_t)255);
				char16_t c = decodeSingle(b1);
				int32_t inSize = 1;
				int32_t outSize = 1;
				$var($chars, cc, nullptr);
				if (c == SJIS_0213$Decoder::UNMAPPABLE) {
					if (sl - sp < 2) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::UNDERFLOW);
						return$5 = true;
						goto $finally;
					}
					int32_t b2 = (int32_t)(sa->get(sp + 1) & (uint32_t)255);
					c = decodeDouble(b1, b2);
					++inSize;
					if (c == SJIS_0213$Decoder::UNMAPPABLE) {
						$assign(cc, decodeDoubleEx(b1, b2));
						if (cc == nullptr) {
							if (decodeSingle(b2) == SJIS_0213$Decoder::UNMAPPABLE) {
								$assign(var$6, $CoderResult::unmappableForLength(2));
								return$5 = true;
								goto $finally;
							} else {
								$assign(var$6, $CoderResult::unmappableForLength(1));
								return$5 = true;
								goto $finally;
							}
						}
						++outSize;
					}
				}
				if (dl - dp < outSize) {
					$init($CoderResult);
					$assign(var$6, $CoderResult::OVERFLOW);
					return$5 = true;
					goto $finally;
				}
				if (outSize == 2) {
					$nc(da)->set(dp++, $nc(cc)->get(0));
					da->set(dp++, cc->get(1));
				} else {
					$nc(da)->set(dp++, c);
				}
				sp += inSize;
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

$CoderResult* SJIS_0213$Decoder::decodeBufferLoop($ByteBuffer* src, $CharBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				$var($chars, cc, nullptr);
				int32_t b1 = (int32_t)(src->get() & (uint32_t)255);
				char16_t c = decodeSingle(b1);
				int32_t inSize = 1;
				int32_t outSize = 1;
				if (c == SJIS_0213$Decoder::UNMAPPABLE) {
					if (src->remaining() < 1) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::UNDERFLOW);
						return$1 = true;
						goto $finally;
					}
					int32_t b2 = (int32_t)(src->get() & (uint32_t)255);
					++inSize;
					c = decodeDouble(b1, b2);
					if (c == SJIS_0213$Decoder::UNMAPPABLE) {
						$assign(cc, decodeDoubleEx(b1, b2));
						if (cc == nullptr) {
							if (decodeSingle(b2) == SJIS_0213$Decoder::UNMAPPABLE) {
								$assign(var$2, $CoderResult::unmappableForLength(2));
								return$1 = true;
								goto $finally;
							} else {
								$assign(var$2, $CoderResult::unmappableForLength(1));
								return$1 = true;
								goto $finally;
							}
						}
						++outSize;
					}
				}
				if ($nc(dst)->remaining() < outSize) {
					$init($CoderResult);
					$assign(var$2, $CoderResult::OVERFLOW);
					return$1 = true;
					goto $finally;
				}
				if (outSize == 2) {
					$nc(dst)->put($nc(cc)->get(0));
					dst->put($nc(cc)->get(1));
				} else {
					$nc(dst)->put(c);
				}
				mark += inSize;
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

$CoderResult* SJIS_0213$Decoder::decodeLoop($ByteBuffer* src, $CharBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return decodeArrayLoop(src, dst);
	} else {
		return decodeBufferLoop(src, dst);
	}
}

char16_t SJIS_0213$Decoder::decodeSingle(int32_t b) {
	$init($SJIS_0213$Holder);
	return $nc($SJIS_0213$Holder::mapping)->decodeSingle(b);
}

char16_t SJIS_0213$Decoder::decodeDouble(int32_t b1, int32_t b2) {
	$init($SJIS_0213$Holder);
	return $nc($SJIS_0213$Holder::mapping)->decodeDouble(b1, b2);
}

$chars* SJIS_0213$Decoder::decodeDoubleEx(int32_t b1, int32_t b2) {
	int32_t db = (b1 << 8) | b2;
	$init($SJIS_0213$Holder);
	if ($nc($SJIS_0213$Holder::mapping)->decodeSurrogate(db, this->cc) != nullptr) {
		return this->cc;
	}
	$nc(this->comp)->bs = db;
	if ($nc($SJIS_0213$Holder::mapping)->decodeComposite(this->comp, this->cc) != nullptr) {
		return this->cc;
	}
	return nullptr;
}

SJIS_0213$Decoder::SJIS_0213$Decoder() {
}

$Class* SJIS_0213$Decoder::load$($String* name, bool initialize) {
	$loadClass(SJIS_0213$Decoder, name, initialize, &_SJIS_0213$Decoder_ClassInfo_, allocate$SJIS_0213$Decoder);
	return class$;
}

$Class* SJIS_0213$Decoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun