#include <sun/nio/cs/ext/MacThai.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/MacThai$Holder.h>
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
using $MacThai$Holder = ::sun::nio::cs::ext::MacThai$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _MacThai_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MacThai::*)()>(&MacThai::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MacThai_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MacThai$Holder", "sun.nio.cs.ext.MacThai", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MacThai_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.MacThai",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MacThai_MethodInfo_,
	nullptr,
	nullptr,
	_MacThai_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MacThai$Holder"
};

$Object* allocate$MacThai($Class* clazz) {
	return $of($alloc(MacThai));
}

int32_t MacThai::hashCode() {
	 return this->$Charset::hashCode();
}

bool MacThai::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* MacThai::toString() {
	 return this->$Charset::toString();
}

$Object* MacThai::clone() {
	 return this->$Charset::clone();
}

void MacThai::finalize() {
	this->$Charset::finalize();
}

void MacThai::init$() {
	$Charset::init$("x-MacThai"_s, $($ExtendedCharsets::aliasesFor("x-MacThai"_s)));
}

$String* MacThai::historicalName() {
	return "MacThai"_s;
}

bool MacThai::contains($Charset* cs) {
	return ($instanceOf(MacThai, cs));
}

$CharsetDecoder* MacThai::newDecoder() {
	$init($MacThai$Holder);
	return $new($SingleByte$Decoder, this, $MacThai$Holder::b2c, false, false);
}

$CharsetEncoder* MacThai::newEncoder() {
	$init($MacThai$Holder);
	return $new($SingleByte$Encoder, this, $MacThai$Holder::c2b, $MacThai$Holder::c2bIndex, false);
}

MacThai::MacThai() {
}

$Class* MacThai::load$($String* name, bool initialize) {
	$loadClass(MacThai, name, initialize, &_MacThai_ClassInfo_, allocate$MacThai);
	return class$;
}

$Class* MacThai::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun