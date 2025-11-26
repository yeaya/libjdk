#include <sun/nio/cs/ext/IBM863.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM863$Holder.h>
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
using $IBM863$Holder = ::sun::nio::cs::ext::IBM863$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM863_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM863::*)()>(&IBM863::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM863_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM863$Holder", "sun.nio.cs.ext.IBM863", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM863_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM863",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM863_MethodInfo_,
	nullptr,
	nullptr,
	_IBM863_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM863$Holder"
};

$Object* allocate$IBM863($Class* clazz) {
	return $of($alloc(IBM863));
}

int32_t IBM863::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM863::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM863::toString() {
	 return this->$Charset::toString();
}

$Object* IBM863::clone() {
	 return this->$Charset::clone();
}

void IBM863::finalize() {
	this->$Charset::finalize();
}

void IBM863::init$() {
	$Charset::init$("IBM863"_s, $($ExtendedCharsets::aliasesFor("IBM863"_s)));
}

$String* IBM863::historicalName() {
	return "Cp863"_s;
}

bool IBM863::contains($Charset* cs) {
	return ($instanceOf(IBM863, cs));
}

$CharsetDecoder* IBM863::newDecoder() {
	$init($IBM863$Holder);
	return $new($SingleByte$Decoder, this, $IBM863$Holder::b2c, false, false);
}

$CharsetEncoder* IBM863::newEncoder() {
	$init($IBM863$Holder);
	return $new($SingleByte$Encoder, this, $IBM863$Holder::c2b, $IBM863$Holder::c2bIndex, false);
}

IBM863::IBM863() {
}

$Class* IBM863::load$($String* name, bool initialize) {
	$loadClass(IBM863, name, initialize, &_IBM863_ClassInfo_, allocate$IBM863);
	return class$;
}

$Class* IBM863::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun