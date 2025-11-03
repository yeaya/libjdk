#include <sun/nio/cs/ext/IBM284.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM284$Holder.h>
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
using $IBM284$Holder = ::sun::nio::cs::ext::IBM284$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM284_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM284::*)()>(&IBM284::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM284_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM284$Holder", "sun.nio.cs.ext.IBM284", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM284_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM284",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM284_MethodInfo_,
	nullptr,
	nullptr,
	_IBM284_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM284$Holder"
};

$Object* allocate$IBM284($Class* clazz) {
	return $of($alloc(IBM284));
}

int32_t IBM284::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM284::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM284::toString() {
	 return this->$Charset::toString();
}

$Object* IBM284::clone() {
	 return this->$Charset::clone();
}

void IBM284::finalize() {
	this->$Charset::finalize();
}

void IBM284::init$() {
	$Charset::init$("IBM284"_s, $($ExtendedCharsets::aliasesFor("IBM284"_s)));
}

$String* IBM284::historicalName() {
	return "Cp284"_s;
}

bool IBM284::contains($Charset* cs) {
	return ($instanceOf(IBM284, cs));
}

$CharsetDecoder* IBM284::newDecoder() {
	$init($IBM284$Holder);
	return $new($SingleByte$Decoder, this, $IBM284$Holder::b2c, false, true);
}

$CharsetEncoder* IBM284::newEncoder() {
	$init($IBM284$Holder);
	return $new($SingleByte$Encoder, this, $IBM284$Holder::c2b, $IBM284$Holder::c2bIndex, false);
}

IBM284::IBM284() {
}

$Class* IBM284::load$($String* name, bool initialize) {
	$loadClass(IBM284, name, initialize, &_IBM284_ClassInfo_, allocate$IBM284);
	return class$;
}

$Class* IBM284::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun