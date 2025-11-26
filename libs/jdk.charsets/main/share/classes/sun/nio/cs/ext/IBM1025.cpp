#include <sun/nio/cs/ext/IBM1025.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM1025$Holder.h>
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
using $IBM1025$Holder = ::sun::nio::cs::ext::IBM1025$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM1025_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM1025::*)()>(&IBM1025::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM1025_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1025$Holder", "sun.nio.cs.ext.IBM1025", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1025_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM1025",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM1025_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1025_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1025$Holder"
};

$Object* allocate$IBM1025($Class* clazz) {
	return $of($alloc(IBM1025));
}

int32_t IBM1025::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM1025::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM1025::toString() {
	 return this->$Charset::toString();
}

$Object* IBM1025::clone() {
	 return this->$Charset::clone();
}

void IBM1025::finalize() {
	this->$Charset::finalize();
}

void IBM1025::init$() {
	$Charset::init$("x-IBM1025"_s, $($ExtendedCharsets::aliasesFor("x-IBM1025"_s)));
}

$String* IBM1025::historicalName() {
	return "Cp1025"_s;
}

bool IBM1025::contains($Charset* cs) {
	return ($instanceOf(IBM1025, cs));
}

$CharsetDecoder* IBM1025::newDecoder() {
	$init($IBM1025$Holder);
	return $new($SingleByte$Decoder, this, $IBM1025$Holder::b2c, false, false);
}

$CharsetEncoder* IBM1025::newEncoder() {
	$init($IBM1025$Holder);
	return $new($SingleByte$Encoder, this, $IBM1025$Holder::c2b, $IBM1025$Holder::c2bIndex, false);
}

IBM1025::IBM1025() {
}

$Class* IBM1025::load$($String* name, bool initialize) {
	$loadClass(IBM1025, name, initialize, &_IBM1025_ClassInfo_, allocate$IBM1025);
	return class$;
}

$Class* IBM1025::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun