#include <sun/nio/cs/ext/MacRoman.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/MacRoman$Holder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $MacRoman$Holder = ::sun::nio::cs::ext::MacRoman$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _MacRoman_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MacRoman::*)()>(&MacRoman::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MacRoman_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MacRoman$Holder", "sun.nio.cs.ext.MacRoman", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MacRoman_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.MacRoman",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MacRoman_MethodInfo_,
	nullptr,
	nullptr,
	_MacRoman_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MacRoman$Holder"
};

$Object* allocate$MacRoman($Class* clazz) {
	return $of($alloc(MacRoman));
}

int32_t MacRoman::hashCode() {
	 return this->$Charset::hashCode();
}

bool MacRoman::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* MacRoman::toString() {
	 return this->$Charset::toString();
}

$Object* MacRoman::clone() {
	 return this->$Charset::clone();
}

void MacRoman::finalize() {
	this->$Charset::finalize();
}

void MacRoman::init$() {
	$Charset::init$("x-MacRoman"_s, $($ExtendedCharsets::aliasesFor("x-MacRoman"_s)));
}

$String* MacRoman::historicalName() {
	return "MacRoman"_s;
}

bool MacRoman::contains($Charset* cs) {
	return ($instanceOf(MacRoman, cs));
}

$CharsetDecoder* MacRoman::newDecoder() {
	$init($MacRoman$Holder);
	return $new($SingleByte$Decoder, this, $MacRoman$Holder::b2c, false, false);
}

$CharsetEncoder* MacRoman::newEncoder() {
	$init($MacRoman$Holder);
	return $new($SingleByte$Encoder, this, $MacRoman$Holder::c2b, $MacRoman$Holder::c2bIndex, false);
}

MacRoman::MacRoman() {
}

$Class* MacRoman::load$($String* name, bool initialize) {
	$loadClass(MacRoman, name, initialize, &_MacRoman_ClassInfo_, allocate$MacRoman);
	return class$;
}

$Class* MacRoman::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun