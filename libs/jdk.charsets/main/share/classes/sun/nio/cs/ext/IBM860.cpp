#include <sun/nio/cs/ext/IBM860.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM860$Holder.h>
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
using $IBM860$Holder = ::sun::nio::cs::ext::IBM860$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM860_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM860::*)()>(&IBM860::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM860_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM860$Holder", "sun.nio.cs.ext.IBM860", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM860_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM860",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM860_MethodInfo_,
	nullptr,
	nullptr,
	_IBM860_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM860$Holder"
};

$Object* allocate$IBM860($Class* clazz) {
	return $of($alloc(IBM860));
}

int32_t IBM860::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM860::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM860::toString() {
	 return this->$Charset::toString();
}

$Object* IBM860::clone() {
	 return this->$Charset::clone();
}

void IBM860::finalize() {
	this->$Charset::finalize();
}

void IBM860::init$() {
	$Charset::init$("IBM860"_s, $($ExtendedCharsets::aliasesFor("IBM860"_s)));
}

$String* IBM860::historicalName() {
	return "Cp860"_s;
}

bool IBM860::contains($Charset* cs) {
	return ($instanceOf(IBM860, cs));
}

$CharsetDecoder* IBM860::newDecoder() {
	$init($IBM860$Holder);
	return $new($SingleByte$Decoder, this, $IBM860$Holder::b2c, false, false);
}

$CharsetEncoder* IBM860::newEncoder() {
	$init($IBM860$Holder);
	return $new($SingleByte$Encoder, this, $IBM860$Holder::c2b, $IBM860$Holder::c2bIndex, false);
}

IBM860::IBM860() {
}

$Class* IBM860::load$($String* name, bool initialize) {
	$loadClass(IBM860, name, initialize, &_IBM860_ClassInfo_, allocate$IBM860);
	return class$;
}

$Class* IBM860::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun