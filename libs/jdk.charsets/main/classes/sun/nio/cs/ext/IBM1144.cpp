#include <sun/nio/cs/ext/IBM1144.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM1144$Holder.h>
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
using $IBM1144$Holder = ::sun::nio::cs::ext::IBM1144$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM1144_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM1144::*)()>(&IBM1144::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM1144_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1144$Holder", "sun.nio.cs.ext.IBM1144", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1144_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM1144",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM1144_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1144_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1144$Holder"
};

$Object* allocate$IBM1144($Class* clazz) {
	return $of($alloc(IBM1144));
}

int32_t IBM1144::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM1144::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM1144::toString() {
	 return this->$Charset::toString();
}

$Object* IBM1144::clone() {
	 return this->$Charset::clone();
}

void IBM1144::finalize() {
	this->$Charset::finalize();
}

void IBM1144::init$() {
	$Charset::init$("IBM01144"_s, $($ExtendedCharsets::aliasesFor("IBM01144"_s)));
}

$String* IBM1144::historicalName() {
	return "Cp1144"_s;
}

bool IBM1144::contains($Charset* cs) {
	return ($instanceOf(IBM1144, cs));
}

$CharsetDecoder* IBM1144::newDecoder() {
	$init($IBM1144$Holder);
	return $new($SingleByte$Decoder, this, $IBM1144$Holder::b2c, false, false);
}

$CharsetEncoder* IBM1144::newEncoder() {
	$init($IBM1144$Holder);
	return $new($SingleByte$Encoder, this, $IBM1144$Holder::c2b, $IBM1144$Holder::c2bIndex, false);
}

IBM1144::IBM1144() {
}

$Class* IBM1144::load$($String* name, bool initialize) {
	$loadClass(IBM1144, name, initialize, &_IBM1144_ClassInfo_, allocate$IBM1144);
	return class$;
}

$Class* IBM1144::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun