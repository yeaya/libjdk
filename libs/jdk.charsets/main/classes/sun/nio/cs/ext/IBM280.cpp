#include <sun/nio/cs/ext/IBM280.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM280$Holder.h>
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
using $IBM280$Holder = ::sun::nio::cs::ext::IBM280$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM280_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM280::*)()>(&IBM280::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM280_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM280$Holder", "sun.nio.cs.ext.IBM280", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM280_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM280",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM280_MethodInfo_,
	nullptr,
	nullptr,
	_IBM280_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM280$Holder"
};

$Object* allocate$IBM280($Class* clazz) {
	return $of($alloc(IBM280));
}

int32_t IBM280::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM280::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM280::toString() {
	 return this->$Charset::toString();
}

$Object* IBM280::clone() {
	 return this->$Charset::clone();
}

void IBM280::finalize() {
	this->$Charset::finalize();
}

void IBM280::init$() {
	$Charset::init$("IBM280"_s, $($ExtendedCharsets::aliasesFor("IBM280"_s)));
}

$String* IBM280::historicalName() {
	return "Cp280"_s;
}

bool IBM280::contains($Charset* cs) {
	return ($instanceOf(IBM280, cs));
}

$CharsetDecoder* IBM280::newDecoder() {
	$init($IBM280$Holder);
	return $new($SingleByte$Decoder, this, $IBM280$Holder::b2c, false, true);
}

$CharsetEncoder* IBM280::newEncoder() {
	$init($IBM280$Holder);
	return $new($SingleByte$Encoder, this, $IBM280$Holder::c2b, $IBM280$Holder::c2bIndex, false);
}

IBM280::IBM280() {
}

$Class* IBM280::load$($String* name, bool initialize) {
	$loadClass(IBM280, name, initialize, &_IBM280_ClassInfo_, allocate$IBM280);
	return class$;
}

$Class* IBM280::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun