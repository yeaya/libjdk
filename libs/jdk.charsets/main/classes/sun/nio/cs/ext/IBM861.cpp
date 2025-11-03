#include <sun/nio/cs/ext/IBM861.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM861$Holder.h>
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
using $IBM861$Holder = ::sun::nio::cs::ext::IBM861$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM861_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM861::*)()>(&IBM861::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM861_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM861$Holder", "sun.nio.cs.ext.IBM861", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM861_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM861",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM861_MethodInfo_,
	nullptr,
	nullptr,
	_IBM861_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM861$Holder"
};

$Object* allocate$IBM861($Class* clazz) {
	return $of($alloc(IBM861));
}

int32_t IBM861::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM861::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM861::toString() {
	 return this->$Charset::toString();
}

$Object* IBM861::clone() {
	 return this->$Charset::clone();
}

void IBM861::finalize() {
	this->$Charset::finalize();
}

void IBM861::init$() {
	$Charset::init$("IBM861"_s, $($ExtendedCharsets::aliasesFor("IBM861"_s)));
}

$String* IBM861::historicalName() {
	return "Cp861"_s;
}

bool IBM861::contains($Charset* cs) {
	return ($instanceOf(IBM861, cs));
}

$CharsetDecoder* IBM861::newDecoder() {
	$init($IBM861$Holder);
	return $new($SingleByte$Decoder, this, $IBM861$Holder::b2c, false, false);
}

$CharsetEncoder* IBM861::newEncoder() {
	$init($IBM861$Holder);
	return $new($SingleByte$Encoder, this, $IBM861$Holder::c2b, $IBM861$Holder::c2bIndex, false);
}

IBM861::IBM861() {
}

$Class* IBM861::load$($String* name, bool initialize) {
	$loadClass(IBM861, name, initialize, &_IBM861_ClassInfo_, allocate$IBM861);
	return class$;
}

$Class* IBM861::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun