#include <sun/nio/cs/ext/IBM037.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM037$Holder.h>
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
using $IBM037$Holder = ::sun::nio::cs::ext::IBM037$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM037_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM037::*)()>(&IBM037::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM037_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM037$Holder", "sun.nio.cs.ext.IBM037", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM037_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM037",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM037_MethodInfo_,
	nullptr,
	nullptr,
	_IBM037_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM037$Holder"
};

$Object* allocate$IBM037($Class* clazz) {
	return $of($alloc(IBM037));
}

int32_t IBM037::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM037::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM037::toString() {
	 return this->$Charset::toString();
}

$Object* IBM037::clone() {
	 return this->$Charset::clone();
}

void IBM037::finalize() {
	this->$Charset::finalize();
}

void IBM037::init$() {
	$Charset::init$("IBM037"_s, $($ExtendedCharsets::aliasesFor("IBM037"_s)));
}

$String* IBM037::historicalName() {
	return "Cp037"_s;
}

bool IBM037::contains($Charset* cs) {
	return ($instanceOf(IBM037, cs));
}

$CharsetDecoder* IBM037::newDecoder() {
	$init($IBM037$Holder);
	return $new($SingleByte$Decoder, this, $IBM037$Holder::b2c, false, true);
}

$CharsetEncoder* IBM037::newEncoder() {
	$init($IBM037$Holder);
	return $new($SingleByte$Encoder, this, $IBM037$Holder::c2b, $IBM037$Holder::c2bIndex, false);
}

IBM037::IBM037() {
}

$Class* IBM037::load$($String* name, bool initialize) {
	$loadClass(IBM037, name, initialize, &_IBM037_ClassInfo_, allocate$IBM037);
	return class$;
}

$Class* IBM037::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun