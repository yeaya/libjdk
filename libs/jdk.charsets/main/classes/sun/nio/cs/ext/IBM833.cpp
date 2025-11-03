#include <sun/nio/cs/ext/IBM833.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM833$Holder.h>
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
using $IBM833$Holder = ::sun::nio::cs::ext::IBM833$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM833_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM833::*)()>(&IBM833::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM833_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM833$Holder", "sun.nio.cs.ext.IBM833", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM833_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM833",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM833_MethodInfo_,
	nullptr,
	nullptr,
	_IBM833_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM833$Holder"
};

$Object* allocate$IBM833($Class* clazz) {
	return $of($alloc(IBM833));
}

int32_t IBM833::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM833::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM833::toString() {
	 return this->$Charset::toString();
}

$Object* IBM833::clone() {
	 return this->$Charset::clone();
}

void IBM833::finalize() {
	this->$Charset::finalize();
}

void IBM833::init$() {
	$Charset::init$("x-IBM833"_s, $($ExtendedCharsets::aliasesFor("x-IBM833"_s)));
}

$String* IBM833::historicalName() {
	return "Cp833"_s;
}

bool IBM833::contains($Charset* cs) {
	return ($instanceOf(IBM833, cs));
}

$CharsetDecoder* IBM833::newDecoder() {
	$init($IBM833$Holder);
	return $new($SingleByte$Decoder, this, $IBM833$Holder::b2c, false, false);
}

$CharsetEncoder* IBM833::newEncoder() {
	$init($IBM833$Holder);
	return $new($SingleByte$Encoder, this, $IBM833$Holder::c2b, $IBM833$Holder::c2bIndex, false);
}

IBM833::IBM833() {
}

$Class* IBM833::load$($String* name, bool initialize) {
	$loadClass(IBM833, name, initialize, &_IBM833_ClassInfo_, allocate$IBM833);
	return class$;
}

$Class* IBM833::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun