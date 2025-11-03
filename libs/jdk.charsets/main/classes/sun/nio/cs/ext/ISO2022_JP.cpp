#include <sun/nio/cs/ext/ISO2022_JP.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/JIS_X_0201.h>
#include <sun/nio/cs/US_ASCII.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/ISO2022_JP$Decoder.h>
#include <sun/nio/cs/ext/ISO2022_JP$Encoder.h>
#include <sun/nio/cs/ext/JIS_X_0208.h>
#include <jcpp.h>

#undef ASCII
#undef ESC
#undef SHIFTOUT
#undef SI
#undef SO

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $JIS_X_0201 = ::sun::nio::cs::JIS_X_0201;
using $US_ASCII = ::sun::nio::cs::US_ASCII;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $ISO2022_JP$Decoder = ::sun::nio::cs::ext::ISO2022_JP$Decoder;
using $ISO2022_JP$Encoder = ::sun::nio::cs::ext::ISO2022_JP$Encoder;
using $JIS_X_0208 = ::sun::nio::cs::ext::JIS_X_0208;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _ISO2022_JP_FieldInfo_[] = {
	{"ASCII", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_JP, ASCII)},
	{"JISX0201_1976", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_JP, JISX0201_1976)},
	{"JISX0208_1978", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_JP, JISX0208_1978)},
	{"JISX0208_1983", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_JP, JISX0208_1983)},
	{"JISX0212_1990", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_JP, JISX0212_1990)},
	{"JISX0201_1976_KANA", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_JP, JISX0201_1976_KANA)},
	{"SHIFTOUT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_JP, SHIFTOUT)},
	{"ESC", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_JP, ESC)},
	{"SO", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_JP, SO)},
	{"SI", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_JP, SI)},
	{}
};

$MethodInfo _ISO2022_JP_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ISO2022_JP::*)()>(&ISO2022_JP::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(ISO2022_JP::*)($String*,$StringArray*)>(&ISO2022_JP::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"doSBKANA", "()Z", nullptr, $PROTECTED},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ISO2022_JP_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.ISO2022_JP$Encoder", "sun.nio.cs.ext.ISO2022_JP", "Encoder", $STATIC},
	{"sun.nio.cs.ext.ISO2022_JP$Decoder", "sun.nio.cs.ext.ISO2022_JP", "Decoder", $STATIC},
	{}
};

$ClassInfo _ISO2022_JP_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.ISO2022_JP",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	_ISO2022_JP_FieldInfo_,
	_ISO2022_JP_MethodInfo_,
	nullptr,
	nullptr,
	_ISO2022_JP_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.ISO2022_JP$Encoder,sun.nio.cs.ext.ISO2022_JP$Decoder"
};

$Object* allocate$ISO2022_JP($Class* clazz) {
	return $of($alloc(ISO2022_JP));
}

int32_t ISO2022_JP::hashCode() {
	 return this->$Charset::hashCode();
}

bool ISO2022_JP::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* ISO2022_JP::toString() {
	 return this->$Charset::toString();
}

$Object* ISO2022_JP::clone() {
	 return this->$Charset::clone();
}

void ISO2022_JP::finalize() {
	this->$Charset::finalize();
}

void ISO2022_JP::init$() {
	$Charset::init$("ISO-2022-JP"_s, $($ExtendedCharsets::aliasesFor("ISO-2022-JP"_s)));
}

void ISO2022_JP::init$($String* canonicalName, $StringArray* aliases) {
	$Charset::init$(canonicalName, aliases);
}

$String* ISO2022_JP::historicalName() {
	return "ISO2022JP"_s;
}

bool ISO2022_JP::contains($Charset* cs) {
	return (($instanceOf($JIS_X_0201, cs)) || ($instanceOf($US_ASCII, cs)) || ($instanceOf($JIS_X_0208, cs)) || ($instanceOf(ISO2022_JP, cs)));
}

$CharsetDecoder* ISO2022_JP::newDecoder() {
	return $new($ISO2022_JP$Decoder, this);
}

$CharsetEncoder* ISO2022_JP::newEncoder() {
	return $new($ISO2022_JP$Encoder, this);
}

bool ISO2022_JP::doSBKANA() {
	return true;
}

ISO2022_JP::ISO2022_JP() {
}

$Class* ISO2022_JP::load$($String* name, bool initialize) {
	$loadClass(ISO2022_JP, name, initialize, &_ISO2022_JP_ClassInfo_, allocate$ISO2022_JP);
	return class$;
}

$Class* ISO2022_JP::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun