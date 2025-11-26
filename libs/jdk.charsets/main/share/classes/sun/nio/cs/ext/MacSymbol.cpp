#include <sun/nio/cs/ext/MacSymbol.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/MacSymbol$Holder.h>
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
using $MacSymbol$Holder = ::sun::nio::cs::ext::MacSymbol$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _MacSymbol_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MacSymbol::*)()>(&MacSymbol::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MacSymbol_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MacSymbol$Holder", "sun.nio.cs.ext.MacSymbol", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MacSymbol_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.MacSymbol",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MacSymbol_MethodInfo_,
	nullptr,
	nullptr,
	_MacSymbol_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MacSymbol$Holder"
};

$Object* allocate$MacSymbol($Class* clazz) {
	return $of($alloc(MacSymbol));
}

int32_t MacSymbol::hashCode() {
	 return this->$Charset::hashCode();
}

bool MacSymbol::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* MacSymbol::toString() {
	 return this->$Charset::toString();
}

$Object* MacSymbol::clone() {
	 return this->$Charset::clone();
}

void MacSymbol::finalize() {
	this->$Charset::finalize();
}

void MacSymbol::init$() {
	$Charset::init$("x-MacSymbol"_s, $($ExtendedCharsets::aliasesFor("x-MacSymbol"_s)));
}

$String* MacSymbol::historicalName() {
	return "MacSymbol"_s;
}

bool MacSymbol::contains($Charset* cs) {
	return ($instanceOf(MacSymbol, cs));
}

$CharsetDecoder* MacSymbol::newDecoder() {
	$init($MacSymbol$Holder);
	return $new($SingleByte$Decoder, this, $MacSymbol$Holder::b2c, false, false);
}

$CharsetEncoder* MacSymbol::newEncoder() {
	$init($MacSymbol$Holder);
	return $new($SingleByte$Encoder, this, $MacSymbol$Holder::c2b, $MacSymbol$Holder::c2bIndex, false);
}

MacSymbol::MacSymbol() {
}

$Class* MacSymbol::load$($String* name, bool initialize) {
	$loadClass(MacSymbol, name, initialize, &_MacSymbol_ClassInfo_, allocate$MacSymbol);
	return class$;
}

$Class* MacSymbol::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun