#include <sun/nio/cs/ext/IBM1046.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM1046$Holder.h>
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
using $IBM1046$Holder = ::sun::nio::cs::ext::IBM1046$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM1046_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM1046::*)()>(&IBM1046::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM1046_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1046$Holder", "sun.nio.cs.ext.IBM1046", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1046_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM1046",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM1046_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1046_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1046$Holder"
};

$Object* allocate$IBM1046($Class* clazz) {
	return $of($alloc(IBM1046));
}

int32_t IBM1046::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM1046::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM1046::toString() {
	 return this->$Charset::toString();
}

$Object* IBM1046::clone() {
	 return this->$Charset::clone();
}

void IBM1046::finalize() {
	this->$Charset::finalize();
}

void IBM1046::init$() {
	$Charset::init$("x-IBM1046"_s, $($ExtendedCharsets::aliasesFor("x-IBM1046"_s)));
}

$String* IBM1046::historicalName() {
	return "Cp1046"_s;
}

bool IBM1046::contains($Charset* cs) {
	return ($instanceOf(IBM1046, cs));
}

$CharsetDecoder* IBM1046::newDecoder() {
	$init($IBM1046$Holder);
	return $new($SingleByte$Decoder, this, $IBM1046$Holder::b2c, false, false);
}

$CharsetEncoder* IBM1046::newEncoder() {
	$init($IBM1046$Holder);
	return $new($SingleByte$Encoder, this, $IBM1046$Holder::c2b, $IBM1046$Holder::c2bIndex, false);
}

IBM1046::IBM1046() {
}

$Class* IBM1046::load$($String* name, bool initialize) {
	$loadClass(IBM1046, name, initialize, &_IBM1046_ClassInfo_, allocate$IBM1046);
	return class$;
}

$Class* IBM1046::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun