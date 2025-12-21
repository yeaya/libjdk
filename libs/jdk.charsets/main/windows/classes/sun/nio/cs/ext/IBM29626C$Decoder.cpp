#include <sun/nio/cs/ext/IBM29626C$Decoder.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/JIS_X_0201.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/ext/IBM29626C.h>
#include <sun/nio/cs/ext/IBM943.h>
#include <sun/nio/cs/ext/JIS_X_0208.h>
#include <sun/nio/cs/ext/JIS_X_0212.h>
#include <jcpp.h>

#undef OVERFLOW
#undef UNDERFLOW

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $JIS_X_0201 = ::sun::nio::cs::JIS_X_0201;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $IBM943 = ::sun::nio::cs::ext::IBM943;
using $JIS_X_0208 = ::sun::nio::cs::ext::JIS_X_0208;
using $JIS_X_0212 = ::sun::nio::cs::ext::JIS_X_0212;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM29626C$Decoder_FieldInfo_[] = {
	{"DEC0201", "Lsun/nio/cs/SingleByte$Decoder;", nullptr, $STATIC | $FINAL, $staticField(IBM29626C$Decoder, DEC0201)},
	{"DEC0208", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $STATIC | $FINAL, $staticField(IBM29626C$Decoder, DEC0208)},
	{"DEC0212", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $STATIC | $FINAL, $staticField(IBM29626C$Decoder, DEC0212)},
	{"ibm943", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $STATIC | $FINAL, $staticField(IBM29626C$Decoder, ibm943)},
	{"dec0201", "Lsun/nio/cs/SingleByte$Decoder;", nullptr, $PRIVATE | $FINAL, $field(IBM29626C$Decoder, dec0201)},
	{"dec0208", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $PRIVATE | $FINAL, $field(IBM29626C$Decoder, dec0208)},
	{"dec0212", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $PRIVATE | $FINAL, $field(IBM29626C$Decoder, dec0212)},
	{"G2_b", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM29626C$Decoder, G2_b)},
	{"G2_c", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM29626C$Decoder, G2_c)},
	{"G3_b", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM29626C$Decoder, G3_b)},
	{"G3_c", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM29626C$Decoder, G3_c)},
	{"g1_c", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(IBM29626C$Decoder, g1_c)},
	{}
};

$MethodInfo _IBM29626C$Decoder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PROTECTED, $method(static_cast<void(IBM29626C$Decoder::*)($Charset*)>(&IBM29626C$Decoder::init$))},
	{"<init>", "(Ljava/nio/charset/Charset;FFLsun/nio/cs/SingleByte$Decoder;Lsun/nio/cs/DoubleByte$Decoder;Lsun/nio/cs/DoubleByte$Decoder;)V", nullptr, $PROTECTED, $method(static_cast<void(IBM29626C$Decoder::*)($Charset*,float,float,$SingleByte$Decoder*,$DoubleByte$Decoder*,$DoubleByte$Decoder*)>(&IBM29626C$Decoder::init$))},
	{"decodeArrayLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(IBM29626C$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&IBM29626C$Decoder::decodeArrayLoop))},
	{"decodeBufferLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(IBM29626C$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&IBM29626C$Decoder::decodeBufferLoop))},
	{"decodeDouble", "(II)C", nullptr, $PROTECTED},
	{"decodeDoubleG3", "(II)C", nullptr, $PROTECTED},
	{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PUBLIC},
	{"decodeSingle", "(I)C", nullptr, $PROTECTED},
	{"decodeUDC", "(III)C", nullptr, $PROTECTED},
	{"implFlush", "(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PUBLIC},
	{"implReset", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _IBM29626C$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM29626C$Decoder", "sun.nio.cs.ext.IBM29626C", "Decoder", $STATIC},
	{}
};

$ClassInfo _IBM29626C$Decoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM29626C$Decoder",
	"java.nio.charset.CharsetDecoder",
	"sun.nio.cs.DelegatableDecoder",
	_IBM29626C$Decoder_FieldInfo_,
	_IBM29626C$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM29626C$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM29626C"
};

$Object* allocate$IBM29626C$Decoder($Class* clazz) {
	return $of($alloc(IBM29626C$Decoder));
}

int32_t IBM29626C$Decoder::hashCode() {
	 return this->$CharsetDecoder::hashCode();
}

bool IBM29626C$Decoder::equals(Object$* arg0) {
	 return this->$CharsetDecoder::equals(arg0);
}

$Object* IBM29626C$Decoder::clone() {
	 return this->$CharsetDecoder::clone();
}

$String* IBM29626C$Decoder::toString() {
	 return this->$CharsetDecoder::toString();
}

void IBM29626C$Decoder::finalize() {
	this->$CharsetDecoder::finalize();
}

$SingleByte$Decoder* IBM29626C$Decoder::DEC0201 = nullptr;
$DoubleByte$Decoder* IBM29626C$Decoder::DEC0208 = nullptr;
$DoubleByte$Decoder* IBM29626C$Decoder::DEC0212 = nullptr;
$DoubleByte$Encoder* IBM29626C$Decoder::ibm943 = nullptr;
$String* IBM29626C$Decoder::G2_b = nullptr;
$String* IBM29626C$Decoder::G2_c = nullptr;
$String* IBM29626C$Decoder::G3_b = nullptr;
$String* IBM29626C$Decoder::G3_c = nullptr;
$String* IBM29626C$Decoder::g1_c = nullptr;

void IBM29626C$Decoder::init$($Charset* cs) {
	IBM29626C$Decoder::init$(cs, 0.5f, 1.0f, IBM29626C$Decoder::DEC0201, IBM29626C$Decoder::DEC0208, IBM29626C$Decoder::DEC0212);
}

void IBM29626C$Decoder::init$($Charset* cs, float avgCpb, float maxCpb, $SingleByte$Decoder* dec0201, $DoubleByte$Decoder* dec0208, $DoubleByte$Decoder* dec0212) {
	$CharsetDecoder::init$(cs, avgCpb, maxCpb);
	$set(this, dec0201, dec0201);
	$set(this, dec0208, dec0208);
	$set(this, dec0212, dec0212);
}

char16_t IBM29626C$Decoder::decodeSingle(int32_t b) {
	if (b < 142) {
		return (char16_t)b;
	}
	if (b < 144) {
		return (char16_t)0xFFFD;
	}
	if (b < 160) {
		return (char16_t)b;
	}
	return (char16_t)0xFFFD;
}

char16_t IBM29626C$Decoder::decodeUDC(int32_t byte1, int32_t byte2, int32_t offset) {
	if ((byte1 >= 245 && byte1 <= 254) && (byte2 >= 161 && byte2 <= 254)) {
		return (char16_t)((byte1 - 245) * 94 + (byte2 - 161) + offset);
	}
	return (char16_t)0xFFFD;
}

char16_t IBM29626C$Decoder::decodeDouble(int32_t byte1, int32_t byte2) {
	if (byte1 == 142) {
		if (byte2 < 128) {
			return (char16_t)0xFFFD;
		}
		char16_t c = $nc(this->dec0201)->decode((int32_t)(int8_t)byte2);
		if (byte2 >= 224 && byte2 <= 228) {
			c = $nc(IBM29626C$Decoder::g1_c)->charAt(byte2 - 224);
		}
		return c;
	}
	if ((byte1 >= 161 && byte1 <= 254) && (byte2 >= 161 && byte2 <= 254)) {
		char16_t c = (char16_t)((byte1 << 8) + byte2);
		int32_t idx = $nc(IBM29626C$Decoder::G2_b)->indexOf((int32_t)c);
		if (idx > -1) {
			return $nc(IBM29626C$Decoder::G2_c)->charAt(idx);
		}
	}
	char16_t ch = $nc(this->dec0208)->decodeDouble(byte1 - 128, byte2 - 128);
	if (ch == (char16_t)0xFFFD) {
		ch = decodeUDC(byte1, byte2, 0x0000E000);
	}
	return ch;
}

char16_t IBM29626C$Decoder::decodeDoubleG3(int32_t byte1, int32_t byte2) {
	if ((byte1 >= 161 && byte1 <= 254) && (byte2 >= 161 && byte2 <= 254)) {
		char16_t c = (char16_t)((byte1 << 8) + byte2);
		int32_t idx = $nc(IBM29626C$Decoder::G3_b)->indexOf((int32_t)c);
		if (idx > -1) {
			return $nc(IBM29626C$Decoder::G3_c)->charAt(idx);
		}
	}
	char16_t ch = $nc(this->dec0212)->decodeDouble(byte1 - 128, byte2 - 128);
	if (ch == (char16_t)0x2116) {
		ch = (char16_t)0xFFFD;
	}
	if (ch != (char16_t)0xFFFD) {
		ch = $nc(IBM29626C$Decoder::ibm943)->canEncode(ch) ? ch : (char16_t)0xFFFD;
	}
	if (ch == (char16_t)0xFFFD) {
		ch = decodeUDC(byte1, byte2, 0x0000E3AC);
	}
	return ch;
}

$CoderResult* IBM29626C$Decoder::decodeArrayLoop($ByteBuffer* src, $CharBuffer* dst) {
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
	int32_t inputSize = 0;
	char16_t outputChar = (char16_t)0xFFFD;
	{
		$var($Throwable, var$4, nullptr);
		$var($CoderResult, var$6, nullptr);
		bool return$5 = false;
		try {
			while (sp < sl) {
				b1 = (int32_t)($nc(sa)->get(sp) & (uint32_t)255);
				inputSize = 1;
				outputChar = decodeSingle(b1);
				if (outputChar == (char16_t)0xFFFD) {
					if (b1 == 143) {
						if (sp + 3 > sl) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::UNDERFLOW);
							return$5 = true;
							goto $finally;
						}
						b1 = (int32_t)(sa->get(sp + 1) & (uint32_t)255);
						b2 = (int32_t)(sa->get(sp + 2) & (uint32_t)255);
						inputSize += 2;
						outputChar = decodeDoubleG3(b1, b2);
					} else {
						if (sp + 2 > sl) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::UNDERFLOW);
							return$5 = true;
							goto $finally;
						}
						b2 = (int32_t)(sa->get(sp + 1) & (uint32_t)255);
						++inputSize;
						outputChar = decodeDouble(b1, b2);
					}
				}
				if (outputChar == (char16_t)0xFFFD) {
					$assign(var$6, $CoderResult::unmappableForLength(inputSize));
					return$5 = true;
					goto $finally;
				}
				if (dp + 1 > dl) {
					$init($CoderResult);
					$assign(var$6, $CoderResult::OVERFLOW);
					return$5 = true;
					goto $finally;
				}
				$nc(da)->set(dp++, outputChar);
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

$CoderResult* IBM29626C$Decoder::decodeBufferLoop($ByteBuffer* src, $CharBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t mark = $nc(src)->position();
	int32_t b1 = 0;
	int32_t b2 = 0;
	int32_t inputSize = 0;
	char16_t outputChar = (char16_t)0xFFFD;
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				b1 = (int32_t)(src->get() & (uint32_t)255);
				inputSize = 1;
				outputChar = decodeSingle(b1);
				if (outputChar == (char16_t)0xFFFD) {
					if (b1 == 143) {
						if (src->remaining() < 2) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::UNDERFLOW);
							return$1 = true;
							goto $finally;
						}
						b1 = (int32_t)(src->get() & (uint32_t)255);
						b2 = (int32_t)(src->get() & (uint32_t)255);
						inputSize += 2;
						outputChar = decodeDoubleG3(b1, b2);
					} else {
						if (src->remaining() < 1) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::UNDERFLOW);
							return$1 = true;
							goto $finally;
						}
						b2 = (int32_t)(src->get() & (uint32_t)255);
						++inputSize;
						outputChar = decodeDouble(b1, b2);
					}
				}
				if (outputChar == (char16_t)0xFFFD) {
					$assign(var$2, $CoderResult::unmappableForLength(inputSize));
					return$1 = true;
					goto $finally;
				}
				if ($nc(dst)->remaining() < 1) {
					$init($CoderResult);
					$assign(var$2, $CoderResult::OVERFLOW);
					return$1 = true;
					goto $finally;
				}
				$nc(dst)->put(outputChar);
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

$CoderResult* IBM29626C$Decoder::decodeLoop($ByteBuffer* src, $CharBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return decodeArrayLoop(src, dst);
	} else {
		return decodeBufferLoop(src, dst);
	}
}

void IBM29626C$Decoder::implReset() {
	$CharsetDecoder::implReset();
}

$CoderResult* IBM29626C$Decoder::implFlush($CharBuffer* out) {
	return $CharsetDecoder::implFlush(out);
}

void clinit$IBM29626C$Decoder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM29626C$Decoder::G2_b, u"ꇱꇲꋌ궡궢궣궤궥궦궧궨궩궪궫궬궭궮궯궰궱궲궳궴궵궶궷궸궹궺궻궼궽궾귀귁귂귃귄귅귆귇귈귉귊귋귌귍귎귏귐귑귒귓귔귕귖귟균귡귢귣귤귥귦귧귨귩귪귫귬귭귮귯귰귱귲귳귴귵귶귷그극귺귻근"_s);
	$assignStatic(IBM29626C$Decoder::G2_c, u"￠￡￢①②③④⑤⑥⑦⑧⑨⑩⑪⑫⑬⑭⑮⑯⑰⑱⑲⑳ⅠⅡⅢⅣⅤⅥⅦⅧⅨⅩ㍉㌔㌢㍍㌘㌧㌃㌶㍑㍗㌍㌦㌣㌫㍊㌻㎜㎝㎞㎎㎏㏄㎡㍻〝〟№㏍℡㊤㊥㊦㊧㊨㈱㈲㈹㍾㍽㍼≒≡∫∮∑√⊥∠∟⊿∵∩∪"_s);
	$assignStatic(IBM29626C$Decoder::G3_b, u"\uf3b8\uf3b9\uf3ab\uf3ac\uf3ad\uf3ae\uf3af\uf3b0\uf3b1\uf3b2\uf3b3\uf3b4\uf3a1\uf3a2\uf3a3\uf3a4\uf3a5\uf3a6\uf3a7\uf3a8\uf3a9\uf3aa\uf3b7\uf3b8\uf4a2\uf4a3\uf4a4\uf4a5\uf4a6\uf4a8\uf4a9\uf4ac\uf4ae\uf4af\uf4b0\uf4b2\uf4b3\uf4b4\uf4b5\uf4b6\uf4b7\uf4ba\uf4bd\uf4be\uf4c0\uf4bf\uf4c2\uf4a1\uf4c6\uf4c7\uf4c8\uf4cb\uf4d0\uf4d4\uf4d5\uf4d7\uf4d9\uf4dc\uf4df\uf4e0\uf4e1\uf4e5\uf4e7\uf4ea\uf4ed\uf4ee\uf4ef\uf4f4\uf4f5\uf4f6\uf4f8\uf3b8\uf4b9\uf4eb\uf4a7\uf4aa\uf4ab\uf4b1\uf4b8\uf4bb\uf4bc\uf4c4\uf4c5\uf4c9\uf4cc\uf4cd\uf4ce\uf4cf\uf4d1\uf4d3\uf4d6\uf4d8\uf4da\uf4db\uf4de\uf4e2\uf4e3\uf4e4\uf4e6\uf4e8\uf4e9\uf4ec\uf4f1\uf4f2\uf4f3\uf4f7\uf3b6\uf3b5"_s);
	$assignStatic(IBM29626C$Decoder::G3_c, u"№℡ⅠⅡⅢⅣⅤⅥⅦⅧⅨⅩⅰⅱⅲⅳⅴⅵⅶⅷⅸⅹ㈱¦仼僴凬匇匤咊坙增寬峵嵓德悅愠敎昻晥栁橫櫢淲淸瀨炻甁皂皞礰竧綠緖荢薰蠇譿賴赶郞鄕閒霻靍靑馞髙魲黑\uf86f朗隆﨎﨏塚﨑晴﨓﨔凞猪益礼神祥福靖精羽﨟蘒﨡諸﨣﨤逸都﨧﨨﨩飯飼館鶴＂＇"_s);
	$assignStatic(IBM29626C$Decoder::g1_c, u"¢£¬\\~"_s);
	$assignStatic(IBM29626C$Decoder::DEC0201, $cast($SingleByte$Decoder, $$new($JIS_X_0201)->newDecoder()));
	$assignStatic(IBM29626C$Decoder::DEC0208, $cast($DoubleByte$Decoder, $$new($JIS_X_0208)->newDecoder()));
	$assignStatic(IBM29626C$Decoder::DEC0212, $cast($DoubleByte$Decoder, $$new($JIS_X_0212)->newDecoder()));
	$assignStatic(IBM29626C$Decoder::ibm943, $cast($DoubleByte$Encoder, $$new($IBM943)->newEncoder()));
}

IBM29626C$Decoder::IBM29626C$Decoder() {
}

$Class* IBM29626C$Decoder::load$($String* name, bool initialize) {
	$loadClass(IBM29626C$Decoder, name, initialize, &_IBM29626C$Decoder_ClassInfo_, clinit$IBM29626C$Decoder, allocate$IBM29626C$Decoder);
	return class$;
}

$Class* IBM29626C$Decoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun