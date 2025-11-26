#include <sun/nio/cs/ext/IBM937.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Decoder_EBCDIC.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/DoubleByte$Encoder_EBCDIC.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM937$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM937$EncodeHolder.h>
#include <jcpp.h>

using $charArray2 = $Array<char16_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $DoubleByte$Decoder_EBCDIC = ::sun::nio::cs::DoubleByte$Decoder_EBCDIC;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $DoubleByte$Encoder_EBCDIC = ::sun::nio::cs::DoubleByte$Encoder_EBCDIC;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $IBM937$DecodeHolder = ::sun::nio::cs::ext::IBM937$DecodeHolder;
using $IBM937$EncodeHolder = ::sun::nio::cs::ext::IBM937$EncodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM937_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM937::*)()>(&IBM937::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM937_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM937$EncodeHolder", "sun.nio.cs.ext.IBM937", "EncodeHolder", $STATIC},
	{"sun.nio.cs.ext.IBM937$DecodeHolder", "sun.nio.cs.ext.IBM937", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM937_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM937",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM937_MethodInfo_,
	nullptr,
	nullptr,
	_IBM937_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM937$EncodeHolder,sun.nio.cs.ext.IBM937$DecodeHolder"
};

$Object* allocate$IBM937($Class* clazz) {
	return $of($alloc(IBM937));
}

int32_t IBM937::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM937::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM937::toString() {
	 return this->$Charset::toString();
}

$Object* IBM937::clone() {
	 return this->$Charset::clone();
}

void IBM937::finalize() {
	this->$Charset::finalize();
}

void IBM937::init$() {
	$Charset::init$("x-IBM937"_s, $($ExtendedCharsets::aliasesFor("x-IBM937"_s)));
}

$String* IBM937::historicalName() {
	return "Cp937"_s;
}

bool IBM937::contains($Charset* cs) {
	return ($instanceOf(IBM937, cs));
}

$CharsetDecoder* IBM937::newDecoder() {
	$init($IBM937$DecodeHolder);
	return $new($DoubleByte$Decoder_EBCDIC, this, $IBM937$DecodeHolder::b2c, $IBM937$DecodeHolder::b2cSB, 64, 254, false);
}

$CharsetEncoder* IBM937::newEncoder() {
	$init($IBM937$EncodeHolder);
	return $new($DoubleByte$Encoder_EBCDIC, this, $IBM937$EncodeHolder::c2b, $IBM937$EncodeHolder::c2bIndex, false);
}

IBM937::IBM937() {
}

$Class* IBM937::load$($String* name, bool initialize) {
	$loadClass(IBM937, name, initialize, &_IBM937_ClassInfo_, allocate$IBM937);
	return class$;
}

$Class* IBM937::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun