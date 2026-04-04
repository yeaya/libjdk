#include <sun/nio/cs/ext/IBM29626C$Encoder.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/JIS_X_0201.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/Surrogate$Parser.h>
#include <sun/nio/cs/ext/IBM29626C.h>
#include <sun/nio/cs/ext/IBM943.h>
#include <sun/nio/cs/ext/JIS_X_0208.h>
#include <sun/nio/cs/ext/JIS_X_0212.h>
#include <jcpp.h>

#undef OVERFLOW
#undef UNDERFLOW

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $JIS_X_0201 = ::sun::nio::cs::JIS_X_0201;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $Surrogate$Parser = ::sun::nio::cs::Surrogate$Parser;
using $IBM943 = ::sun::nio::cs::ext::IBM943;
using $JIS_X_0208 = ::sun::nio::cs::ext::JIS_X_0208;
using $JIS_X_0212 = ::sun::nio::cs::ext::JIS_X_0212;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$SingleByte$Encoder* IBM29626C$Encoder::ENC0201 = nullptr;
$DoubleByte$Encoder* IBM29626C$Encoder::ENC0208 = nullptr;
$DoubleByte$Encoder* IBM29626C$Encoder::ENC0212 = nullptr;
$DoubleByte$Encoder* IBM29626C$Encoder::ibm943 = nullptr;
$String* IBM29626C$Encoder::G2_c = nullptr;
$String* IBM29626C$Encoder::G2_b = nullptr;
$String* IBM29626C$Encoder::G3_c = nullptr;
$String* IBM29626C$Encoder::G3_b = nullptr;
$String* IBM29626C$Encoder::G1_c = nullptr;

void IBM29626C$Encoder::init$($Charset* cs) {
	IBM29626C$Encoder::init$(cs, 3.0f, 3.0f, IBM29626C$Encoder::ENC0201, IBM29626C$Encoder::ENC0208, IBM29626C$Encoder::ENC0212);
}

void IBM29626C$Encoder::init$($Charset* cs, float avgBpc, float maxBpc, $SingleByte$Encoder* enc0201, $DoubleByte$Encoder* enc0208, $DoubleByte$Encoder* enc0212) {
	$CharsetEncoder::init$(cs, avgBpc, maxBpc);
	$set(this, sgp, $new($Surrogate$Parser));
	$set(this, enc0201, enc0201);
	$set(this, enc0208, enc0208);
	$set(this, enc0212, enc0212);
}

bool IBM29626C$Encoder::canEncode(char16_t c) {
	$var($bytes, encodedBytes, $new($bytes, 3));
	bool var$0 = encodeSingle(c, encodedBytes) != 0;
	return var$0 || encodeDouble(c) != 0x0000fffd;
}

int32_t IBM29626C$Encoder::encodeSingle(char16_t inputChar, $bytes* outputByte) {
	if (inputChar >= 128 && inputChar < 142) {
		$nc(outputByte)->set(0, (int8_t)inputChar);
		return 1;
	}
	if (inputChar >= 144 && inputChar < 160) {
		$nc(outputByte)->set(0, (int8_t)inputChar);
		return 1;
	}
	int32_t b = $nc(this->enc0201)->encode(inputChar);
	if (b == 0x0000fffd) {
		int32_t idx = IBM29626C$Encoder::G1_c->indexOf(inputChar);
		if (idx > -1) {
			b = 224 + idx;
		}
	}
	if (b == 0x0000fffd) {
		return 0;
	}
	if (b >= 0 && b < 128) {
		$nc(outputByte)->set(0, (int8_t)b);
		return 1;
	}
	$nc(outputByte)->set(0, (int8_t)142);
	outputByte->set(1, (int8_t)b);
	return 2;
}

int32_t IBM29626C$Encoder::encodeUDC(char16_t ch) {
	if (ch >= (char16_t)0xe000 && ch <= (char16_t)0xe757) {
		if (ch < (char16_t)0xe3ac) {
			int32_t offset = (int32_t)ch - 0x0000e000;
			int32_t b = ((offset / 94) << 8) + (offset % 94);
			return b + 0x0000f5a1;
		} else {
			int32_t offset = (int32_t)ch - 0x0000e3ac;
			int32_t b = ((offset / 94) << 8) + (offset % 94);
			return b + 0x008ff5a1;
		}
	}
	return 0x0000fffd;
}

int32_t IBM29626C$Encoder::encodeDouble(char16_t ch) {
	int32_t idx = IBM29626C$Encoder::G2_c->indexOf(ch);
	if (idx > -1) {
		return (int32_t)IBM29626C$Encoder::G2_b->charAt(idx);
	}
	idx = IBM29626C$Encoder::G3_c->indexOf(ch);
	if (idx > -1) {
		return (int32_t)IBM29626C$Encoder::G3_b->charAt(idx) + 0x008f0000;
	}
	int32_t b = $nc(this->enc0208)->encodeChar(ch);
	if (b != 0x0000fffd) {
		return b + 0x00008080;
	}
	b = encodeUDC(ch);
	if (b != 0x0000fffd) {
		return b;
	}
	if ($nc(IBM29626C$Encoder::ibm943)->canEncode(ch)) {
		b = $nc(this->enc0212)->encodeChar(ch);
		if (b != 0x0000fffd) {
			b += 0x008f8080;
			return b;
		}
	}
	return b;
}

$CoderResult* IBM29626C$Encoder::encodeArrayLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalObjectStack();
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
	$var($bytes, outputByte, nullptr);
	int32_t inputSize = 0;
	$var($bytes, tmpBuf, $new($bytes, 3));
	$var($Throwable, var$4, nullptr);
	$var($CoderResult, var$6, nullptr);
	bool return$5 = false;
	try {
		while (sp < sl) {
			$assign(outputByte, tmpBuf);
			char16_t c = $nc(sa)->get(sp);
			if ($Character::isSurrogate(c)) {
				if ($nc(this->sgp)->parse(c, sa, sp, sl) < 0) {
					$assign(var$6, this->sgp->error());
					return$5 = true;
					goto $finally;
				}
				$assign(var$6, this->sgp->unmappableResult());
				return$5 = true;
				goto $finally;
			}
			outputSize = encodeSingle(c, outputByte);
			if (outputSize == 0) {
				int32_t ncode = encodeDouble(c);
				if (ncode != 0x0000fffd) {
					if ((ncode & 0x00ff0000) == 0) {
						outputByte->set(0, (int8_t)((ncode & 0xff00) >> 8));
						outputByte->set(1, (int8_t)(ncode & 0xff));
						outputSize = 2;
					} else {
						outputByte->set(0, (int8_t)143);
						outputByte->set(1, (int8_t)((ncode & 0xff00) >> 8));
						outputByte->set(2, (int8_t)(ncode & 0xff));
						outputSize = 3;
					}
				} else {
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
	$shouldNotReachHere();
}

$CoderResult* IBM29626C$Encoder::encodeBufferLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalObjectStack();
	int32_t outputSize = 0;
	$var($bytes, outputByte, nullptr);
	int32_t inputSize = 0;
	$var($bytes, tmpBuf, $new($bytes, 3));
	int32_t mark = $nc(src)->position();
	$var($Throwable, var$0, nullptr);
	$var($CoderResult, var$2, nullptr);
	bool return$1 = false;
	try {
		while (src->hasRemaining()) {
			$assign(outputByte, tmpBuf);
			char16_t c = src->get();
			if ($Character::isSurrogate(c)) {
				if ($nc(this->sgp)->parse(c, src) < 0) {
					$assign(var$2, this->sgp->error());
					return$1 = true;
					goto $finally;
				}
				$assign(var$2, this->sgp->unmappableResult());
				return$1 = true;
				goto $finally;
			}
			outputSize = encodeSingle(c, outputByte);
			if (outputSize == 0) {
				int32_t ncode = encodeDouble(c);
				if (ncode != 0x0000fffd) {
					if ((ncode & 0x00ff0000) == 0) {
						outputByte->set(0, (int8_t)((ncode & 0xff00) >> 8));
						outputByte->set(1, (int8_t)(ncode & 0xff));
						outputSize = 2;
					} else {
						outputByte->set(0, (int8_t)143);
						outputByte->set(1, (int8_t)((ncode & 0xff00) >> 8));
						outputByte->set(2, (int8_t)(ncode & 0xff));
						outputSize = 3;
					}
				} else {
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
				dst->put(outputByte->get(i));
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
	$shouldNotReachHere();
}

$CoderResult* IBM29626C$Encoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return encodeArrayLoop(src, dst);
	} else {
		return encodeBufferLoop(src, dst);
	}
}

void IBM29626C$Encoder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM29626C$Encoder::G2_c, u"―∑∟∥∮⊿①②③④⑤⑥⑦⑧⑨⑩⑪⑫⑬⑭⑮⑯⑰⑱⑲⑳〝〟㈲㈹㊤㊥㊦㊧㊨㌃㌍㌔㌘㌢㌣㌦㌧㌫㌶㌻㍉㍊㍍㍑㍗㍻㍼㍽㍾㎎㎏㎜㎝㎞㎡㏄㏍俠剝啞嚙囊塡屛屢搔摑攢栅梎潑瀆焰瘦禱簞繈繡繫腁荆萊蔣蟬蠟軀醬醱頰頹顚驒鷗鹼麴麵－～￠￡￢"_s);
	$assignStatic(IBM29626C$Encoder::G2_b, $cstr({0xa1bd, 0xadf4, 0xadf8, 0xa1c2, 0xadf3, 0xadf9, 0xada1, 0xada2, 0xada3, 0xada4, 0xada5, 0xada6, 0xada7, 0xada8, 0xada9, 0xadaa, 0xadab, 0xadac, 0xadad, 0xadae, 0xadaf, 0xadb0, 0xadb1, 0xadb2, 0xadb3, 0xadb4, 0xade0, 0xade1, 0xadeb, 0xadec, 0xade5, 0xade6, 0xade7, 0xade8, 0xade9, 0xadc6, 0xadca, 0xadc1, 0xadc4, 0xadc2, 0xadcc, 0xadcb, 0xadc5, 0xadcd, 0xadc7, 0xadcf, 0xadc0, 0xadce, 0xadc3, 0xadc8, 0xadc9, 0xaddf, 0xadef, 0xadee, 0xaded, 0xadd3, 0xadd4, 0xadd0, 0xadd1, 0xadd2, 0xadd6, 0xadd5, 0xade3, 0xb6a2, 0xc7ed, 0xb0a2, 0xb3fa, 0xc7b9, 0xc5b6, 0xd6a2, 0xbcc8, 0xc1df, 0xc4cf, 0xdab9, 0xbaf4, 0xdbf4, 0xc8ae, 0xc6c2, 0xb1eb, 0xc1e9, 0xc5f8, 0xc3bd, 0xe5da, 0xbdab, 0xb7d2, 0xe7a6, 0xb7d5, 0xcde9, 0xbed5, 0xc0e6, 0xcfb9, 0xb6ed, 0xbedf, 0xc8b0, 0xcbcb, 0xf0f8, 0xc5bf, 0xc2cd, 0xb2aa, 0xb8b4, 0xb9ed, 0xcccd, 0xa1dd, 0xa1c1, 0xa1f1, 0xa1f2, 0xa2cc}));
	$assignStatic(IBM29626C$Encoder::G3_c, u"№℡ⅠⅡⅢⅣⅤⅥⅦⅧⅨⅩⅰⅱⅲⅳⅴⅵⅶⅷⅸⅹ㈱仼僴凬匇匤咊坙增寬峵嵓德悅愠敎昻晥栁橫櫢淲淸瀨炻甁皂皞礰竧綠緖荢薰蠇譿賴赶郞鄕閒霻靍靑馞髙魲黑\uf86f朗隆﨎﨏塚﨑晴﨓﨔凞猪益礼神祥福靖精羽﨟蘒﨡諸﨣﨤逸都﨧﨨﨩飯飼館鶴＂＇￤"_s);
	$assignStatic(IBM29626C$Encoder::G3_b, u"\uf3b8\uf3b9\uf3ab\uf3ac\uf3ad\uf3ae\uf3af\uf3b0\uf3b1\uf3b2\uf3b3\uf3b4\uf3a1\uf3a2\uf3a3\uf3a4\uf3a5\uf3a6\uf3a7\uf3a8\uf3a9\uf3aa\uf3b7\uf4a2\uf4a3\uf4a4\uf4a5\uf4a6\uf4a8\uf4a9\uf4ac\uf4ae\uf4af\uf4b0\uf4b2\uf4b3\uf4b4\uf4b5\uf4b6\uf4b7\uf4ba\uf4bd\uf4be\uf4c0\uf4bf\uf4c2\uf4a1\uf4c6\uf4c7\uf4c8\uf4cb\uf4d0\uf4d4\uf4d5\uf4d7\uf4d9\uf4dc\uf4df\uf4e0\uf4e1\uf4e5\uf4e7\uf4ea\uf4ed\uf4ee\uf4ef\uf4f4\uf4f5\uf4f6\uf4f8\uf3b8\uf4b9\uf4eb\uf4a7\uf4aa\uf4ab\uf4b1\uf4b8\uf4bb\uf4bc\uf4c4\uf4c5\uf4c9\uf4cc\uf4cd\uf4ce\uf4cf\uf4d1\uf4d3\uf4d6\uf4d8\uf4da\uf4db\uf4de\uf4e2\uf4e3\uf4e4\uf4e6\uf4e8\uf4e9\uf4ec\uf4f1\uf4f2\uf4f3\uf4f7\uf3b6\uf3b5ꋃ"_s);
	$assignStatic(IBM29626C$Encoder::G1_c, u"¢£¬"_s);
	$assignStatic(IBM29626C$Encoder::ENC0201, $cast($SingleByte$Encoder, $$new($JIS_X_0201)->newEncoder()));
	$assignStatic(IBM29626C$Encoder::ENC0208, $cast($DoubleByte$Encoder, $$new($JIS_X_0208)->newEncoder()));
	$assignStatic(IBM29626C$Encoder::ENC0212, $cast($DoubleByte$Encoder, $$new($JIS_X_0212)->newEncoder()));
	$assignStatic(IBM29626C$Encoder::ibm943, $cast($DoubleByte$Encoder, $$new($IBM943)->newEncoder()));
}

IBM29626C$Encoder::IBM29626C$Encoder() {
}

$Class* IBM29626C$Encoder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ENC0201", "Lsun/nio/cs/SingleByte$Encoder;", nullptr, $STATIC | $FINAL, $staticField(IBM29626C$Encoder, ENC0201)},
		{"ENC0208", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $STATIC | $FINAL, $staticField(IBM29626C$Encoder, ENC0208)},
		{"ENC0212", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $STATIC | $FINAL, $staticField(IBM29626C$Encoder, ENC0212)},
		{"ibm943", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $STATIC | $FINAL, $staticField(IBM29626C$Encoder, ibm943)},
		{"sgp", "Lsun/nio/cs/Surrogate$Parser;", nullptr, $PRIVATE | $FINAL, $field(IBM29626C$Encoder, sgp)},
		{"enc0201", "Lsun/nio/cs/SingleByte$Encoder;", nullptr, $PRIVATE | $FINAL, $field(IBM29626C$Encoder, enc0201)},
		{"enc0208", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $PRIVATE | $FINAL, $field(IBM29626C$Encoder, enc0208)},
		{"enc0212", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $PRIVATE | $FINAL, $field(IBM29626C$Encoder, enc0212)},
		{"G2_c", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM29626C$Encoder, G2_c)},
		{"G2_b", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM29626C$Encoder, G2_b)},
		{"G3_c", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM29626C$Encoder, G3_c)},
		{"G3_b", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM29626C$Encoder, G3_b)},
		{"G1_c", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM29626C$Encoder, G1_c)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PROTECTED, $method(IBM29626C$Encoder, init$, void, $Charset*)},
		{"<init>", "(Ljava/nio/charset/Charset;FFLsun/nio/cs/SingleByte$Encoder;Lsun/nio/cs/DoubleByte$Encoder;Lsun/nio/cs/DoubleByte$Encoder;)V", nullptr, $PROTECTED, $method(IBM29626C$Encoder, init$, void, $Charset*, float, float, $SingleByte$Encoder*, $DoubleByte$Encoder*, $DoubleByte$Encoder*)},
		{"canEncode", "(C)Z", nullptr, $PUBLIC, $virtualMethod(IBM29626C$Encoder, canEncode, bool, char16_t)},
		{"encodeArrayLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(IBM29626C$Encoder, encodeArrayLoop, $CoderResult*, $CharBuffer*, $ByteBuffer*)},
		{"encodeBufferLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(IBM29626C$Encoder, encodeBufferLoop, $CoderResult*, $CharBuffer*, $ByteBuffer*)},
		{"encodeDouble", "(C)I", nullptr, $PROTECTED, $virtualMethod(IBM29626C$Encoder, encodeDouble, int32_t, char16_t)},
		{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED, $virtualMethod(IBM29626C$Encoder, encodeLoop, $CoderResult*, $CharBuffer*, $ByteBuffer*)},
		{"encodeSingle", "(C[B)I", nullptr, $PROTECTED, $virtualMethod(IBM29626C$Encoder, encodeSingle, int32_t, char16_t, $bytes*)},
		{"encodeUDC", "(C)I", nullptr, $PROTECTED, $virtualMethod(IBM29626C$Encoder, encodeUDC, int32_t, char16_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM29626C$Encoder", "sun.nio.cs.ext.IBM29626C", "Encoder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM29626C$Encoder",
		"java.nio.charset.CharsetEncoder",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.ext.IBM29626C"
	};
	$loadClass(IBM29626C$Encoder, name, initialize, &classInfo$$, IBM29626C$Encoder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM29626C$Encoder);
	});
	return class$;
}

$Class* IBM29626C$Encoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun