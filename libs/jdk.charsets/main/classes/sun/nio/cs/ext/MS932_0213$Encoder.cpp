#include <sun/nio/cs/ext/MS932_0213$Encoder.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/MS932.h>
#include <sun/nio/cs/ext/MS932_0213.h>
#include <sun/nio/cs/ext/SJIS_0213$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $MS932 = ::sun::nio::cs::MS932;
using $MS932_0213 = ::sun::nio::cs::ext::MS932_0213;
using $SJIS_0213$Encoder = ::sun::nio::cs::ext::SJIS_0213$Encoder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _MS932_0213$Encoder_FieldInfo_[] = {
	{"encMS932", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $STATIC | $FINAL, $staticField(MS932_0213$Encoder, encMS932)},
	{}
};

$MethodInfo _MS932_0213$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PROTECTED, $method(static_cast<void(MS932_0213$Encoder::*)($Charset*)>(&MS932_0213$Encoder::init$))},
	{"encodeChar", "(C)I", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MS932_0213$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MS932_0213$Encoder", "sun.nio.cs.ext.MS932_0213", "Encoder", $PROTECTED | $STATIC},
	{"sun.nio.cs.ext.SJIS_0213$Encoder", "sun.nio.cs.ext.SJIS_0213", "Encoder", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _MS932_0213$Encoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.MS932_0213$Encoder",
	"sun.nio.cs.ext.SJIS_0213$Encoder",
	nullptr,
	_MS932_0213$Encoder_FieldInfo_,
	_MS932_0213$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_MS932_0213$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MS932_0213"
};

$Object* allocate$MS932_0213$Encoder($Class* clazz) {
	return $of($alloc(MS932_0213$Encoder));
}

$DoubleByte$Encoder* MS932_0213$Encoder::encMS932 = nullptr;

void MS932_0213$Encoder::init$($Charset* cs) {
	$SJIS_0213$Encoder::init$(cs);
}

int32_t MS932_0213$Encoder::encodeChar(char16_t ch) {
	int32_t db = $nc(MS932_0213$Encoder::encMS932)->encodeChar(ch);
	if (db == 0x0000FFFD) {
		return $SJIS_0213$Encoder::encodeChar(ch);
	}
	return db;
}

void clinit$MS932_0213$Encoder($Class* class$) {
	$assignStatic(MS932_0213$Encoder::encMS932, $cast($DoubleByte$Encoder, $$new($MS932)->newEncoder()));
}

MS932_0213$Encoder::MS932_0213$Encoder() {
}

$Class* MS932_0213$Encoder::load$($String* name, bool initialize) {
	$loadClass(MS932_0213$Encoder, name, initialize, &_MS932_0213$Encoder_ClassInfo_, clinit$MS932_0213$Encoder, allocate$MS932_0213$Encoder);
	return class$;
}

$Class* MS932_0213$Encoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun