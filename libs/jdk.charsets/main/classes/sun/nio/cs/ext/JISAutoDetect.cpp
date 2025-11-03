#include <sun/nio/cs/ext/JISAutoDetect.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SJIS.h>
#include <sun/nio/cs/ext/EUC_JP.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/ISO2022_JP.h>
#include <sun/nio/cs/ext/JISAutoDetect$Decoder.h>
#include <jcpp.h>

#undef EUCJP_KANA1_MASK
#undef EUCJP_KANA2_MASK
#undef EUCJP_MASK
#undef SJIS1B_MASK
#undef SJIS2B_MASK

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Buffer = ::java::nio::Buffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $SJIS = ::sun::nio::cs::SJIS;
using $EUC_JP = ::sun::nio::cs::ext::EUC_JP;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $ISO2022_JP = ::sun::nio::cs::ext::ISO2022_JP;
using $JISAutoDetect$Decoder = ::sun::nio::cs::ext::JISAutoDetect$Decoder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _JISAutoDetect_FieldInfo_[] = {
	{"EUCJP_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JISAutoDetect, EUCJP_MASK)},
	{"SJIS2B_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JISAutoDetect, SJIS2B_MASK)},
	{"SJIS1B_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JISAutoDetect, SJIS1B_MASK)},
	{"EUCJP_KANA1_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JISAutoDetect, EUCJP_KANA1_MASK)},
	{"EUCJP_KANA2_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JISAutoDetect, EUCJP_KANA2_MASK)},
	{}
};

$MethodInfo _JISAutoDetect_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JISAutoDetect::*)()>(&JISAutoDetect::init$))},
	{"canEncode", "()Z", nullptr, $PUBLIC},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"looksLikeJapanese", "(Ljava/nio/CharBuffer;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($CharBuffer*)>(&JISAutoDetect::looksLikeJapanese))},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _JISAutoDetect_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.JISAutoDetect$Decoder", "sun.nio.cs.ext.JISAutoDetect", "Decoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JISAutoDetect_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.JISAutoDetect",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	_JISAutoDetect_FieldInfo_,
	_JISAutoDetect_MethodInfo_,
	nullptr,
	nullptr,
	_JISAutoDetect_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.JISAutoDetect$Decoder"
};

$Object* allocate$JISAutoDetect($Class* clazz) {
	return $of($alloc(JISAutoDetect));
}

int32_t JISAutoDetect::hashCode() {
	 return this->$Charset::hashCode();
}

bool JISAutoDetect::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* JISAutoDetect::toString() {
	 return this->$Charset::toString();
}

$Object* JISAutoDetect::clone() {
	 return this->$Charset::clone();
}

void JISAutoDetect::finalize() {
	this->$Charset::finalize();
}

void JISAutoDetect::init$() {
	$Charset::init$("x-JISAutoDetect"_s, $($ExtendedCharsets::aliasesFor("x-JISAutoDetect"_s)));
}

bool JISAutoDetect::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf($SJIS, cs)) || ($instanceOf($EUC_JP, cs)) || ($instanceOf($ISO2022_JP, cs)));
}

bool JISAutoDetect::canEncode() {
	return false;
}

$CharsetDecoder* JISAutoDetect::newDecoder() {
	return $new($JISAutoDetect$Decoder, this);
}

$String* JISAutoDetect::historicalName() {
	return "JISAutoDetect"_s;
}

$CharsetEncoder* JISAutoDetect::newEncoder() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool JISAutoDetect::looksLikeJapanese($CharBuffer* cb) {
	$init(JISAutoDetect);
	int32_t hiragana = 0;
	int32_t katakana = 0;
	while ($nc(cb)->hasRemaining()) {
		char16_t c = cb->get();
		if (12352 <= c && c <= 12447 && ++hiragana > 1) {
			return true;
		}
		if (0x0000FF65 <= c && c <= 0x0000FF9F && ++katakana > 1) {
			return true;
		}
	}
	return false;
}

JISAutoDetect::JISAutoDetect() {
}

$Class* JISAutoDetect::load$($String* name, bool initialize) {
	$loadClass(JISAutoDetect, name, initialize, &_JISAutoDetect_ClassInfo_, allocate$JISAutoDetect);
	return class$;
}

$Class* JISAutoDetect::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun