#include <sun/nio/cs/ext/IBM856.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM856$Holder.h>
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
using $IBM856$Holder = ::sun::nio::cs::ext::IBM856$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM856_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM856::*)()>(&IBM856::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM856_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM856$Holder", "sun.nio.cs.ext.IBM856", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM856_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM856",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM856_MethodInfo_,
	nullptr,
	nullptr,
	_IBM856_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM856$Holder"
};

$Object* allocate$IBM856($Class* clazz) {
	return $of($alloc(IBM856));
}

int32_t IBM856::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM856::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM856::toString() {
	 return this->$Charset::toString();
}

$Object* IBM856::clone() {
	 return this->$Charset::clone();
}

void IBM856::finalize() {
	this->$Charset::finalize();
}

void IBM856::init$() {
	$Charset::init$("x-IBM856"_s, $($ExtendedCharsets::aliasesFor("x-IBM856"_s)));
}

$String* IBM856::historicalName() {
	return "Cp856"_s;
}

bool IBM856::contains($Charset* cs) {
	return ($instanceOf(IBM856, cs));
}

$CharsetDecoder* IBM856::newDecoder() {
	$init($IBM856$Holder);
	return $new($SingleByte$Decoder, this, $IBM856$Holder::b2c, false, false);
}

$CharsetEncoder* IBM856::newEncoder() {
	$init($IBM856$Holder);
	return $new($SingleByte$Encoder, this, $IBM856$Holder::c2b, $IBM856$Holder::c2bIndex, false);
}

IBM856::IBM856() {
}

$Class* IBM856::load$($String* name, bool initialize) {
	$loadClass(IBM856, name, initialize, &_IBM856_ClassInfo_, allocate$IBM856);
	return class$;
}

$Class* IBM856::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun