#include <sun/nio/cs/ext/IBM1149.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM1149$Holder.h>
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
using $IBM1149$Holder = ::sun::nio::cs::ext::IBM1149$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM1149_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM1149::*)()>(&IBM1149::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM1149_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1149$Holder", "sun.nio.cs.ext.IBM1149", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1149_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM1149",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM1149_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1149_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1149$Holder"
};

$Object* allocate$IBM1149($Class* clazz) {
	return $of($alloc(IBM1149));
}

int32_t IBM1149::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM1149::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM1149::toString() {
	 return this->$Charset::toString();
}

$Object* IBM1149::clone() {
	 return this->$Charset::clone();
}

void IBM1149::finalize() {
	this->$Charset::finalize();
}

void IBM1149::init$() {
	$Charset::init$("IBM01149"_s, $($ExtendedCharsets::aliasesFor("IBM01149"_s)));
}

$String* IBM1149::historicalName() {
	return "Cp1149"_s;
}

bool IBM1149::contains($Charset* cs) {
	return ($instanceOf(IBM1149, cs));
}

$CharsetDecoder* IBM1149::newDecoder() {
	$init($IBM1149$Holder);
	return $new($SingleByte$Decoder, this, $IBM1149$Holder::b2c, false, false);
}

$CharsetEncoder* IBM1149::newEncoder() {
	$init($IBM1149$Holder);
	return $new($SingleByte$Encoder, this, $IBM1149$Holder::c2b, $IBM1149$Holder::c2bIndex, false);
}

IBM1149::IBM1149() {
}

$Class* IBM1149::load$($String* name, bool initialize) {
	$loadClass(IBM1149, name, initialize, &_IBM1149_ClassInfo_, allocate$IBM1149);
	return class$;
}

$Class* IBM1149::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun