#include <sun/nio/cs/ext/IBM420.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM420$Holder.h>
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
using $IBM420$Holder = ::sun::nio::cs::ext::IBM420$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM420_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM420::*)()>(&IBM420::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM420_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM420$Holder", "sun.nio.cs.ext.IBM420", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM420_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM420",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM420_MethodInfo_,
	nullptr,
	nullptr,
	_IBM420_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM420$Holder"
};

$Object* allocate$IBM420($Class* clazz) {
	return $of($alloc(IBM420));
}

int32_t IBM420::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM420::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM420::toString() {
	 return this->$Charset::toString();
}

$Object* IBM420::clone() {
	 return this->$Charset::clone();
}

void IBM420::finalize() {
	this->$Charset::finalize();
}

void IBM420::init$() {
	$Charset::init$("IBM420"_s, $($ExtendedCharsets::aliasesFor("IBM420"_s)));
}

$String* IBM420::historicalName() {
	return "Cp420"_s;
}

bool IBM420::contains($Charset* cs) {
	return ($instanceOf(IBM420, cs));
}

$CharsetDecoder* IBM420::newDecoder() {
	$init($IBM420$Holder);
	return $new($SingleByte$Decoder, this, $IBM420$Holder::b2c, false, false);
}

$CharsetEncoder* IBM420::newEncoder() {
	$init($IBM420$Holder);
	return $new($SingleByte$Encoder, this, $IBM420$Holder::c2b, $IBM420$Holder::c2bIndex, false);
}

IBM420::IBM420() {
}

$Class* IBM420::load$($String* name, bool initialize) {
	$loadClass(IBM420, name, initialize, &_IBM420_ClassInfo_, allocate$IBM420);
	return class$;
}

$Class* IBM420::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun