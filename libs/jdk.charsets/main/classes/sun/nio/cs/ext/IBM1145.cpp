#include <sun/nio/cs/ext/IBM1145.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM1145$Holder.h>
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
using $IBM1145$Holder = ::sun::nio::cs::ext::IBM1145$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM1145_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM1145::*)()>(&IBM1145::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM1145_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1145$Holder", "sun.nio.cs.ext.IBM1145", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1145_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM1145",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM1145_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1145_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1145$Holder"
};

$Object* allocate$IBM1145($Class* clazz) {
	return $of($alloc(IBM1145));
}

int32_t IBM1145::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM1145::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM1145::toString() {
	 return this->$Charset::toString();
}

$Object* IBM1145::clone() {
	 return this->$Charset::clone();
}

void IBM1145::finalize() {
	this->$Charset::finalize();
}

void IBM1145::init$() {
	$Charset::init$("IBM01145"_s, $($ExtendedCharsets::aliasesFor("IBM01145"_s)));
}

$String* IBM1145::historicalName() {
	return "Cp1145"_s;
}

bool IBM1145::contains($Charset* cs) {
	return ($instanceOf(IBM1145, cs));
}

$CharsetDecoder* IBM1145::newDecoder() {
	$init($IBM1145$Holder);
	return $new($SingleByte$Decoder, this, $IBM1145$Holder::b2c, false, false);
}

$CharsetEncoder* IBM1145::newEncoder() {
	$init($IBM1145$Holder);
	return $new($SingleByte$Encoder, this, $IBM1145$Holder::c2b, $IBM1145$Holder::c2bIndex, false);
}

IBM1145::IBM1145() {
}

$Class* IBM1145::load$($String* name, bool initialize) {
	$loadClass(IBM1145, name, initialize, &_IBM1145_ClassInfo_, allocate$IBM1145);
	return class$;
}

$Class* IBM1145::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun