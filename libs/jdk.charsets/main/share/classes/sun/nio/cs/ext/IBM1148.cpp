#include <sun/nio/cs/ext/IBM1148.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM1148$Holder.h>
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
using $IBM1148$Holder = ::sun::nio::cs::ext::IBM1148$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM1148_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM1148::*)()>(&IBM1148::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM1148_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1148$Holder", "sun.nio.cs.ext.IBM1148", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1148_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM1148",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM1148_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1148_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1148$Holder"
};

$Object* allocate$IBM1148($Class* clazz) {
	return $of($alloc(IBM1148));
}

int32_t IBM1148::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM1148::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM1148::toString() {
	 return this->$Charset::toString();
}

$Object* IBM1148::clone() {
	 return this->$Charset::clone();
}

void IBM1148::finalize() {
	this->$Charset::finalize();
}

void IBM1148::init$() {
	$Charset::init$("IBM01148"_s, $($ExtendedCharsets::aliasesFor("IBM01148"_s)));
}

$String* IBM1148::historicalName() {
	return "Cp1148"_s;
}

bool IBM1148::contains($Charset* cs) {
	return ($instanceOf(IBM1148, cs));
}

$CharsetDecoder* IBM1148::newDecoder() {
	$init($IBM1148$Holder);
	return $new($SingleByte$Decoder, this, $IBM1148$Holder::b2c, false, false);
}

$CharsetEncoder* IBM1148::newEncoder() {
	$init($IBM1148$Holder);
	return $new($SingleByte$Encoder, this, $IBM1148$Holder::c2b, $IBM1148$Holder::c2bIndex, false);
}

IBM1148::IBM1148() {
}

$Class* IBM1148::load$($String* name, bool initialize) {
	$loadClass(IBM1148, name, initialize, &_IBM1148_ClassInfo_, allocate$IBM1148);
	return class$;
}

$Class* IBM1148::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun