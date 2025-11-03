#include <sun/nio/cs/ext/MacCyrillic.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/MacCyrillic$Holder.h>
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
using $MacCyrillic$Holder = ::sun::nio::cs::ext::MacCyrillic$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _MacCyrillic_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MacCyrillic::*)()>(&MacCyrillic::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MacCyrillic_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MacCyrillic$Holder", "sun.nio.cs.ext.MacCyrillic", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MacCyrillic_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.MacCyrillic",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MacCyrillic_MethodInfo_,
	nullptr,
	nullptr,
	_MacCyrillic_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MacCyrillic$Holder"
};

$Object* allocate$MacCyrillic($Class* clazz) {
	return $of($alloc(MacCyrillic));
}

int32_t MacCyrillic::hashCode() {
	 return this->$Charset::hashCode();
}

bool MacCyrillic::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* MacCyrillic::toString() {
	 return this->$Charset::toString();
}

$Object* MacCyrillic::clone() {
	 return this->$Charset::clone();
}

void MacCyrillic::finalize() {
	this->$Charset::finalize();
}

void MacCyrillic::init$() {
	$Charset::init$("x-MacCyrillic"_s, $($ExtendedCharsets::aliasesFor("x-MacCyrillic"_s)));
}

$String* MacCyrillic::historicalName() {
	return "MacCyrillic"_s;
}

bool MacCyrillic::contains($Charset* cs) {
	return ($instanceOf(MacCyrillic, cs));
}

$CharsetDecoder* MacCyrillic::newDecoder() {
	$init($MacCyrillic$Holder);
	return $new($SingleByte$Decoder, this, $MacCyrillic$Holder::b2c, false, false);
}

$CharsetEncoder* MacCyrillic::newEncoder() {
	$init($MacCyrillic$Holder);
	return $new($SingleByte$Encoder, this, $MacCyrillic$Holder::c2b, $MacCyrillic$Holder::c2bIndex, false);
}

MacCyrillic::MacCyrillic() {
}

$Class* MacCyrillic::load$($String* name, bool initialize) {
	$loadClass(MacCyrillic, name, initialize, &_MacCyrillic_ClassInfo_, allocate$MacCyrillic);
	return class$;
}

$Class* MacCyrillic::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun