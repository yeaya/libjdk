#include <sun/nio/cs/ext/MacUkraine.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/MacUkraine$Holder.h>
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
using $MacUkraine$Holder = ::sun::nio::cs::ext::MacUkraine$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _MacUkraine_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MacUkraine::*)()>(&MacUkraine::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MacUkraine_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MacUkraine$Holder", "sun.nio.cs.ext.MacUkraine", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MacUkraine_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.MacUkraine",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MacUkraine_MethodInfo_,
	nullptr,
	nullptr,
	_MacUkraine_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MacUkraine$Holder"
};

$Object* allocate$MacUkraine($Class* clazz) {
	return $of($alloc(MacUkraine));
}

int32_t MacUkraine::hashCode() {
	 return this->$Charset::hashCode();
}

bool MacUkraine::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* MacUkraine::toString() {
	 return this->$Charset::toString();
}

$Object* MacUkraine::clone() {
	 return this->$Charset::clone();
}

void MacUkraine::finalize() {
	this->$Charset::finalize();
}

void MacUkraine::init$() {
	$Charset::init$("x-MacUkraine"_s, $($ExtendedCharsets::aliasesFor("x-MacUkraine"_s)));
}

$String* MacUkraine::historicalName() {
	return "MacUkraine"_s;
}

bool MacUkraine::contains($Charset* cs) {
	return ($instanceOf(MacUkraine, cs));
}

$CharsetDecoder* MacUkraine::newDecoder() {
	$init($MacUkraine$Holder);
	return $new($SingleByte$Decoder, this, $MacUkraine$Holder::b2c, false, false);
}

$CharsetEncoder* MacUkraine::newEncoder() {
	$init($MacUkraine$Holder);
	return $new($SingleByte$Encoder, this, $MacUkraine$Holder::c2b, $MacUkraine$Holder::c2bIndex, false);
}

MacUkraine::MacUkraine() {
}

$Class* MacUkraine::load$($String* name, bool initialize) {
	$loadClass(MacUkraine, name, initialize, &_MacUkraine_ClassInfo_, allocate$MacUkraine);
	return class$;
}

$Class* MacUkraine::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun