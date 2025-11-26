#include <sun/nio/cs/ext/IBM870.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM870$Holder.h>
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
using $IBM870$Holder = ::sun::nio::cs::ext::IBM870$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM870_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM870::*)()>(&IBM870::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM870_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM870$Holder", "sun.nio.cs.ext.IBM870", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM870_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM870",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM870_MethodInfo_,
	nullptr,
	nullptr,
	_IBM870_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM870$Holder"
};

$Object* allocate$IBM870($Class* clazz) {
	return $of($alloc(IBM870));
}

int32_t IBM870::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM870::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM870::toString() {
	 return this->$Charset::toString();
}

$Object* IBM870::clone() {
	 return this->$Charset::clone();
}

void IBM870::finalize() {
	this->$Charset::finalize();
}

void IBM870::init$() {
	$Charset::init$("IBM870"_s, $($ExtendedCharsets::aliasesFor("IBM870"_s)));
}

$String* IBM870::historicalName() {
	return "Cp870"_s;
}

bool IBM870::contains($Charset* cs) {
	return ($instanceOf(IBM870, cs));
}

$CharsetDecoder* IBM870::newDecoder() {
	$init($IBM870$Holder);
	return $new($SingleByte$Decoder, this, $IBM870$Holder::b2c, false, false);
}

$CharsetEncoder* IBM870::newEncoder() {
	$init($IBM870$Holder);
	return $new($SingleByte$Encoder, this, $IBM870$Holder::c2b, $IBM870$Holder::c2bIndex, false);
}

IBM870::IBM870() {
}

$Class* IBM870::load$($String* name, bool initialize) {
	$loadClass(IBM870, name, initialize, &_IBM870_ClassInfo_, allocate$IBM870);
	return class$;
}

$Class* IBM870::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun