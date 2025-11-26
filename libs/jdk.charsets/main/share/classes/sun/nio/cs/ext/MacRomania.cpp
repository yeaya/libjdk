#include <sun/nio/cs/ext/MacRomania.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/MacRomania$Holder.h>
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
using $MacRomania$Holder = ::sun::nio::cs::ext::MacRomania$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _MacRomania_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MacRomania::*)()>(&MacRomania::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MacRomania_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MacRomania$Holder", "sun.nio.cs.ext.MacRomania", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MacRomania_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.MacRomania",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MacRomania_MethodInfo_,
	nullptr,
	nullptr,
	_MacRomania_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MacRomania$Holder"
};

$Object* allocate$MacRomania($Class* clazz) {
	return $of($alloc(MacRomania));
}

int32_t MacRomania::hashCode() {
	 return this->$Charset::hashCode();
}

bool MacRomania::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* MacRomania::toString() {
	 return this->$Charset::toString();
}

$Object* MacRomania::clone() {
	 return this->$Charset::clone();
}

void MacRomania::finalize() {
	this->$Charset::finalize();
}

void MacRomania::init$() {
	$Charset::init$("x-MacRomania"_s, $($ExtendedCharsets::aliasesFor("x-MacRomania"_s)));
}

$String* MacRomania::historicalName() {
	return "MacRomania"_s;
}

bool MacRomania::contains($Charset* cs) {
	return ($instanceOf(MacRomania, cs));
}

$CharsetDecoder* MacRomania::newDecoder() {
	$init($MacRomania$Holder);
	return $new($SingleByte$Decoder, this, $MacRomania$Holder::b2c, false, false);
}

$CharsetEncoder* MacRomania::newEncoder() {
	$init($MacRomania$Holder);
	return $new($SingleByte$Encoder, this, $MacRomania$Holder::c2b, $MacRomania$Holder::c2bIndex, false);
}

MacRomania::MacRomania() {
}

$Class* MacRomania::load$($String* name, bool initialize) {
	$loadClass(MacRomania, name, initialize, &_MacRomania_ClassInfo_, allocate$MacRomania);
	return class$;
}

$Class* MacRomania::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun