#include <sun/nio/cs/ext/IBM1047.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM1047$Holder.h>
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
using $IBM1047$Holder = ::sun::nio::cs::ext::IBM1047$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM1047_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM1047::*)()>(&IBM1047::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM1047_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1047$Holder", "sun.nio.cs.ext.IBM1047", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1047_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM1047",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM1047_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1047_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1047$Holder"
};

$Object* allocate$IBM1047($Class* clazz) {
	return $of($alloc(IBM1047));
}

int32_t IBM1047::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM1047::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM1047::toString() {
	 return this->$Charset::toString();
}

$Object* IBM1047::clone() {
	 return this->$Charset::clone();
}

void IBM1047::finalize() {
	this->$Charset::finalize();
}

void IBM1047::init$() {
	$Charset::init$("IBM1047"_s, $($ExtendedCharsets::aliasesFor("IBM1047"_s)));
}

$String* IBM1047::historicalName() {
	return "Cp1047"_s;
}

bool IBM1047::contains($Charset* cs) {
	return ($instanceOf(IBM1047, cs));
}

$CharsetDecoder* IBM1047::newDecoder() {
	$init($IBM1047$Holder);
	return $new($SingleByte$Decoder, this, $IBM1047$Holder::b2c, false, true);
}

$CharsetEncoder* IBM1047::newEncoder() {
	$init($IBM1047$Holder);
	return $new($SingleByte$Encoder, this, $IBM1047$Holder::c2b, $IBM1047$Holder::c2bIndex, false);
}

IBM1047::IBM1047() {
}

$Class* IBM1047::load$($String* name, bool initialize) {
	$loadClass(IBM1047, name, initialize, &_IBM1047_ClassInfo_, allocate$IBM1047);
	return class$;
}

$Class* IBM1047::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun