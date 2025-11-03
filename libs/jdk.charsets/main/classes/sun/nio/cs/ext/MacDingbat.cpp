#include <sun/nio/cs/ext/MacDingbat.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/MacDingbat$Holder.h>
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
using $MacDingbat$Holder = ::sun::nio::cs::ext::MacDingbat$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _MacDingbat_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MacDingbat::*)()>(&MacDingbat::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MacDingbat_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MacDingbat$Holder", "sun.nio.cs.ext.MacDingbat", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MacDingbat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.MacDingbat",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MacDingbat_MethodInfo_,
	nullptr,
	nullptr,
	_MacDingbat_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MacDingbat$Holder"
};

$Object* allocate$MacDingbat($Class* clazz) {
	return $of($alloc(MacDingbat));
}

int32_t MacDingbat::hashCode() {
	 return this->$Charset::hashCode();
}

bool MacDingbat::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* MacDingbat::toString() {
	 return this->$Charset::toString();
}

$Object* MacDingbat::clone() {
	 return this->$Charset::clone();
}

void MacDingbat::finalize() {
	this->$Charset::finalize();
}

void MacDingbat::init$() {
	$Charset::init$("x-MacDingbat"_s, $($ExtendedCharsets::aliasesFor("x-MacDingbat"_s)));
}

$String* MacDingbat::historicalName() {
	return "MacDingbat"_s;
}

bool MacDingbat::contains($Charset* cs) {
	return ($instanceOf(MacDingbat, cs));
}

$CharsetDecoder* MacDingbat::newDecoder() {
	$init($MacDingbat$Holder);
	return $new($SingleByte$Decoder, this, $MacDingbat$Holder::b2c, false, false);
}

$CharsetEncoder* MacDingbat::newEncoder() {
	$init($MacDingbat$Holder);
	return $new($SingleByte$Encoder, this, $MacDingbat$Holder::c2b, $MacDingbat$Holder::c2bIndex, false);
}

MacDingbat::MacDingbat() {
}

$Class* MacDingbat::load$($String* name, bool initialize) {
	$loadClass(MacDingbat, name, initialize, &_MacDingbat_ClassInfo_, allocate$MacDingbat);
	return class$;
}

$Class* MacDingbat::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun