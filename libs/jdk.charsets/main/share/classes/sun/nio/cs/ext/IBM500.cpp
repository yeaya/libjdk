#include <sun/nio/cs/ext/IBM500.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM500$Holder.h>
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
using $IBM500$Holder = ::sun::nio::cs::ext::IBM500$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM500_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM500::*)()>(&IBM500::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM500_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM500$Holder", "sun.nio.cs.ext.IBM500", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM500_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM500",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM500_MethodInfo_,
	nullptr,
	nullptr,
	_IBM500_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM500$Holder"
};

$Object* allocate$IBM500($Class* clazz) {
	return $of($alloc(IBM500));
}

int32_t IBM500::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM500::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM500::toString() {
	 return this->$Charset::toString();
}

$Object* IBM500::clone() {
	 return this->$Charset::clone();
}

void IBM500::finalize() {
	this->$Charset::finalize();
}

void IBM500::init$() {
	$Charset::init$("IBM500"_s, $($ExtendedCharsets::aliasesFor("IBM500"_s)));
}

$String* IBM500::historicalName() {
	return "Cp500"_s;
}

bool IBM500::contains($Charset* cs) {
	return ($instanceOf(IBM500, cs));
}

$CharsetDecoder* IBM500::newDecoder() {
	$init($IBM500$Holder);
	return $new($SingleByte$Decoder, this, $IBM500$Holder::b2c, false, true);
}

$CharsetEncoder* IBM500::newEncoder() {
	$init($IBM500$Holder);
	return $new($SingleByte$Encoder, this, $IBM500$Holder::c2b, $IBM500$Holder::c2bIndex, false);
}

IBM500::IBM500() {
}

$Class* IBM500::load$($String* name, bool initialize) {
	$loadClass(IBM500, name, initialize, &_IBM500_ClassInfo_, allocate$IBM500);
	return class$;
}

$Class* IBM500::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun