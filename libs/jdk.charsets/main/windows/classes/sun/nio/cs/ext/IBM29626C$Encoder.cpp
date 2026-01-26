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

$FieldInfo _IBM29626C$Encoder_FieldInfo_[] = {
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

$MethodInfo _IBM29626C$Encoder_MethodInfo_[] = {
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

$InnerClassInfo _IBM29626C$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM29626C$Encoder", "sun.nio.cs.ext.IBM29626C", "Encoder", $STATIC},
	{}
};

$ClassInfo _IBM29626C$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM29626C$Encoder",
	"java.nio.charset.CharsetEncoder",
	nullptr,
	_IBM29626C$Encoder_FieldInfo_,
	_IBM29626C$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM29626C$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM29626C"
};

$Object* allocate$IBM29626C$Encoder($Class* clazz) {
	return $of($alloc(IBM29626C$Encoder));
}

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
	return var$0 || encodeDouble(c) != 0x0000FFFD;
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
	if (b == 0x0000FFFD) {
		int32_t idx = $nc(IBM29626C$Encoder::G1_c)->indexOf((int32_t)inputChar);
		if (idx > -1) {
			b = 224 + idx;
		}
	}
	if (b == 0x0000FFFD) {
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
	if (ch >= (char16_t)0xE000 && ch <= (char16_t)0xE757) {
		if (ch < (char16_t)0xE3AC) {
			int32_t offset = (int32_t)ch - 0x0000E000;
			int32_t b = ((offset / 94) << 8) + (offset % 94);
			return b + 0x0000F5A1;
		} else {
			int32_t offset = (int32_t)ch - 0x0000E3AC;
			int32_t b = ((offset / 94) << 8) + (offset % 94);
			return b + 0x008FF5A1;
		}
	}
	return 0x0000FFFD;
}

int32_t IBM29626C$Encoder::encodeDouble(char16_t ch) {
	int32_t idx = $nc(IBM29626C$Encoder::G2_c)->indexOf((int32_t)ch);
	if (idx > -1) {
		return (int32_t)$nc(IBM29626C$Encoder::G2_b)->charAt(idx);
	}
	idx = $nc(IBM29626C$Encoder::G3_c)->indexOf((int32_t)ch);
	if (idx > -1) {
		return (int32_t)$nc(IBM29626C$Encoder::G3_b)->charAt(idx) + 0x008F0000;
	}
	int32_t b = $nc(this->enc0208)->encodeChar(ch);
	if (b != 0x0000FFFD) {
		return b + 0x00008080;
	}
	b = encodeUDC(ch);
	if (b != 0x0000FFFD) {
		return b;
	}
	if ($nc(IBM29626C$Encoder::ibm943)->canEncode(ch)) {
		b = $nc(this->enc0212)->encodeChar(ch);
		if (b != 0x0000FFFD) {
			b += 0x008F8080;
			return b;
		}
	}
	return b;
}

$CoderResult* IBM29626C$Encoder::encodeArrayLoop($CharBuffer* src, $ByteBuffer* dst) {
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
	int32_t outputSize = 0;
	$var($bytes, outputByte, nullptr);
	int32_t inputSize = 0;
	$var($bytes, tmpBuf, $new($bytes, 3));
	{
		$var($Throwable, var$4, nullptr);
		$var($CoderResult, var$6, nullptr);
		bool return$5 = false;
		try {
			while (sp < sl) {
				$assign(outputByte, tmpBuf);
				char16_t c = $nc(sa)->get(sp);
				if ($Character::isSurrogate(c)) {
					if ($nc(this->sgp)->parse(c, sa, sp, sl) < 0) {
						$assign(var$6, $nc(this->sgp)->error());
						return$5 = true;
						goto $finally;
					}
					$assign(var$6, $nc(this->sgp)->unmappableResult());
					return$5 = true;
					goto $finally;
				}
				outputSize = encodeSingle(c, outputByte);
				if (outputSize == 0) {
					int32_t ncode = encodeDouble(c);
					if (ncode != 0x0000FFFD) {
						if (((int32_t)(ncode & (uint32_t)0x00FF0000)) == 0) {
							outputByte->set(0, (int8_t)(((int32_t)(ncode & (uint32_t)0x0000FF00)) >> 8));
							outputByte->set(1, (int8_t)((int32_t)(ncode & (uint32_t)255)));
							outputSize = 2;
						} else {
							outputByte->set(0, (int8_t)143);
							outputByte->set(1, (int8_t)(((int32_t)(ncode & (uint32_t)0x0000FF00)) >> 8));
							outputByte->set(2, (int8_t)((int32_t)(ncode & (uint32_t)255)));
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
	}
	$shouldNotReachHere();
}

$CoderResult* IBM29626C$Encoder::encodeBufferLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t outputSize = 0;
	$var($bytes, outputByte, nullptr);
	int32_t inputSize = 0;
	$var($bytes, tmpBuf, $new($bytes, 3));
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				$assign(outputByte, tmpBuf);
				char16_t c = src->get();
				if ($Character::isSurrogate(c)) {
					if ($nc(this->sgp)->parse(c, src) < 0) {
						$assign(var$2, $nc(this->sgp)->error());
						return$1 = true;
						goto $finally;
					}
					$assign(var$2, $nc(this->sgp)->unmappableResult());
					return$1 = true;
					goto $finally;
				}
				outputSize = encodeSingle(c, outputByte);
				if (outputSize == 0) {
					int32_t ncode = encodeDouble(c);
					if (ncode != 0x0000FFFD) {
						if (((int32_t)(ncode & (uint32_t)0x00FF0000)) == 0) {
							outputByte->set(0, (int8_t)(((int32_t)(ncode & (uint32_t)0x0000FF00)) >> 8));
							outputByte->set(1, (int8_t)((int32_t)(ncode & (uint32_t)255)));
							outputSize = 2;
						} else {
							outputByte->set(0, (int8_t)143);
							outputByte->set(1, (int8_t)(((int32_t)(ncode & (uint32_t)0x0000FF00)) >> 8));
							outputByte->set(2, (int8_t)((int32_t)(ncode & (uint32_t)255)));
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
					$nc(dst)->put(outputByte->get(i));
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

$CoderResult* IBM29626C$Encoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return encodeArrayLoop(src, dst);
	} else {
		return encodeBufferLoop(src, dst);
	}
}

void clinit$IBM29626C$Encoder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM29626C$Encoder::G2_c, u"―∑∟∥∮⊿①②③④⑤⑥⑦⑧⑨⑩⑪⑫⑬⑭⑮⑯⑰⑱⑲⑳〝〟㈲㈹㊤㊥㊦㊧㊨㌃㌍㌔㌘㌢㌣㌦㌧㌫㌶㌻㍉㍊㍍㍑㍗㍻㍼㍽㍾㎎㎏㎜㎝㎞㎡㏄㏍俠剝啞嚙囊塡屛屢搔摑攢栅梎潑瀆焰瘦禱簞繈繡繫腁荆萊蔣蟬蠟軀醬醱頰頹顚驒鷗鹼麴麵－～￠￡￢"_s);
	$assignStatic(IBM29626C$Encoder::G2_b, $cstr({0xA1BD, 0xADF4, 0xADF8, 0xA1C2, 0xADF3, 0xADF9, 0xADA1, 0xADA2, 0xADA3, 0xADA4, 0xADA5, 0xADA6, 0xADA7, 0xADA8, 0xADA9, 0xADAA, 0xADAB, 0xADAC, 0xADAD, 0xADAE, 0xADAF, 0xADB0, 0xADB1, 0xADB2, 0xADB3, 0xADB4, 0xADE0, 0xADE1, 0xADEB, 0xADEC, 0xADE5, 0xADE6, 0xADE7, 0xADE8, 0xADE9, 0xADC6, 0xADCA, 0xADC1, 0xADC4, 0xADC2, 0xADCC, 0xADCB, 0xADC5, 0xADCD, 0xADC7, 0xADCF, 0xADC0, 0xADCE, 0xADC3, 0xADC8, 0xADC9, 0xADDF, 0xADEF, 0xADEE, 0xADED, 0xADD3, 0xADD4, 0xADD0, 0xADD1, 0xADD2, 0xADD6, 0xADD5, 0xADE3, 0xB6A2, 0xC7ED, 0xB0A2, 0xB3FA, 0xC7B9, 0xC5B6, 0xD6A2, 0xBCC8, 0xC1DF, 0xC4CF, 0xDAB9, 0xBAF4, 0xDBF4, 0xC8AE, 0xC6C2, 0xB1EB, 0xC1E9, 0xC5F8, 0xC3BD, 0xE5DA, 0xBDAB, 0xB7D2, 0xE7A6, 0xB7D5, 0xCDE9, 0xBED5, 0xC0E6, 0xCFB9, 0xB6ED, 0xBEDF, 0xC8B0, 0xCBCB, 0xF0F8, 0xC5BF, 0xC2CD, 0xB2AA, 0xB8B4, 0xB9ED, 0xCCCD, 0xA1DD, 0xA1C1, 0xA1F1, 0xA1F2, 0xA2CC}));
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
	$loadClass(IBM29626C$Encoder, name, initialize, &_IBM29626C$Encoder_ClassInfo_, clinit$IBM29626C$Encoder, allocate$IBM29626C$Encoder);
	return class$;
}

$Class* IBM29626C$Encoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun